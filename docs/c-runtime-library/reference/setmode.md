---
title: _setmode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _setmode
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
- _setmode
dev_langs:
- C++
helpviewer_keywords:
- Unicode [C++], console output
- files [C++], modes
- _setmode function
- file translation [C++], setting mode
- files [C++], translation
- setmode function
ms.assetid: 996ff7cb-11d1-43f4-9810-f6097182642a
caps.latest.revision: 23
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
ms.openlocfilehash: f6d84d5f40b49edaf4e79059a6661a51ca6c209a
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="setmode"></a>_setmode
Imposta la modalità di conversione di file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _setmode (  
   int fd,  
   int mode   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `fd`  
 Descrittore di file.  
  
 `mode`  
 Nuova modalità di conversione.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo, restituisce la modalità di conversione precedente.  
  
 Se a questa funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta `errno` al `EBADF`, che indica un descrittore di file non valido, o `EINVAL`, che indica un oggetto non valido `mode` argomento.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_setmode` imposta su `mode` la modalità di conversione del file specificato da `fd`. Se si passa `_O_TEXT` come `mode`, sarà impostata la modalità testo (conversione). Combinazioni di ritorno a capo return-line feed (CR-LF) vengono convertite in una singola riga carattere di avanzamento nell'input. I caratteri di avanzamento riga sono convertiti in combinazioni di ritorno a capo-avanzamento riga in fase di output. Se si passa `_O_BINARY`, sarà impostata la modalità binaria (nessuna conversione), in cui queste conversioni sono eliminate.  
  
 È inoltre possibile passare `_O_U16TEXT`, `_O_U8TEXT`, o `_O_WTEXT` per abilitare la modalità Unicode, come illustrato nel secondo esempio più avanti in questo documento. `_setmode` è in genere usato per modificare la modalità di traduzione predefinita di `stdin` e `stdout`, ma è possibile usarlo per qualsiasi file. Se si applica `_setmode` al descrittore di file per un flusso, chiamare `_setmode` prima di eseguire qualsiasi operazione di input o output nel flusso.  
  
> [!CAUTION]
>  Se si scrivono dati in un flusso di file, scaricare esplicitamente il codice usando [fflush](../../c-runtime-library/reference/fflush.md) prima di usare `_setmode` per cambiare la modalità. Se non si scarica il codice, è possibile che si ottenga comportamento imprevisto. Se non sono stati scritti dati nel flusso, non sarà necessario scaricare il codice.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|---------------------|----------------------|  
|`_setmode`|\<io.h>|\<fcntl.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
'stdin' successfully changed to binary mode  
```  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_set_fmode](../../c-runtime-library/reference/set-fmode.md)
