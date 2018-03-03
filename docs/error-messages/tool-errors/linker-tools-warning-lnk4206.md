---
title: Strumenti del linker LNK4206 avviso | Documenti Microsoft
ms.date: 12/05/2017
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4206
dev_langs:
- C++
helpviewer_keywords:
- LNK4206
ms.assetid: 6c108e33-00cf-4c5a-830d-d65d470930a7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cd13ac59aefa074db869f0502743c7a49d23082c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4206"></a>Avviso degli strumenti del linker LNK4206

> informazioni sul tipo precompilato non trovati. '*filename*' non collegato o sovrascritto; oggetto collegato senza informazioni di debug

Il *filename* file oggetto compilati con [/Yc](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando LINK o è stato sovrascritto.

Uno scenario comune per questo avviso è quando il file obj che è stato compilato con /Yc si trova in una libreria e non sono presenti riferimenti a simbolo per il file dal codice.  In tal caso, il linker verrà non utilizzare o anche vedere il file con estensione obj.  In questo caso, è necessario ricompilare il codice e usare [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) per gli oggetti compilati utilizzando [/Yu](../../build/reference/yu-use-precompiled-header-file.md).