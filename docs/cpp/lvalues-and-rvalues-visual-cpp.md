---
title: "Elementi Lvalue e Rvalue | Microsoft Docs"
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
  - "valori L"
  - "valori R"
ms.assetid: a8843344-cccc-40be-b701-b71f7b5cdcaf
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elementi Lvalue e Rvalue
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni espressione C\+\+ è un lvalue o un rvalue.  Un lvalue fa riferimento a un oggetto che viene mantenuto oltre una singola espressione.  È possibile considerare un lvalue come un oggetto che ha un nome.  Tutte le variabili, incluse le variabili non modificabili \(`const`\), sono lvalue.  Un rvalue è un valore temporaneo che non viene mantenuto oltre l'espressione che lo utilizza.  Per comprendere meglio la differenza tra lvalue e rvalue, analizzare l'esempio seguente:  
  
```  
// lvalues_and_rvalues1.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
int main()  
{  
   int x = 3 + 4;  
   cout << x << endl;  
}  
```  
  
 In questo esempio, `x` è un lvalue, perché viene mantenuto oltre l'espressione che lo definisce.  L'espressione `3 + 4` è un rvalue, perché restituisce un valore temporaneo che non viene mantenuto oltre l'espressione che la definisce.  
  
 Nell'esempio seguente vengono illustrati diversi utilizzi corretti e non corretti di lvalue e rvalue:  
  
```  
// lvalues_and_rvalues2.cpp  
int main()  
{  
   int i, j, *p;  
  
   // Correct usage: the variable i is an lvalue.  
   i = 7;  
  
   // Incorrect usage: The left operand must be an lvalue (C2106).  
   7 = i; // C2106  
   j * 4 = 7; // C2106  
  
   // Correct usage: the dereferenced pointer is an lvalue.  
   *p = i;   
  
   const int ci = 7;  
   // Incorrect usage: the variable is a non-modifiable lvalue (C3892).  
   ci = 9; // C3892  
  
   // Correct usage: the conditional operator returns an lvalue.  
   ((i < 3) ? i : j) = 7;  
}  
```  
  
> [!NOTE]
>  Gli esempi contenuti in questo argomento illustrano utilizzi corretti e non corretti riferiti ai casi in cui gli operatori non sono sottoposti a overload.  Eseguendo l'overload degli operatori, è possibile rendere un'espressione come `j * 4` un lvalue.  
  
 I termini *lvalue* e *rvalue* vengono utilizzati spesso in relazione ai riferimenti a oggetti.  Per ulteriori informazioni sui riferimenti, vedere [Dichiaratore di riferimento lvalue: &](../cpp/lvalue-reference-declarator-amp.md) e [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Vedere anche  
 [Concetti di base](../cpp/basic-concepts-cpp.md)   
 [Dichiaratore di riferimento lvalue: &](../cpp/lvalue-reference-declarator-amp.md)   
 [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md)