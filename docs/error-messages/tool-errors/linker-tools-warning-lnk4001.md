---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4001'
title: Avviso degli strumenti del linker LNK4001
ms.date: 11/04/2016
f1_keywords:
- LNK4001
helpviewer_keywords:
- LNK4001
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
ms.openlocfilehash: ceae4b205a7d591eff6de6c745fc379d5422a0e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332046"
---
# <a name="linker-tools-warning-lnk4001"></a>Avviso degli strumenti del linker LNK4001

Nessun file oggetto specificato; librerie utilizzate

Al linker sono stati passati uno o più file con estensione LIB, ma nessun file obj.

Poiché il linker non è in grado di accedere alle informazioni in un file con estensione LIB a cui è possibile accedere in un file con estensione obj, questo avviso indica che sarà necessario specificare in modo esplicito altre opzioni del linker. Ad esempio, potrebbe essere necessario specificare le opzioni [/Machine](../../build/reference/machine-specify-target-platform.md), [/out](../../build/reference/out-output-file-name.md)o [/entry](../../build/reference/entry-entry-point-symbol.md) .
