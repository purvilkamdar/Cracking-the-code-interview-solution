from random import randint
def uniquechars(input_string):
	unique_list=[]
	flag=False
	for i in range(0,len(input_string)):
		if input_string[i] not in unique_list:
			unique_list.append(input_string[i])
		else:
			print("Characters are not unique")
			flag=True
			break

	if not flag:
		print("Characters were unique")

def permutation_string(string1,string2):

	string1_list=sorted(list(string1))
	string2_list=sorted(list(string2))

	if string1_list==string2_list:
		print("Yes they are a permutation of one another")

	else:
		print("No they were not a permutation of each other")

def replace_space_with_sp_char(string,length:int=None):
	result_string=''
	if length is not None:
		for i in range(0,length):
			if ord(string[i])==32:
				result_string=result_string+'%20'
			else:
				result_string=result_string+string[i]
	else:
		string=string.strip()
		for i in range(0,len(string)):
			if ord(string[i])==32:
				result_string=result_string+'%20'
			else:
				result_string=result_string+string[i]

	print("The Result string is "+str(result_string))

def check_palindrome(string,result_list,space_index):
	palin_flag=True
	string=string.replace(" ",'')
	mid_len=int(len(string)/2)
	mid=string[mid_len]

	for i in range(0,mid_len):
		if string[i].lower()!=string[(len(string)-1)-i].lower():
			palin_flag=False
			break

	if palin_flag:
		if space_index is not None:
			for i in space_index:
				string=string[0:i]+" "+string[i:len(string)]

		if string not in result_list:
			result_list.append(string.lower())
		palin_flag=True




def string_permutation(string1,string2,result_list,space_index):
	if len(string2)==1:
		string1=string1+string2
		check_palindrome(string1,result_list,space_index)
		#result_list.append(string1)
	else:
		for i in string2:
			string_permutation(string1+i,string2.replace(i,'',1),result_list,space_index)



def permutation_with_palindrome(string):
	result_list=[]	
	space_index=[]
	for i in range(0,len(string)):
		if ord(string[i])==32:
			space_index.append(i)


	check_string=string.replace(' ','')
	if len(check_string)%2==0:
		print("Palindrome is not possible")
		return None



	for i in string:
		string_permutation(i,string.replace(i,'',1),result_list,space_index)
		
	result_list=list(set(result_list))

	print(result_list)


def is_one_edit_away(string1,string2):
	length=0
	counter=0
	if len(string1)>=len(string2):
		length=len(string1)
	else:
		length=len(string2)
	
	for i in range(0,len(string1)):
		for j in range(0,len(string2)):
			if string1[i]==string2[j]:
				string2=string2.replace(string2[j],'',1)
				counter=counter+1
				break


	if counter is not None:
		if counter==length or counter==(length-1):
			return True
		else:
			return False
	else:
		return False

def compress_string(string):
	i=0
	last_flag=False
	while i<len(string):
		counter=1
		index=1
		for j in range(i+1,len(string)):
			if string[i]==string[j]:
				counter=counter+1
			else:
				break
		if counter>1:
			string=string.replace(string[(i+1):(i+counter)],'',1)
		string=string[0:i+1]+str(counter)+string[i+1:]
		i=i+2
	print(string)

def rotate_matrix_by_90(matrix,N):
	for i in range(0,int(N/2)):
		for j in range(0,int((N+1)/2)):
			#print("\n \n Before:")
			#print("i="+str(i)+" j="+str(j)+" matrix[i][j]="+str(matrix[i][j]))
			temp=matrix[i][j]

			#print("Before:")
			#print("(N-1-i)="+str((N-1-i))+" j="+str(j)+" matrix[N-1-i][j]="+str(matrix[N-1-i][j]))
			matrix[i][j]=matrix[N-1-j][i]
			#print("\n After:")
			#print(print("i="+str(i)+" j="+str(j)+" matrix[i][j]="+str(matrix[i][j])))
			
			#print("\n \n Before:")
			#print("(N-1-i)="+str((N-1-i))+" j="+str(j)+" matrix[N-1-i][j]="+str(matrix[N-1-i][j]))
			#print("(N-1-j)="+str((N-1-j))+" (N-1-i)="+str((N-1-i))+" matrix[N-1-j][N-1-i]="+str(matrix[N-1-j][N-1-i]))
			matrix[N-1-j][i]=matrix[N-1-i][N-1-j]
			#print("\n After:")
			#print("(N-1-i)="+str((N-1-i))+" j="+str(j)+" matrix[N-1-i][j]="+str(matrix[N-1-i][j]))

			#print("\n \n Before:")
			#print("(N-1-j)="+str((N-1-j))+" (N-1-i)="+str((N-1-i))+" matrix[N-1-j][N-1-i]="+str(matrix[N-1-j][N-1-i]))
			#print("i="+str(i)+" N-1-j="+str((N-1-j))+" matrix[i][N-1-j]="+str(matrix[i][N-1-j]))
			matrix[N-1-i][N-1-j]=matrix[j][N-1-i]
			#print("\n After:")
			#print("(N-1-j)="+str((N-1-j))+" (N-1-i)="+str((N-1-i))+" matrix[N-1-j][N-1-i]="+str(matrix[N-1-j][N-1-i]))

			#print("\n \n Before:")
			#print("i="+str(i)+" N-1-j="+str((N-1-j))+" matrix[i][N-1-j]="+str(matrix[i][N-1-j]))
			matrix[j][N-1-i]=temp
			#print("\n After:")
			#print("i="+str(i)+" N-1-j="+str((N-1-j))+" matrix[i][N-1-j]="+str(matrix[i][N-1-j]))

	print("\n \n Result Matrix=")
	for i in range(0,N):
		for j in range(0,N):
			print(matrix[i][j],end="")
		print()

def zero_matrix(matrix,M,N):
	zero_list=[]
	for i in range(0,M):
		for j in range(0,N):
			#print("i="+str(i)+" j="+str(j))
			if matrix[i][j]==0:
				my_set=[]
				my_set.append(0)
				my_set.append(0)
				my_set[0]=i
				my_set[1]=j
				#print(str(my_set))
				zero_list.append(list(my_set))

	for i in range(0,len(zero_list)):
		temp_list=zero_list[i]
		#print("temp_list="+str(temp_list))
		#print("M="+str(M))
		for j in range(0,N):
			#print("j="+str(j))
			matrix[temp_list[0]][j]=0
		for j in range(0,M):
			#print("temp_list[1]="+str(temp_list[1]))
			matrix[j][temp_list[1]]=0
	
	print("Result Matrix=")
	for i in range(0,M):
		for j in range(0,N):
			print(matrix[i][j],end="")
		print()
	#print(matrix)

def isSubstring(string3,string2):
	if string2 in string3:
		return True
	else:
		return False

def isRotation(string1,string2):
	if string1 is not None or string2 is not None:
		if len(string1)==len(string2):
			string3=string1+string1
			result=isSubstring(string3,string2)
			print(result)
		else:
			print("False")
	else:
		print("False")

def problem1_1():
	string="abc"
	uniquechars(string)

def problem1_2():
	string1="act"
	string2="cat"
	permutation_string(string1,string2)

def problem1_3():
	string="Mr John Smith    "
	try:
		replace_space_with_sp_char(string)
	except Exception as e:
		print("Error:"+str(e))

def problem1_4():
	string="Tact Coa"
	permutation_with_palindrome(string)

def problem1_5():
	string1="pale"
	string2="ple"
	result=is_one_edit_away(string1,string2)
	print(str(result))

def problem1_6():
	string="aabcccccaaa"
	compress_string(string)

def problem1_7():
	matrix=[]
	w=4
	matrix=[[randint(0,9) for x in range(w)] for y in range(w)]

	print("Original Matrix")
	for i in range(0,w):
		for j in range(0,w):
			print(matrix[i][j],end="")
		print()


	rotate_matrix_by_90(matrix,4)

def problem1_8():
	matrix=[]
	w = 4
	h = 5
	matrix = [[0 for x in range(w)] for y in range(h)]
	#print(matrix)
	for i in range(0,h):
		for j in range(0,w):
			#print("i="+str(i)+"j="+str(j))
			matrix[i][j]=j+1
	
	matrix[0][1]=0
	
	print("Original Matrix")
	for i in range(0,h):
		for j in range(0,w):
			print(matrix[i][j],end="")
		print()		
	

	zero_matrix(matrix,h,w)

def problem1_9():
	string1="waterbottle"
	string2="bottlewater"
	isRotation(string1,string2)

if __name__=='__main__':
	#problem1_1()
	#problem1_2()
	#problem1_3()
	#problem1_4()
	#problem1_5()
	#problem1_6()
	#problem1_7()
	#problem1_8()
	problem1_9()