---
title: Errore del compilatore C2071 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2071
dev_langs:
- C++
helpviewer_keywords:
- C2071
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: c62bb735a84b04bfb0c1addd5e3dd20a48a3eb33
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2071"></a>Errore del compilatore C2071
'identificatore': classe di archiviazione non valida  
  
 `identifier`è stato dichiarato con un tag [classe di archiviazione](../../c-language/c-storage-classes.md). Questo errore può essere causato quando viene specificata più di una classe di archiviazione per un identificatore o quando la definizione non è compatibile con la dichiarazione di classe di archiviazione.  
  
 Per risolvere questo problema, comprendere la classe di archiviazione previsto dell'identificatore, ad esempio, `static` o `extern`: e correggere la dichiarazione corrispondente.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2071.  
  
```  
// C2071.cpp  
// compile with: /c  
struct C {  
   extern int i;   // C2071  
};  
struct D {  
   int i;   // OK, no extern on an automatic  
};  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2071.  
  
```  
// C2071_b.cpp  
// compile with: /c  
typedef int x(int i) { return i; }   // C2071  
typedef int (x)(int);   // OK, no local definition in typedef  
```
