---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4020'
title: Avviso degli strumenti del linker LNK4020
ms.date: 05/29/2018
f1_keywords:
- LNK4020
helpviewer_keywords:
- LNK4020
ms.openlocfilehash: 1f658b999f57a8b4eeaa01e2586bc356da5f91a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331961"
---
# <a name="linker-tools-warning-lnk4020"></a>Avviso degli strumenti del linker LNK4020

> un record di tipo in '*filename*' è danneggiato. alcuni simboli e tipi potrebbero non essere accessibili dal debugger

Il *nome* file del file PDB ha un record di tipo danneggiato.

Questo problema è spesso secondario ad altri problemi di compilazione; a meno che non si tratti del primo problema di compilazione segnalato, gestire prima gli altri errori e avvisi. Se questo è il primo problema segnalato, potrebbe essere necessario pulire le directory di compilazione e ricompilare il progetto. Se si usano processi di compilazione paralleli, verificare se l'errore viene mantenuto quando si serializza la compilazione.
