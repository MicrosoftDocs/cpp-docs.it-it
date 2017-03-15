---
title: "Operatore di negazione logica: ! | Microsoft Docs"
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
  - "!"
  - "Not"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "! operatore"
  - "negazione logica"
  - "NOT (operatore)"
ms.assetid: 650add9f-a7bc-426c-b01d-5fc6a81c8b62
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore di negazione logica: !
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
! cast-expression  
```  
  
## Note  
 Operatore di negazione logico \(**\!**\) inverte il significato dei relativi operandi.  L'operando deve essere di tipo aritmetico o puntatore \(o un'espressione che restituisce un tipo aritmetico o puntatore\).  L'operando viene convertito in modo implicito nel tipo `bool`.  Il risultato è **true** se l'operatore di conversione è **false**; il risultato è **false** se l'operatore di conversione è **true**.  Il risultato è di tipo `bool`.  
  
 Per un'espressione *e*, l'espressione unaria **\!***e* è equivalente all'espressione **\(***e*`==` 0\), tranne nel caso in cui sono implicati gli operatori di overload.  
  
## Parola chiave operator per \!  
 L'operatore **not** è l'equivalente testuale di **\!**.  Esistono due modi per accedere all'operatore **not** nei programmi: includendo il file di intestazione `iso646.h` o compilando l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) \(disabilita le estensioni linguaggio\).  
  
## Esempio  
  
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
  
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)