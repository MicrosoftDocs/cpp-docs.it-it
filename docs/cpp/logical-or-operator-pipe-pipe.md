---
title: "Operatore OR logico: || | Microsoft Docs"
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
  - "||"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "|| (operatore)"
  - "OR (operatore logico)"
  - "operatore OR"
  - "operatore OR, logici"
ms.assetid: 31837c99-2655-4bf3-8ded-f13b7a9dc533
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore OR logico: ||
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
logical-or-expression   
||  
 logical-and-expression  
  
```  
  
## Note  
 L'operatore OR logico \(`||`\) restituisce il valore booleano **true** se uno o entrambi gli operandi è **true** e restituisce **false** in caso contrario.  Gli operandi vengono convertiti in modo implicito nel tipo `bool` prima della valutazione e il risultato è del tipo `bool`.  L'operatore OR logico presenta un'associatività da sinistra a destra.  
  
 Gli operandi dell'operatore OR logico non devono essere dello stesso tipo, ma devono essere di tipo integrale o di tipo puntatore.  Gli operandi sono in genere espressioni di uguaglianza o relazionali.  
  
 Il primo operando viene completamente restituito e tutti gli effetti collaterali vengono completati prima di continuare la restituzione dell'espressione OR logica.  
  
 Il secondo operando viene restituito solo se il primo operando restituisce false \(0\).  In questo modo si evita la valutazione del secondo operando quando l'espressione OR logica è true.  
  
```  
printf( "%d" , (x == w || x == y || x == z) );  
```  
  
 Nell'esempio precedente, se `x` è uguale a `w`, `y` o a `z`, il secondo argomento della funzione `printf` restituisce true e il valore 1 viene stampato.  In caso contrario, restituisce false e il valore 0 viene formattato.  Appena una delle condizioni restituisce true, la restituzione viene interrotta.  
  
## Parola chiave operator per &#124;&#124;  
 L'operatore **or** è il testo equivalente di `||`.  Esistono due modi per accedere all'operatore **or** nei programmi: includere il file di intestazione `iso646.h` o compilare l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) \(disabilita estensioni linguaggio\).  
  
## Esempio  
  
```  
// expre_Logical_OR_Operator.cpp  
// compile with: /EHsc  
// Demonstrate logical OR  
#include <iostream>  
using namespace std;  
int main() {  
   int a = 5, b = 10, c = 15;  
   cout  << boolalpha  
         << "The true expression "  
         << "a < b || b > c yields "  
         << (a < b || b > c) << endl  
         << "The false expression "  
         << "a > b || b > c yields "  
         << (a > b || b > c) << endl;  
}  
```  
  
## Vedere anche  
 [Operatori logici](../misc/logical-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori logici C](../c-language/c-logical-operators.md)