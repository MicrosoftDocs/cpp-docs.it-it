---
description: 'Altre informazioni su: incrementare e decrementare i puntatori'
title: Incremento e decremento dei puntatori
ms.date: 11/04/2016
helpviewer_keywords:
- incrementing pointers
- MBCS [C++], pointers
- pointers [C++], multibyte characters
- decrementing pointers
ms.assetid: 0872b4a0-e2bd-4004-8319-070efb76f2fd
ms.openlocfilehash: 3c333c11c5a0b68bf013dbd374eb1cc4e5f00abc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207319"
---
# <a name="incrementing-and-decrementing-pointers"></a>Incremento e decremento dei puntatori

Usare i suggerimenti seguenti:

- Posizionare il puntatore del mouse su lead bytes, not trail bytes. In genere non è sicuro avere un puntatore a un byte finale. È in genere più sicuro eseguire l'analisi di una stringa in un oggetto anziché in senso inverso.

- Sono disponibili funzioni di incremento/decremento del puntatore e macro disponibili che si spostano su un carattere intero:

    ```cpp
    sz1++;
    ```

    diventa:

    ```cpp
    sz1 = _mbsinc( sz1 );
    ```

   Le `_mbsinc` `_mbsdec` funzioni e incrementano e decrementano correttamente le `character` unità, indipendentemente dalle dimensioni del carattere.

- Per i decrementi, è necessario un puntatore all'inizio della stringa, come nell'esempio seguente:

    ```cpp
    sz2--;
    ```

    diventa:

    ```cpp
    sz2 = _mbsdec( sz2Head, sz2 );
    ```

   In alternativa, il puntatore Head potrebbe essere un carattere valido nella stringa, in modo che:

    ```cpp
    sz2Head < sz2
    ```

   È necessario disporre di un puntatore a un byte di apertura valido noto.

- Potrebbe essere necessario mantenere un puntatore al carattere precedente per chiamate più veloci a `_mbsdec` .

## <a name="see-also"></a>Vedi anche

[Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Indici di byte](../text/byte-indices.md)
