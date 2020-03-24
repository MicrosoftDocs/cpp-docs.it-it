---
title: Avviso degli strumenti del linker LNK4001
ms.date: 11/04/2016
f1_keywords:
- LNK4001
helpviewer_keywords:
- LNK4001
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
ms.openlocfilehash: d9659b0cf372ff8ebc225b890fb68866872bb3d6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194408"
---
# <a name="linker-tools-warning-lnk4001"></a>Avviso degli strumenti del linker LNK4001

Nessun file oggetto specificato; librerie utilizzate

Al linker sono stati passati uno o più file con estensione LIB, ma nessun file obj.

Poiché il linker non è in grado di accedere alle informazioni in un file con estensione LIB a cui è possibile accedere in un file con estensione obj, questo avviso indica che sarà necessario specificare in modo esplicito altre opzioni del linker. Ad esempio, potrebbe essere necessario specificare le opzioni [/Machine](../../build/reference/machine-specify-target-platform.md), [/out](../../build/reference/out-output-file-name.md)o [/entry](../../build/reference/entry-entry-point-symbol.md) .
