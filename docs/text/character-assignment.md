---
title: Assegnazione di caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- characters [C++], assignments
- MBCS [C++], character assignments
ms.assetid: dcc329cd-92df-4e20-817d-364be62ff28f
ms.openlocfilehash: 0f627f88ca2b1d3533d3690cd0316ee047a327ad
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217311"
---
# <a name="character-assignment"></a>Assegnazione di caratteri

Si consideri l'esempio seguente, in cui il **`while`** ciclo analizza una stringa, copiando tutti i caratteri ad eccezione di ' X ' in un'altra stringa:

```cpp
while( *sz2 )
{
    if( *sz2 != 'X' )
        *sz1++ = *sz2++;
    else
        sz2++;
}
```

Il codice copia il byte in nella posizione a cui `sz2` punta `sz1` , quindi incrementa `sz1` per ricevere il byte successivo. Tuttavia, se il carattere successivo in `sz2` è un carattere a doppio byte, l'assegnazione a `sz1` copia solo il primo byte. Il codice seguente usa una funzione portabile per copiare il carattere in modo sicuro e un altro per incrementare `sz1` e `sz2` correttamente:

```cpp
while( *sz2 )
{
    if( *sz2 != 'X' )
    {
        _mbscpy_s( sz1, 1, sz2 );
        sz1 = _mbsinc( sz1 );
        sz2 = _mbsinc( sz2 );
    }
    else
        sz2 = _mbsinc( sz2 );
}
```

## <a name="see-also"></a>Vedere anche

[Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Confronto di caratteri](../text/character-comparison.md)
