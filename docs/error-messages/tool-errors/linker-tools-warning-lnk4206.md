---
title: Strumenti del linker LNK4206 avviso | Documenti Microsoft
ms.date: 12/05/2017
ms.technology:
- cpp-diagnostics
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
ms.workload:
- cplusplus
ms.openlocfilehash: f0cb74776f307affb0455d972e27e594e6d06294
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33300872"
---
# <a name="linker-tools-warning-lnk4206"></a>Avviso degli strumenti del linker LNK4206

> informazioni sul tipo precompilato non trovati. '*filename*' non collegato o sovrascritto; oggetto collegato senza informazioni di debug

Il *filename* file oggetto compilati con [/Yc](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando LINK o è stato sovrascritto.

Uno scenario comune per questo avviso è quando il file obj che è stato compilato con /Yc si trova in una libreria e non sono presenti riferimenti a simbolo per il file dal codice.  In tal caso, il linker verrà non utilizzare o anche vedere il file con estensione obj.  In questo caso, è necessario ricompilare il codice e usare [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) per gli oggetti compilati utilizzando [/Yu](../../build/reference/yu-use-precompiled-header-file.md).