---
title: "Operatore AND bit per bit: &amp; | Microsoft Docs"
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
  - "bitand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "& (operatore), bit per bit (operatori)"
  - "AND (operatore)"
  - "bit per bit (operatori), AND (operatore)"
ms.assetid: 76f40de3-c417-47b9-8a77-532f3fc990a5
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore AND bit per bit: &amp;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
expression   
&  
 expression  
  
```  
  
## Note  
 Le espressioni possono essere altre espressioni And o \(in base alle restrizioni dei tipi menzionate di seguito\) espressioni di uguaglianza, espressioni relazionali, espressioni additive, espressioni moltiplicative, espressioni puntatore a membro, espressioni cast, espressioni unarie, espressioni di suffisso o espressioni primarie.  
  
 L'operatore AND bit per bit \(**&**\) confronta ogni bit del primo operando con il bit corrispondente del secondo operando.  Se entrambi i bit sono 1, il bit del risultato corrispondente viene impostato su 1.  In caso contrario, il bit di risultato corrispondente viene impostato su 0.  
  
 Entrambi gli operandi all'operatore AND bit per bit devono essere tipi integrali.  Le conversioni aritmetiche consuete analizzate in [Conversioni aritmetiche](../misc/arithmetic-conversions.md) vengono applicate agli operandi.  
  
## Parola chiave operator per &  
 L'operatore `bitand` è il testo equivalente di **&**.  Esistono due modi per accedere all'operatore `bitand` nei programmi: includere il file di intestazione `iso646.h` o eseguire la compilazione con l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) \(disabilita estensioni linguaggio\).  
  
## Esempio  
  
```  
// expre_Bitwise_AND_Operator.cpp  
// compile with: /EHsc  
// Demonstrate bitwise AND  
#include <iostream>  
using namespace std;  
int main() {  
   unsigned short a = 0xFFFF;      // pattern 1111 ...  
   unsigned short b = 0xAAAA;      // pattern 1010 ...  
  
   cout  << hex << ( a & b ) << endl;   // prints "aaaa", pattern 1010 ...  
}  
```  
  
## Vedere anche  
 [Operatori bit per bit C\+\+](../misc/cpp-bitwise-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori bit per bit C](../c-language/c-bitwise-operators.md)