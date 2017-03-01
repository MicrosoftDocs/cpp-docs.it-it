---
title: _mktemp, _wmktemp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 25
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: b6b5f2f059084e1f5dd66d75b5f5af5f2ade2473
ms.lasthandoff: 02/24/2017

---
# <a name="mktemp-wmktemp"></a>_mktemp, _wmktemp
Crea un nome di file univoco. Sono disponibili versioni più sicure di queste funzioni. Vedere [_mktemp_s, _wmktemp_s](../../c-runtime-library/reference/mktemp-s-wmktemp-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *_mktemp(  
   char *template   
);  
wchar_t *_wmktemp(  
   wchar_t *template   
);  
template <size_t size>  
char *_mktemp(  
   char (&template)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_wmktemp(  
   wchar_t (&template)[size]  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `template`  
 Modello di nome di file.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore al modello modificato. La funzione restituisce `NULL` se `template` è in formato non valido oppure se non è possibile creare altri nomi univoci dal modello specificato.  
  
## <a name="remarks"></a>Note  
 La funzione `_mktemp` crea un nome di file univoco modificando l'argomento `template`. `_mktemp` gestisce automaticamente e in modo appropriato gli argomenti stringa di caratteri multibyte, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte in uso nel sistema di runtime. `_wmktemp` è una versione a caratteri wide di `_mktemp`. L'argomento e il valore restituito di `_wmktemp` sono stringhe a caratteri wide. `_wmktemp` e `_mktemp` si comportano in modo identico, ma `_wmktemp` non gestisce le stringhe di caratteri multibyte.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tmktemp`|`_mktemp`|`_mktemp`|`_wmktemp`|  
  
 L'argomento `template` ha il formato `base`XXXXXX, dove `base` è la parte del nome del nuovo file che viene fornito e ogni X è un segnaposto per un carattere fornito da `_mktemp`. Ogni carattere del segnaposto in `template` deve essere una X maiuscola. `_mktemp` mantiene `base` e sostituisce la prima X finale con un carattere alfabetico. `_mktemp` sostituisce le X finali successive con un valore di cinque cifre. Questo valore è un numero univoco che identifica il processo chiamante oppure il thread chiamante nei programmi multithreading.  
  
 Ogni chiamata riuscita a `_mktemp` modifica `template`. In ogni chiamata successiva dallo stesso processo o thread con lo stesso argomento `template`, `_mktemp` controlla se sono presenti nomi di file corrispondenti ai nomi restituiti da `_mktemp` nelle chiamate precedenti. Se non esiste alcun file per un determinato nome, `_mktemp` restituisce tale nome. Se sono presenti file per tutti i nomi restituiti in precedenza, `_mktemp` crea un nuovo nome sostituendo il carattere alfabetico usato nel nome restituito in precedenza con la successiva lettera minuscola disponibile, in ordine dalla 'a' alla 'z'. Ad esempio, se `base` è:  
  
```  
fn  
```  
  
 e il valore di cinque cifre fornito da `_mktemp` è 12345, il primo nome restituito è:  
  
```  
fna12345  
```  
  
 Se questo nome viene usato per creare il file FNA12345 e questo file esiste ancora, il successivo nome restituito per una chiamata dallo stesso processo o thread con lo stesso valore `base` per `template` è:  
  
```  
fnb12345  
```  
  
 Se FNA12345 non esiste, il successivo nome restituito è:  
  
```  
fna12345  
```  
  
 `_mktemp` consente di creare al massimo 26 nomi di file univoci per qualsiasi combinazione specificata di valori di base e modello. Pertanto, FNZ12345 è l'ultimo nome di file univoco che `_mktemp` può creare per i valori `base` e `template` usati in questo esempio.  
  
 In caso di errore viene impostato `errno`. Se `template` ha un formato non valido (ad esempio meno di 6 X), `errno` viene impostato su `EINVAL`. Se `_mktemp` non è in grado di creare un nome univoco, perché esistono già tutti i 26 possibili nomi di file, `_mktemp` imposta il modello su una stringa vuota e restituisce `EEXIST`.  
  
 In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_mktemp`|\<io.h>|  
|`_wmktemp`|\<io.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
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
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [_getpid](../../c-runtime-library/reference/getpid.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [_tempnam, _wtempnam, tmpnam, _wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)   
 [tmpfile](../../c-runtime-library/reference/tmpfile.md)
