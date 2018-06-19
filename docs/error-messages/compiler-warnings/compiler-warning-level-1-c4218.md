---
title: Compilatore avviso (livello 1) C4218 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4218
dev_langs:
- C++
helpviewer_keywords:
- C4218
ms.assetid: d6c3cd90-4518-49e9-ae86-4ba9e2761d98
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 88b27af84c390760274bb20665eec4452c8e7072
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33279750"
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