---
title: LNK4020 Avviso degli strumenti del linker | Documenti Microsoft
ms.custom: ''
ms.date: 05/29/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4020
dev_langs:
- C++
helpviewer_keywords:
- LNK4020
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7e55239b90910f6c151949c53939d4f8ed7c15c5
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34570693"
---
# <a name="linker-tools-warning-lnk4020"></a>Avviso LNK4020 degli strumenti del linker

> un record di tipo '*filename*' è danneggiata; alcuni tipi e simboli non sia accessibili dal debugger

Il file PDB *filename* dispone di un record di tipo danneggiato.

Questo problema è spesso secondario di altri problemi di compilazione; Se non è il primo problema di compilazione segnalati, gestire gli altri errori e avvisi prima. Se questo è il primo problema segnalato, potrebbe essere necessario eseguire la pulizia delle directory di compilazione e ricompilare il progetto. Se si usa i processi di compilazione parallela, vedere se l'errore persiste durante la serializzazione della compilazione.