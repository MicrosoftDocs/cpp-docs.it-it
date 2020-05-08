---
title: _creat, _wcreat
ms.date: 4/2/2020
api_name:
- _creat
- _wcreat
- _o__creat
- _o__wcreat
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
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wcreat
- _wcreat
- _creat
- tcreat
- _tcreat
helpviewer_keywords:
- wcreat function
- _wcreat function
- files [C++], creating
- _creat function
- tcreat function
- creat function
- _tcreat function
ms.assetid: 3b3b795d-1620-40ec-bd2b-a4bbb0d20fe5
ms.openlocfilehash: 379a4adbf17755341fed6a48c649afe29e150fe5
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82912122"
---
# <a name="_creat-_wcreat"></a>_creat, _wcreat

Crea un nuovo file. **_creat** e **_wcreat** sono stati deprecati. in alternativa [, usare _sopen_s _wsopen_s](sopen-s-wsopen-s.md) .

## <a name="syntax"></a>Sintassi

```C
int _creat(
   const char *filename,
   int pmode
);
int _wcreat(
   const wchar_t *filename,
   int pmode
);
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Nome del nuovo file.

*pmode*<br/>
Impostazione di autorizzazione.

## <a name="return-value"></a>Valore restituito

Queste funzioni, se hanno esito positivo, restituiscono un descrittore di file al file creato. In caso contrario, le funzioni restituiscono-1 e impostano **errno** come illustrato nella tabella seguente.

|impostazione **errno**|Description|
|---------------------|-----------------|
|**EACCES**|*filename* specifica un file di sola lettura esistente o specifica una directory anziché un file.|
|**EMFILE**|Non sono disponibili altri descrittori di file.|
|**ENOENT**|Impossibile trovare il file specificato.|

Se *filename* è **null**, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono-1.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_creat** crea un nuovo file o lo apre e ne tronca uno esistente. **_wcreat** è una versione a caratteri wide di **_creat**; l'argomento *filename* per **_wcreat** è una stringa di caratteri wide. **_wcreat** e **_creat** si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcreat**|**_creat**|**_creat**|**_wcreat**|

Se il file specificato da *filename* non esiste, viene creato un nuovo file con l'impostazione di autorizzazione specificata e viene aperto per la scrittura. Se il file esiste già e l'impostazione di autorizzazione consente la scrittura, **_creat** tronca il file alla lunghezza 0, eliminando il contenuto precedente e lo apre per la scrittura. L'impostazione di autorizzazione, *pmode*, si applica solo ai file appena creati. Il nuovo file riceve l'impostazione di autorizzazione specificata dopo averlo chiuso per la prima volta. L'espressione integer *pmode* contiene una o entrambe le costanti manifeste **_S_IWRITE** e **_S_IREAD**, definite in SYS\Stat.h. Quando vengono specificate entrambe le costanti, queste vengono unite con l'operatore OR bit per bit ( **&#124;** ). Il parametro *pmode* è impostato su uno dei valori seguenti.

|Value|Definizione|
|-----------|----------------|
|**_S_IWRITE**|Scrittura consentita.|
|**_S_IREAD**|Lettura consentita.|
|**_S_IREAD** &#124; **_S_IWRITE**|Lettura e scrittura consentite.|

Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura. Tutti i file sono sempre leggibili. Non è possibile concedere l'autorizzazione di sola scrittura. Le modalità **_S_IWRITE** e **_S_IREAD** | **_S_IWRITE** sono quindi equivalenti. I file aperti con **_creat** vengono sempre aperti in modalità di compatibilità (vedere [_sopen](sopen-wsopen.md)) con **_SH_DENYNO**.

**_creat** applica la maschera di autorizzazione file corrente a *pmode* prima di impostare le autorizzazioni (vedere [_umask](umask.md)). **_creat** viene fornito principalmente per la compatibilità con le librerie precedenti. Una chiamata a **_open** con **_O_CREAT** e **_O_TRUNC** nel parametro *Oflag* è equivalente a **_creat** ed è preferibile per il nuovo codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_creat**|\<io.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|
|**_wcreat**|\<io.h> o \<wchar.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_creat.c
// compile with: /W3
// This program uses _creat to create
// the file (or truncate the existing file)
// named data and open it for writing.

#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int fh;

   fh = _creat( "data", _S_IREAD | _S_IWRITE ); // C4996
   // Note: _creat is deprecated; use _sopen_s instead
   if( fh == -1 )
      perror( "Couldn't create data file" );
   else
   {
      printf( "Created data file.\n" );
      _close( fh );
   }
}
```

```Output
Created data file.
```

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_chsize](chsize.md)<br/>
[_close](close.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
[_umask](umask.md)<br/>
