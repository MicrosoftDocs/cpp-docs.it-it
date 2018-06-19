---
title: Compilatore avviso (livello 1) C4224 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4224
dev_langs:
- C++
helpviewer_keywords:
- C4224
ms.assetid: 1531cae0-5040-49fd-b149-005bb5085391
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 91f74aee988264706d5c74e94c8198a448f66465
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33276711"
---
# <a name="compiler-warning-level-1-c4224"></a>Avviso del compilatore (livello 1) C4224
utilizzata estensione non standard: parametro formale 'identifier' è stato precedentemente definito come un tipo  
  
 L'identificatore è stato precedentemente utilizzato come un `typedef`. In questo modo un avviso in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).  
  
## <a name="example"></a>Esempio  
  
```  
// C4224.cpp  
// compile with: /Za /W1 /LD  
typedef int I;  
void func ( int I );  // C4224  
```