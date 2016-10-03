

function p (t,t2)

	print("first")
	for key,val in pairs(t) do
		print(key,val)
	end

	print("second")
	for key, val in pairs (t2) do
		print (key, val)
	end


	return { true, false, false, true }

end
res=true
val=314
state = {9,5,30}

