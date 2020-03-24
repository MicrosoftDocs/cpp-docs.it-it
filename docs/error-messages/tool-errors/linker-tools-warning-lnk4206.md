---
title: Avviso degli strumenti del linker LNK4206
ms.date: 12/05/2017
f1_keywords:
- LNK4206
helpviewer_keywords:
- LNK4206
ms.assetid: 6c108e33-00cf-4c5a-830d-d65d470930a7
ms.openlocfilehash: 1758fffb72e183e8a186d115b2b3f3b30c32e047
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193876"
---
# <a name="linker-tools-warning-lnk4206"></a>Avviso degli strumenti del linker LNK4206

> informazioni sul tipo precompilato non trovate; '*filename*' non collegato o sovrascritto; oggetto collegato senza informazioni di debug

Il file oggetto *filename* , compilato tramite [/YC](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando di collegamento o è stato sovrascritto.

Uno scenario comune per questo avviso è quando il. obj compilato con/YC si trova in una libreria e dove non vi sono riferimenti a simboli. obj dal codice.  In tal caso, il linker non utilizzerà o visualizzerà il file obj.  In questa situazione è necessario ricompilare il codice e usare [/YL](../../build/reference/yl-inject-pch-reference-for-debug-library.md) per gli oggetti compilati usando [/Yu](../../build/reference/yu-use-precompiled-header-file.md).
