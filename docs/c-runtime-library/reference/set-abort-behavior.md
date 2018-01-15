---
title: _set_abort_behavior | Microsoft Docs
ms.custom: 
ms.date: 1/02/2018
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _set_abort_behavior
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _set_abort_behavior
- set_abort_behavior
dev_langs: C++
helpviewer_keywords:
- aborting programs
- _set_abort_behavior function
- set_abort_behavior function
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 965ff160fd8098c60f53f639cb95aedf890edd86
ms.sourcegitcommit: a5d8f5b92cb5e984d5d6c9d67fe8a1241f3fe184
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/05/2018
---
# <a name="setabortbehavior"></a>_set_abort_behavior

Specifica l'azione da eseguire quando un programma viene terminato in modo anomalo.

> [!NOTE]
> Non utilizzare il `abort` funzione per arrestare un'app Store di Microsoft, ad eccezione di testing o scenari di debug. Modalità a livello di codice o dell'interfaccia utente per chiudere un'app di Store non sono consentiti in base al [criteri di Microsoft Store](http://go.microsoft.com/fwlink/?LinkId=865936). Per ulteriori informazioni, vedere [ciclo di vita app UWP](http://go.microsoft.com/fwlink/p/?LinkId=865934).

## <a name="syntax"></a>Sintassi

```C
unsigned int _set_abort_behavior(
   unsigned int flags,
   unsigned int mask
);
```

### <a name="parameters"></a>Parametri

[in] _flag_  
Nuovo valore dei flag `abort`.

[in] _maschera_  
Maschera per i bit dei flag `abort` da impostare.

## <a name="return-value"></a>Valore restituito

Valore precedente dei flag.

## <a name="remarks"></a>Note

Esistono due flag `abort`: `_WRITE_ABORT_MSG` e `_CALL_REPORTFAULT`. `_WRITE_ABORT_MSG` determina se viene stampato un messaggio di testo utile quando un programma viene terminato in modo anomalo. Il messaggio indica che l'applicazione ha chiamato la funzione `abort`. Il comportamento predefinito prevede la stampa del messaggio. `_CALL_REPORTFAULT`, se impostato, specifica che viene generato e segnalato un dump di arresto anomalo di Dr. Watson in seguito alla chiamata di `abort`. Per impostazione predefinita, la segnalazione di dump di arresto anomalo del sistema è abilitata per le compilazioni non di debug.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_set_abort_behavior`|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_set_abort_behavior.c
// compile with: /TC
#include <stdlib.h>

int main()
{
   printf("Suppressing the abort message. If successful, this message"
          " will be the only output.\n");
   // Suppress the abort message
   _set_abort_behavior( 0, _WRITE_ABORT_MSG);
   abort();
}
```

```Output
Suppressing the abort message. If successful, this message will be the only output.
```

## <a name="see-also"></a>Vedere anche

[abort](../../c-runtime-library/reference/abort.md)  
