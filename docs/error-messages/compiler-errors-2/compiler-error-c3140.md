---
title: Errore del compilatore C3140 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3140
dev_langs:
- C++
helpviewer_keywords:
- C3140
ms.assetid: 122f8943-fac3-4db8-a3a8-2c5d19233de6
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: e809ddaaa278e0c6a2660fbb71b84323dcd40018
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3140"></a>Errore del compilatore C3140
non può avere più attributi 'module' nella stessa unità di compilazione  
  
 Il [modulo](../../windows/module-cpp.md) attributo può essere definito solo una volta per ogni progetto.  
  
 L'esempio seguente genera l'errore C3140:  
  
```  
// C3140.cpp  
// compile with: /c  
[emitidl];  
[module(name = "MyLibrary")];  
[module(name = "MyLibrary2")];   // C3140  
```
