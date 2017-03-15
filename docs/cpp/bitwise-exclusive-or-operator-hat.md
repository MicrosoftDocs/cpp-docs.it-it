---
title: "Operatore OR bit per bit esclusivo: ^ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "^ (operatore)"
  - "bit per bit (operatori), operatore OR"
  - "operatore OR esclusivo"
  - "operatori [C++], bit per bit"
  - "operatori [C++], logici"
  - "operatore OR, esclusivo bit per bit"
  - "XOR (operatore)"
ms.assetid: f9185d85-65d5-4f64-a6d6-679758d52217
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore OR bit per bit esclusivo: ^
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
expression ^ expression  
```  
  
## Note  
 L'operatore OR bit per bit esclusivo \(**^**\) confronta ogni bit del primo operando con il bit corrispondente del secondo operando.  Se un bit è 0 e l'altro bit è 1, il bit di risultato corrispondente viene impostato su 1.  In caso contrario, il bit di risultato corrispondente viene impostato su 0.  
  
 Entrambi gli operandi all'operatore OR bit per bit esclusivo devono essere di tipi integrali.  Le conversioni aritmetiche consuete analizzate in [Conversioni aritmetiche](../misc/arithmetic-conversions.md) si applicano agli operandi.  
  
## Parola chiave operator per ^  
 L'operatore **xor** è il testo equivalente di **^**.  Esistono due modi per accedere all'operatore **xor** nei programmi: includere il file di intestazione `iso646.h` o compilare l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) \(disabilita estensioni linguaggio\).  
  
## Esempio  
  
```  
// expre_Bitwise_Exclusive_OR_Operator.cpp  
// compile with: /EHsc  
// Demonstrate bitwise exclusive OR  
#include <iostream>  
using namespace std;  
int main() {  
   unsigned short a = 0x5555;      // pattern 0101 ...  
   unsigned short b = 0xFFFF;      // pattern 1111 ...  
  
   cout  << hex << ( a ^ b ) << endl;   // prints "aaaa" pattern 1010 ...  
}  
```  
  
## Vedere anche  
 [Operatori bit per bit C\+\+](../misc/cpp-bitwise-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori bit per bit C](../c-language/c-bitwise-operators.md)