---
title: alloc_text
ms.date: 11/04/2016
f1_keywords:
- vc-pragma.alloc_text
- alloc_text_CPP
helpviewer_keywords:
- alloc_text pragma
- pragmas, alloc_text
ms.assetid: 1fd7be18-e4f7-4f70-b079-6326f72b871a
ms.openlocfilehash: 399e8956a511f289b480e66db7f03cac0a6c7c20
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031365"
---
# <a name="alloctext"></a>alloc_text
Assegnare un nome alla sezione di codice in cui devono essere presenti le definizioni di funzioni specificate. Il pragma deve essere trovarsi tra un dichiaratore di funzione e la definizione di funzione per le funzioni denominate.

## <a name="syntax"></a>Sintassi

```
#pragma alloc_text( "
textsection
", function1, ... )
```

## <a name="remarks"></a>Note

Il **alloc_text** pragma non gestisce le funzioni membro C++ o funzioni in overload. È applicabile solo a funzioni dichiarate con collegamento C, vale a dire, le funzioni dichiarate con il **extern "C"** specifiche di collegamento. Se si tenta di utilizzare questo pragma in una funzione con collegamento C++, viene generato un errore del compilatore.

Poiché le funzioni indirizzamento usando `__based` non è supportato, specificare percorsi della sezione richiede l'uso del **alloc_text** pragma. Il nome specificato da *textsection* deve essere racchiuso tra virgolette doppie.

Il **alloc_text** pragma deve essere visualizzate dopo le dichiarazioni di tutte le funzioni specificate e prima delle definizioni di queste funzioni.

Funzioni a cui fa riferimento un' **alloc_text** pragma deve essere definito nello stesso modulo del pragma. Se questa operazione non viene eseguita e una funzione non definita viene compilata in seguito in una sezione del testo diversa, l'errore può essere individuato o meno. Sebbene il programma in genere venga eseguito correttamente, la funzione non verrà allocata nelle sezioni desiderate.

Altre limitazioni sul **alloc_text** sono i seguenti:

- Non può essere utilizzato in una funzione.

- Deve essere utilizzato dopo che la funzione è stata dichiarata, ma prima che la funzione sia stata definita.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)