---
title: Errore del compilatore C2150 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2150
dev_langs:
- C++
helpviewer_keywords:
- C2150
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7dc7a84ff666fdc17f0abeec690a548f216ce975
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33170148"
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