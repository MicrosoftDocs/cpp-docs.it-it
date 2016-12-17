---
title: "Avviso degli strumenti del linker LNK4217 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4217"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4217"
ms.assetid: 280dc03e-5933-4e8d-bb8c-891fbe788738
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4217
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

simbolo 'simbolo' definito localmente importato nella funzione 'funzione'  
  
 È stato specificato [\_\_declspec\(dllimport\)](../../cpp/dllexport-dllimport.md) per un simbolo anche se questo è definito localmente.  Rimuovere `__declspec` per risolvere questo avviso.  
  
 `symbol` è il nome del simbolo definito all'interno dell'immagine.  `function` è la funzione che sta importando il simbolo.  
  
 Questo avviso non verrà visualizzato quando si esegue la compilazione utilizzando l'opzione [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 L'avviso LNK4217 viene inoltre visualizzato quando si tenta di collegare due moduli anziché compilare il secondo con la libreria di importazione del primo.  
  
```  
// LNK4217.cpp  
// compile with: /LD  
#include "windows.h"  
__declspec(dllexport) void func(unsigned short*) {}  
```  
  
 quindi  
  
```  
// LNK4217b.cpp  
// compile with: /c  
#include "windows.h"  
__declspec(dllexport) void func(unsigned short*) {}  
```  
  
 Il tentativo di collegare questi due moduli genererà l'avviso LNK4217. Per evitarlo, compilare il secondo modulo con la libreria di importazione del primo esempio.