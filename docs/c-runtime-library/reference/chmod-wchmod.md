---
title: _chmod, _wchmod
ms.date: 11/04/2016
apiname:
- _chmod
- _wchmod
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
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
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
ms.openlocfilehash: 278ee1e6dda9e153b55676ce5c0ca389f383efd1
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51518411"
---
# <a name="chmod-wchmod"></a>_chmod, _wchmod

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

Queste funzioni restituiscono 0 se l'impostazione di autorizzazione viene modificata. Valore restituito di -1 indica un errore. Se non è stato possibile trovare il file specificato, **errno** è impostata su **ENOENT**; se non è valido, un parametro **errno** è impostata su **EINVAL**.

## <a name="remarks"></a>Note

Il **chmod** funzione consente di modificare l'impostazione di autorizzazione del file specificato da *filename*. L'impostazione di autorizzazione controlla l'accesso in lettura e scrittura al file. L'espressione integer *pmode* contiene una o entrambe le costanti manifesto seguenti, definite in sys\stat.h.

| *pmode* | Significato |
|-|-|
| **\_S\_IREAD** | Solo lettura consentita. |
| **\_S\_IWRITE** | Scrittura consentita. (In effetti, consente la lettura e la scrittura) |
| **\_S\_IREAD** &AMP;#124;  **\_S\_IWRITE** | Lettura e scrittura consentite. |

Quando vengono specificate entrambe le costanti, queste vengono unite con il bit per bit o un operatore (**\|**). Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura. Si noti che tutti i file sono sempre leggibili. Non è possibile concedere l'autorizzazione di sola scrittura. Di conseguenza, le modalità **s_iwrite** e **s_iread** \| **s_iwrite** sono equivalenti.

**wchmod** è una versione a caratteri wide di **chmod**; gli *nomefile* argomento **wchmod** è una stringa di caratteri "wide". **wchmod** e **chmod** hanno lo stesso comportamento in caso contrario.

Questa funzione convalida i relativi parametri. Se *pmode* non è una combinazione di una delle costanti manifesto o non include un set alternativo di costanti, la funzione semplicemente li ignora. Se *nomefile* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce -1.

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
