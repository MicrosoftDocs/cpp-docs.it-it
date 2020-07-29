---
title: Identificatore di classi di archiviazione auto
ms.date: 11/04/2016
ms.assetid: 8e73f57e-aa92-4e41-91ea-5c8ad2a2b332
ms.openlocfilehash: e39b37e2dc91dce31b6871d721875c75b8ebd629
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223759"
---
# <a name="auto-storage-class-specifier"></a>`auto`Identificatore di classi di archiviazione

L' **`auto`** identificatore della classe di archiviazione dichiara una variabile automatica, una variabile con una durata locale. Una **`auto`** variabile è visibile solo nel blocco in cui è dichiarata. Le dichiarazioni di **`auto`** variabili possono includere inizializzatori, come illustrato in [inizializzazione](../c-language/initialization.md). Poiché le variabili con la **`auto`** classe di archiviazione non vengono inizializzate automaticamente, è necessario inizializzarle in modo esplicito quando vengono dichiarate oppure assegnare loro valori iniziali nelle istruzioni all'interno del blocco. I valori delle variabili non inizializzate non **`auto`** sono definiti. Una variabile locale di o di una **`auto`** **`register`** classe di archiviazione viene inizializzata ogni volta che rientra nell'ambito se viene fornito un inizializzatore.

Una **`static`** variabile interna (una variabile statica con ambito locale o di blocco) può essere inizializzata con l'indirizzo di qualsiasi **`static`** elemento o esterno, ma non con l'indirizzo di un altro **`auto`** elemento, perché l'indirizzo di un **`auto`** elemento non è una costante.

## <a name="see-also"></a>Vedere anche

[`auto`Parola chiave](../cpp/auto-keyword.md)
