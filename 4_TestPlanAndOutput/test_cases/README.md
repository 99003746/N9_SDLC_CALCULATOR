


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN**      | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------     |-------------|----------------|------------------|
|  L_01       |  To find the power of a number-------------------------------|base=2;exponent=3|---8.00------|----8.00--------|--Requirement based |
|  L_02       |--To find the logarithm---------------------------------------| f(x)=log(x);x=10|---- 2.3025-------|----2.3025-----------|--Requirement based |
|  L_03       |--To find the exponential-------------------------------------| f(a)=exp(a);a=4-|---54.598---|--54.598-------|-Requirement based |   
|  L_04       |--To find the power of a number-------------------------------|  base=6;exponent=0 |---1------|-----1----------|--Scenario based--- |
|  L_05       |--To find the logarithm---------------------------------------|  f(x)=log(x);x=(-1000)|--3+1.3i---|--error-------| ------Scenario based |
|  L_06       |---To find the exponential------------------------------------|  --f(a)=exp(a)-exp(10000)-----|---undefined----------|--undefined----------|--Scenario based    |
|  L_07       |---To find the power of number--------------------------------|  --base=100;exponent=100-|--error-----|--error--|--Boundary based   |
|  L_08       |---To find the logarithm--------------------------------  ----|--log(-100000)-----|--5+1.3i--|---error----  |-----boundary based----|
|  L_09       |---To find the exponential--------------------------------  --|--exp(100000)-----|--undefined------  |-----error----|-----boundary based----|

