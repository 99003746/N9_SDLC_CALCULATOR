


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN**      | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------     |-------------|----------------|------------------|
|  L_01       |  To find the power of a number-------------------------------|base=2;exponent=3|---8.00------|----8.00--------|--Requirement based |
|  L_02       |--To find the logarithm---------------------------------------| f(x)=log(x);x=10|---- 2.3025-------|----2.3025-----------|--Requirement based |
|  L_03       |--To find the exponential-------------------------------------| f(a)=exp(a);a=4-|---54.598---|--54.598-------|-Requirement based |   
|  L_04       |--To find the power of a number-------------------------------|  base=6;exponent=0 |---1------|-----1----------|--Scenario based--- |
|  L_05       |--To find the logarithm---------------------------------------|  f(x)=log(x);x=(-1000)|--3+1.3i---|--error-------| ------Scenario based |
|  L_06       |---To find the exponential------------------------------------|  --f(a)=exp(a)-exp(10000)-----|---undefined----------|--undefined----------|--Scenario based    |
|  L_07       |---To find the power of number.-------------------------------|  --base=100;exponent=100-|--error-----|--error--|--Boundary based   |
|  L_08       |---To find the logarithm.--------------------------------  ---|--log(-100000)-----|--5+1.3i--|---error----  |-----boundary based----|
|  L_09       |---To find the exponential.--------------------------------  -|--exp(100000)-----|--undefined------  |-----error----|-----boundary based----|


## ## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN**      | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-----------------|-------------|----------------|------------------|
|  L_01       |  To enter a binary number and convert to decimal-------------|      1000       |      8      |       8        |Requirement based |
|  L_02       |  To enter a binary number and convert to decimal-------------|      1111       |      15     |       15       |Requirement based |
|  L_03       |  To enter a binary number and convert to decimal-------------|       152       |Invalid Input|  Invalid Input |  Scenario based  |   
|  L_04       |  To enter a binary number and convert to decimal-------------|      -101       |Invalid Input|  Invalid Input |  Scenario based  |
|  L_05       |  To enter a binary number and convert to decimal-------------|       -85       |Invalid Input|  Invalid Input |  Scenario based  |


## ## Table no: Low level test plan

| **Test ID** | **Description**                                       | **Exp IN**   | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-------------------------------------------------------|------------- |-------------|----------------|------------------|
|  L_01       | If we add two input nos where -----------------       |  n1=2,n2=5    |     7      |       7        |Requirement based |
|  L_02       |  If we substract two input nos where------------      |  n1=8,n2=3    |      5     |       5        |Requirement based |
|  L_03       | If we divide two inputs nos where -------------       |  n1=1,n2 is 0 |   Error    |       Error    |Scenario based    |   
|  L_04       | If we multiply two inputs nos where -------------     |  n1=2,n2=2    |       4    |        4       |Requirement based |
|  L_05       | If we have to find the square  where -------------    |     n=5       |     25     |      25        |Requirement based |
| L_06       | If we have to find the greater root where -------------|     n1=2      |     1.41   |      1.41      |Requirement based |
| L_07       | If we have to check the greater no where ------------- |    n1=3,n2=5  |      False |     False      |Scenario based    |
| L_08       | If we have to check the lesser no where -------------  |     n1=2,n2=3 |     True   |     True       |Requirement based |
| L_09       | If we have to check  -------------                     |n1=3,n2=5where  3==5 | False|     false      |Scenario based    |
| L_10       | If we have to check  -------------                     |n1=4,n2=2 where 4!=2 |true  |     true       |Requirement based |
| L_11       | If we have to check the greater than equals to  where  | n1=6,n2=9     |False       |     false       |scenario based    |
| L_12       | If we have to check the  no where -------------        |n1=3,n2=5      |False|      |     false      |Scenario based    |

