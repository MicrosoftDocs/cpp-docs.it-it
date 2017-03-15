---
title: "Avviso del compilatore (livello 1) C4561 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4561"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4561"
ms.assetid: 3a10c12c-601b-4b6c-9861-331fd022e021
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 1) C4561
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"\_\_fastcall" incompatibile con l'opzione "\/clr". Conversione in "\_\_stdcall"  
  
 Non è possibile utilizzare la convenzione di chiamata della funzione [\_\_fastcall](../../cpp/fastcall.md) con l'opzione del compilatore [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  Le chiamate a `__fastcall` vengono ignorate.  Per non visualizzare l'avviso, rimuovere le chiamate a **\_\_fastcall**  o eseguire la compilazione senza **\/clr**.  
  
 Il seguente codice di esempio genera l'errore C4561:  
  
```  
// C4561.cpp  
// compile with: /clr /W1 /c  
// processor: x86  
void __fastcall Func(void *p);   // C4561, remove __fastcall to resolve  
```