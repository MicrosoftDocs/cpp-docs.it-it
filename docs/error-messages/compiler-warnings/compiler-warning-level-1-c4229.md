---
title: Compilatore avviso (livello 1) C4229 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4229
dev_langs:
- C++
helpviewer_keywords:
- C4229
ms.assetid: aadfc83b-1e5f-4229-bd0a-9c10a5d13182
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c902bf397d5906645a9310da337561627d7c443
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33275415"
---
# <a name="compiler-warning-level-1-c4229"></a>Avviso del compilatore (livello 1) C4229
utilizzato anacronismo: i modificatori di dati vengono ignorati  
  
 Usa un modificatore di Microsoft, ad esempio `__cdecl` su dati di dichiarazione è una procedura obsoleta.  
  
## <a name="example"></a>Esempio  
  
```  
// C4229.cpp  
// compile with: /W1 /LD  
int __cdecl counter;   // C4229 cdecl ignored  
```