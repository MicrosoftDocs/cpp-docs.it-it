---
title: _cwait
description: Informazioni di riferimento sulle API per la funzione di runtime di Microsoft Visual C `_cwait()` .
ms.date: 10/23/2020
api_name:
- _cwait
- _o__cwait
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
- api-ms-win-crt-process-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _cwait
helpviewer_keywords:
- cwait function
- _cwait function
ms.assetid: d9b596b5-45f4-4e03-9896-3f383cb922b8
ms.openlocfilehash: 5b4c4db3c40645b947583b722d345c2e80dcaa8e
ms.sourcegitcommit: faecabcdd12ff53eb79dc0df193fc3567f2f037c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/27/2020
ms.locfileid: "92639107"
---
# <a name="_cwait"></a>_cwait

Attende la conclusione di un altro processo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _cwait(
   int *termstat,
   intptr_t procHandle,
   int action
);
```

### <a name="parameters"></a>Parametri

*`termstat`*\
Puntatore a un buffer in cui verrà archiviato il codice di risultato del processo specificato o **`NULL`** .

*`procHandle`*\
Handle del processo da attendere, ovvero il processo che deve terminare prima che **_cwait** possa restituire.

*`action`*\
**`NULL`** : Ignorato dalle applicazioni del sistema operativo Windows; per altre applicazioni: codice dell'azione da eseguire su *`procHandle`* .

## <a name="return-value"></a>Valore restituito

Una volta completato correttamente il processo specificato, restituisce l'handle del processo specificato e imposta sul *`termstat`* codice risultato restituito dal processo specificato. In caso contrario, restituisce-1 e imposta **`errno`** come segue.

|valore|Descrizione|
|-----------|-----------------|
|**`ECHILD`**|Non esiste alcun processo specificato, non *`procHandle`* è valido o la chiamata all' [`GetExitCodeProcess`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodeprocess) [`WaitForSingleObject`](/windows/win32/api/synchapi/nf-synchapi-waitforsingleobject) API o non è riuscita.|
|**`EINVAL`**|*`action`* non è valido.|

Per ulteriori informazioni su questi e altri codici restituiti, vedere [`errno, _doserrno, _sys_errlist, and _sys_nerr`](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .

## <a name="remarks"></a>Commenti

La **`_cwait`** funzione attende la chiusura dell'ID processo del processo specificato fornito da *`procHandle`* . Il valore di *`procHandle`* passato a **`_cwait`** deve essere il valore restituito dalla chiamata alla [`_spawn`](../../c-runtime-library/spawn-wspawn-functions.md) funzione che ha creato il processo specificato. Se l'ID processo termina prima della **`_cwait`** chiamata a, viene **`_cwait`** restituito immediatamente. **`_cwait`** può essere usato da qualsiasi processo per attendere qualsiasi altro processo noto per cui esiste un handle valido ( *`procHandle`* ).

*`termstat`* punta a un buffer in cui verrà archiviato il codice restituito del processo specificato. Il valore di *`termstat`* indica se il processo specificato è terminato normalmente chiamando l' [`ExitProcess`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitprocess) API Windows. **`ExitProcess`** viene chiamato internamente se il processo specificato chiama **`exit`** o **`_exit`** , restituisce da **`main`** o raggiunge la fine di **`main`** . Per ulteriori informazioni sul valore passato tramite *`termstat`* , vedere [GetExitCodeProcess](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodeprocess). Se **`_cwait`** viene chiamato usando un **`NULL`** valore per *`termstat`* , il codice restituito del processo specificato non viene archiviato.

Il *`action`* parametro viene ignorato dal sistema operativo Windows perché le relazioni padre-figlio non sono implementate in questi ambienti.

A meno che non *`procHandle`* sia-1 o-2 (handle al processo o al thread corrente), l'handle verrà chiuso. In questa situazione, non usare l'handle restituito.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**`_cwait`**|\<process.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_cwait.c
// compile with: /c
// This program launches several processes and waits
// for a specified process to finish.

#define _CRT_RAND_S

#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Macro to get a random integer within a specified range
#define getrandom( min, max ) (( (rand_s (&number), number) % (int)((( max ) + 1 ) - ( min ))) + ( min ))

struct PROCESS
{
    intptr_t hProcess;
    char    name[40];
} process[4] = { { 0, "Ann" }, { 0, "Beth" }, { 0, "Carl" }, { 0, "Dave" } };

int main(int argc, char* argv[])
{
    int termstat, c;
    unsigned int number;

    srand((unsigned)time(NULL));    // Seed randomizer

    // If no arguments, this is the calling process
    if (argc == 1)
    {
        // Spawn processes in numeric order
        for (c = 0; c < 4; c++) {
            _flushall();
            process[c].hProcess = _spawnl(_P_NOWAIT, argv[0], argv[0],
                process[c].name, NULL);
        }

        // Wait for randomly specified process, and respond when done
        c = getrandom(0, 3);
        printf("Come here, %s.\n", process[c].name);
        _cwait(&termstat, process[c].hProcess, _WAIT_CHILD);
        printf("Thank you, %s.\n", process[c].name);

    }
    // If there are arguments, this must be a spawned process
    else
    {
        // Delay for a period that's determined by process number
        Sleep((argv[1][0] - 'A' + 1) * 1000L);
        printf("Hi, Dad. It's %s.\n", argv[1]);
    }
}
```

L'ordine dell'output varia a seconda dell'esecuzione.

```Output
Hi, Dad. It's Ann.
Come here, Ann.
Thank you, Ann.
Hi, Dad. It's Beth.
Hi, Dad. It's Carl.
Hi, Dad. It's Dave.
```

## <a name="see-also"></a>Vedere anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)\
[_spawn, funzioni _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)
