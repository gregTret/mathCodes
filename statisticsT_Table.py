import sys
import re
import math
import linecache

line = sys.stdin.readline()
dataSet=[]
fullFile=""

while line:    
    fullFile+=line
    line = sys.stdin.readline()

tokenized=fullFile.split();
initialLength=len(tokenized)

for i in range (initialLength):
    convertedInput=tokenized[i].replace("\n","")
    convertedInput=convertedInput.replace(" ","")
    dataSet.append(float(convertedInput))
n=0
nValue=0
sumAll=0.0
mean=0.0
scaleFactor=0.0
standardError=0.0
standardDeviation=0.0
adjustmentInterval=0.0
temp1=0.0
temp2=0.0
temp3=0.0

sizeOf=len(dataSet)

for i in range (sizeOf):
    sumAll+=dataSet[i]

mean=sumAll/sizeOf
print("\n\n")
print ("Data Set")
print (dataSet)

print ("Mean")
print (mean)

n=sizeOf
if (sizeOf>=25):
    nValue=sizeOf
    print ("Population Standard Deviation")
    for i in range (sizeOf):
        temp1=dataSet[i]-mean
        temp2+=temp1*temp1
    temp2=temp2/(sizeOf)
    temp2=math.sqrt(temp2)
    standardDeviation=temp2
    print (standardDeviation)
        
if (sizeOf<25):
    nValue=sizeOf-1
    print ("Sample Standard Deviation")
    for i in range (sizeOf):
        temp1=dataSet[i]-mean
        temp2+=temp1*temp1
    temp2=temp2/(sizeOf-1)
    temp2=math.sqrt(temp2)
    standardDeviation=temp2
    print (standardDeviation)

print("\n\n")
if (nValue>=31):
    print ("Oh no it is too biiiiiggggg")
    print("Working on making it accessible for all data sets")
    sys.exit(0)
    
requiredLine=linecache.getline('tTable.txt',nValue)
brokenApart=requiredLine.split()
standardError=standardDeviation/(math.sqrt(n))
print("Which One Tail Confidence Interval do you need to calculate")
print ("1----0.50")
print ("2----0.75")
print ("3----0.80")
print ("4----0.85")
print ("5----0.90")
print ("6----0.95")
print ("7----0.975")
print ("8----0.99")
print ("9----0.995")
print ("10----0.999")
i=int(input())
if (i!=0):
    if (i==1):
        print ("0.50 Confidence Interval")
    if (i==2):
        print ("0.75 Confidence Interval")
    if (i==3):
        print ("0.80 Confidence Interval")
    if (i==4):
        print ("0.85 Confidence Interval")
    if (i==5):
        print ("0.90 Confidence Interval")
    if (i==6):
        print ("0.95 Confidence Interval")
    if (i==7):
        print ("0.975 Confidence Interval")
    if (i==8):
        print ("0.99 Confidence Interval")
    if (i==9):
        print ("0.995 Confidence Interval")
    if (i==10):
        print ("0.999 Confidence Interval")
    i+=1
    workWith=brokenApart[i]
    convertedInput=workWith.replace("\n","")
    convertedInput=convertedInput.replace(" ","")
    scaleFactor=float(convertedInput)
    adjustmentInterval=scaleFactor*standardError
    print(str(scaleFactor))
    print(str(standardError))
    print(str(workWith))
    print ("("+str(mean-adjustmentInterval)+","+str(mean+adjustmentInterval)+")")
    print ("With P value-----"+str(brokenApart[i]))
               
