---
title: "Causa della possibile perdita di precisione dei numeri a virgola mobile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DBL_EPSILON (costante)"
  - "numeri a virgola mobile, precisione"
  - "FLT_EPSILON (costante)"
ms.assetid: 1acb1add-ac06-4134-a2fd-aff13d8c4c15
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Causa della possibile perdita di precisione dei numeri a virgola mobile
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I valori decimali a virgola mobile in genere non hanno una rappresentazione binaria esatta  a causa del tipo di rappresentazione dei dati a virgola mobile da parte della CPU.  Per questo motivo è possibile che si verifichi una perdita di precisione e che alcune operazioni a virgola mobile generino risultati imprevisti.  
  
 Questo risultato è la conseguenza di una delle seguenti possibili cause:  
  
-   La rappresentazione binaria del numero decimale non è esatta.  
  
-   I tipi di numeri utilizzati non corrispondono, ad esempio sono stati utilizzati sia valori di tipo float che double.  
  
 Per risolvere il problema, molti programmatori assicurano che il valore sia maggiore o minore del valore necessario oppure utilizzano una libreria BCD \(Binary Coded Decimal\) per garantire la precisione.  
  
 La rappresentazione binaria di valori a virgola mobile influisce sulla precisione e sull'accuratezza dei calcoli con virgola mobile.  In Microsoft Visual C\+\+ viene utilizzato il [formato a virgola mobile IEEE](../../build/reference/ieee-floating-point-representation.md).  
  
## Esempio  
  
```  
// Floating-point_number_precision.c  
// Compile options needed: none. Value of c is printed with a decimal   
// point precision of 10 and 6 (printf rounded value by default) to   
// show the difference  
#include <stdio.h>  
  
#define EPSILON 0.0001   // Define your own tolerance  
#define FLOAT_EQ(x,v) (((v - EPSILON) < x) && (x <( v + EPSILON)))  
  
int main() {  
   float a, b, c;  
  
   a = 1.345f;  
   b = 1.123f;  
   c = a + b;  
   // if (FLOAT_EQ(c, 2.468)) // Remove comment for correct result  
   if (c == 2.468)            // Comment this line for correct result  
      printf_s("They are equal.\n");  
   else  
      printf_s("They are not equal! The value of c is %13.10f "  
                "or %f",c,c);  
}  
```  
  
  **Tali elementi non sono uguali.  Il valore di c è 2,4679999352 o 2,468000**    
## Commenti  
 Per EPSILON è possibile utilizzare la costante FLT\_EPSILON che per i valori float corrisponde a 1,192092896e\-07F oppure la costante DBL\_EPSILON che per i valori double corrisponde a 2,2204460492503131e\-016.  Per queste costanti è necessario includere float.h.  Queste costanti sono definite come il più piccolo numero x positivo, in modo che x\+1,0 non sia uguale a 1,0.  Dal momento che si tratta di un numero molto piccolo, per i calcoli che comprendono numeri molto grandi è consigliabile utilizzare una tolleranza definita dall'utente.  
  
## Vedere anche  
 [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)