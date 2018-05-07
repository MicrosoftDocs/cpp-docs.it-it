---
title: Errore del compilatore C3137 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3137
dev_langs:
- C++
helpviewer_keywords:
- C3137
ms.assetid: 70bb1313-2e87-43ed-a0d8-33fa6ff475e4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e93659f8a40d4806189bdcb772b9be89b112b2ee
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3137"></a>Errore del compilatore C3137
'property': Impossibile inizializzare una proprietà  
  
 Ad esempio, non è possibile inizializzare una proprietà nell'elenco di inizializzazione di un costruttore.  
  
 Nell'esempio seguente genera l'errore C3137:  
  
```  
// C3137.cpp  
// compile with: /clr /c  
ref class CMyClass {  
public:  
   property int Size {  
      int get() {  
         return 0;  
      }  
      void set( int i ) {}  
   }  
  
   CMyClass() : Size( 1 ) {   // C3137  
      // to resolve this C3137, remove the initializer from the  
      // ctor declaration and perform the assignment as follows  
      // Size = 1;  
   }  
};  
```  
