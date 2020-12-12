---
description: 'Altre informazioni su: calcolo dei valori necessari'
title: Calcolo dei valori necessari
ms.date: 11/04/2016
helpviewer_keywords:
- helper functions, calculating necessary values
ms.assetid: 4f037d0f-881a-4a48-a9d2-9f8872dfccb7
ms.openlocfilehash: 92d8462be2db55dbc10375629b133d9286560878
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179343"
---
# <a name="calculating-necessary-values"></a>Calcolo dei valori necessari

Due informazioni critiche devono essere calcolate dalla routine di supporto ritardato. A tal fine, per il calcolo di queste informazioni sono disponibili due funzioni inline in delayhlp. cpp.

- Il primo calcola l'indice dell'importazione corrente nelle tre tabelle diverse, ovvero la tabella di indirizzi di importazione (IAT), la tabella di indirizzi di importazione associata (BIAT) e la tabella degli indirizzi di importazione non associata (UIAT)).

- Il secondo conta il numero di importazioni in una IAT valida.

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

## <a name="see-also"></a>Vedi anche

[Informazioni sulla funzione helper](understanding-the-helper-function.md)
