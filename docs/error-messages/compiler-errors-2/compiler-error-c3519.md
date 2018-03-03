---
title: Errore del compilatore C3519 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3519
dev_langs:
- C++
helpviewer_keywords:
- C3519
ms.assetid: ca24b2bc-7e90-4448-ae84-3fedddf9bca7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a558225717fecc216d0b2411c5f3d611256d30fa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3519"></a>Errore del compilatore C3519
'param_non_valido': parametro non valido per l'attributo embedded_idl  
  
 È stato passato un parametro per il `embedded_idl` attributo di [#import](../../preprocessor/hash-import-directive-cpp.md), ma il compilatore non ha riconosciuto il parametro.  
  
 Gli unici parametri consentiti per `embedded_idl` sono `emitidl` e `no_emitidl`.  
  
 L'esempio seguente genera l'errore C3519:  
  
```  
// C3519.cpp  
// compile with: /LD  
[module(name="MyLib2")];  
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidcl")     
// C3519  
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidl")     
// OK  
```