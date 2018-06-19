---
title: _mktemp, _wmktemp | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _wmktemp
- _mktemp
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
- _tmktemp
- wmktemp
- tmktemp
- _wmktemp
- _mktemp
dev_langs:
- C++
helpviewer_keywords:
- _wmktemp function
- _mktemp function
- files [C++], temporary
- tmktemp function
- _tmktemp function
- wmktemp function
- mktemp function
- temporary files [C++]
ms.assetid: 055eb539-a8c2-4a7d-be54-f5b6d1eb5c85
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 087348b3cc59fb1b47699fc0e64f533c22d992b4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32404347"
---
# <a name="mktemp-wmktemp"></a>_mktemp, _wmktemp

Crea un nome di file univoco. Sono disponibili versioni più sicure di queste funzioni. Vedere [_mktemp_s, _wmktemp_s](mktemp-s-wmktemp-s.md).

## <a name="syntax"></a>Sintassi

```C
char *_mktemp(
   char *nameTemplate
);
wchar_t *_wmktemp(
   wchar_t *nameTemplate
);
template <size_t size>
char *_mktemp(
   char (&nameTemplate)[size]
); // C++ only
template <size_t size>
wchar_t *_wmktemp(
   wchar_t (&nameTemplate)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*nameTemplate*<br/>
Modello di nome di file.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore a nameTemplate modificato. La funzione restituisce **NULL** se *nameTemplate* non è corretto o non sono più presenti nomi univoci possono essere creati da nameTemplate specificato.

## <a name="remarks"></a>Note

Il **mktemp** funzione crea un nome file univoco modificando il *nameTemplate* argomento. **mktemp** gestisce automaticamente gli argomenti di stringa di caratteri multibyte esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso dal sistema in fase di esecuzione. **wmktemp** è una versione a caratteri wide **mktemp**; l'argomento e il valore restituito di **wmktemp** sono stringhe a caratteri "wide". **wmktemp** e **mktemp** si comportano in modo identico in caso contrario, con la differenza che **wmktemp** gestiscono le stringhe di caratteri multibyte.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tmktemp**|**_mktemp**|**_mktemp**|**_wmktemp**|

Il *nameTemplate* argomento ha il formato *base * * XXXXXX*, dove *base* fa parte il nuovo nome di file che viene fornito e ogni X è un segnaposto per un carattere fornito da **mktemp**. Ogni carattere del segnaposto nella *nameTemplate* deve essere una x maiuscola **mktemp** mantiene *base* e sostituisce il primo X finale con un carattere alfabetico. **mktemp** sostituisce il seguente carattere finale x con un valore di cinque cifre; questo valore è un numero univoco che identifica la chiamata di processo, o nei programmi multithread, il thread chiamante.

Ogni chiamata completata a **mktemp** modifica *nameTemplate*. In ogni chiamata successiva dello stesso processo o thread con lo stesso *nameTemplate* argomento **mktemp** cerca i nomi di file che corrispondono a quelli restituiti da **mktemp** in chiamate precedenti. Se non esiste alcun file per un determinato nome **mktemp** restituisce tale nome. Se sono presenti file per tutti i nomi, in precedenza restituiti **mktemp** crea un nuovo nome sostituendo il carattere alfabetico e utilizzato nel nome restituito in precedenza con la successiva lettera minuscola disponibile, in ordine, dal 'a' a 'z'. Ad esempio, se *base* è:

> **Fn**

e il valore di cinque cifre fornito dal **mktemp** 12345, il nome restituito è:

> **fna12345**

Se questo nome viene utilizzato per creare file FNA12345 e il file esiste ancora, il nome successivo restituito in una chiamata dallo stesso processo oppure thread con lo stesso *base* per *nameTemplate* è:

> **fnb12345**

Se FNA12345 non esiste, il successivo nome restituito è:

> **fna12345**

**mktemp** consente di creare un massimo di 26 nomi di file univoco per qualsiasi combinazione specifica di *base* e *nameTemplate* valori. Pertanto, FNZ12345 è l'ultimo nome file univoco **mktemp** possono creare per il *base* e *nameTemplate* valori utilizzati in questo esempio.

In caso di errore, **errno** è impostata. Se *nameTemplate* ha un formato non valido (ad esempio, un valore minore di 6 x), **errno** è impostato su **EINVAL**. Se **mktemp** è in grado di creare un nome univoco perché tutti i nomi di file possibile 26 esistono già, **mktemp** imposta nameTemplate su una stringa vuota e restituisce **EEXIST**.

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mktemp**|\<io.h>|
|**_wmktemp**|\<io.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_mktemp.c
// compile with: /W3
/* The program uses _mktemp to create
* unique filenames. It opens each filename
* to ensure that the next name is unique.
*/

#include <io.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

char *template = "fnXXXXXX";
char *result;
char names[27][9];

int main( void )
{
   int i;
   FILE *fp;

   for( i = 0; i < 27; i++ )
   {
      strcpy_s( names[i], sizeof( names[i] ), template );
      /* Attempt to find a unique filename: */
      result = _mktemp( names[i] );  // C4996
      // Note: _mktemp is deprecated; consider using _mktemp_s instead
      if( result == NULL )
      {
         printf( "Problem creating the template\n" );
         if (errno == EINVAL)
         {
             printf( "Bad parameter\n");
         }
         else if (errno == EEXIST)
         {
             printf( "Out of unique filenames\n");
         }
      }
      else
      {
         fopen_s( &fp, result, "w" );
         if( fp != NULL )
            printf( "Unique filename is %s\n", result );
         else
            printf( "Cannot open %s\n", result );
         fclose( fp );
      }
   }
}
```

```Output
Unique filename is fna03912
Unique filename is fnb03912
Unique filename is fnc03912
Unique filename is fnd03912
Unique filename is fne03912
Unique filename is fnf03912
Unique filename is fng03912
Unique filename is fnh03912
Unique filename is fni03912
Unique filename is fnj03912
Unique filename is fnk03912
Unique filename is fnl03912
Unique filename is fnm03912
Unique filename is fnn03912
Unique filename is fno03912
Unique filename is fnp03912
Unique filename is fnq03912
Unique filename is fnr03912
Unique filename is fns03912
Unique filename is fnt03912
Unique filename is fnu03912
Unique filename is fnv03912
Unique filename is fnw03912
Unique filename is fnx03912
Unique filename is fny03912
Unique filename is fnz03912
Problem creating the template.
Out of unique filenames.
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_getpid](getpid.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
[tmpfile](tmpfile.md)<br/>
