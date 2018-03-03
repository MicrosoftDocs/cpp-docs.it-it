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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: da0c47ccb08d1d4e9aa4c75fbce4d4fe8252a340
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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