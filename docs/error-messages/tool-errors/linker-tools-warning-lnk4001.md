---
title: Strumenti del linker LNK4001 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4001
dev_langs:
- C++
helpviewer_keywords:
- LNK4001
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: acf65c00c5c039769a05e009dcfe46ea42633ac4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4001"></a>Avviso degli strumenti del linker LNK4001
Nessun file oggetto specificato. librerie utilizzate  
  
 Il linker è stato passato a uno o più file con estensione LIB, ma non i file obj.  
  
 Poiché il linker non è in grado di accedere alle informazioni in un file lib che è in grado di accedere in un file obj, questo avviso indica che è necessario specificare in modo esplicito altre opzioni del linker. Ad esempio, è necessario specificare il [/computer](../../build/reference/machine-specify-target-platform.md), [/out](../../build/reference/out-output-file-name.md), o [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzioni.