---
title: 'Operatore di negazione logica: ! | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f63d36fc5974241fb624dd3a2afc863142516e9b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="logical-negation-operator-"></a>Operatore di negazione logica: !
## <a name="syntax"></a>Sintassi  
  
```  
  
! cast-expression  
```  
  
## <a name="remarks"></a>Note  
 L'operatore di negazione logica (**!**) Inverte il significato dei relativi operandi. L'operando deve essere di tipo aritmetico o puntatore (o un'espressione che restituisce un tipo aritmetico o puntatore). L'operando viene convertito in modo implicito nel tipo `bool`. Il risultato è **true** se l'operando di conversione è **false**; il risultato è **false** se l'operando di conversione è **true**. Il risultato è di tipo `bool`.  
  
 Per un'espressione *e*, l'espressione unaria **!** *e* è equivalente all'espressione **(***e* `==` 0), tranne in cui gli operatori di overload sono coinvolti.  
  
## <a name="operator-keyword-for-"></a>Parola chiave operator per !  
 Il **non** operatore è il testo equivalente di **!**. Esistono due modi per accedere il **non** operatore nei programmi: includere il file di intestazione `iso646.h`, o compilare il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).  
  
## <a name="example"></a>Esempio  
  
```  
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
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)