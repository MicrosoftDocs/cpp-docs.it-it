---
title: unexpected (CRT)
ms.date: 11/04/2016
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- unexpected
helpviewer_keywords:
- unexpected function
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
ms.openlocfilehash: 796f5ddbf8467656b5430de1d504f162d891864d
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957814"
---
# <a name="unexpected-crt"></a>unexpected (CRT)

Chiama **Terminate** o la funzione specificata usando **set_unexpected**.

## <a name="syntax"></a>Sintassi

```C
void unexpected( void );
```

## <a name="remarks"></a>Note

La routine **imprevista** non viene utilizzata con l'implementazione corrente C++ della gestione delle eccezioni. chiamate **impreviste** **terminano** per impostazione predefinita. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando **set_unexpected** con il nome della funzione come argomento. **imprevisto** chiama l'ultima funzione fornita come argomento a **set_unexpected**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**Imprevisto**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[_set_se_translator](set-se-translator.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
