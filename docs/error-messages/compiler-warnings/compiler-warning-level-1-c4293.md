---
title: Compilatore avviso (livello 1) C4293 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4293
dev_langs:
- C++
helpviewer_keywords:
- C4293
ms.assetid: babecd96-eb51-41a5-9835-462c7a46dbad
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ad588b69db1a0b46efa708b472bfc2218d17c0c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33277127"
---
# <a name="compiler-warning-level-1-c4293"></a>Avviso del compilatore (livello 1) C4293
'operator': calcolo shift negativo o troppo grande, un comportamento indefinito  
  
 Se un calcolo shift negativo o troppo grande, il comportamento dell'immagine risultante è indefinito.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4293:  
  
```  
// C4293.cpp  
// compile with: /c /W1  
unsigned __int64 combine (unsigned lo, unsigned hi) {  
  
   return (hi << 32) | lo;   // C4293  
  
   // try the following line instead  
   // return ( (unsigned __int64)hi << 32) | lo;  
}  
```