---
title: "_set_fmode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_fmode"
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
  - "_set_fmode"
  - "set_fmode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_set_fmode (funzione)"
  - "conversione di file [C++], modalità predefinita"
  - "conversione di file [C++], impostazione modalità"
  - "set_fmode (funzione)"
ms.assetid: f80eb9c7-733b-4652-a9bc-6b3790a35f12
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _set_fmode
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta la modalità di conversione di file predefinita per le operazioni di I\/O dei file.  
  
## Sintassi  
  
```  
errno_t _set_fmode(   
   int mode   
);  
```  
  
#### Parametri  
 \[in\] `mode`  
 La modalità di traslazione del file desiderata: `_O_TEXT` o `_O_BINARY`.  
  
## Valore restituito  
 Restituisce zero se ha esito positivo, un codice di errore in caso di errore.  If `mode` non è `_O_TEXT` o `_O_BINARY` o `_O_WTEXT`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `EINVAL`.  
  
## Note  
 La funzione imposta la variabile globale di [\_fmode](../../c-runtime-library/fmode.md).  Questa variabile specifica la modalità di traslazione di file predefinita per le operazioni `_open` e `_pipe` di I\/O per i file.  
  
 `_O_TEXT` e `_O_BINARY` sono definiti in Fcntl.h.  `EINVAL` è definito in Errno.h.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_set_fmode`|\<stdlib.h\>|\<fcntl.h\>, \<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_set_fmode.c  
#include <stdlib.h>  
#include <stdio.h>  
#include <fcntl.h>     /* for _O_TEXT and _O_BINARY */  
#include <errno.h>     /* for EINVAL */  
#include <sys\stat.h>  /* for _S_IWRITE */  
#include <share.h>     /* for _SH_DENYNO */  
  
int main()  
{  
   int mode, fd, ret;  
   errno_t err;  
   int buf[12] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74,  
                   75, 76 };  
   char * filename = "fmode.out";  
  
   err = _get_fmode(&mode);  
   if (err == EINVAL)  
   {  
      printf( "Invalid parameter: mode\n");  
      return 1;  
   }  
   else  
      printf( "Default Mode is %s\n", mode == _O_TEXT ? "text" :  
              "binary");  
  
   err = _set_fmode(_O_BINARY);  
   if (err == EINVAL)  
   {  
      printf( "Invalid mode.\n");  
      return 1;  
   }  
  
   if ( _sopen_s(&fd, filename, _O_RDWR | _O_CREAT, _SH_DENYNO, _S_IWRITE | _S_IREAD) != 0 )  
   {  
      printf( "Error opening the file %s\n", filename);  
      return 1;  
   }  
  
   if (ret = _write(fd, buf, 12*sizeof(int)) < 12*sizeof(int))  
   {  
      printf( "Problem writing to the file %s.\n", filename);  
      printf( "Number of bytes written: %d\n", ret);  
   }  
  
   if (_close(fd) != 0)  
   {  
      printf("Error closing the file %s. Error code %d.\n",  
             filename, errno);  
   }  
  
   system("type fmode.out");  
}  
```  
  
  **Default Mode is binary**  
**A   B   C   D   E   F   G   H   I   J   K   L**    
## Vedere anche  
 [\_fmode](../../c-runtime-library/fmode.md)   
 [\_get\_fmode](../../c-runtime-library/reference/get-fmode.md)   
 [\_setmode](../../c-runtime-library/reference/setmode.md)   
 [I\/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md)