---
title: Indici di byte
ms.date: 11/04/2016
helpviewer_keywords:
- MBCS [C++], byte indices
- byte indices [C++]
ms.assetid: f6e7774a-86c6-41c2-89e3-74fd46432e47
ms.openlocfilehash: 5305a977c23d7a978a89c84809cc6fab8c5731eb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410722"
---
# <a name="byte-indices"></a>Indici di byte

Usare i suggerimenti seguenti:

- Quando si utilizza con un indice vettori di byte in una stringa presenta problemi simili a quelli derivanti dalle modifiche ai puntatori. Si consideri questo esempio, che consente di analizzare una stringa di un carattere di barra rovesciata:

    ```cpp
    while ( rgch[ i ] != '\\' )
        i++;
    ```

   Ciò può indicizzare un byte finale, non è un byte di apertura, e in questo modo potrebbe non indicare una `character`.

- Usare la [mbclen](../c-runtime-library/reference/mbclen-mblen-mblen-l.md) funzione per risolvere il problema precedente:

    ```cpp
    while ( rgch[ i ] != '\\' )
        i += _mbclen ( rgch + i );
    ```

   Questa stringa indicizza correttamente a un byte di apertura, di conseguenza per un `character`. Il `_mbclen` funzione determina le dimensioni di un carattere (1 o 2 byte).

## <a name="see-also"></a>Vedere anche

[Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Ultimo carattere di una stringa](../text/last-character-in-a-string.md)
