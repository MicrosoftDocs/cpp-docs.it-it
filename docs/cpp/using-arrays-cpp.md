---
title: Utilizzo delle matrici (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- arrays [C++]
ms.assetid: 7818a7fe-7e82-4881-a3d1-7d25162b7fc7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0c2140dbe786a5d2a2a1b86eca17912e5e06b922
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="using-arrays-c"></a>Utilizzo di matrici (C++)
È possibile accedere ai singoli elementi di una matrice tramite l'operatore di indice di matrice (`[ ]`). Se una matrice unidimensionale viene utilizzata in un'espressione senza indice, il nome della matrice restituisce un puntatore al primo elemento della matrice.  
  
```  
// using_arrays.cpp  
int main() {  
   char chArray[10];  
   char *pch = chArray;   // Evaluates to a pointer to the first element.  
   char   ch = chArray[0];   // Evaluates to the value of the first element.  
   ch = chArray[3];   // Evaluates to the value of the fourth element.  
}  
```  
  
 Quando si utilizzano matrici multidimensionali, è possibile utilizzare varie combinazioni nelle espressioni.  
  
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
  
 Nel codice precedente `multi` è una matrice tridimensionale di tipo `double`. Il puntatore `p2multi` punta a una matrice di tipo `double` tridimensionale. In questo esempio la matrice viene utilizzata con uno, due e tre indici. Sebbene sia più comune specificare tutti gli indici, come nell'istruzione `cout`, è talvolta utile selezionare un sottoinsieme specifico di elementi della matrice, come illustrato nelle istruzioni che seguono `cout`.  
  
## <a name="see-also"></a>Vedere anche  
 [Array](../cpp/arrays-cpp.md)