---
title: "Errore del compilatore C2659 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2659"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2659"
ms.assetid: b0883600-4d27-4ca7-a931-8ca6bd48654d
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2659
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': funzione come operando sinistro  
  
 Funzione presente a sinistra dell'operatore specificato.  La causa più comune di questo errore è il fatto che il compilatore ha analizzato l'identificatore a sinistra dell'operatore come una funzione, mentre lo sviluppatore lo aveva inteso come una variabile.  Per ulteriori informazioni, vedere l'articolo di Wikipedia [Most Vexing Parse](http://en.wikipedia.org/wiki/Most_vexing_parse).  In questo esempio vengono illustrate una dichiarazione di funzione e una definizione di variabile che spesso generano confusione:  
  
```  
// C2659a.cpp  
// Compile using: cl /W4 /EHsc C2659a.cpp  
#include <string>  
using namespace std;  
  
int main()   
{  
   string string1(); // string1 is a function returning string  
   string string2{}; // string2 is a string initialized to empty   
  
   string1 = "String 1"; // C2659  
   string2 = "String 2";  
}  
```  
  
 Per risolvere questo problema, modificare la dichiarazione dell'identificatore in modo che non venga analizzato come una dichiarazione di funzione.  
  
 L'errore C2659 può verificarsi anche quando la funzione contiene un tipo che non può essere utilizzato nell'espressione a sinistra dell'operatore specificato.  In questo esempio l'errore C2659 si verifica quando il codice assegna un puntatore di funzione a una funzione:  
  
```  
// C2659b.cpp  
// Compile using: cl /W4 /EHsc C2659b.cpp  
int func0(void) { return 42; }  
int (*func1)(void);  
  
int main()  
{  
   func1 = func0;  
   func0 = func1; // C2659  
}  
```