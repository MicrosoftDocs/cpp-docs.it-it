---
title: 'Operatore di negazione logica: ! | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- '!'
- Not
dev_langs:
- C++
helpviewer_keywords:
- '! operator'
- NOT operator
- logical negation
ms.assetid: 650add9f-a7bc-426c-b01d-5fc6a81c8b62
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4f911c6f01dfc188c26355a3749d8a130f0d6951
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39403589"
---
# <a name="logical-negation-operator-"></a>Operatore di negazione logica: !
## <a name="syntax"></a>Sintassi  
  
```  
! cast-expression  
```  
  
## <a name="remarks"></a>Note  
 L'operatore di negazione logico (**!**) Inverte il significato dei relativi operandi. L'operando deve essere di tipo aritmetico o puntatore (o un'espressione che restituisce un tipo aritmetico o puntatore). L'operando verrà convertito in modo implicito nel tipo **bool**. Il risultato è TRUE se l'operando di conversione FALSE. Se l'operando di conversione è TRUE, il risultato è FALSE. Il risultato è di tipo **bool**.  
  
 Per un'espressione *elettronica*, l'espressione unaria **! * * * e* equivale all'espressione **(* * * e* `==` 0), tranne dove gli operatori di overload sono coinvolti.  
  
## <a name="operator-keyword-for-"></a>Parola chiave operator per !  
 Il **non** operatore è l'equivalente testuale di **!**. Esistono due modi per accedere la **non** operatore nei programmi: includere il file di intestazione `iso646.h`, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).  
  
## <a name="example"></a>Esempio  
  
```cpp 
// expre_Logical_NOT_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main() {  
   int i = 0;  
   if (!i)  
      cout << "i is zero" << endl;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori C++ predefiniti, precedenza e associatività degli operatori](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)