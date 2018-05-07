---
title: Strumenti del linker LNK4105 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4105
dev_langs:
- C++
helpviewer_keywords:
- LNK4105
ms.assetid: 6c7bebf4-4ea6-4533-a6ed-e563d43abbd7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0ffdd8953e08f38d36bdfc2e68ad6cb8e06fb85b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4105"></a>Avviso degli strumenti del linker LNK4105
Nessun argomento specificato con l'opzione 'opzione'; l'opzione verrà ignorata  
  
 Questo avviso viene generato solo quando il [/LIBPATH](../../build/reference/libpath-additional-libpath.md) opzione è impostata. Se viene specificata alcuna directory con questa opzione, il linker ignora l'opzione e genera questo messaggio di avviso.  
  
 Se non è necessaria eseguire l'override le impostazioni della libreria dell'ambiente esistente, rimuovere l'opzione /LIBPATH dalla riga di comando del linker. Se si desidera utilizzare un percorso di ricerca alternativi per le librerie, specificare il percorso alternativo seguente /LIBPATH (opzione).  
  
## <a name="example"></a>Esempio  
  
```  
link /libpath:c:\filepath\lib bar.obj  
```  
  
 indirizzerà al linker di cercare le librerie necessarie in `c:\filepath\lib` prima della ricerca nei percorsi predefiniti.