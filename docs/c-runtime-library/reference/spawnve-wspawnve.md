---
title: _spawnve, _wspawnve
ms.date: 4/2/2020
api_name:
- _spawnve
- _wspawnve
- _o__spawnve
- _o__wspawnve
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wspawnve
- _spawnve
- _wspawnve
helpviewer_keywords:
- _spawnve function
- spawnve function
- wspawnve function
- processes, creating
- _wspawnve function
- processes, executing new
- process creation
ms.assetid: 26d1713d-b551-4f21-a07b-e9891a2ae6cf
ms.openlocfilehash: 0f546185039bb1503af40d5f690fd8d8c172a679
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81355863"
---
# <a name="_spawnve-_wspawnve"></a>_spawnve, _wspawnve

Crea ed esegue un nuovo processo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
intptr_t _spawnve(
   int mode,
   const char *cmdname,
   const char *const *argv,
   const char *const *envp
);
intptr_t _wspawnve(
   int mode,
   const wchar_t *cmdname,
   const wchar_t *const *argv,
   const wchar_t *const *envp
);
```

### <a name="parameters"></a>Parametri

*Modalità*<br/>
Modalità di esecuzione per un processo chiamante.

*nomecmd*<br/>
Percorso del file da eseguire.

*Argv*<br/>
Matrice di puntatori agli argomenti. L'argomento *argv*[0] è in genere un puntatore a un percorso in modalità reale o al nome del programma in modalità protetta e *argv*[1] tramite *argv*[**n**] sono puntatori alle stringhe di caratteri che formano il nuovo elenco di argomenti. L'argomento *argv*[**n** s1] deve essere un puntatore **NULL** per contrassegnare la fine dell'elenco di argomenti.

*envp*<br/>
Matrice di puntatori alle impostazioni d'ambiente.

## <a name="return-value"></a>Valore restituito

Il valore restituito da un **_spawnve** sincrono o **da un _wspawnve** (**_P_WAIT** specificato per *mode*) è lo stato di uscita del nuovo processo. Il valore restituito da un **_spawnve** o **un _wspawnve** asincrono (**_P_NOWAIT** o **_P_NOWAITO** specificato per *mode*) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato chiama in modo specifico la routine di **uscita** con un argomento diverso da zero. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, uno stato di uscita positivo indica l'uscita anomala con interruzione. Un valore restituito di -1 indica un errore (il nuovo processo non è stato avviato). In questo caso, **errno** è impostato su uno dei seguenti valori.

|||
|-|-|
| **E2BIG** | L'elenco di argomenti supera i 1024 byte. |
| **Einval** | l'argomento *mode* non è valido. |
| **ENOENTE** | Il file o il percorso non è stato trovato. |
| **ENOEXEC** | Il file specificato non è eseguibile o il formato del file eseguibile non è valido. |
| **ENOMEM** | Memoria insufficiente per eseguire il nuovo processo. |

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Ognuna di queste funzioni crea ed esegue un nuovo processo, passando una matrice di puntatori agli argomenti della riga di comando e una matrice di puntatori alle impostazioni di ambiente.

Queste funzioni convalidano i relativi parametri. Se *cmdname* o *argv* è un puntatore null o se *argv* punta a un puntatore null o *argv*[0] è una stringa vuota, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL**e restituiscono -1. Nessun nuovo processo viene generato.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_spawnve**|\<stdio.h> o \<process.h>|
|**_wspawnve**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md).

## <a name="see-also"></a>Vedere anche

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md) (Controllo processo e ambiente)<br/>
[Funzioni _spawn e _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[Interrompere](abort.md)<br/>
[atexit](atexit.md)<br/>
[Funzioni _exec _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_flushall](flushall.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
