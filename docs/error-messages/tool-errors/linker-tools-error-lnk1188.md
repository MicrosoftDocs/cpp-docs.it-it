---
title: Errore degli strumenti del linker LNK1188
ms.date: 11/04/2016
f1_keywords:
- LNK1188
helpviewer_keywords:
- LNK1188
ms.assetid: 4af574b0-5b41-4580-9a37-52a634add995
ms.openlocfilehash: 69ac20522aebb7391319c0de210e06b305f3fd0d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50461256"
---
# <a name="linker-tools-error-lnk1188"></a>Errore degli strumenti del linker LNK1188

BADFIXUPSECTION:: destinazione di correzione non è valido 'symbol'; possibili sezione abbia lunghezza zero

Durante un collegamento VxD, la destinazione di una rilocazione non dispone di una sezione. Con LINK386 (una versione precedente), un record gruppo OMF (generato da una direttiva di MASM gruppo) potrebbe essere stato utilizzato per combinare la sezione abbia lunghezza zero con un'altra sezione di lunghezza maggiore di zero. Formato COFF non supporta la direttiva di gruppo e sezioni di lunghezza zero. Quando LINK converte automaticamente questo tipo di oggetti OMF a COFF, questo errore può verificarsi.