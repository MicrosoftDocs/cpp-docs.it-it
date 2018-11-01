---
title: _set_abort_behavior
ms.date: 1/02/2018
apiname:
- _set_abort_behavior
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
helpviewer_keywords:
- aborting programs
- _set_abort_behavior function
- set_abort_behavior function
ms.openlocfilehash: 8b36a771a3694c6d01573d619990743c7ddc0f3e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643053"
---
# <a name="setabortbehavior"></a>_set_abort_behavior

Specifica l'azione da eseguire quando un programma viene terminato in modo anomalo.

> [!NOTE]
> Non usare la [abort](abort.md) funzione per arrestare un'app di Microsoft Store, ad eccezione di test o gli scenari di debug. Modalità dell'interfaccia utente o a livello di codice per chiudere un'app di Store non sono consentiti in base al [i criteri di Microsoft Store](/legal/windows/agreements/store-policies). Per altre informazioni, vedere [ciclo di vita app UWP](/windows/uwp/launch-resume/app-lifecycle).

## <a name="syntax"></a>Sintassi

```C
unsigned int _set_abort_behavior(
   unsigned int flags,
   unsigned int mask
);
```

### <a name="parameters"></a>Parametri

*flags*<br/>
Nuovo valore della [abort](abort.md) flag.

*Maschera*<br/>
Maschera per la [abort](abort.md) flag di bit da impostare.

## <a name="return-value"></a>Valore restituito

Valore precedente dei flag.

## <a name="remarks"></a>Note

Esistono due [abort](abort.md) flag: **_WRITE_ABORT_MSG** e **_CALL_REPORTFAULT**. **_WRITE_ABORT_MSG** determina se viene stampato un messaggio di testo utile quando un programma viene terminato in modo anomalo. Il messaggio indica che l'applicazione ha chiamato la [abort](abort.md) (funzione). Il comportamento predefinito prevede la stampa del messaggio. **_CALL_REPORTFAULT**, se impostato, specifica che un dump di arresto anomalo del sistema Watson viene generato e segnalato [abort](abort.md) viene chiamato. Per impostazione predefinita, la segnalazione di dump di arresto anomalo del sistema è abilitata per le compilazioni non di debug.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_abort_behavior**|\<stdlib.h>|

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

[abort](abort.md)<br/>
