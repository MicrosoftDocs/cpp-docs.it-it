---
title: 'Uno &#39; s operatore di complemento a uno: ~ | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: ~
dev_langs: C++
helpviewer_keywords:
- tilde (~) one's complement operator
- one's complement operator
- bitwise-complement operator
- compl operator
- ~ operator [C++], syntax
ms.assetid: 4bf81967-34f7-4b4b-aade-fd03d5da0174
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: bb63adc5d776bec488661ea3e575c8693ea1b728
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="one39s-complement-operator-"></a>Uno &#39; s operatore di complemento a uno: ~
## <a name="syntax"></a>Sintassi  
  
```  
  
~ cast-expression  
```  
  
## <a name="remarks"></a>Note  
 L'operatore di complemento a uno (`~`), talvolta denominato l'operatore di "complemento bit per bit", produce un complemento a uno bit per bit del suo operando. Ovvero ogni bit con 1 nell'operando è 0 nel risultato. Viceversa, ogni bit con 0 nell'operando è 1 nel risultato. L'operando dell'operatore di complemento a uno deve essere un tipo integrale.  
  
## <a name="operator-keyword-for-"></a>Parola chiave operator per ~  
 L'operatore `compl` è il testo equivalente di `~`. Esistono due modi per accedere il `compl` operatore nei programmi: includere il file di intestazione `iso646.h`, o eseguire la compilazione con [/Za](../build/reference/za-ze-disable-language-extensions.md).  
  
## <a name="example"></a>Esempio  
  
```  
// expre_One_Complement_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
  
int main () {  
   unsigned short y = 0xFFFF;  
   cout << hex << y << endl;  
   y = ~y;   // Take one's complement  
   cout << hex << y << endl;  
}  
```  
  
 In questo esempio, il nuovo valore assegnato a `y` è il complemento a uno del valore non firmato 0xFFFF o a 0x0000.  
  
 La promozione a intero viene eseguita su operandi integrali e il tipo risultante è il tipo a cui l'operando viene promosso. Vedere [conversioni Standard](standard-conversions.md) per ulteriori informazioni su come eseguire l'innalzamento di livello.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)