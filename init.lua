wifitrys = 20
numwifitrys = 200

function lunch()
	print("connected to wifi..")
	print("connected ip is "..wifi.sta.getip())
	dofile('security.lua')
	makeconn()
end

function checkwifi()
	if(wifitrys > numwifitrys) then
		print("sorry unable to connect..")
	else
		ipA = wifi.sta.getip()
		if(ipA ~= nil and ipA~="0.0.0.0") then
			tmr.alarm(0, 500, 0, lunch)
		else
			print("checkwifi..".. wifitrys)
			tmr.alarm(0,2500,0,checkwifi)
			wifitrys = wifitrys + 1
		end
	end

end

print("starting setup wifi..")
ipA = wifi.sta.getip()
dofile('config.lua')
if( (ipA==nil) or (ipA=="0.0.0.0") ) then
	print("configuring wifi..")
	wifi.setmode(wifi.STATION)
	wifi.sta.config(keys.wifi.ssid,keys.wifi.password)
	tmr.alarm(0 , 2500, 0, checkwifi)
else
	lunch()
end

