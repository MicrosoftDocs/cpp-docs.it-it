---
title: Errore del compilatore C2733 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2733
dev_langs:
- C++
helpviewer_keywords:
- C2733
ms.assetid: 67f83561-c633-407c-a2ee-f9fd16e165bf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc1857cd800dd2d395754b9ae95094d9f57aad27
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33234189"
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