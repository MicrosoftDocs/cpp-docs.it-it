---
title: Compilatore avviso (livello 1) C4218 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4218
dev_langs:
- C++
helpviewer_keywords:
- C4218
ms.assetid: d6c3cd90-4518-49e9-ae86-4ba9e2761d98
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 156a43f57f52f50f6542f3502658d5e0e16f1bd9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4218"></a>Avviso del compilatore (livello 1) C4218
utilizzata estensione non standard: è necessario specificare almeno una classe di archiviazione o un tipo  
  
 Con le estensioni Microsoft predefinite (/Ze), è possibile dichiarare una variabile senza specificare una classe di tipo o di archiviazione. Il tipo predefinito è `int`.  
  
## <a name="example"></a>Esempio  
  
```  
// C4218.c  
// compile with: /W4  
i;  // C4218  
  
int main()  
{  
}  
```  
  
 Tali dichiarazioni sono valide in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).