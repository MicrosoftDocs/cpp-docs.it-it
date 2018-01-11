---
title: Strumenti del linker LNK1245 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1245
dev_langs: C++
helpviewer_keywords: LNK1245
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 142d88489748f30308395d64f3db78178a9b856f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1245"></a>Errore degli strumenti del linker LNK1245
sottosistema non valido 'sottosistema' specificato. /SUBSYSTEM deve essere WINDOWS, WINDOWSCE o CONSOLE  
  
 [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) utilizzato per compilare l'oggetto e una delle seguenti condizioni è true:  
  
-   È stato definito un punto di ingresso personalizzato ([/ENTRY](../../build/reference/entry-entry-point-symbol.md)), in modo che il linker non è stato possibile dedurre un sottosistema.  
  
-   È stato passato un valore di [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) che non è valido per gli oggetti /CLR. l'opzione del linker.  
  
 Per entrambi i casi, la risoluzione consiste nello specificare un valore valido per l'opzione del linker /SUBSYSTEM.