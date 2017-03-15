---
title: "Avviso del compilatore C4439 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4439"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4439"
ms.assetid: 9449958f-f407-4824-829b-9e092f2af97d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore C4439
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': la definizione di funzione con un tipo gestito nella firma deve avere una convenzione di chiamata \_\_clrcall  
  
 Il compilatore ha sostituito implicitamente una convenzione di chiamata con [\_\_clrcall](../../cpp/clrcall.md).  Per risolvere il problema, rimuovere la convenzione di chiamata `__cdecl` o `__stdcall`.  
  
 L'avviso C4439 viene sempre generato come un errore.  È possibile disattivarlo utilizzando `#pragma warning` o **\/wd**. Per ulteriori informazioni, vedere [warning](../../preprocessor/warning.md) o [\/w, \/Wn, \/WX, \/Wall, \/wln, \/wdn, \/wen, \/won \(Livello avvisi\)](../../build/reference/compiler-option-warning-level.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4439:  
  
```  
// C4439.cpp  
// compile with: /clr  
void __stdcall f( System::String^ arg ) {}   // C4439  
void __clrcall f2( System::String^ arg ) {}   // OK  
void f3( System::String^ arg ) {}   // OK  
```