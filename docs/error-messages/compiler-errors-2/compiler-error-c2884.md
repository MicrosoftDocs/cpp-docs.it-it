---
title: Errore del compilatore C2884 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2884
dev_langs: C++
helpviewer_keywords: C2884
ms.assetid: 8b4d43e3-3fb5-4360-86c8-de59d8736d4f
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b5916eeb4195d163cd698a9398fa411f56ad8610
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2884"></a>Errore del compilatore C2884
'name': introdotto dalla dichiarazione using in conflitto con la funzione locale 'function'  
  
 Si è tentato di definire una funzione a più di una volta. La prima definizione è una definizione locale. Il secondo è uno spazio dei nomi con un `using` dichiarazione.  
  
 L'esempio seguente genera l'errore C2884:  
  
```  
// C2884.cpp  
namespace A {  
   void z(int);  
}  
  
void f() {  
   void z(int);  
   using A::z;   // C2884 z is already defined  
}  
```