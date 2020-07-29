---
title: Nessun collegamento
ms.date: 11/04/2016
helpviewer_keywords:
- no linkage
- linkage [C++], none
ms.assetid: 5a413082-1034-4e04-b76b-8d14668bf434
ms.openlocfilehash: a7c9a5b8f0ba92830500e55818093981a044d2df
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218806"
---
# <a name="no-linkage"></a>Nessun collegamento

Se una dichiarazione di un identificatore all'interno di un blocco non include l' **`extern`** identificatore della classe di archiviazione, l'identificatore non dispone di collegamento ed è univoco per la funzione.

I seguenti identificatori non dispongono di collegamento:

- Identificatori dichiarati come elementi diversi da un oggetto o da una funzione

- Identificatori dichiarati come parametri di una funzione

- Identificatore con ambito blocco per un oggetto dichiarato senza l' **`extern`** identificatore di classe di archiviazione

Se un identificatore non dispone di collegamento, dichiarando nuovamente lo stesso nome (in un dichiaratore o in un identificatore di tipo) nello stesso livello di ambito verrà generato un errore di ridefinizione dei simboli.

## <a name="see-also"></a>Vedere anche

[Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)
