---
title: gets_s, _getws_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _getws_s
- gets_s
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
- _getws_s
- gets_s
dev_langs: C++
helpviewer_keywords:
- getws_s function
- _getws_s function
- lines, getting
- streams, getting lines
- buffers, avoiding overruns
- buffer overruns
- buffers, buffer overruns
- gets_s function
- standard input, reading from
ms.assetid: 5880c36f-122c-4061-a1a5-aeeced6fe58c
caps.latest.revision: "29"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: ea0c9053ef052359a0dc827299ade1ef2bbcb20f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="getss-getwss"></a>gets_s, _getws_s
Ottiene una riga dal flusso `stdin` . Queste versioni di [gets, _getws](../../c-runtime-library/gets-getws.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *gets_s(   
   char *buffer,  
   size_t sizeInCharacters  
);  
wchar_t *_getws_s(   
   wchar_t *buffer,  
   size_t sizeInCharacters  
);  
template <size_t size>  
char *gets_s(   
   char (&buffer)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_getws_s(   
   wchar_t (&buffer)[size]  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `buffer`  
 Percorso di archiviazione per la stringa di input.  
  
 [in] `sizeInCharacters`  
 Dimensione del buffer.  
  
## <a name="return-value"></a>Valore restituito  
 Se l'esito è positivo, restituisce `buffer`. Un puntatore `NULL` indica una condizione di errore o di fine file. Usare [ferror](../../c-runtime-library/reference/ferror.md) o [feof](../../c-runtime-library/reference/feof.md) per determinare la condizione che si è verificata.  
  
## <a name="remarks"></a>Note  
 La funzione `gets_s` legge una riga dal flusso di input standard `stdin` e la archivia in `buffer`. La riga è costituita da tutti i caratteri, incluso il primo carattere di nuova riga ('\n'). `gets_s` sostituisce quindi il carattere di nuova riga con un carattere Null ('\0') prima di restituire la riga. Al contrario, la funzione `fgets_s` mantiene il carattere di nuova riga.  
  
 Se il primo carattere letto è il carattere di fine del file, viene archiviato un carattere Null all'inizio di `buffer` e viene restituito `NULL`.  
  
 `_getws` è una versione a caratteri wide di `gets_s` il cui argomento e il cui valore restituito sono stringhe di caratteri wide.  
  
 Se `buffer` è `NULL` o `sizeInCharacters` è minore o uguale a zero o se il buffer è troppo piccolo per contenere la riga di input e un carattere di terminazione Null, queste funzioni richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `NULL` e impostano errno su `ERANGE`.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_getts`|`gets_s`|`gets_s`|`_getws`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`gets_s`|\<stdio.h>|  
|`_getws`|\<stdio.h> o \<wchar.h>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Gli handle del flusso standard associati alla console, `stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime del linguaggio C nelle app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_gets_s.c  
// This program retrieves a string from the stdin and   
// prints the same string to the console.  
  
#include <stdio.h>  
  
int main( void )  
{  
   char line[21]; // room for 20 chars + '\0'  
   gets_s( line, 20 );  
   printf( "The line entered was: %s\n", line );  
}  
```  
  
```Output  
  
Hello there!The line entered was: Hello there!  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [gets, _getws](../../c-runtime-library/gets-getws.md)   
 [fgets, fgetws](../../c-runtime-library/reference/fgets-fgetws.md)   
 [fputs, fputws](../../c-runtime-library/reference/fputs-fputws.md)   
 [puts, _putws](../../c-runtime-library/reference/puts-putws.md)