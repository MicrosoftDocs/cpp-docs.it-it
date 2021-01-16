---
description: 'Altre informazioni su: imprevisto (CRT)'
title: unexpected (CRT)
ms.date: 1/14/2021
api_name:
- unexpected
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
- unexpected
helpviewer_keywords:
- unexpected function
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
ms.openlocfilehash: 098d686e7c33d17020990b1db168d95c327d5112
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98242904"
---
# <a name="unexpected-crt"></a>`unexpected` CRT

Chiama **`terminate`** o la funzione specificata tramite **`set_unexpected`** .

## <a name="syntax"></a>Sintassi

```C
void unexpected( void );
```

## <a name="remarks"></a>Osservazioni

La **`unexpected`** routine non viene utilizzata con l'implementazione corrente della gestione delle eccezioni C++. **`unexpected`** chiama **`terminate`** per impostazione predefinita. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata. Chiamare **`set_unexpected`** con il nome della funzione come argomento. **`unexpected`** chiama l'ultima funzione passata a **`set_unexpected`** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`unexpected`**|`<eh.h>`|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[interruzione](abort.md)<br/>
[_set_se_translator](set-se-translator.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminare](terminate-crt.md)<br/>
