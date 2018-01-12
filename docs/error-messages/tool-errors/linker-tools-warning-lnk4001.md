---
title: Strumenti del linker LNK4001 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4001
dev_langs: C++
helpviewer_keywords: LNK4001
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2ecc78fe50fd34a0c6f583bf103d368e23f19f2e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4001"></a>Avviso degli strumenti del linker LNK4001
Nessun file oggetto specificato. librerie utilizzate  
  
 Il linker è stato passato a uno o più file con estensione LIB, ma non i file obj.  
  
 Poiché il linker non è in grado di accedere alle informazioni in un file lib che è in grado di accedere in un file obj, questo avviso indica che è necessario specificare in modo esplicito altre opzioni del linker. Ad esempio, è necessario specificare il [/computer](../../build/reference/machine-specify-target-platform.md), [/out](../../build/reference/out-output-file-name.md), o [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzioni.