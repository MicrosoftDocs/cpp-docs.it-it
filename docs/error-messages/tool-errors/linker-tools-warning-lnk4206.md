---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4206'
title: Avviso degli strumenti del linker LNK4206
ms.date: 12/05/2017
f1_keywords:
- LNK4206
helpviewer_keywords:
- LNK4206
ms.assetid: 6c108e33-00cf-4c5a-830d-d65d470930a7
ms.openlocfilehash: 40d7a8f18a835721ff747293696d0499c0a94ef3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294145"
---
# <a name="linker-tools-warning-lnk4206"></a>Avviso degli strumenti del linker LNK4206

> informazioni sul tipo precompilato non trovate; '*filename*' non collegato o sovrascritto; oggetto collegato senza informazioni di debug

Il file oggetto *filename* , compilato tramite [/YC](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando di collegamento o è stato sovrascritto.

Uno scenario comune per questo avviso è quando il. obj compilato con/YC si trova in una libreria e dove non vi sono riferimenti a simboli. obj dal codice.  In tal caso, il linker non utilizzerà o visualizzerà il file obj.  In questa situazione è necessario ricompilare il codice e usare [/YL](../../build/reference/yl-inject-pch-reference-for-debug-library.md) per gli oggetti compilati usando [/Yu](../../build/reference/yu-use-precompiled-header-file.md).
