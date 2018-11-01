---
title: Assegnazione di caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- characters [C++], assignments
- MBCS [C++], character assignments
ms.assetid: dcc329cd-92df-4e20-817d-364be62ff28f
ms.openlocfilehash: 9099382a212f9f7bd6c071f4e4d9a0c2bc8887de
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50435373"
---
# <a name="character-assignment"></a>Assegnazione di caratteri

Si consideri l'esempio seguente, in cui il **mentre** ciclo analizza una stringa, la copia di tutti i caratteri eccetto 'X' in un'altra stringa:

```cpp
while( *sz2 )
{
    if( *sz2 != 'X' )
        *sz1++ = *sz2++;
    else
        sz2++;
}
```

Il codice copia i byte in corrispondenza `sz2` al percorso a cui punta `sz1`, quindi incrementa `sz1` per ricevere il byte successivo. Tuttavia, se il carattere successivo nel `sz2` è un carattere a byte doppio, l'assegnazione al `sz1` copiato solo il primo byte. Il codice seguente usa una funzione portatile per copiare in modo sicuro il carattere e un altro per incrementare `sz1` e `sz2` correttamente:

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

[Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Confronto tra caratteri](../text/character-comparison.md)