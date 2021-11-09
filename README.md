# BSI_reliability_calculator by Anastasiia Ponkratova, Julia Migiel

#### 1. Calculation of reliability of each element in parallel in the system
        A  system is  composed of 5  identical independent elements in parallel. What should be the  reliability of each element to achieve a 
        Problems 345 system reliability of 0.96 ?

        Answer:1-((1-0.96))^(1/5))=1-0,52=0,48
         
         
#### 2. Comparison of the probability of A's success to that of B's success;
        A  has  one  share in  a  lottery in  which there is  one  prize and two blanks ;  B   has  three shares in  a  lottery in  which there are  three prizes and  6  blanks; compare the probability of A's success to that of B's success. 
        
         Answer:
         
         xCy= x!/(y!(x-y)!)
         
         Probability A to loss =6C3/9C3
         Probability A to win  = 1−9C3/6C3=1−6!/(3!*3!)×(3!*6!)/9!=1−120/504=384/504=16/21
         Probability B to loss = 2C1/3C1
         Probability B to win  = 1−(2C1/3C1)=1−2/3=1/3
         required ratio is
         16/21 : 1/3=16 : 7
         
         
#### 3. Calculation probability of finding 2 kids from group that contains x kids,y womans,z mens

      Four persons are  chosen at random from a group containing 3  men, 2  women and  4  children. 
      Calculate the chances that exactly two of them will be children.
      
       Answer:
       
       xCy= x!/(y!(x-y)!)
       
       All ways of groups:
       9C4=126
       Because we want 2 of choosen to be a children: 
       4C2=6
       and choose the other 2 people will give:
       5C2=10
       
       So the probability will be (10*6)/126 = 10/21
    

#### 4. Calculate probability that only one of woman or man will be selecte with specified probability
        A man and his wife appear in an interview for two vacancies in the same post. 
        The probability of husband's selection is 1/7 
        and the probability of wife's selection is 1/5 
        What is the probability that only one of them is selected ?

        Answer:
        P(A)=1/7
        P(B)=1/5
        
        So there is 6/7 probability for men to not to be selected and 4/5 for woman
        So required probability will be:
        P[(A and notB)or(B and notA)]=(1/7)*(4/5)+(1/5)*(6/7)=(4+6)/35=10/35
        
#### 5. Calculate probability that the cinemahouse will have power on any given day
        A  cinema house gets electric power from a generator run  by diesel engine. On any day, 
        the probability that the generator is down (event A) is 0.025 and the probability 
        that the diesel engine is down (event B) is 0.04. What is the  probability that the 
        cinema house will have power on  any  given day? Assume that occurrence of 
        event A  and event B are independent of each other.
        
        Answer:
        
        At first we will calculate the probabilyty of losing power in cinema
        P(AUB)=P(A)+P(B)-P(A)*P(B)=0.025+0.04-0.025*0.04=0.064
    
        so the answer will be 1-0.064=0.936
