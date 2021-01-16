---
description: 'Altre informazioni su: _get_unexpected'
title: _get_unexpected
ms.date: 1/14/2021
api_name:
- _get_unexpected
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __get_unexpected
- _get_unexpected
- get_unexpected
helpviewer_keywords:
- __get_unexpected function
- get_unexpected function
- _get_unexpected function
ms.assetid: a5f7a7a0-18e0-485e-953d-db291068a1e8
ms.openlocfilehash: fb23aa9eee66a4ed981e5575e5a36ad4bbb39f84
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98242618"
---
# `_get_unexpected`

Restituisce la routine di terminazione da chiamare da **`unexpected`** .

## <a name="syntax"></a>Sintassi

```C
unexpected_function _get_unexpected( void );
```

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione registrata da [`set_unexpected`](set-unexpected-crt.md) . Se nessuna funzione è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **`NULL`** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`_get_unexpected`**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[`abort`](abort.md)<br/>
[`set_terminate`](set-terminate-crt.md)<br/>
[`terminate`](terminate-crt.md)<br/>
[`unexpected`](unexpected-crt.md)<br/>
