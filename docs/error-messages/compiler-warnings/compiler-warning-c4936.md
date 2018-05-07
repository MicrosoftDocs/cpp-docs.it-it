---
title: Avviso del compilatore C4936 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4936
dev_langs:
- C++
helpviewer_keywords:
- C4936
ms.assetid: 6676de35-bf1b-4d0b-a70f-b5734130336c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dcf9f32a4a1b1e43cb4bd69c754e3ae3a98bff3d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-c4936"></a>Avviso del compilatore C4936
questo __declspec è supportato solo con la compilazione con /clr o /clr:pure  
  
 Il **/clr: pure** l'opzione del compilatore è deprecato in Visual Studio 2015.  
  
 È stato usato un modificatore `__declspec` , ma tale modificatore `__declspec` è valido solo quando viene compilato con una delle opzioni [/clr](../../build/reference/clr-common-language-runtime-compilation.md) .  
  
 Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).  
  
 C4936 viene sempre generato come errore.  È possibile disabilitare C4936 con il pragma [warning](../../preprocessor/warning.md) .  
  
 L'esempio seguente genera l'avviso C4936:  
  
```  
// C4936.cpp  
// compile with: /c  
// #pragma warning (disable : 4936)  
__declspec(process) int i;   // C4936  
__declspec(appdomain) int j;   // C4936  
```