---
title: _except_handler3
ms.date: 11/04/2016
apiname:
- _except_handler3
apilocation:
- msvcrt.dll
- msvcr90.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr100.dll
- msvcr110.dll
apitype: DLLExport
f1_keywords:
- _except_handler3
- except_handler3
helpviewer_keywords:
- _except_handler3 function
- except_handler3 function
ms.assetid: b0c64898-0ae5-48b7-9724-80135a0813e2
ms.openlocfilehash: 144bf25495d803a4db42ab45fcb0b101b09fe7cc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613863"
---
# <a name="excepthandler3"></a>_except_handler3

Funzione CRT interna. Usata da un framework per individuare il gestore di eccezioni appropriato per elaborare l'eccezione corrente.

## <a name="syntax"></a>Sintassi

```
int _except_handler3(
   PEXCEPTION_RECORD exception_record,
   PEXCEPTION_REGISTRATION registration,
   PCONTEXT context,
   PEXCEPTION_REGISTRATION dispatcher
);
```

#### <a name="parameters"></a>Parametri

*exception_record*<br/>
[in] Informazioni sulla specifica eccezione.

*registration*<br/>
[in] Record che indica la tabella di ambito da usare per cercare il gestore di eccezioni.

*context*<br/>
[in] Riservato.

*dispatcher*<br/>
[in] Riservato.

## <a name="return-value"></a>Valore restituito

Se un'eccezione deve essere chiusa, restituisce `DISPOSITION_DISMISS`. Se l'eccezione deve essere passata a un livello superiore, ai gestori di eccezioni in cui è incapsulata, restituisce `DISPOSITION_CONTINUE_SEARCH`.

## <a name="remarks"></a>Note

Se il metodo trova un gestore di eccezioni appropriato, passa l'eccezione al gestore. In questa situazione, il metodo non torna al codice che lo ha chiamato e il valore restituito è irrilevante.

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)