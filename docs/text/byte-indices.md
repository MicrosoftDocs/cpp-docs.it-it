---
description: 'Altre informazioni su: indici di byte'
title: Indici di byte
ms.date: 11/04/2016
helpviewer_keywords:
- MBCS [C++], byte indices
- byte indices [C++]
ms.assetid: f6e7774a-86c6-41c2-89e3-74fd46432e47
ms.openlocfilehash: 5ee4b2cb8611893c71f5c6597e619cc73e2848ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187559"
---
# <a name="byte-indices"></a>Indici di byte

Usare i suggerimenti seguenti:

- L'utilizzo di un indice Bytewise in una stringa presenta problemi simili a quelli posti dalla manipolazione del puntatore. Si consideri questo esempio che esegue l'analisi di una stringa per un carattere barra rovesciata:

    ```cpp
    while ( rgch[ i ] != '\\' )
        i++;
    ```

   Questo potrebbe indicizzare un byte finale, non un byte iniziale, e pertanto potrebbe non puntare a un `character` .

- Usare la funzione [_mbclen](../c-runtime-library/reference/mbclen-mblen-mblen-l.md) per risolvere il problema precedente:

    ```cpp
    while ( rgch[ i ] != '\\' )
        i += _mbclen ( rgch + i );
    ```

   Questa operazione indicizza correttamente un byte di apertura, quindi a un `character` . La `_mbclen` funzione determina la dimensione di un carattere (1 o 2 byte).

## <a name="see-also"></a>Vedi anche

[Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Ultimo carattere in una stringa](../text/last-character-in-a-string.md)
