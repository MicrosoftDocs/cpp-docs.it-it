---
title: Indici di byte | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MBCS [C++], byte indices
- byte indices [C++]
ms.assetid: f6e7774a-86c6-41c2-89e3-74fd46432e47
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 11f7f78e87ddd40fd3cf85fc294e8fadac5dbe45
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46423793"
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