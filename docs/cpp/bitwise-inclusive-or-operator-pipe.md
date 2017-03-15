---
title: "Operatore OR bit per bit inclusivo: | | Microsoft Docs"
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
  - "bitor"
  - "|"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "| (operatore)"
  - "bit per bit (operatori), operatore OR"
  - "OR (operatore inclusivo)"
  - "operatore OR, inclusivo bit per bit"
ms.assetid: 4c8a6a68-d828-447d-875a-aedb4ce3aa9a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore OR bit per bit inclusivo: |
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
expression   
|  
 expression  
  
```  
  
## Note  
 Operatore OR bit per bit inclusivo \(         **&#124;** \) confronta ogni bit del primo operando con il bit corrispondente del secondo operando.  Se un bit è 1 bit, il bit di risultato corrispondente viene impostato su 1.  In caso contrario, il bit di risultato corrispondente viene impostato su 0.  
  
 Entrambi gli operandi all'operatore OR bit per bit inclusivo devono essere tipi integrali.  Le conversioni aritmetiche consuete analizzate in [Conversioni aritmetiche](../misc/arithmetic-conversions.md) si applicano agli operandi.  
  
## Parola chiave operator per &#124;  
 L'operatore `bitor` è il testo equivalente di              **&#124;** .  Esistono due modi per accedere all'operatore `bitor` nei programmi: includere il file di intestazione `iso646.h` o eseguire la compilazione con l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) \(disabilita estensioni linguaggio\).  
  
## Esempio  
  
```  
// expre_Bitwise_Inclusive_OR_Operator.cpp  
// compile with: /EHsc  
// Demonstrate bitwise inclusive OR  
#include <iostream>  
using namespace std;  
  
int main() {  
   unsigned short a = 0x5555;      // pattern 0101 ...  
   unsigned short b = 0xAAAA;      // pattern 1010 ...  
  
   cout  << hex << ( a | b ) << endl;   // prints "ffff" pattern 1111 ...  
}  
```  
  
## Vedere anche  
 [Operatori bit per bit C\+\+](../misc/cpp-bitwise-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori bit per bit C](../c-language/c-bitwise-operators.md)