---
title: system, _wsystem
ms.date: 4/2/2020
api_name:
- system
- _wsystem
- _o__wsystem
- _o_system
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
- _tsystem
- _wsystem
helpviewer_keywords:
- _wsystem function
- wsystem function
- tsystem function
- _tsystem function
- system function
- commands, executing
- command interpreter
ms.assetid: 7d3df2b6-f742-49ce-bf52-012b0aee3df5
ms.openlocfilehash: 09353c9cda2bc85d91f57806bc3497e49a19f803
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82912384"
---
# <a name="system-_wsystem"></a>system, _wsystem

Esegue un comando.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int system(
   const char *command
);
int _wsystem(
   const wchar_t *command
);
```

### <a name="parameters"></a>Parametri

*.*<br/>
Comando da eseguire.

## <a name="return-value"></a>Valore restituito

Se *Command* è **null** e viene trovato l'interprete dei comandi, restituisce un valore diverso da zero. Se l'interprete dei comandi non viene trovato, restituisce 0 e **errno** viene impostato su **ENOENT**. Se *Command* non è **null**, **System** restituisce il valore restituito dall'interprete dei comandi. Restituisce il valore 0 solo se l'interprete dei comandi restituisce il valore 0. Il valore restituito-1 indica un errore e **errno** viene impostato su uno dei valori seguenti:

|||
|-|-|
| **E2BIG** | L'elenco degli argomenti (che è dipendente dal sistema) è troppo grande. |
| **ENOENT** | L'interprete dei comandi non viene trovato. |
| **ENOEXEC** | Il file dell'interprete dei comandi non può essere eseguito perché il formato non è valido. |
| **ENOMEM** | Memoria insufficiente per eseguire il comando; la memoria disponibile è stata danneggiata; esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente. |

Per altre informazioni su questi codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione di **sistema** passa il *comando* all'interprete dei comandi che esegue la stringa come comando del sistema operativo. il **sistema** usa le variabili di ambiente **COMSPEC** e **path** per individuare il file cmd. exe dell'interprete dei comandi. Se *Command* è **null**, la funzione verifica solo se l'interprete dei comandi esiste.

È necessario svuotare in modo esplicito, utilizzando [fflush](fflush.md) o [_flushall](flushall.md), o chiudere qualsiasi flusso prima di chiamare **System**.

**_wsystem** è una versione a caratteri wide del **sistema**; l'argomento del *comando* per **_wsystem** è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tsystem**|**sistema**|**sistema**|**_wsystem**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**sistema**|\<process.h> o \<stdlib.h>|
|**_wsystem**|\<process.h> o \<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo esempio usa **System** per digitare un file di testo.

```C
// crt_system.c

#include <process.h>

int main( void )
{
   system( "type crt_system.txt" );
}
```

### <a name="input-crt_systemtxt"></a>Input: crt_system.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
Line one.
Line two.
```

## <a name="see-also"></a>Vedere anche

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md) (Controllo processo e ambiente)<br/>
[_exec, funzioni _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_flushall](flushall.md)<br/>
[_spawn, funzioni _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
