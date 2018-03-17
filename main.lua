main = function (mqttbroker, client)
			gpio.mode(1, gpio.OUTPUT)
			gpio.mode(2, gpio.OUTPUT)
			gpio.mode(3,gpio.OUTPUT)
	if mqttbroker~= nil then
		client:subscribe("/"..keys.clientid.."/led",0,function(client)
			print("/"..keys.clientid.."/led")
		end)
		mqttbroker:on('message', 
			function(client, topic, message)

					if topic == "/"..keys.clientid.."/led" then
						if message == 'f' then
							gpio.write(1,gpio.HIGH)
							gpio.write(2,gpio.HIGH)
							print("FORWORD ")
						elseif message == 'l' then
							gpio.write(1,gpio.HIGH)
							gpio.write(2,gpio.LOW)
							print("LEFT TURN ")
						elseif message == 'r' then
							gpio.write(1,gpio.LOW)
							gpio.write(2,gpio.HIGH)
							print("RIGHT TURN ")

						elseif message =='b'	then
							gpio.write(1,gpio.LOW)
							gpio.write(2,gpio.LOW)
							print("BACKWORD ")
						else
							gpio.write(3,gpio.HIGH)
							print("STOP ")
					  	end
					end
		    end)
		print("everything is done")
	else
		print("something is wrong")
	end

end
