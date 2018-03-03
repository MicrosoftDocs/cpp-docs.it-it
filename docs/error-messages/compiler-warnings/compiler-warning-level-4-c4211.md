---
title: Compilatore avviso (livello 4) C4211 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4211
dev_langs:
- C++
helpviewer_keywords:
- C4211
ms.assetid: 3eea3455-6faa-4cdb-8730-73db7026bd1f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8967efb23a534f4d9d46b8e61f0045c4d1c5c3b0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4211"></a>Avviso del compilatore (livello 4) C4211
utilizzata estensione non standard: ridefinito extern in statico  
  
 Con le estensioni Microsoft predefinite (/Ze), è possibile ridefinire un `extern` identificatore come **statico**.  
  
## <a name="example"></a>Esempio  
  
```  
// C4211.c  
// compile with: /W4  
extern int i;  
static int i;   // C4211  
  
int main()  
{  
}  
```  
  
 Tali ridefinizioni non sono validi in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).  
  
## <a name="see-also"></a>Vedere anche  


