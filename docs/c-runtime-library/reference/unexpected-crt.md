---
title: unexpected (CRT) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- unexpected function
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3fce88dd7b2fdb821fc015130d25e54701c3e467
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="unexpected-crt"></a>unexpected (CRT)

Le chiamate **terminare** o una funzione specificata utilizzando **set_unexpected**.

## <a name="syntax"></a>Sintassi

```C
void unexpected( void );
```

## <a name="remarks"></a>Note

Il **imprevisto** routine non viene usata con l'implementazione corrente di gestione delle eccezioni C++. **imprevisto** chiamate **terminare** per impostazione predefinita. È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione personalizzata e chiamando **set_unexpected** con il nome della funzione come relativo argomento. **imprevisto** chiama l'ultima funzione fornita come argomento al **set_unexpected**.

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
