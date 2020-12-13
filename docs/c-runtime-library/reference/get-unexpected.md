---
description: 'Altre informazioni su: _get_unexpected'
title: _get_unexpected
ms.date: 11/04/2016
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
ms.openlocfilehash: 9c8f21815aa465e1325ef0519ba21abb1e506db3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338945"
---
# <a name="_get_unexpected"></a>_get_unexpected

Restituisce la routine di terminazione da chiamare da **Unexpected**.

## <a name="syntax"></a>Sintassi

```C
unexpected_function _get_unexpected( void );
```

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione registrata da [set_unexpected](set-unexpected-crt.md). Se nessuna funzione è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **null**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_unexpected**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[interruzione](abort.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[terminare](terminate-crt.md)<br/>
[inaspettato](unexpected-crt.md)<br/>
