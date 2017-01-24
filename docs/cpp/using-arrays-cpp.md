---
title: "Utilizzo di matrici (C++) | Microsoft Docs"
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
  - "matrici [C++]"
ms.assetid: 7818a7fe-7e82-4881-a3d1-7d25162b7fc7
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di matrici (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile accedere ai singoli elementi di un array utilizzando l'operatore di indice di array \(`[ ]`\).  Se un array unidimensionale è utilizzato in un'espressione che non ha indice, il nome dell'array restituisce un puntatore al primo elemento dell'array.  
  
```  
// using_arrays.cpp  
int main() {  
   char chArray[10];  
   char *pch = chArray;   // Evaluates to a pointer to the first element.  
   char   ch = chArray[0];   // Evaluates to the value of the first element.  
   ch = chArray[3];   // Evaluates to the value of the fourth element.  
}  
```  
  
 Quando si utilizzano gli array multidimensionali, è possibile utilizzare varie combinazioni nelle espressioni.  
  
```  
// using_arrays_2.cpp  
// compile with: /EHsc /W1  
#include <iostream>  
using namespace std;  
int main() {  
   double multi[4][4][3];   // Declare the array.  
   double (*p2multi)[3];  
   double (*p1multi);  
  
   cout << multi[3][2][2] << "\n";   // C4700 Use three subscripts.  
   p2multi = multi[3];               // Make p2multi point to  
                                     // fourth "plane" of multi.  
   p1multi = multi[3][2];            // Make p1multi point to  
                                     // fourth plane, third row  
                                     // of multi.  
}  
```  
  
 Nel codice precedente, `multi` è una array tridimensionale di tipo `double`.  Il puntatore `p2multi` punta ad un array di tipo `double` di tre dimensioni.  In questo esempio, l'array viene utilizzato con uno, due e tre indici.  Sebbene sia più comune specificare tutti gli indici, come nell'istruzione `cout`, è talvolta utile selezionare un sottoinsieme specifico di elementi dell'array, come illustrato nelle istruzioni che seguono `cout`.  
  
## Vedere anche  
 [Matrici](../cpp/arrays-cpp.md)