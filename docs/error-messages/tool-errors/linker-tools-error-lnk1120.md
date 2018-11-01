---
title: Errore degli strumenti del linker LNK1120
ms.date: 05/17/2017
f1_keywords:
- LNK1120
helpviewer_keywords:
- LNK1120
ms.assetid: 56aa7d36-921f-4daf-b44d-cca0d4fb1b51
ms.openlocfilehash: b11318dcffb665d3b422fffcbd7e6275f35984dd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490805"
---
# <a name="linker-tools-error-lnk1120"></a>Errore degli strumenti del linker LNK1120

> *numero* esterni non risolti

Errore LNK1120 riporta il conteggio (*numero*) degli errori di simbolo esterno non risolto per questa operazione di collegamento. La maggior parte non risolto gli errori di simbolo esterno vengono segnalati singolarmente [Errore degli strumenti del Linker LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md) e [Errore degli strumenti del Linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md), che precedono questo messaggio di errore, una volta per ogni esterno non risolto Errore di simbolo.

Per correggere questo errore, correggere tutti gli altri errori esterni non risolti o altri errori del linker che lo precedono nell'output di compilazione. Questo errore non viene segnalato quando non rimangono errori esterni non risolti.
