---
title: Strumenti del linker LNK4217 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4217
dev_langs: C++
helpviewer_keywords: LNK4217
ms.assetid: 280dc03e-5933-4e8d-bb8c-891fbe788738
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 09c984d7675c73bdf225bae7d3014f81153d20e2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4217"></a>Avviso degli strumenti del linker LNK4217
simbolo 'symbol' importato nella funzione 'function' definito localmente  
  
 [declspec](../../cpp/dllexport-dllimport.md) anche se il simbolo è definito localmente è stato specificato per un simbolo. Rimuovere il `__declspec` modificatore per risolvere il problema.  
  
 `symbol`è il nome del simbolo definito all'interno dell'immagine. `function`è la funzione che viene importato il simbolo.  
  
 Questo avviso non verrà visualizzato quando esegue la compilazione utilizzando l'opzione [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 LNK4217 può verificarsi anche se si tenta di collegare due moduli, quando invece è necessario compilare il secondo modulo con la libreria di importazione del modulo prima.  
  
```  
// LNK4217.cpp  
// compile with: /LD  
#include "windows.h"  
__declspec(dllexport) void func(unsigned short*) {}  
```  
  
 E quindi,  
  
```  
// LNK4217b.cpp  
// compile with: /c  
#include "windows.h"  
__declspec(dllexport) void func(unsigned short*) {}  
```  
  
 Tentativo di collegare i due moduli consente di ottenere in LNK4217, compilare il secondo esempio con la libreria di importazione dell'esempio prima di risolvere.