---
description: 'Altre informazioni su: BSCMAKE Error BK1503'
title: Errore BK1503 di BSCMAKE
ms.date: 11/04/2016
f1_keywords:
- BK1503
helpviewer_keywords:
- BK1503
ms.assetid: e6582344-b91e-486f-baf3-4f9028d83c3b
ms.openlocfilehash: 0e789aa54241df5245f4c3a02a9307a97d51730c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322999"
---
# <a name="bscmake-error-bk1503"></a>Errore BK1503 di BSCMAKE

Impossibile scrivere nel file ' filename ' [: Reason]

BSCMAKE combina i file SBR generati durante la compilazione in un unico database del browser. Se il database del browser risultante supera 64 MB o se il numero di file di input (con estensione SBR) è superiore a 4092, verrà generato questo errore.

Se il problema è causato da più di 4092 file SBR, è necessario ridurre il numero di file di input. Dall'interno di Visual Studio, questa operazione può essere eseguita [/fr](../../build/reference/fr-fr-create-dot-sbr-file.md) l'intero progetto, quindi ricontrollando il file in base al file.

Se il problema è causato da un file BSC di dimensioni superiori a 64 MB, la riduzione del numero di file SBR come input comporta una riduzione delle dimensioni del file BSC risultante. Inoltre, la quantità di informazioni di visualizzazione può essere ridotta tramite l'utilizzo di/em (escludere i simboli espanso della macro),/El (escludere le variabili locali) e/es (escludere i file di sistema).

## <a name="see-also"></a>Vedi anche

[Opzioni di BSCMAKE](../../build/reference/bscmake-options.md)
