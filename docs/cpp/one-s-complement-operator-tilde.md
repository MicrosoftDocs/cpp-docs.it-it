---
title: "Operatore di complemento a uno: ~ | Microsoft Docs"
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
  - "~"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "~ (operatore), sintassi"
  - "operatore di complemento bit per bit"
  - "compl (operatore)"
  - "operatore di complemento di uno"
  - "tilde (~) (operatore di complemento di uno)"
ms.assetid: 4bf81967-34f7-4b4b-aade-fd03d5da0174
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore di complemento a uno: ~
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
~ cast-expression  
```  
  
## Note  
 L'operatore di complemento a uno \(`~`\), talvolta denominato l'operatore di "complemento bit per bit", produce un complemento a uno bit per bit del suo operando.  Ovvero ogni bit con 1 nell'operando è 0 nel risultato.  Viceversa, ogni bit con 0 nell'operando è 1 nel risultato.  L'operando dell'operatore di complemento a uno deve essere un tipo integrale.  
  
## Parola chiave operator per ~  
 L'operatore `compl` è il testo equivalente di `~`.  Esistono due modi per accedere all'operatore `compl` nei programmi: includere il file di intestazione `iso646.h` o compilare l'opzione [\/Za](../build/reference/za-ze-disable-language-extensions.md).  
  
## Esempio  
  
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
  
 La promozione a intero viene eseguita su operandi integrali e il tipo risultante è il tipo a cui l'operando viene promosso.  Vedere [Promozioni integrali](../misc/integral-promotions.md) per ulteriori informazioni su come viene eseguita la promozione.  
  
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)