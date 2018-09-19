---
title: Strumenti del linker LNK1120 errore | Microsoft Docs
ms.custom: ''
ms.date: 05/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1120
dev_langs:
- C++
helpviewer_keywords:
- LNK1120
ms.assetid: 56aa7d36-921f-4daf-b44d-cca0d4fb1b51
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ea6cc7fdde3d68c9b00ba60c7fa650cbdfd3bd8d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086343"
---
# <a name="linker-tools-error-lnk1120"></a>Errore degli strumenti del linker LNK1120

> *numero* esterni non risolti

Errore LNK1120 riporta il conteggio (*numero*) degli errori di simbolo esterno non risolto per questa operazione di collegamento. La maggior parte non risolto gli errori di simbolo esterno vengono segnalati singolarmente [Errore degli strumenti del Linker LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md) e [Errore degli strumenti del Linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md), che precedono questo messaggio di errore, una volta per ogni esterno non risolto Errore di simbolo.

Per correggere questo errore, correggere tutti gli altri errori esterni non risolti o altri errori del linker che lo precedono nell'output di compilazione. Questo errore non viene segnalato quando non rimangono errori esterni non risolti.
