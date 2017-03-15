---
title: "Operatori di accesso ai membri: . e -&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "."
  - "->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ". operatore"
  - "-> (operatore)"
  - "punto (.) (operatore)"
  - "accesso a membri"
  - "accesso a membri, espressioni"
  - "accesso a membri, operatori"
  - "operatori [C++], accesso a membri"
  - "operatori suffissi"
ms.assetid: f8fc3df9-d728-40c5-b384-276927f5f1b3
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di accesso ai membri: . e -&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
      postfix-expression   
      . name  
postfix-expression –> name  
```  
  
## Note  
 Gli operatori di accesso ai membri **.** e **\-\>** vengono utilizzati per fare riferimento ai membri di strutture, unioni e classi.  Le espressioni di accesso ai membri hanno il valore e il tipo del membro selezionato.  
  
 Sono disponibili due forme delle espressioni di accesso ai membri:  
  
1.  Nel primo formato, *postfix\-expression* rappresenta un valore di tipo struct, classe o unione e *name* assegna un nome a un membro della struttura, unione o classe specificata.  Il valore dell'operazione è quello di *name* ed è un'espressione l\-value se *postfix\-expression* è un l\-value.  
  
2.  Nel secondo formato, *postfix\-expression* rappresenta un puntatore a una struttura, unione o classe e *name* assegna un nome a un membro della struttura, unione o classe specificata.  Il valore è quello di *name* ed è un l\-value.  L'operatore **–\>** dereferenzia il puntatore.  Di conseguenza, le espressioni *e***–\>**`member` e **\(\****e***\)**.`member` \(dove *e* rappresenta un puntatore\) producono risultati identici \(eccetto quando gli operatori **–\>** o **\*** sono sottoposti a overload\).  
  
## Esempio  
 Nell'esempio seguente vengono illustrati entrambi i formati dell'operatore di accesso ai membri.  
  
```  
// expre_Selection_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
struct Date {  
   Date(int i, int j, int k) : day(i), month(j), year(k){}  
   int month;  
   int day;  
   int year;  
};  
  
int main() {  
   Date mydate(1,1,1900);  
   mydate.month = 2;     
   cout  << mydate.month << "/" << mydate.day  
         << "/" << mydate.year << endl;  
  
   Date *mydate2 = new Date(1,1,2000);  
   mydate2->month = 2;  
   cout  << mydate2->month << "/" << mydate2->day  
         << "/" << mydate2->year << endl;  
   delete mydate2;  
}  
```  
  
  **2\/1\/1900**  
**2\/1\/2000**   
## Vedere anche  
 [Espressioni in forma suffissa](../cpp/postfix-expressions.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Classi e struct](../cpp/classes-and-structs-cpp.md)   
 [Membri di struttura e di unione](../c-language/structure-and-union-members.md)