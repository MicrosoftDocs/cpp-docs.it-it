---
title: _fmode
ms.date: 11/04/2016
f1_keywords:
- fmode
- _fmode
helpviewer_keywords:
- file translation [C++], default mode
- fmode function
- _fmode function
ms.assetid: ac6df9eb-e5cc-4c54-aff3-373c21983118
ms.openlocfilehash: a41d665eab50203fc3bb176f8bb1bbc30737e844
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57741945"
---
# <a name="fmode"></a>_fmode

La variabile `_fmode` imposta la modalità di conversione di file predefinita per la conversione in modalità testo o binaria. Questa variabile globale è stata deprecata a favore delle versioni funzionali più sicure [_get_fmode](../c-runtime-library/reference/get-fmode.md) e [_set_fmode](../c-runtime-library/reference/set-fmode.md), che devono essere usate al posto della variabile globale. È dichiarata in Stdlib.h come segue.

## <a name="syntax"></a>Sintassi

```
extern int _fmode;
```

## <a name="remarks"></a>Osservazioni

L'impostazione predefinita di `_fmode` è `_O_TEXT` per la conversione in modalità testo. `_O_BINARY` è l'impostazione per la modalità binaria.

È possibile modificare il valore di `_fmode` in tre modi:

- Collegamento con Binmode.obj. In questo modo, l'impostazione iniziale di `_fmode` cambia in `_O_BINARY`, causando l'apertura in modalità binaria di tutti i file tranne `stdin`, `stdout` e `stderr`.

- Chiamata a `_get_fmode` o `_set_fmode` per ottenere o impostare rispettivamente la variabile globale`_fmode`.

- Modifica del valore di `_fmode` impostandolo direttamente nel programma.

## <a name="see-also"></a>Vedere anche

[Variabili globali](../c-runtime-library/global-variables.md)<br/>
[_get_fmode](../c-runtime-library/reference/get-fmode.md)<br/>
[_set_fmode](../c-runtime-library/reference/set-fmode.md)
