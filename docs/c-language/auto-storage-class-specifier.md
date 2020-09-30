---
title: Identificatore di classi di archiviazione auto
ms.date: 11/04/2016
ms.assetid: 8e73f57e-aa92-4e41-91ea-5c8ad2a2b332
ms.openlocfilehash: 7f70ee1944e07ebcbd32b8110eee27fa6631be63
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509316"
---
# <a name="auto-storage-class-specifier"></a>`auto` Identificatore di classi di archiviazione

L' **`auto`** identificatore della classe di archiviazione dichiara una variabile automatica, una variabile con una durata locale. Una **`auto`** variabile è visibile solo nel blocco in cui è dichiarata. Le dichiarazioni di **`auto`** variabili possono includere inizializzatori, come illustrato in [inizializzazione](../c-language/initialization.md). Poiché le variabili con la **`auto`** classe di archiviazione non vengono inizializzate automaticamente, è necessario inizializzarle in modo esplicito quando vengono dichiarate oppure assegnare loro valori iniziali nelle istruzioni all'interno del blocco. I valori delle variabili non inizializzate non **`auto`** sono definiti. Una variabile locale di o di una **`auto`** **`register`** classe di archiviazione viene inizializzata ogni volta che rientra nell'ambito se viene fornito un inizializzatore.

Una **`static`** variabile interna (una variabile statica con ambito locale o di blocco) può essere inizializzata con l'indirizzo di qualsiasi **`static`** elemento o esterno, ma non con l'indirizzo di un altro **`auto`** elemento, perché l'indirizzo di un **`auto`** elemento non è una costante.

## <a name="see-also"></a>Vedere anche

[`auto` Parola chiave](../cpp/auto-cpp.md)
