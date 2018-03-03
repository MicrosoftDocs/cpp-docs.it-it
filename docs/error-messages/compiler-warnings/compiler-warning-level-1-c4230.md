---
title: Compilatore avviso (livello 1) C4230 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4230
dev_langs:
- C++
helpviewer_keywords:
- C4230
ms.assetid: a4be8729-74b6-44df-a5ea-e3f45aad0f8f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c50738e464452599ae8d20eaa3266b75fe301934
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4230"></a>Avviso del compilatore (livello 1) C4230
utilizzato anacronismo: modificatori e qualificatori frammisti. Qualificatori ignorati  
  
 Utilizzo di un qualificatore prima di un modificatore di Microsoft, ad esempio `__cdecl` è una procedura obsoleta.  
  
## <a name="example"></a>Esempio  
  
```  
// C4230.cpp  
// compile with: /W1 /LD  
int __cdecl const function1();   // C4230 const ignored  
```