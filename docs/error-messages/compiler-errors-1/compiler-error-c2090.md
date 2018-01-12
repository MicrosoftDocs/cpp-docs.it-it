---
title: Errore del compilatore C2090 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2090
dev_langs: C++
helpviewer_keywords: C2090
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1e929f415c294a9e14dadd1ac8ecd1b0915de592
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2090"></a>Errore del compilatore C2090
Restituisce una matrice (funzione)  
  
 Una funzione non può restituire una matrice. Al contrario, restituisce un puntatore a una matrice.  
  
 L'esempio seguente genera l'errore C2090:  
  
```  
// C2090.cpp  
int func1(void)[] {}   // C2090  
```  
  
 Possibile soluzione:  
  
```  
// C2090b.cpp  
// compile with: /c  
int* func2(int * i) {  
   return i;  
}  
```