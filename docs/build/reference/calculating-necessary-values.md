---
description: 'Altre informazioni su: calcolo dei valori necessari per il caricamento ritardato'
title: Calcolare i valori necessari per il caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- helper functions, calculating necessary values
ms.openlocfilehash: ae5e0c15b5b13f12fd90c1378a1e449516b55f43
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667447"
---
# <a name="calculate-necessary-values-for-delay-loading"></a>Calcolare i valori necessari per il caricamento ritardato

La routine di supporto del caricamento ritardato deve calcolare due informazioni critiche. Per consentire il calcolo di queste informazioni, sono disponibili due funzioni inline in *`delayhlp.cpp`* .

- Il primo, `IndexFromPImgThunkData` , calcola l'indice dell'importazione corrente nelle tre tabelle diverse, ovvero la tabella di indirizzi di importazione (IAT), la tabella di indirizzi di importazione associata (BIAT) e la tabella degli indirizzi di importazione non associata (UIAT)).

- Il secondo, `CountOfImports` , conta il numero di importazioni in una IAT valida.

```C
// utility function for calculating the index of the current import
// for all the tables (INT, BIAT, UIAT, and IAT).
__inline unsigned
IndexFromPImgThunkData(PCImgThunkData pitdCur, PCImgThunkData pitdBase) {
    return pitdCur - pitdBase;
    }

// utility function for calculating the count of imports given the base
// of the IAT. NB: this only works on a valid IAT!
__inline unsigned
CountOfImports(PCImgThunkData pitdBase) {
    unsigned        cRet = 0;
    PCImgThunkData  pitd = pitdBase;
    while (pitd->u1.Function) {
        pitd++;
        cRet++;
        }
    return cRet;
    }
```

## <a name="see-also"></a>Vedi anche

[Informazioni sulla funzione di supporto](understanding-the-helper-function.md)
