---
title: Errore del compilatore C2733 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2733
dev_langs: C++
helpviewer_keywords: C2733
ms.assetid: 67f83561-c633-407c-a2ee-f9fd16e165bf
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fb0c21850d93a39047bacfe38592e381e9fb5918
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2733"></a>Errore del compilatore C2733
secondo collegamento C della funzione in overload 'function' non consentito  
  
 Più di una funzione in overload è dichiarata con collegamento C. Quando si usa il collegamento C, solo una forma di una funzione specificata può essere esterna. Poiché le funzioni in overload con lo stesso nome non decorato, non possono essere utilizzate con i programmi C.  
  
 L'esempio seguente genera l'errore C2733:  
  
```  
// C2733.cpp  
extern "C" {  
   void F1(int);  
}  
  
extern "C" {  
   void F1();   // C2733  
   // try the following line instead  
   // void F2();  
}  
```