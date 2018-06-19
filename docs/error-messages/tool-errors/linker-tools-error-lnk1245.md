---
title: Strumenti del linker LNK1245 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1245
dev_langs:
- C++
helpviewer_keywords:
- LNK1245
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47a1c2e5f7bf66946dcc5816d7a20fd485b59b45
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299240"
---
# <a name="linker-tools-error-lnk1245"></a>Errore degli strumenti del linker LNK1245
sottosistema non valido 'sottosistema' specificato. /SUBSYSTEM deve essere WINDOWS, WINDOWSCE o CONSOLE  
  
 [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) è stata utilizzata per compilare l'oggetto e una delle seguenti condizioni è true:  
  
-   È stato definito un punto di ingresso personalizzato ([/ENTRY](../../build/reference/entry-entry-point-symbol.md)), in modo che il linker non è stato possibile dedurre un sottosistema.  
  
-   È stato passato un valore di [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) che non è valido per gli oggetti /CLR. l'opzione del linker.  
  
 Per entrambi i casi, la risoluzione consiste nello specificare un valore valido per l'opzione del linker /SUBSYSTEM.