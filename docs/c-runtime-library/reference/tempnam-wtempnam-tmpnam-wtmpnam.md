---
title: _tempnam, _wtempnam, tmpnam, _wtmpnam | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wtempnam
- _wtmpnam
- tmpnam
- _tempnam
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
- wtempnam
- _wtmpnam
- wtmpnam
- tmpnam
- _wtempnam
- _tempnam
dev_langs:
- C++
helpviewer_keywords:
- wtempnam function
- file names [C++], creating temporary
- _tempnam function
- ttmpnam function
- tmpnam function
- tempnam function
- wtmpnam function
- temporary files, creating
- file names [C++], temporary
- _ttmpnam function
- _wtmpnam function
- _wtempnam function
ms.assetid: 3ce75f0f-5e30-42a6-9791-8d7cbfe70fca
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 0600d44b2b87ed3bb56e7d1c64fffd762e77aff2
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="tempnam-wtempnam-tmpnam-wtmpnam"></a>_tempnam, _wtempnam, tmpnam, _wtmpnam
Genera i nomi che è possibile usare per creare file temporanei. Sono disponibili versioni più sicure di alcune di queste funzioni. Vedere [tmpnam_s, _wtmpnam_s](../../c-runtime-library/reference/tmpnam-s-wtmpnam-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *_tempnam(  
   const char *dir,  
   const char *prefix   
);  
wchar_t *_wtempnam(  
   const wchar_t *dir,  
   const wchar_t *prefix   
);  
char *tmpnam(  
   char *str   
);  
wchar_t *_wtmpnam(  
   wchar_t *str   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `prefix`  
 La stringa da anteporre ai nomi restituiti da `_tempnam`.  
  
 `dir`  
 Percorso usato nel nome del file se non è presente alcuna variabile di ambiente TMP o se TMP non è una directory valida.  
  
 `str`  
 Puntatore che conterrà il nome generato e sarà identico a quello restituito dalla funzione. Questo è un modo pratico per salvare il nome generato.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore al nome generato o `NULL` se si verifica un errore. Errore può verificarsi se si tenta più di `TMP_MAX` (vedere STDIO. H) chiamate con `tmpnam` o se si utilizza `_tempnam` ed è presente un nome di directory non valido specificato nella variabile di ambiente TMP e nel `dir` parametro.  
  
> [!NOTE]
>  I puntatori restituiti da `tmpnam` e `_wtmpnam` puntano a buffer statici interni. Non chiamare [free](../../c-runtime-library/reference/free.md) per deallocare questi puntatori. È necessario chiamare `free` per i puntatori allocati da `_tempnam` e `_wtempnam`.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni restituisce il nome di un file che non esiste. `tmpnam` restituisce un nome univoco nella directory di lavoro corrente e `_tempnam` consente di generare un nome univoco in una directory diversa da quella corrente. Tenere presente che quando un nome di file è preceduto da una barra rovesciata senza informazioni sul percorso, ad esempio \nomef21, significa che il nome è valido per la directory di lavoro corrente.  
  
 Per `tmpnam`, è possibile archiviare questo nome del file generato in `str`. Se `str` è `NULL`, `tmpnam` lascia il risultato in un buffer interno statico. Le eventuali chiamate successive eliminano quindi questo valore. Il nome generato da `tmpnam` è costituito da un nome di file generato dal programma e, dopo la prima chiamata a `tmpnam`, un'estensione di file composta da numeri sequenziali in base 32 (.1-.vvu, quando `TMP_MAX` in STDIO.H è 32.767).  
  
 `_tempnam` genererà un nome di file univoco per una directory scelto in base alle regole seguenti:  
  
-   Se la variabile di ambiente TMP è definita e impostata su un nome di directory valido, verranno generati nomi di file univoci per la directory specificata da TMP.  
  
-   Se la variabile di ambiente TMP non è definita o se è impostata sul nome di una directory che non esiste, `_tempnam` userà il parametro `dir` come percorso per il quale generare nomi univoci.  
  
-   Se la variabile di ambiente TMP non è definita o se è impostata sul nome di una directory che non esiste, e se `dir` è `NULL` oppure impostato sul nome di una directory che non esiste, `_tempnam` userà la directory di lavoro corrente per generare nomi univoci. Attualmente, se sia TMP che `dir` specificano nomi di directory inesistenti, la chiamata alla funzione `_tempnam` avrà esito negativo.  
  
 Il nome restituito da `_tempnam` sarà una concatenazione di `prefix` e un numero progressivo, che verranno combinati per creare un nome di file univoco per la directory specificata. `_tempnam` genera nomi di file senza estensione. `_tempnam` usa [malloc](../../c-runtime-library/reference/malloc.md) per allocare spazio per il nome del file. Il programma è responsabile per il rilascio di questo spazio quando non è più necessario.  
  
 `_tempnam` e `tmpnam` gestiscono automaticamente gli argomenti stringa di caratteri multibyte in modo appropriato, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici OEM ottenuta dal sistema operativo. `_wtempnam` è una versione a caratteri wide di `_tempnam`. Gli argomenti e il valore restituito di `_wtempnam` sono stringhe di caratteri wide. `_wtempnam` e `_tempnam` si comportano in modo identico, ma `_wtempnam` non gestisce le stringhe di caratteri multibyte. `_wtmpnam` è una versione a caratteri wide di `tmpnam`. L'argomento e il valore restituito di `_wtmpnam` sono stringhe a caratteri wide. `_wtmpnam` e `tmpnam` si comportano in modo identico, ma `_wtmpnam` non gestisce le stringhe di caratteri multibyte.  
  
 Se `_DEBUG` e `_CRTDBG_MAP_ALLOC` sono definiti, `_tempnam` e `_wtempnam` vengono sostituite da chiamate a [_tempnam_dbg e _wtempnam_dbg](../../c-runtime-library/reference/tempnam-dbg-wtempnam-dbg.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_ttmpnam`|`tmpnam`|`tmpnam`|`_wtmpnam`|  
|`_ttempnam`|`_tempnam`|`_tempnam`|`_wtempnam`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_tempnam`|\<stdio.h>|  
|`_wtempnam`, `_wtmpnam`|\<stdio.h> o \<wchar.h>|  
|`tmpnam`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_tempnam.c  
// compile with: /W3  
// This program uses tmpnam to create a unique filename in the  
// current working directory, then uses _tempnam to create   
// a unique filename with a prefix of stq.   
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{     
   char* name1 = NULL;  
   char* name2 = NULL;  
  
   // Create a temporary filename for the current working directory:   
   if( ( name1 = tmpnam( NULL ) ) != NULL ) // C4996  
   // Note: tmpnam is deprecated; consider using tmpnam_s instead  
      printf( "%s is safe to use as a temporary file.\n", name1 );  
   else  
      printf( "Cannot create a unique filename\n" );  
  
   // Create a temporary filename in temporary directory with the  
   // prefix "stq". The actual destination directory may vary  
   // depending on the state of the TMP environment variable and  
   // the global variable P_tmpdir.     
  
   if( ( name2 = _tempnam( "c:\\tmp", "stq" ) ) != NULL )  
      printf( "%s is safe to use as a temporary file.\n", name2 );   
   else  
      printf( "Cannot create a unique filename\n" );  
  
   // When name2 is no longer needed :     
   if(name2)  
     free(name2);  
  
}  
```  
  
```Output  
\s1gk. is safe to use as a temporary file.  
C:\DOCUME~1\user\LOCALS~1\Temp\2\stq2 is safe to use as a temporary file.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [tmpfile](../../c-runtime-library/reference/tmpfile.md)   
 [tmpfile_s](../../c-runtime-library/reference/tmpfile-s.md)
