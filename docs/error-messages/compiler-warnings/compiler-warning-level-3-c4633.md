---
title: Compilatore avviso (livello 3) C4633 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4633
dev_langs:
- C++
helpviewer_keywords:
- C4633
ms.assetid: 6d76f268-ba8c-448b-8e83-b903a18b583b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a93b660ea7cd4291b3546166d9f7a9c387ea749a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4633"></a>Avviso del compilatore (livello 3) C4633
Destinazione del commento documento XML: errore: motivo  
  
 Passare un nome per il [ \<param >](../../ide/param-visual-cpp.md) tag non è stato trovato dal compilatore.  
  
 L'esempio seguente genera l'errore C4633:  
  
```  
// C4633.cpp  
// compile with: /clr /doc /LD /W3  
  
/// Text for class MyClass.  
public ref class MyClass {  
   // C4633 remove line for Int3  
   /// <param name="Int1">Used to indicate status.</param>  
   /// <param name="Int3">Used to indicate status.</param>  
   void MyMethod(int Int1) {  
      Int1 = 0;  
      Int1++;  
   }  
};  
```