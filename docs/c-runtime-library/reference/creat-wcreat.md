---
title: _creat, _wcreat
ms.date: 11/04/2016
apiname:
- _creat
- _wcreat
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
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
ms.openlocfilehash: 901a95a6a9361f95f38749dacf1a5001d97b3761
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62335308"
---
# <a name="creat-wcreat"></a>_creat, _wcreat

Crea un nuovo file. **creat** e **wcreat** sono stati deprecati; usare [sopen_s, wsopen_s](sopen-s-wsopen-s.md) invece.

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

Queste funzioni, se hanno esito positivo, restituiscono un descrittore di file al file creato. In caso contrario, le funzioni restituiscono -1 e impostare **errno** come illustrato nella tabella seguente.

|**errno** impostazione|Descrizione|
|---------------------|-----------------|
|**EACCES**|*nome del file* specifica un file di sola lettura esistente oppure una directory anziché un file.|
|**EMFILE**|Non sono disponibili altri descrittori di file.|
|**ENOENT**|Impossibile trovare il file specificato.|

Se *nomefile* viene **NULL**, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** al **EINVAL** e restituiscono -1.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **creat** funzione crea un nuovo file o si apre e tronca una esistente. **wcreat** è una versione a caratteri wide di **creat**; gli *nomefile* argomento **wcreat** è una stringa di caratteri "wide". **wcreat** e **creat** hanno lo stesso comportamento in caso contrario.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcreat**|**_creat**|**_creat**|**_wcreat**|

Se il file specificato da *filename* non esiste, un nuovo file viene creato con l'impostazione di autorizzazione specificata e viene aperto per la scrittura. Se il file esiste già e l'impostazione di autorizzazione consente la scrittura, **creat** tronca il file di lunghezza 0, eliminando il contenuto precedente e lo apre per la scrittura. L'impostazione di autorizzazione *pmode*, viene applicata solo i file appena creati. Il nuovo file riceve l'impostazione di autorizzazione specificata dopo averlo chiuso per la prima volta. L'espressione integer *pmode* contiene una o entrambe le costanti manifeste **s_iwrite** e **s_iread**, definite in sys\stat.h. Quando vengono specificate entrambe le costanti, queste vengono unite con il bit per bit o un operatore ( **&#124;** ). Il *pmode* parametro è impostato su uno dei valori seguenti.

|Value|Definizione|
|-----------|----------------|
|**_S_IWRITE**|Scrittura consentita.|
|**_S_IREAD**|Lettura consentita.|
|**_S_IREAD** &#124; **_S_IWRITE**|Lettura e scrittura consentite.|

Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura. Tutti i file sono sempre leggibili. Non è possibile concedere l'autorizzazione di sola scrittura. Le modalità **s_iwrite** e **s_iread** | **s_iwrite** sono quindi equivalenti. I file aperti tramite **creat** vengono sempre aperti in modalità di compatibilità (vedere [sopen](sopen-wsopen.md)) con **sh_denyno**.

**creat** applica la maschera di autorizzazione file corrente per *pmode* prima di impostare le autorizzazioni (vedere [umask](umask.md)). **creat** viene fornito soprattutto per compatibilità con le librerie precedenti. Una chiamata a **Open** con **o_creat** e **o_trunc** nel *oflag* parametro equivale al **creat**ed è preferibile per nuovo codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_creat**|\<io.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|
|**_wcreat**|\<io.h> o \<wchar.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
