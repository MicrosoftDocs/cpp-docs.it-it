---
title: Compilatore avviso (livello 1) C4227 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4227
dev_langs: C++
helpviewer_keywords: C4227
ms.assetid: 78f98374-c00b-4000-aefa-1b1c67b4666b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cc8d9a03acf6f06d19259184b83296e873fcfc81
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4227"></a>Avviso del compilatore (livello 1) C4227
utilizzato anacronismo: qualificatori di riferimenti vengono ignorati  
  
 Utilizzo di qualificatori quali `const` o `volatile` con riferimenti C++ è una procedura obsoleta.  
  
## <a name="example"></a>Esempio  
  
```  
// C4227.cpp  
// compile with: /W1 /c  
int j = 0;  
int &const i = j;   // C4227  
```