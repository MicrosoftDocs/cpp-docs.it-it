---
title: tmpnam_s, _wtmpnam_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- tmpnam_s
- _wtmpnam_s
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
- tmpnam_s
- _wtmpnam_s
- L_tmpnam_s
dev_langs:
- C++
helpviewer_keywords:
- tmpnam_s function
- file names [C++], creating temporary
- _wtmpnam_s function
- L_tmpnam_s constant
- temporary files, creating
- file names [C++], temporary
- wtmpnam_s function
ms.assetid: e70d76dc-49f5-4aee-bfa2-f1baa2bcd29f
caps.latest.revision: 20
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
ms.openlocfilehash: 3635e551e54a36d8eafb0727c7bb4e7056df36f5
ms.lasthandoff: 02/24/2017

---
# <a name="tmpnams-wtmpnams"></a>tmpnam_s, _wtmpnam_s
Genera i nomi che è possibile usare per creare file temporanei. Queste sono versioni di [tmpnam e _wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t tmpnam_s(  
   char * str,  
   size_t sizeInChars   
);  
errno_t _wtmpnam_s(  
   wchar_t *str,  
   size_t sizeInChars   
);  
template <size_t size>  
errno_t tmpnam_s(  
   char (&str)[size]  
); // C++ only  
template <size_t size>  
errno_t _wtmpnam_s(  
   wchar_t (&str)[size]  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `str`  
 Puntatore che conterrà il nome generato.  
  
 [in] `sizeInChars`  
 Dimensioni del buffer in caratteri.  
  
## <a name="return-value"></a>Valore restituito  
 Entrambe queste funzioni restituiscono 0 in caso di esito positivo o un numero di errore in caso di esito negativo.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|||||  
|-|-|-|-|  
|`str`|`sizeInChars`|**Valore restituito**|**Contenuto di**  `str`|  
|`NULL`|qualsiasi|`EINVAL`|non modificato|  
|non `NULL` (punta alla memoria valida)|troppo breve|`ERANGE`|non modificato|  
  
 Se `str` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni restituisce il nome di un file che non esiste. `tmpnam_s` restituisce un nome univoco nella directory di lavoro corrente. Tenere presente che quando un nome di file è preceduto da una barra rovesciata senza informazioni sul percorso, ad esempio \nomef21, significa che il nome è valido per la directory di lavoro corrente.  
  
 Per `tmpnam_s`, è possibile archiviare questo nome del file generato in `str`. La lunghezza massima di una stringa restituita da `tmpnam_s` è `L_tmpnam_s`, definito in STDIO.H. Se `str` è `NULL`, `tmpnam_s` lascia il risultato in un buffer interno statico. Le eventuali chiamate successive eliminano quindi questo valore. Il nome generato da `tmpnam_s` è costituito da un nome di file generato dal programma e, dopo la prima chiamata a `tmpnam_s`, un'estensione di file composta da numeri sequenziali in base 32 (.1-.1vvvvvu, quando `TMP_MAX_S` in STDIO.H è INT_MAX).  
  
 `tmpnam_s` gestisce automaticamente gli argomenti stringa di caratteri multibyte in modo appropriato, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici OEM ottenuta dal sistema operativo. `_wtmpnam_s` è una versione a caratteri wide di `tmpnam_s`. L'argomento e il valore restituito di `_wtmpnam_s` sono stringhe a caratteri wide. `_wtmpnam_s` e `tmpnam_s` si comportano in modo identico, ma `_wtmpnam_s` non gestisce le stringhe di caratteri multibyte.  
  
 In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_ttmpnam_s`|`tmpnam_s`|`tmpnam_s`|`_wtmpnam_s`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`tmpnam_s`|\<stdio.h>|  
|`_wtmpnam_s`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_tmpnam_s.c  
// This program uses tmpnam_s to create a unique filename in the  
// current working directory.   
//  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{     
   char name1[L_tmpnam_s];  
   errno_t err;  
   int i;  
  
   for (i = 0; i < 15; i++)  
   {  
      err = tmpnam_s( name1, L_tmpnam_s );  
      if (err)  
      {  
         printf("Error occurred creating unique filename.\n");  
         exit(1);  
      }  
      else  
      {  
         printf( "%s is safe to use as a temporary file.\n", name1 );  
      }  
   }    
}  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [tmpfile_s](../../c-runtime-library/reference/tmpfile-s.md)
