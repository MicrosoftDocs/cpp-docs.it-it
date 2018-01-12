---
title: Compilatore avviso (livello 1) C4561 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4561
dev_langs: C++
helpviewer_keywords: C4561
ms.assetid: 3a10c12c-601b-4b6c-9861-331fd022e021
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 03fd67baa07b297ded01e06da37cad2a7cc97c68
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4561"></a>Avviso del compilatore (livello 1) C4561
fastcall' incompatibile con il ' o clr' opzione: la conversione in '\_stdcall '  
  
 Il [fastcall](../../cpp/fastcall.md) convenzione di chiamata di funzione non può essere utilizzato con il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore. Il compilatore ignora le chiamate a `__fastcall`. Per risolvere questo problema, rimuovere le chiamate a **fastcall** o compilare senza **/clr**.  
  
 L'esempio seguente genera l'errore C4561:  
  
```  
// C4561.cpp  
// compile with: /clr /W1 /c  
// processor: x86  
void __fastcall Func(void *p);   // C4561, remove __fastcall to resolve  
```