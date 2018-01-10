---
title: Valori restituiti (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 53583524-b337-4228-a9c6-c9bf516babe8
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cdd02ab9c30e641ba7389923062f46dbbed534ec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="return-values-c"></a>Valori restituiti (C++)
Viene restituito un valore scalare adattabile in 64 bit con RAX, che include i tipi __m64. I tipi non scalari inclusi float, Double e tipi di vettori, ad esempio [m128](../cpp/m128.md), [__m128i](../cpp/m128i.md), [__m128d](../cpp/m128d.md) vengono restituiti in XMM0. Lo stato dei bit non usati nel valore restituito in RAX o XMM0 non è definito.  
  
 I tipi definiti dall'utente possono essere restituiti per valore dalle funzioni globali e dalle funzioni membro statiche. Per essere restituiti per valore in RAX, i tipi definiti dall'utente devono essere lunghi 1, 2, 4, 8, 16, 32 o 64 bit. Non sono consentiti: costruttori, distruttori o operatori di assegnazione di copia definiti dall'utente, membri di dati non statici privati o protetti, membri di dati non statici di tipo riferimento, classi base, funzioni virtuali e membri di dati che non soddisfano questi requisiti. (Si tratta in sostanza della definizione di un tipo POD C++03. La definizione è stata modificata nello standard C++11, pertanto non si consiglia di usare `std::is_pod` per questo test). In caso contrario, il chiamante si assume la responsabilità di allocare la memoria e di passare un puntatore per il valore restituito come primo argomento. Gli argomenti successivi vengono quindi spostati verso destra di un argomento. È necessario che lo stesso puntatore sia restituito dal computer chiamato in RAX.  
  
 Questi esempi mostrano in che modo vengono passati i parametri e i valori restituiti per le funzioni con le dichiarazioni specificate:  
  
## <a name="example-of-return-value-1---64-bit-result"></a>Esempio di risultato di 1 a 64 bit di valore restituito  
  
```Output  
__int64 func1(int a, float b, int c, int d, int e);  
// Caller passes a in RCX, b in XMM1, c in R8, d in R9, e pushed on stack,  
// callee returns __int64 result in RAX.  
```  
  
## <a name="example-of-return-value-2---128-bit-result"></a>Esempio di valore restituito 2-128 bit risultato  
  
```Output  
__m128 func2(float a, double b, int c, __m64 d);   
// Caller passes a in XMM0, b in XMM1, c in R8, d in R9,   
// callee returns __m128 result in XMM0.  
```  
  
## <a name="example-of-return-value-3---user-type-result-by-pointer"></a>Esempio di valore restituito 3: risultato del tipo utente per puntatore  
  
```Output  
struct Struct1 {  
   int j, k, l;    // Struct1 exceeds 64 bits.   
};  
Struct1 func3(int a, double b, int c, float d);   
// Caller allocates memory for Struct1 returned and passes pointer in RCX,   
// a in RDX, b in XMM2, c in R9, d pushed on the stack;   
// callee returns pointer to Struct1 result in RAX.  
```  
  
## <a name="example-of-return-value-4---user-type-result-by-value"></a>Esempio di valore restituito 4: risultato del tipo di utente per valore  
  
```Output  
struct Struct2 {  
   int j, k;    // Struct2 fits in 64 bits, and meets requirements for return by value.  
};  
Struct2 func4(int a, double b, int c, float d);   
// Caller passes a in RCX, b in XMM1, c in R8, and d in XMM3;   
// callee returns Struct2 result by value in RAX.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)