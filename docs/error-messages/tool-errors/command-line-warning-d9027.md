---
title: Riga di comando D9027 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D9027
dev_langs:
- C++
helpviewer_keywords:
- D9027
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dfe2493290c4e4cc5b744136b8e7036c6559220a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="command-line-warning-d9027"></a>Avviso della riga di comando D9027
file di origine '\<nomefile >' ignorato  
  
 CL.exe ignorato il file di origine di input.  
  
 Questo avviso può essere causato da uno spazio tra l'opzione /Fo e un nome di file di output in una riga di comando con l'opzione/c. Ad esempio:  
  
```  
cl /c /Fo output.obj input.c   
```  
  
 Poiché è presente uno spazio tra /Fo e `output.obj`, CL.exe accetta `output.obj` come il nome del file di input. Per risolvere il problema, rimuovere lo spazio:  
  
```  
cl /c /Fooutput.obj input.c   
```