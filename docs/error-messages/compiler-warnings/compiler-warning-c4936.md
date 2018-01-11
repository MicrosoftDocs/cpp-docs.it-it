---
title: Avviso del compilatore C4936 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4936
dev_langs: C++
helpviewer_keywords: C4936
ms.assetid: 6676de35-bf1b-4d0b-a70f-b5734130336c
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 995cd7b2b774b768d6bccf10ddcec18101580e74
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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