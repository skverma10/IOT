mqtttimeout=120

function conn()
	mqttbroker:connect(keys.mqtt.server, keys.mqtt.port, 0,
	 function (client) 
	 	print("connected to mqtt server") 
	 	dofile("main.lua") 
	 	main(mqttbroker, client)
	 end, 
	 function(client,reason) 
	 	print("fail to connect"..reason)
	 end)
end


function makeconn()
	print("Instantiating mqttBroker")
	mqttbroker = mqtt.Client(keys.clientid, mqtttimeout, keys.mqtt.user, keys.mqtt.password, 1)
	print("Setting up callbacks")
	mqttbroker:on("connect",function(client) print ("connected.....") dofile('main.lua') main(mqttbroker,client)end)
	mqttbroker:on("offline", conn)
	conn()
end