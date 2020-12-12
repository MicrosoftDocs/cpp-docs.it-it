---
description: 'Altre informazioni su: _set_abort_behavior'
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 1e024cf825115204f51e727d81af7aba74c305fb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288906"
---
# <a name="_set_abort_behavior"></a>_set_abort_behavior

Specifica l'azione da eseguire quando un programma viene terminato in modo anomalo.

> [!NOTE]
> Non usare la funzione [Abort](abort.md) per arrestare un'app Microsoft Store, tranne che negli scenari di test o di debug. I metodi a livello di codice o dell'interfaccia utente per chiudere un'app dello Store non sono consentiti in base ai [criteri Microsoft Store](/legal/windows/agreements/store-policies). Per altre informazioni, vedere ciclo di vita dell' [app UWP](/windows/uwp/launch-resume/app-lifecycle).

## <a name="syntax"></a>Sintassi

```C
unsigned int _set_abort_behavior(
   unsigned int flags,
   unsigned int mask
);
```

### <a name="parameters"></a>Parametri

*flags*<br/>
Nuovo valore dei flag di [interruzione](abort.md) .

*maschera*<br/>
Maschera per i bit dei flag di [interruzione](abort.md) da impostare.

## <a name="return-value"></a>Valore restituito

Valore precedente dei flag.

## <a name="remarks"></a>Commenti

Sono presenti due flag di [interruzione](abort.md) : **_WRITE_ABORT_MSG** e **_CALL_REPORTFAULT**. **_WRITE_ABORT_MSG** determina se viene stampato un messaggio di testo utile quando un programma viene terminato in modo anomalo. Il messaggio indica che l'applicazione ha chiamato la funzione [Abort](abort.md) . Il comportamento predefinito prevede la stampa del messaggio. **_CALL_REPORTFAULT**, se impostato, specifica che viene generato un dump di arresto anomalo di Watson e viene segnalato quando viene chiamato [Abort](abort.md) . Per impostazione predefinita, la segnalazione di dump di arresto anomalo del sistema è abilitata per le compilazioni non di debug.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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

[interruzione](abort.md)<br/>
