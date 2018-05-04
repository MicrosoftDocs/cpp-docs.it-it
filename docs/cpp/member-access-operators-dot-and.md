---
title: Gli operatori di accesso di membro:. e -&gt; | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- .
- ->
dev_langs:
- C++
helpviewer_keywords:
- member access, expressions
- operators [C++], member access
- dot operator (.)
- -> operator
- member access, operators
- postfix operators [C++]
- . operator
- member access
ms.assetid: f8fc3df9-d728-40c5-b384-276927f5f1b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2958291551d081b4284c6683d62f6dd5de06f70d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="member-access-operators--and--gt"></a>Gli operatori di accesso di membro:. e -&gt;
## <a name="syntax"></a>Sintassi  
  
```  
postfix-expression . name  
postfix-expression -> name  
```  
  
## <a name="remarks"></a>Note  
 Gli operatori di accesso membro **.** e **->** vengono utilizzati per fare riferimento ai membri di strutture, unioni e classi. Le espressioni di accesso ai membri hanno il valore e il tipo del membro selezionato.  
  
 Sono disponibili due forme delle espressioni di accesso ai membri:  
  
1.  Nel primo formato, *postfix-expression* rappresenta un valore di struct, classe o tipo di unione e *nome* i nomi di membro di struttura, unione o classe specificata. Il valore dell'operazione è quello di *nome* ed è un l-value se *postfix-expression* è un l-value.  
  
2.  Nel secondo formato, *postfix-expression* rappresenta un puntatore a una struttura, unione o classe e *nome* i nomi di membro di struttura, unione o classe specificata. Il valore è quello di *nome* ed è un l-value. Il **->** operatore Dereferenzia il puntatore. Pertanto, le espressioni * e ***->** `member` e **(\****espulsione***)**.`member` (dove *e* rappresenta un puntatore) risultati identici (tranne quando gli operatori **->** o **\*** sono sottoposti a overload).  
  
## <a name="example"></a>Esempio  
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
  
```Output  
2/1/1900  
2/1/2000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni di suffisso](../cpp/postfix-expressions.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Classi e struct](../cpp/classes-and-structs-cpp.md)   
 [Membri di struttura e di unione](../c-language/structure-and-union-members.md)