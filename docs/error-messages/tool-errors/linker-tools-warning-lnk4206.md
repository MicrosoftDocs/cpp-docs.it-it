---
title: Avviso degli strumenti del linker LNK4206
ms.date: 12/05/2017
f1_keywords:
- LNK4206
helpviewer_keywords:
- LNK4206
ms.assetid: 6c108e33-00cf-4c5a-830d-d65d470930a7
ms.openlocfilehash: dc81df89609f59834c8a3271dd64f3b99b281f90
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613638"
---
# <a name="linker-tools-warning-lnk4206"></a>Avviso degli strumenti del linker LNK4206

> informazioni sul tipo precompilato non trovati. «*filename*' non collegato o sovrascritto; oggetto collegato senza informazioni di debug

Il *nomefile* file oggetto compilati con [/Yc](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando collegamento o è stato sovrascritto.

Uno scenario comune per questo avviso è quando il file obj che è stato compilato con /Yc si trova in una libreria e in cui non sono presenti riferimenti a simboli per tale obj dal codice.  In tal caso, il linker non usare (o persino visualizzare) il file con estensione obj.  In questo caso, è necessario ricompilare il codice e utilizzare [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) per gli oggetti compilati con [/Yu](../../build/reference/yu-use-precompiled-header-file.md).