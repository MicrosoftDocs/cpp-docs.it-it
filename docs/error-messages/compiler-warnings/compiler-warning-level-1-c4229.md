---
title: Compilatore avviso (livello 1) C4229 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4229
dev_langs: C++
helpviewer_keywords: C4229
ms.assetid: aadfc83b-1e5f-4229-bd0a-9c10a5d13182
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: eba360a71493ab63c9fa38ebae7856af335b9671
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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