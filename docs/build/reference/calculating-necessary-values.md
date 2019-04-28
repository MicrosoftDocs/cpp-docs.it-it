---
title: Calcolo dei valori necessari
ms.date: 11/04/2016
helpviewer_keywords:
- helper functions, calculating necessary values
ms.assetid: 4f037d0f-881a-4a48-a9d2-9f8872dfccb7
ms.openlocfilehash: 75952bbcdf823aa675b35702841c81e511105ca8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272650"
---
# <a name="calculating-necessary-values"></a>Calcolo dei valori necessari

Due tipi di informazioni critiche devono essere calcolate in base alla routine di supporto di ritardo. A tale scopo, sono disponibili due funzioni inline in cpp per il calcolo di queste informazioni.

- Il primo calcola l'indice dell'importazione corrente in tre diverse tabelle (importazione (IAT) tabella di indirizzi, tabella IAT associato (BIAT) e tabella IAT non associato (UIAT)).

- Il secondo conta il numero di importazioni in una tabella IAT valida.

```cpp
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

## <a name="see-also"></a>Vedere anche

[Informazioni sulla funzione di supporto](understanding-the-helper-function.md)
