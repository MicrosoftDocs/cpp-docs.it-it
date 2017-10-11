---
title: Errore del compilatore C3420 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3420
dev_langs:
- C++
helpviewer_keywords:
- C3420
ms.assetid: 99b53c77-f36b-4574-9199-b53111becccb
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: b0f17a1dc713940cfb18ff05af71b69f3e4df516
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3420"></a>Errore del compilatore C3420
'finalizer': un finalizzatore non può essere virtuale  
  
 Un finalizzatore può essere chiamato solo in modo non virtuale dal tipo di inclusione. Dichiarare virtuale un finalizzatore rappresenta quindi un errore.  
  
 Per ulteriori informazioni, vedere [distruttori e finalizzatori nella procedura: definire e usare classi e struct (C + + CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3420.  
  
```  
// C3420.cpp  
// compile with: /clr /c  
ref class R {  
   virtual !R() {}   // C3420  
};  
```
