---
description: 'Altre informazioni su: _except_handler3'
title: _except_handler3
ms.date: 1/14/2021
api_name:
- _except_handler3
api_location:
- msvcrt.dll
- msvcr90.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr100.dll
- msvcr110.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _except_handler3
- except_handler3
helpviewer_keywords:
- _except_handler3 function
- except_handler3 function
ms.assetid: b0c64898-0ae5-48b7-9724-80135a0813e2
ms.openlocfilehash: fdeefce15401530468976cba1be737ac13512ccb
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98242995"
---
# <a name="_except_handler3"></a>_except_handler3

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

*registrazione*<br/>
[in] Record che indica la tabella di ambito da usare per cercare il gestore di eccezioni.

*context*<br/>
[in] Riservato.

*Dispatcher*<br/>
[in] Riservato.

## <a name="return-value"></a>Valore restituito

Se un'eccezione deve essere chiusa, restituisce `DISPOSITION_DISMISS`. Se l'eccezione deve essere passata a un livello superiore, ai gestori di eccezioni in cui è incapsulata, restituisce `DISPOSITION_CONTINUE_SEARCH`.

## <a name="remarks"></a>Commenti

Se il metodo trova un gestore di eccezioni appropriato, passa l'eccezione al gestore. In questa situazione, il metodo non torna al codice che lo ha chiamato e il valore restituito è irrilevante.

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)
