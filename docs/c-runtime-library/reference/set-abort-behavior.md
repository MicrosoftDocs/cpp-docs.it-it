---
title: _set_abort_behavior
ms.date: 4/2/2020
api_name:
- _set_abort_behavior
- _o__set_abort_behavior
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
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _set_abort_behavior
- set_abort_behavior
helpviewer_keywords:
- aborting programs
- _set_abort_behavior function
- set_abort_behavior function
ms.openlocfilehash: fd3a3c2f99d1702cdccf68328c2122b965b2d078
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337879"
---
# <a name="_set_abort_behavior"></a>_set_abort_behavior

Specifica l'azione da eseguire quando un programma viene terminato in modo anomalo.

> [!NOTE]
> Non usare la funzione [abort](abort.md) per arrestare un'app di Microsoft Store, tranne negli scenari di test o debug. Le modalità a livello di codice o dell'interfaccia utente per chiudere un'app di Store non sono consentite in base ai criteri di [Microsoft Store.](/legal/windows/agreements/store-policies) Per altre informazioni, vedere Ciclo di [vita dell'app UWP](/windows/uwp/launch-resume/app-lifecycle).

## <a name="syntax"></a>Sintassi

```C
unsigned int _set_abort_behavior(
   unsigned int flags,
   unsigned int mask
);
```

### <a name="parameters"></a>Parametri

*Bandiere*<br/>
Nuovo valore dei flag [di interruzione.](abort.md)

*mask*<br/>
Maschera per i bit di flag di [interruzione](abort.md) da impostare.

## <a name="return-value"></a>Valore restituito

Valore precedente dei flag.

## <a name="remarks"></a>Osservazioni

Esistono due flag di [interruzione:](abort.md) **_WRITE_ABORT_MSG** e **_CALL_REPORTFAULT**. **_WRITE_ABORT_MSG** determina se un messaggio di testo utile viene stampato quando un programma viene terminato in modo anomalo. Il messaggio indica che l'applicazione ha chiamato la funzione [abort.](abort.md) Il comportamento predefinito prevede la stampa del messaggio. **_CALL_REPORTFAULT,** se impostato, specifica che un dump di arresto anomalo di Watson viene generato e segnalato quando viene chiamato [l'interruzione.](abort.md) Per impostazione predefinita, la segnalazione di dump di arresto anomalo del sistema è abilitata per le compilazioni non di debug.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_abort_behavior**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Interrompere](abort.md)<br/>
