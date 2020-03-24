---
title: Avviso degli strumenti del linker LNK4020
ms.date: 05/29/2018
f1_keywords:
- LNK4020
helpviewer_keywords:
- LNK4020
ms.openlocfilehash: e818909cc0b590b0f7727846cfd7b469e8bc0e3f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194226"
---
# <a name="linker-tools-warning-lnk4020"></a>Avviso degli strumenti del linker LNK4020

> un record di tipo in '*filename*' è danneggiato. alcuni simboli e tipi potrebbero non essere accessibili dal debugger

Il *nome* file del file PDB ha un record di tipo danneggiato.

Questo problema è spesso secondario ad altri problemi di compilazione; a meno che non si tratti del primo problema di compilazione segnalato, gestire prima gli altri errori e avvisi. Se questo è il primo problema segnalato, potrebbe essere necessario pulire le directory di compilazione e ricompilare il progetto. Se si usano processi di compilazione paralleli, verificare se l'errore viene mantenuto quando si serializza la compilazione.
