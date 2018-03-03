---
title: Errore del compilatore C2086 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2086
dev_langs:
- C++
helpviewer_keywords:
- C2086
ms.assetid: 4329bf72-90c8-444c-8524-4ef75e6b2139
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3e5789ba5da4c5bcc4572da29e6f128aecf1e4f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2086"></a>Errore del compilatore C2086
'identifier': ridefinizione  
  
 L'identificatore è definito più volte o una dichiarazione successiva è diversa da una precedente.  
  
 C2086 può inoltre essere il risultato della compilazione incrementale per un assembly di riferimento in c#. Ricompilare l'assembly c# per correggere l'errore.  
  
 L'esempio seguente genera l'errore C2086:  
  
```  
// C2086.cpp  
main() {  
  int a;  
  int a;   // C2086 not an error in ANSI C  
}  
```