---
title: "_setmode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_setmode"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_setmode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_setmode (funzione)"
  - "conversione di file [C++], impostazione modalità"
  - "file [C++], modalità"
  - "file [C++], conversione"
  - "setmode (funzione)"
  - "Unicode [C++], output di console"
ms.assetid: 996ff7cb-11d1-43f4-9810-f6097182642a
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# _setmode
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta la modalità di conversione di file.  
  
## Sintassi  
  
```  
int _setmode (    int fd,    int mode  );  
```  
  
#### Parametri  
 `fd`  
 Descrittore di file.  
  
 `mode`  
 Nuova modalità di conversione.  
  
## Valore restituito  
 In caso di esito positivo, restituisce la modalità di conversione precedente.  
  
 Se a questa funzione sono passati parametri non validi, sarà richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce –1 e imposta `errno` su `EBADF`, che indica un descrittore di file non valido, o `EINVAL`, che indica un argomento `mode` non valido.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_setmode` imposta su `mode` la modalità di conversione del file specificato da `fd`.  Se si passa `_O_TEXT` come `mode`, sarà impostata la modalità testo \(conversione\).  Le combinazioni di ritorno a capo\-avanzamento riga sono convertite in un singolo carattere di avanzamento riga in fase di input.  I caratteri di avanzamento riga sono convertiti in combinazioni di ritorno a capo\-avanzamento riga in fase di output.  Se si passa `_O_BINARY`, sarà impostata la modalità binaria \(nessuna conversione\), in cui queste conversioni sono eliminate.  
  
 È anche possibile passare `_O_U16TEXT`, `_O_U8TEXT` o \_`O_WTEXT` per abilitare la modalità Unicode, come illustrato nel secondo esempio più avanti in questo documento.  `_setmode` è in genere usato per modificare la modalità di traduzione predefinita di `stdin` e `stdout`, ma è possibile usarlo per qualsiasi file.  Se si applica `_setmode` al descrittore di file per un flusso, chiamare `_setmode` prima di eseguire qualsiasi operazione di input o output nel flusso.  
  
> [!CAUTION]
>  Se si scrivono dati in un flusso di file, scaricare esplicitamente il codice usando [fflush](../../c-runtime-library/reference/fflush.md) prima di usare `_setmode` per cambiare la modalità.  Se non si scarica il codice, è possibile che si ottenga comportamento imprevisto.  Se non sono stati scritti dati nel flusso, non sarà necessario scaricare il codice.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`_setmode`|\<io.h\>|\<fcntl.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_setmode.c  
// This program uses _setmode to change  
// stdin from text mode to binary mode.  
  
#include <stdio.h>  
#include <fcntl.h>  
#include <io.h>  
  
int main( void )  
{  
   int result;  
  
   // Set "stdin" to have binary mode:  
   result = _setmode( _fileno( stdin ), _O_BINARY );  
   if( result == -1 )  
      perror( "Cannot set mode" );  
   else  
      printf( "'stdin' successfully changed to binary mode\n" );  
}  
```  
  
  **Passaggio di 'stdin' alla modalità binaria riuscito**   
## Esempio  
  
```  
// crt_setmodeunicode.c  
// This program uses _setmode to change  
// stdout to Unicode. Cyrillic and Ideographic  
// characters will appear on the console (if  
// your console font supports those character sets).  
  
#include <fcntl.h>  
#include <io.h>  
#include <stdio.h>  
  
int main(void) {  
    _setmode(_fileno(stdout), _O_U16TEXT);  
    wprintf(L"\x043a\x043e\x0448\x043a\x0430 \x65e5\x672c\x56fd\n");  
    return 0;  
}  
  
```  
  
## Equivalente .NET Framework  
  
-   [\<caps:sentence id\="tgt28" sentenceid\="fe03c471a7a38d5378cea62467482dae" class\="tgtSentence"\>System::IO::BinaryReader Class\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.io.binaryreader.aspx)  
  
-   [\<caps:sentence id\="tgt29" sentenceid\="105e62b7505c25e3e182779c87f145eb" class\="tgtSentence"\>System::IO::TextReader Class\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.io.textreader.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [\_set\_fmode](../../c-runtime-library/reference/set-fmode.md)