---
title: Avviso degli strumenti del linker LNK4001
ms.date: 11/04/2016
f1_keywords:
- LNK4001
helpviewer_keywords:
- LNK4001
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
ms.openlocfilehash: 75ca9ec92bbba1c15efc11a731b3894ea03e33dd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62298789"
---
# <a name="linker-tools-warning-lnk4001"></a>Avviso degli strumenti del linker LNK4001

Nessun file oggetto specificato; librerie utilizzate

Il linker è stato passato a uno o più file con estensione LIB, ma non i file con estensione obj.

Poiché il linker non è in grado di accedere alle informazioni in un file con estensione LIB che è in grado di accedere in un file obj, questo avviso indica che è necessario specificare in modo esplicito altre opzioni del linker. Ad esempio, potrebbe essere necessario specificare il [/MACHINE](../../build/reference/machine-specify-target-platform.md), [/out](../../build/reference/out-output-file-name.md), o [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzioni.