---
title: "Operatore AND logico: &amp;&amp; | Microsoft Docs"
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
  - "&&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "&& (operatore)"
  - "AND (operatore)"
  - "AND (operatore logico)"
ms.assetid: 50cfa664-a8c4-4b31-9bab-2f80d7cd2d1f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore AND logico: &amp;&amp;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
expression   
&&  
 expression  
  
```  
  
## Note  
 L'operatore logico AND \(**&&**\) restituisce il valore booleano **true** se entrambi gli operandi sono **true**, in caso contrario, restituisce **false**.  Gli operandi vengono convertiti in modo implicito nel tipo `bool` prima della valutazione e il risultato è del tipo `bool`.  L'operatore logico AND presenta un'associatività da sinistra verso destra.  
  
 Gli operandi dell'operatore logico AND non devono essere dello stesso tipo, ma devono essere di tipo integrale o puntatore.  Gli operandi sono in genere espressioni di uguaglianza o relazionali.  
  
 Il primo operando viene valutato completamente e tutti gli effetti collaterali vengono completati prima di continuare la valutazione dell'espressione logica AND.  
  
 Il secondo operando viene valutato solo se il primo operando restituisce true \(ossia non un valore zero\).  Questa valutazione elimina la necessità di valutare il secondo operando quando l'espressione logica AND restituisce false.  È possibile utilizzare questa valutazione di corto circuito per impedire la deferenziazione del puntatore NULL, come illustrato nell'esempio seguente:  
  
```  
char *pch = 0;  
...  
(pch) && (*pch = 'a');  
```  
  
 Se `pch` è null \(0\), il lato destro dell'espressione non viene mai valutato.  Di conseguenza, l'assegnazione mediante un puntatore null non è possibile.  
  
## Parola chiave operator per &&  
 L'operatore **and** è l'equivalente testuale di **&&**.  Esistono due modi per accedere all'operatore **and** nei programmi: includendo il file di intestazione `iso646.h` oppure eseguendo la compilazione con l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) \(disabilitare le estensioni del linguaggio\).  
  
## Esempio  
  
```  
// expre_Logical_AND_Operator.cpp  
// compile with: /EHsc  
// Demonstrate logical AND  
#include <iostream>  
  
using namespace std;  
  
int main() {  
   int a = 5, b = 10, c = 15;  
   cout  << boolalpha  
         << "The true expression "  
         << "a < b && b < c yields "  
         << (a < b && b < c) << endl  
         << "The false expression "  
         << "a > b && b < c yields "  
         << (a > b && b < c) << endl;  
}  
```  
  
## Vedere anche  
 [Operatori logici](../misc/logical-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori logici C](../c-language/c-logical-operators.md)