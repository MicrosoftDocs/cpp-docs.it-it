---
title: _mktemp_s, _wmktemp_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mktemp_s
- _wmktemp_s
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
apitype: DLLExport
f1_keywords:
- wmktemp_s
- mktemp_s
- _mktemp_s
- _wmktemp_s
dev_langs: C++
helpviewer_keywords:
- _tmktemp_s function
- mktemp_s function
- _wmktemp_s function
- _mktemp_s function
- files [C++], temporary
- tmktemp_s function
- wmktemp_s function
- temporary files [C++]
ms.assetid: 92a7e269-7f3d-4c71-bad6-14bc827a451d
caps.latest.revision: "23"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9515212418b4bd4e8d9957254b2fafaf451a3adc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mktemps-wmktemps"></a>_mktemp_s, _wmktemp_s
Crea un nome di file univoco. Queste sono versioni di [_mktemp, _wmktemp](../../c-runtime-library/reference/mktemp-wmktemp.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _mktemp_s(  
   char *template,  
   size_t sizeInChars  
);  
errno_t _wmktemp_s(  
   wchar_t *template,  
   size_t sizeInChars  
);  
template <size_t size>  
errno_t _mktemp_s(  
   char (&template)[size]  
); // C++ only  
template <size_t size>  
errno_t _wmktemp_s(  
   wchar_t (&template)[size]  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `template`  
 Modello di nome di file.  
  
 `sizeInChars`  
 La dimensione del buffer in caratteri a byte singolo in `_mktemp_s` o in caratteri wide in `_wmktemp_s`, incluso il carattere di terminazione Null.  
  
## <a name="return-value"></a>Valore restituito  
 Entrambe queste funzioni restituiscono zero in caso di esito positivo e un codice di errore in caso di esito negativo.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`template`|`sizeInChars`|**valore restituito**|**nuovo valore nel modello**|  
|----------------|-------------------|----------------------|-------------------------------|  
|`NULL`|qualsiasi|`EINVAL`|`NULL`|  
|Formato non corretto (vedere la sezione `Remarks` per il formato corretto)|qualsiasi|`EINVAL`|stringa vuota|  
|qualsiasi|<= numero di X|`EINVAL`|stringa vuota|  
  
 Se si verifica una delle condizioni di errore precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e le funzioni restituiscono `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_mktemp_s` crea un nome file univoco modificando l'argomento `template`, in modo che, dopo la chiamata, il puntatore `template` punti a una stringa contenente il nuovo nome del file. `_mktemp_s` gestisce automaticamente e in modo appropriato gli argomenti stringa di caratteri multibyte, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte in uso nel sistema di runtime. `_wmktemp_s` è una versione a caratteri wide di `_mktemp_s`. L'argomento di `_wmktemp_s` è una stringa di caratteri wide. `_wmktemp_s` e `_mktemp_s` si comportano in modo identico, ma `_wmktemp_s` non gestisce le stringhe di caratteri multibyte.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tmktemp_s`|`_mktemp_s`|`_mktemp_s`|`_wmktemp_s`|  
  
 L'argomento `template` ha il formato `baseXXXXXX`, dove `base` è la parte del nome del nuovo file che viene fornito e ogni X è un segnaposto per un carattere fornito da `_mktemp_s`. Ogni carattere del segnaposto in `template` deve essere una X maiuscola. `_mktemp_s` mantiene `base` e sostituisce la prima X finale con un carattere alfabetico. `_mktemp_s` sostituisce le X finali successive con un valore di cinque cifre. Questo valore è un numero univoco che identifica il processo chiamante oppure il thread chiamante nei programmi multithreading.  
  
 Ogni chiamata riuscita a `_mktemp_s` modifica `template`. In ogni chiamata successiva dallo stesso processo o thread con lo stesso argomento `template`, `_mktemp_s` controlla se sono presenti nomi di file corrispondenti ai nomi restituiti da `_mktemp_s` nelle chiamate precedenti. Se non esiste alcun file per un determinato nome, `_mktemp_s` restituisce tale nome. Se sono presenti file per tutti i nomi restituiti in precedenza, `_mktemp_s` crea un nuovo nome sostituendo il carattere alfabetico usato nel nome restituito in precedenza con la successiva lettera minuscola disponibile, in ordine dalla 'a' alla 'z'. Ad esempio, se `base` è:  
  
```  
fn  
```  
  
 e il valore di cinque cifre fornito da `_mktemp_s` è 12345, il primo nome restituito è:  
  
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
  
 `_mktemp_s` consente di creare al massimo 26 nomi di file univoci per qualsiasi combinazione specificata di valori di base e modello. Pertanto, FNZ12345 è l'ultimo nome di file univoco che `_mktemp_s` può creare per i valori `base` e `template` usati in questo esempio.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_mktemp_s`|\<io.h>|  
|`_wmktemp_s`|\<io.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_mktemp_s.cpp  
/* The program uses _mktemp to create  
 * five unique filenames. It opens each filename  
 * to ensure that the next name is unique.  
 */  
  
#include <io.h>  
#include <string.h>  
#include <stdio.h>  
  
char *fnTemplate = "fnXXXXXX";  
char names[5][9];  
  
int main()  
{  
   int i, err, sizeInChars;  
   FILE *fp;  
  
   for( i = 0; i < 5; i++ )  
   {  
      strcpy_s( names[i], sizeof(names[i]), fnTemplate );  
      /* Get the size of the string and add one for the null terminator.*/  
      sizeInChars = strnlen(names[i], 9) + 1;  
      /* Attempt to find a unique filename: */  
      err = _mktemp_s( names[i], sizeInChars );  
      if( err != 0 )  
         printf( "Problem creating the template" );  
      else  
      {  
         if( fopen_s( &fp, names[i], "w" ) == 0 )  
            printf( "Unique filename is %s\n", names[i] );  
         else  
            printf( "Cannot open %s\n", names[i] );  
         fclose( fp );  
      }  
   }  
  
   return 0;  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
Unique filename is fna03188  
Unique filename is fnb03188  
Unique filename is fnc03188  
Unique filename is fnd03188  
Unique filename is fne03188  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [_getpid](../../c-runtime-library/reference/getpid.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [_tempnam, _wtempnam, tmpnam, _wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)   
 [tmpfile_s](../../c-runtime-library/reference/tmpfile-s.md)