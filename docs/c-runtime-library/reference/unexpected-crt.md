---
title: unexpected (CRT)
ms.date: 11/04/2016
apiname:
- unexpected
apilocation:
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
apitype: DLLExport
f1_keywords:
- unexpected
helpviewer_keywords:
- unexpected function
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
ms.openlocfilehash: 78538c0a10e183e72c742b041b297275c0859a03
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534020"
---
# <a name="unexpected-crt"></a>unexpected (CRT)

Le chiamate **terminare** o una funzione specificata utilizzando **set_unexpected**.

## <a name="syntax"></a>Sintassi

```C
void unexpected( void );
```

## <a name="remarks"></a>Note

Il **imprevisto** routine non viene usata con l'implementazione corrente di gestione delle eccezioni C++. **imprevista** chiamate **terminare** per impostazione predefinita. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando **set_unexpected** con il nome della funzione come relativo argomento. **imprevista** chiama l'ultima funzione fornita come argomento al **set_unexpected**.

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
