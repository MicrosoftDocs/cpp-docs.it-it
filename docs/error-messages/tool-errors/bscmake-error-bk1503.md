---
title: Errore BK1503 di BSCMAKE
ms.date: 11/04/2016
f1_keywords:
- BK1503
helpviewer_keywords:
- BK1503
ms.assetid: e6582344-b91e-486f-baf3-4f9028d83c3b
ms.openlocfilehash: c81e955b912e03b322c0429097410fae74713b9d
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59031592"
---
# <a name="bscmake-error-bk1503"></a>Errore BK1503 di BSCMAKE

Impossibile scrivere nel file 'nomefile' [: motivo]

BSCMAKE combina i file SBR generati durante la compilazione in un unico database. Se il database risultante supera i 64 MB o se il numero di file di input (SBR) supera 4092, verrà generato questo errore.

Se il problema è causato da più di 4092 file sbr, è necessario ridurre il numero di file di input. Dall'interno di Visual Studio, questo scopo è possibile [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) l'intero progetto, quindi controlla di nuovo su una base file per file.

Se il problema è causato da un file BSC maggiori di 64MB, riducendo il numero di file sbr come input diminuirà la dimensione del file con estensione BSC risultante. Inoltre, la quantità di informazioni di visualizzazione può essere ridotto mediante l'uso di/em (Escludi Macro espansi i simboli), /El (escludere le variabili locali) e /Es (Escludi file System).

## <a name="see-also"></a>Vedere anche

[Opzioni di BSCMAKE](../../build/reference/bscmake-options.md)