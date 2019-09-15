---
title: _chmod, _wchmod
ms.date: 11/04/2016
api_name:
- _chmod
- _wchmod
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
- api-ms-win-crt-filesystem-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _chmod
- _wchmod
- wchmod
helpviewer_keywords:
- _chmod function
- wchmod function
- file permissions [C++]
- chmod function
- files [C++], changing permissions
- _wchmod function
ms.assetid: 92f7cb86-b3b0-4232-a599-b8c04a2f2c19
ms.openlocfilehash: b224133212f19627a8f975dbbe8c80176e29f112
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939196"
---
# <a name="_chmod-_wchmod"></a>_chmod, _wchmod

Modifica le impostazioni di autorizzazione file.

## <a name="syntax"></a>Sintassi

```C
int _chmod( const char *filename, int pmode );
int _wchmod( const wchar_t *filename, int pmode );
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Nome del file esistente.

*pmode*<br/>
Impostazione di autorizzazione per il file.

## <a name="return-value"></a>Valore restituito

Queste funzioni restituiscono 0 se l'impostazione di autorizzazione viene modificata. Il valore restituito-1 indica un errore. Se il file specificato non è stato trovato, **errno** viene impostato su **ENOENT**; Se un parametro non è valido, **errno** viene impostato su **EINVAL**.

## <a name="remarks"></a>Note

La funzione **_chmod** modifica l'impostazione di autorizzazione del file specificato da *filename*. L'impostazione di autorizzazione controlla l'accesso in lettura e scrittura al file. L'espressione integer *pmode* contiene una o entrambe le costanti manifeste seguenti, definite in SYS\Stat.h.

| *pmode* | Significato |
|-|-|
| **\_IREAD\_S** | Solo lettura consentita. |
| **\_IWRITE\_S** | Scrittura consentita. (In effetti, consente la lettura e la scrittura) |
| **\_S\_IREAD** &#124; **SIWRITE\_ \_** | Lettura e scrittura consentite. |

Quando vengono specificate entrambe le costanti, queste vengono unite con l'operatore OR bit **\|** per bit (). Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura. Si noti che tutti i file sono sempre leggibili. Non è possibile concedere l'autorizzazione di sola scrittura. Pertanto, le modalità **_S_IWRITE** e **_S_IREAD** \| **_S_IWRITE** sono equivalenti.

**_wchmod** è una versione a caratteri wide di **_chmod**; l'argomento *filename* per **_wchmod** è una stringa di caratteri wide. **_wchmod** e **_chmod** si comportano in modo identico.

Questa funzione convalida i relativi parametri. Se *pmode* non è una combinazione di una delle costanti manifesto o incorpora un set alternativo di costanti, la funzione le ignora semplicemente. Se *filename* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce-1.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tchmod**|**_chmod**|**_chmod**|**_wchmod**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_chmod**|\<io.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|
|**_wchmod**|\<io.h> o \<wchar.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_chmod.c
// This program uses _chmod to
// change the mode of a file to read-only.
// It then attempts to modify the file.
//

#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// Change the mode and report error or success
void set_mode_and_report(char * filename, int mask)
{
   // Check for failure
   if( _chmod( filename, mask ) == -1 )
   {
      // Determine cause of failure and report.
      switch (errno)
      {
         case EINVAL:
            fprintf( stderr, "Invalid parameter to chmod.\n");
            break;
         case ENOENT:
            fprintf( stderr, "File %s not found\n", filename );
            break;
         default:
            // Should never be reached
            fprintf( stderr, "Unexpected error in chmod.\n" );
       }
   }
   else
   {
      if (mask == _S_IREAD)
        printf( "Mode set to read-only\n" );
      else if (mask & _S_IWRITE)
        printf( "Mode set to read/write\n" );
   }
   fflush(stderr);
}

int main( void )
{

   // Create or append to a file.
   system( "echo /* End of file */ >> crt_chmod.c_input" );

   // Set file mode to read-only:
   set_mode_and_report("crt_chmod.c_input ", _S_IREAD );

   system( "echo /* End of file */ >> crt_chmod.c_input " );

   // Change back to read/write:
   set_mode_and_report("crt_chmod.c_input ", _S_IWRITE );

   system( "echo /* End of file */ >> crt_chmod.c_input " );
}
```

```Output

A line of text.
```

```Output

      A line of text.Mode set to read-only
Access is denied.
Mode set to read/write
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_access, _waccess](access-waccess.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[Funzioni _stat, _wstat](stat-functions.md)<br/>
