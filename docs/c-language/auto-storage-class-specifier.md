---
description: 'Altre informazioni su: `auto` identificatore Storage-Class'
title: Identificatore di classi di archiviazione auto
ms.date: 11/04/2016
ms.assetid: 8e73f57e-aa92-4e41-91ea-5c8ad2a2b332
ms.openlocfilehash: a20e599ca7189548f92a78ff378e3b5f9f202b3d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97279864"
---
# <a name="auto-storage-class-specifier"></a>`auto` Identificatore Storage-Class

L' **`auto`** identificatore della classe di archiviazione dichiara una variabile automatica, una variabile con una durata locale. Una **`auto`** variabile è visibile solo nel blocco in cui è dichiarata. Le dichiarazioni di **`auto`** variabili possono includere inizializzatori, come illustrato in [inizializzazione](../c-language/initialization.md). Poiché le variabili con la **`auto`** classe di archiviazione non vengono inizializzate automaticamente, è necessario inizializzarle in modo esplicito quando vengono dichiarate oppure assegnare loro valori iniziali nelle istruzioni all'interno del blocco. I valori delle variabili non inizializzate non **`auto`** sono definiti. Una variabile locale di o di una **`auto`** **`register`** classe di archiviazione viene inizializzata ogni volta che rientra nell'ambito se viene fornito un inizializzatore.

Una **`static`** variabile interna (una variabile statica con ambito locale o di blocco) può essere inizializzata con l'indirizzo di qualsiasi **`static`** elemento o esterno, ma non con l'indirizzo di un altro **`auto`** elemento, perché l'indirizzo di un **`auto`** elemento non è una costante.

## <a name="see-also"></a>Vedi anche

[`auto` Parola chiave](../cpp/auto-cpp.md)
