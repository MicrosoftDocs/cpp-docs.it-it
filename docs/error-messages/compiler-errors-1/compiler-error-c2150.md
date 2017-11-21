---
title: Errore del compilatore C2150 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2150
dev_langs: C++
helpviewer_keywords: C2150
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: bb45a137b17b685fea438548da2a3d6d3de73559
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2150"></a>Errore del compilatore C2150
  
> '*identificatore*': campo di bit deve avere il tipo 'int', 'signed int' o 'unsigned int'  
  
 Il tipo base per un campo di bit deve essere `int`, `signed int`, o `unsigned int`.  
  
## <a name="example"></a>Esempio  
  
 Questo esempio viene illustrato come è possibile che si C2150 e come è possibile risolvere il problema:  
  
```cpp  
// C2150.cpp  
// compile with: /c  
struct A {  
   float a : 8;    // C2150  
   int i : 8;      // OK  
};  
```