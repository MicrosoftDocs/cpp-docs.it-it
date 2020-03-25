---
title: Operatori di accesso ai membri:. e-&gt;
ms.date: 11/04/2016
f1_keywords:
- .
- ->
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
ms.openlocfilehash: 05bab55e1646783e0f8ab9b414d608c912f60a0f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80178015"
---
# <a name="member-access-operators--and--gt"></a>Operatori di accesso ai membri:. e-&gt;

## <a name="syntax"></a>Sintassi

```
postfix-expression . name
postfix-expression -> name
```

## <a name="remarks"></a>Osservazioni

Operatori di accesso ai membri **.** e **->** vengono utilizzati per fare riferimento ai membri di strutture, unioni e classi. Le espressioni di accesso ai membri hanno il valore e il tipo del membro selezionato.

Sono disponibili due forme delle espressioni di accesso ai membri:

1. Nel primo formato, *Postfix-Expression* rappresenta un valore di tipo struct, Class o Union e Name assegna un *nome* a un membro della struttura, Unione o classe specificata. Il valore dell'operazione è quello di *Name* ed è un l-value se *Postfix-Expression* è un l-value.

1. Nel secondo formato, *Postfix-Expression* rappresenta un puntatore a una struttura, un'Unione o una classe e Name assegna un *nome* a un membro della struttura, Unione o classe specificata. Il valore è quello di *Name* ed è un l-value. L'operatore **->** dereferenzia il puntatore. Pertanto, le espressioni `e->member` e `(*e).member` (dove *e* rappresenta un puntatore) producono risultati identici, tranne quando gli operatori **->** o <strong>\*</strong> sono sottoposte a overload.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrati entrambi i formati dell'operatore di accesso ai membri.

```cpp
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

[Espressioni di suffissi](../cpp/postfix-expressions.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Classi e struct](../cpp/classes-and-structs-cpp.md)<br/>
[Membri di struttura e di unione](../c-language/structure-and-union-members.md)
