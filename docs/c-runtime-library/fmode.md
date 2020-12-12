---
description: 'Altre informazioni su: _fmode'
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
ms.openlocfilehash: c4e7932369a2ad63b5498078e46cd5610b679ee0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97303887"
---
# <a name="_fmode"></a>_fmode

La variabile `_fmode` imposta la modalità di conversione di file predefinita per la conversione in modalità testo o binaria. Questa variabile globale è stata deprecata a favore delle versioni funzionali più sicure [_get_fmode](../c-runtime-library/reference/get-fmode.md) e [_set_fmode](../c-runtime-library/reference/set-fmode.md), che devono essere usate al posto della variabile globale. È dichiarata in Stdlib.h come segue.

## <a name="syntax"></a>Sintassi

```
extern int _fmode;
```

## <a name="remarks"></a>Osservazioni

L'impostazione predefinita di `_fmode` è `_O_TEXT` per la conversione in modalità testo. `_O_BINARY` è l'impostazione per la modalità binaria.

È possibile modificare il valore di `_fmode` in tre modi:

- Collegamento a BINMODE. obj. In questo modo viene modificata l'impostazione iniziale di `_fmode` su `_O_BINARY` , causando l' `stdin` `stdout` `stderr` apertura in modalità binaria di tutti i file ad eccezione di, e.

- Chiamata a `_get_fmode` o `_set_fmode` per ottenere o impostare rispettivamente la variabile globale`_fmode`.

- Modifica del valore di `_fmode` impostandolo direttamente nel programma.

## <a name="see-also"></a>Vedi anche

[Variabili globali](../c-runtime-library/global-variables.md)<br/>
[_get_fmode](../c-runtime-library/reference/get-fmode.md)<br/>
[_set_fmode](../c-runtime-library/reference/set-fmode.md)
