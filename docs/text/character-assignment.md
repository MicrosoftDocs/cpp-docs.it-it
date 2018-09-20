---
title: Assegnazione di caratteri | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- characters [C++], assignments
- MBCS [C++], character assignments
ms.assetid: dcc329cd-92df-4e20-817d-364be62ff28f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8e17ace90abef63ce4af1dd56b5bbe8dfed9510c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46429552"
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