---
title: Avviso LNK4020 degli strumenti del linker
ms.date: 05/29/2018
f1_keywords:
- LNK4020
helpviewer_keywords:
- LNK4020
ms.openlocfilehash: 7810fd9a97a8f6e22ad362819a024358a9f4b07c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50609742"
---
# <a name="linker-tools-warning-lnk4020"></a>Avviso LNK4020 degli strumenti del linker

> un record di tipo '*filename*' è danneggiata; alcuni simboli e i tipi potrebbero non essere accessibili dal debugger

Il file PDB *filename* dispone di un record di tipo danneggiato.

Questo problema è spesso secondario di altri problemi di compilazione; a meno che questo è il primo problema di compilazione segnalati, occuparsi di altri errori e avvisi prima. Se questo è il primo problema segnalato, si potrebbe essere necessario pulire la directory di compilazione e ricompilare il progetto. Se si usano i processi di compilazione in parallelo, vedere se l'errore persiste quando si serializza la compilazione.