---
description: Altre informazioni sulla direttiva alloc_text pragma in Microsoft C/C++
title: alloc_text pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.alloc_text
- alloc_text_CPP
helpviewer_keywords:
- alloc_text pragma
- pragma, alloc_text
no-loc:
- pragma
ms.openlocfilehash: f20cbf90952c6ac5793c5bdf4d2ef1c533be2126
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713129"
---
# <a name="alloc_text-no-locpragma"></a>`alloc_text` pragma

Denomina la sezione di codice in cui vengono inserite le definizioni di funzione specificate. pragmaDeve verificarsi tra un dichiaratore di funzione e la definizione di funzione per le funzioni denominate.

## <a name="syntax"></a>Sintassi

> **`#pragma alloc_text(`** "*Text-section*" **`,`** *function_1* [ **`,`** *function_2* ...] **`)`**

## <a name="remarks"></a>Osservazioni

**`alloc_text`** pragma Non gestisce funzioni membro C++ o funzioni in overload. È applicabile solo alle funzioni dichiarate con il collegamento C, ovvero funzioni dichiarate con la **`extern "C"`** specifica di collegamento. Se si tenta di usare questo oggetto pragma in una funzione con collegamento C++, viene generato un errore del compilatore.

Poiché l'indirizzamento **`__based`** della funzione using non è supportato, la specifica di percorsi di sezione richiede l'uso di **`alloc_text`** pragma . Il nome specificato dalla *sezione di testo* deve essere racchiuso tra virgolette doppie.

**`alloc_text`** pragma Deve essere visualizzato dopo le dichiarazioni di una delle funzioni specificate e prima delle definizioni di queste funzioni.

Le funzioni a cui viene fatto riferimento in un oggetto **`alloc_text`** pragma devono essere definite nello stesso modulo di pragma . In caso contrario, se una funzione non definita viene compilata in un secondo momento in un'altra sezione di testo, è possibile che l'errore non venga intercettato. Sebbene il programma venga in genere eseguito correttamente, la funzione non verrà allocata nelle sezioni desiderate.

Di seguito sono riportate altre limitazioni **`alloc_text`** :

- Non può essere usato all'interno di una funzione.

- Deve essere utilizzato dopo che la funzione è stata dichiarata, ma prima che la funzione sia stata definita.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
