---
title: _cwait | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _cwait
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
- api-ms-win-crt-process-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _cwait
dev_langs:
- C++
helpviewer_keywords:
- cwait function
- _cwait function
ms.assetid: d9b596b5-45f4-4e03-9896-3f383cb922b8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 878c1c08dabe52a31a2bdf377c3e0bb167a9ae5d
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
ms.locfileid: "34450948"
---
# <a name="cwait"></a>_cwait

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

*termstat*<br/>
Puntatore a un buffer in cui verrà archiviato il codice di risultato del processo specificato, oppure **NULL**.

*procHandle*<br/>
L'handle del processo in attesa di (vale a dire, il processo che deve terminare prima che **cwait** può restituire).

*Azione*<br/>
NULL: Ignorato dalle applicazioni del sistema operativo Windows; per altre applicazioni: codice di azione da eseguire su *procHandle*.

## <a name="return-value"></a>Valore restituito

Al termine il processo specificato, restituisce l'handle del processo specificato e imposta *termstat* sul codice di risultato restituito dal processo specificato. In caso contrario, restituisce -1 e imposta **errno** come indicato di seguito.

|Valore|Descrizione|
|-----------|-----------------|
|**ECHILD**|Nessun processo specificato esiste, *procHandle* non è valido o la chiamata ai [GetExitCodeProcess](http://msdn.microsoft.com/library/windows/desktop/ms683189.aspx) o [WaitForSingleObject](http://msdn.microsoft.com/library/windows/desktop/ms687032.aspx) API non è riuscita.|
|**EINVAL**|*azione* non è valido.|

Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **cwait** funzione attende la chiusura dell'ID processo del processo specificato fornito da *procHandle*. Il valore di *procHandle* che viene passata a **cwait** deve essere il valore restituito dalla chiamata al [spawn](../../c-runtime-library/spawn-wspawn-functions.md) funzione che ha creato il processo specificato. Se l'ID del processo termina prima **cwait** viene chiamato **cwait** restituisce immediatamente un risultato. **cwait** può essere utilizzato da qualsiasi processo per attendere qualsiasi altro processo noto per cui un handle valido (*procHandle*) esistente.

*termstat* punta a un buffer in cui verrà archiviato il codice restituito del processo specificato. Il valore di *termstat* indica se il processo specificato è terminato normalmente chiamando le finestre [ExitProcess](http://msdn.microsoft.com/library/windows/desktop/ms682658.aspx) API. **ExitProcess** viene chiamato internamente se il processo specificato chiama **uscire** o **Exit**, restituisce dalla **principale**, o raggiunge la fine del **principale** . Per ulteriori informazioni sul valore che viene passata attraverso *termstat*, vedere [GetExitCodeProcess](http://msdn.microsoft.com/library/windows/desktop/ms683189.aspx). Se **cwait** viene chiamato con un **NULL** valore per *termstat*, non è archiviato il codice restituito del processo specificato.

Il *azione* parametro viene ignorato dal sistema operativo Windows perché le relazioni padre-figlio non sono implementate in questi ambienti.

A meno che *procHandle* è -1 o -2 (handle per il processo o thread corrente), l'handle verrà chiuso. In questo caso, quindi, evitare di usare l'handle restituito.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_cwait**|\<process.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
   int     nPid;
   char    name[40];
} process[4] = { { 0, "Ann" }, { 0, "Beth" }, { 0, "Carl" }, { 0, "Dave" } };

int main( int argc, char *argv[] )
{
   int termstat, c;
   unsigned int number;

   srand( (unsigned)time( NULL ) );    // Seed randomizer

   // If no arguments, this is the calling process
   if ( argc == 1 )
   {
      // Spawn processes in numeric order
      for ( c = 0; c < 4; c++ ) {
         _flushall();
         process[c].nPid = _spawnl( _P_NOWAIT, argv[0], argv[0],
                                    process[c].name, NULL );
      }

      // Wait for randomly specified process, and respond when done
      c = getrandom( 0, 3 );
      printf( "Come here, %s.\n", process[c].name );
      _cwait( &termstat, process[c].nPid, _WAIT_CHILD );
      printf( "Thank you, %s.\n", process[c].name );

   }
   // If there are arguments, this must be a spawned process
   else
   {
      // Delay for a period that's determined by process number
      Sleep( (argv[1][0] - 'A' + 1) * 1000L );
      printf( "Hi, Dad. It's %s.\n", argv[1] );
   }
}
```

```Output
Hi, Dad. It's Ann.
Come here, Ann.
Thank you, Ann.
Hi, Dad. It's Beth.
Hi, Dad. It's Carl.
Hi, Dad. It's Dave.
```

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
