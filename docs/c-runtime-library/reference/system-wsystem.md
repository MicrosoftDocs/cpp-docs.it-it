---
title: system, _wsystem
ms.date: 11/04/2016
apiname:
- system
- _wsystem
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
ms.openlocfilehash: 46c4949fcc8cfbe4a3477e66b57d8fc6fc97ed73
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51328656"
---
# <a name="system-wsystem"></a>system, _wsystem

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

*command*<br/>
Comando da eseguire.

## <a name="return-value"></a>Valore restituito

Se *comandi* viene **NULL** e viene trovato l'interprete dei comandi, restituisce un valore diverso da zero. Se l'interprete dei comandi non viene trovato, restituisce 0 e imposta **errno** al **ENOENT**. Se *comandi* non è **NULL**, **sistema** restituisce il valore restituito dall'interprete dei comandi. Restituisce il valore 0 solo se l'interprete dei comandi restituisce il valore 0. Valore restituito di - 1 indica un errore, e **errno** è impostato su uno dei valori seguenti:

|||
|-|-|
| **E2BIG** | L'elenco degli argomenti (che è dipendente dal sistema) è troppo grande. |
| **ENOENT** | L'interprete dei comandi non viene trovato. |
| **ENOEXEC** | Il file dell'interprete dei comandi non può essere eseguito perché il formato non è valido. |
| **ENOMEM** | Memoria insufficiente per eseguire il comando; la memoria disponibile è stata danneggiata; esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente. |

Per altre informazioni su questi codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **system** funzione passa *comando* all'interprete dei comandi, che esegue la stringa come un comando del sistema operativo. **System** utilizza le **COMSPEC** e **percorso** CMD.exe di file di variabili di ambiente per individuare l'interprete dei comandi. Se *comandi* viene **NULL**, la funzione verifica solo se è presente l'interprete dei comandi.

È necessario scaricare in modo esplicito, tramite [fflush](fflush.md) oppure [FlushAll](flushall.md), o si chiude qualsiasi flusso prima di chiamare **sistema**.

**wsystem** è una versione a caratteri wide di **system**; gli *comando* argomento **wsystem** è una stringa di caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**TSystem**|**system**|**system**|**_wsystem**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**system**|\<process.h> o \<stdlib.h>|
|**_wsystem**|\<process.h> o \<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo esempio viene usato **sistema** al tipo di un file di testo.

```C
// crt_system.c

#include <process.h>

int main( void )
{
   system( "type crt_system.txt" );
}
```

### <a name="input-crtsystemtxt"></a>Input: crt_system.txt

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

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_flushall](flushall.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
