---
title: Operatore virgola:, | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- '%2C'
- ','
dev_langs:
- C++
helpviewer_keywords:
- comma operator
ms.assetid: 38e0238e-19da-42ba-ae62-277bfdab6090
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: e5e7af401a0c435931f6952674d97752d2ac7730
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="comma-operator-"></a>Operatore virgola: ,
Consente di raggruppare due istruzioni dove previsto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
expression , expression  
```  
  
## <a name="remarks"></a>Note  
 L'operatore virgola presenta un'associatività da sinistra verso destra. Due espressioni separate da virgole vengono valutate da sinistra a destra. L'operando sinistro è sempre valutato e tutti gli effetti collaterali vengono completati prima che venga valutato l'operando destro.  
  
 Le virgole possono essere utilizzate come separatori in alcuni contesti, ad esempio gli elenchi di argomenti della funzione. Non confondere l'utilizzo della virgola come separatore con il relativo utilizzo come operatore, i due utilizzi sono completamente differenti.  
  
 Valutare l'espressione  
  
 *E1* , *e2*  
  
 Il tipo e il valore dell'espressione sono il tipo e il valore di *e2*; il risultato della valutazione *e1* viene eliminato. Il risultato è un l-value se l'operando destro è un l-value.  
  
 Quando la virgola viene normalmente utilizzata come separatore (ad esempio negli argomenti effettivi alle funzioni o agli inizializzatori di aggregazione), l'operatore virgola e i relativi operandi devono essere racchiusi tra parentesi. Ad esempio:  
  
```  
func_one( x, y + 2, z );  
func_two( (x--, y + 2), z );  
```  
  
 Nella chiamata di funzione a `func_one` su riportata, vengono passati tre argomenti, separati da virgole: `x`, `y + 2` e `z`. Nella chiamata di funzione a `func_two`, le parentesi forzano il compilatore a interpretare la prima virgola come operatore di valutazione sequenziale. Questa chiamata di funzione passa due argomenti a `func_two`. Il primo argomento è il risultato dell'operazione di valutazione sequenziale `(x--, y + 2)` che ha il valore e il tipo dell'espressione `y + 2`; il secondo argomento è `z`.  
  
## <a name="example"></a>Esempio  
  
```  
// cpp_comma_operator.cpp  
#include <stdio.h>  
int main () {  
   int i = 10, b = 20, c= 30;  
   i = b, c;  
   printf("%i\n", i);  
  
   i = (b, c);  
   printf("%i\n", i);  
}  
```  
  
```Output  
20  
30  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatore di valutazione sequenziale](../c-language/sequential-evaluation-operator.md)
