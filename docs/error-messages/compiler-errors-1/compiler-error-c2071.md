---
title: Errore del compilatore C2071 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2071
dev_langs: C++
helpviewer_keywords: C2071
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1cb7d80f016250d289a70456f6fbfe2011c9410b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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