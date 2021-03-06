---
description: 'Altre informazioni su: overflow del buffer'
title: Overflow del buffer
ms.date: 11/04/2016
helpviewer_keywords:
- buffers [C++], character sizes
- buffer overflows [C++]
- MBCS [C++], buffer overflow
ms.assetid: f2b7e40a-f02b-46d8-a449-51d26fc0c663
ms.openlocfilehash: 17da102b9a48a34d9879c08f0470ced3852ed0ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187598"
---
# <a name="buffer-overflow"></a>Overflow del buffer

Le dimensioni dei caratteri variabili possono causare problemi quando si inseriscono caratteri in un buffer. Si consideri il codice seguente, che copia i caratteri da una stringa, `sz` , in un buffer `rgch` :

```cpp
cb = 0;
while( cb < sizeof( rgch ) )
    rgch[ cb++ ] = *sz++;
```

La domanda è: l'ultimo byte ha copiato un byte di apertura? Quanto segue non risolve il problema perché può causare un overflow del buffer:

```cpp
cb = 0;
while( cb < sizeof( rgch ) )
{
    _mbccpy( rgch + cb, sz );
    cb += _mbclen( sz );
    sz = _mbsinc( sz );
}
```

La `_mbccpy` chiamata tenta di eseguire l'operazione corretta: copiare il carattere completo, se è 1 o 2 byte. Tuttavia, non prende in considerazione che l'ultimo carattere copiato potrebbe non rientrare nel buffer se il carattere è di 2 byte di larghezza. La soluzione corretta è la seguente:

```cpp
cb = 0;
while( (cb + _mbclen( sz )) <= sizeof( rgch ) )
{
    _mbccpy( rgch + cb, sz );
    cb += _mbclen( sz );
    sz = _mbsinc( sz );
}
```

Questo codice verifica il possibile overflow del buffer nel test del ciclo, usando `_mbclen` per verificare le dimensioni del carattere corrente a cui punta `sz` . Effettuando una chiamata alla `_mbsnbcpy` funzione, è possibile sostituire il codice nel **`while`** ciclo con una sola riga di codice. Ad esempio:

```cpp
_mbsnbcpy( rgch, sz, sizeof( rgch ) );
```

## <a name="see-also"></a>Vedere anche

[Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md)
