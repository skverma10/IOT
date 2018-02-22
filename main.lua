main = function (mqttbroker, client)
			gpio.mode(4, gpio.OUTPUT)
	if mqttbroker~= nil then
		client:subscribe("/"..keys.clientid.."/led",0,function(client)
			print("/"..keys.clientid.."/led")
		end)
		mqttbroker:on('message', 
			function(client, topic, message)

					if topic == "/"..keys.clientid.."/led" then
						--gpio.write(2,gpio.LOW)
						if message == 'on' then
							gpio.write(4, gpio.	HIGH)
							print("led is on")
						else
							gpio.write(4, gpio.LOW)
							print("led is off")
					  	end
					end
		    end)
		print("everything is done")
	else
		print("something is wrong")
	end

end