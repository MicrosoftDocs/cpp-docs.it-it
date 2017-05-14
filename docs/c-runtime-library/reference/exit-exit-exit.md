---
title: exit, _Exit, _exit | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _exit
- exit
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- Exit
- _exit
- process/exit
- process/_Exit
- stdlib/exit
- stdlib/_Exit
dev_langs:
- C++
helpviewer_keywords:
- exit function
- _exit function
- processes, terminating
- function calls, terminating
- process termination, calling
ms.assetid: b1501fa6-27c2-478c-9e93-cc4fd802a01f
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 8d6f75bb19c2cfd89d8714ed87ff91ddf340055e
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="exit-exit-exit"></a>exit, _Exit, _exit
Termina il processo di chiamata. La funzione `exit` termina dopo la pulizia `_exit` e `_Exit` terminano immediatamente la funzione.  
  
> [!NOTE]
>  Non usare questo metodo per interrompere un'app della piattaforma UWP (Universal Windows Platform) o un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] , tranne negli scenari di test o di debug. La chiusura di un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] a livello di codice o dell'interfaccia utente non è consentita. Per altre informazioni sulle app di Windows 8 e 8.1, vedere [Ciclo di vita dell'app](http://go.microsoft.com/fwlink/?LinkId=262853). Per altre informazioni sulle app di Windows 10, vedere [Guide pratiche per le app di Windows 10](http://go.microsoft.com/fwlink/p/?linkid=619133).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void exit(   
   int const status   
);  
void _Exit(   
   int const status   
);  
void _exit(   
   int const status   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `status`  
 Codice di stato di uscita.  
  
## <a name="remarks"></a>Note  
 Le funzioni `exit`, `_Exit` e `_exit` terminano il processo di chiamata. La funzione `exit` chiama i distruttori per gli oggetti locali del thread, quindi chiama, secondo l'ordine LIFO (Last In First Out), le funzioni registrate da `atexit` e `_onexit`e infine scarica tutti i buffer di file prima di terminare il processo. Le funzioni `_Exit` e `_exit` terminano il processo senza eliminare gli oggetti locali del thread o elaborare la funzione `atexit` o `_onexit` e senza scaricare i buffer di flusso.  
  
 Anche se le chiamate `exit`, `_Exit` e `_exit` non restituiscono un valore, il byte di ordine inferiore di `status` viene reso disponibile all'ambiente host o al processo di chiamata in attesa, se presente, dopo la chiusura del processo. In genere, il chiamante imposta il valore `status` su 0 per indicare una chiusura normale o un altro valore per indicare un errore. Il valore `status` è disponibile nel comando batch del sistema operativo `ERRORLEVEL` ed è rappresentato da una di queste due costanti: `EXIT_SUCCESS`, che rappresenta un valore 0 o `EXIT_FAILURE`, che rappresenta un valore 1.  
  
 Il comportamento delle funzioni `exit`, `_Exit`, `_exit`, `quick_exit`, `_cexit`e `_c_exit` è il seguente.  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|`exit`|Esegue le procedure complete di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|  
|`_Exit`|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|  
|`_exit`|Esegue le procedure minime di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|  
|`quick_exit`|Esegue le procedure rapide di terminazione della libreria C, termina il processo e fornisce il codice di stato specificato all'ambiente host.|  
|`_cexit`|Esegue le procedure complete di terminazione della libreria C e torna al chiamante. Non termina il processo.|  
|`_c_exit`|Esegue le procedure minime di terminazione della libreria C e torna al chiamante. Non termina il processo.|  
  
 Quando si chiama la funzione `exit`,  `_Exit` o `_exit` , i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati. Un oggetto automatico viene definito in una funzione in cui l'oggetto non è dichiarato come statico. Un oggetto temporaneo è un oggetto creato dal compilatore. Per eliminare un oggetto automatico prima di chiamare `exit`, `_Exit`o `_exit`, chiamare esplicitamente il distruttore per l'oggetto, come indicato di seguito:  
  
```  
myObject.myClass::~myClass();  
```  
  
 Non usare `DLL_PROCESS_ATTACH` per chiamare `exit` da `DllMain`. Per uscire dalla funzione `DLLMain` , tornare a `FALSE` da `DLL_PROCESS_ATTACH`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`exit`, `_Exit`, `_exit`|\<process.h> o \<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_exit.c  
// This program returns an exit code of 1. The  
// error code could be tested in a batch file.  
  
#include <stdlib.h>  
  
int main( void )  
{  
   exit( 1 );  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [_cexit, _c_exit](../../c-runtime-library/reference/cexit-c-exit.md)   
 [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [quick_exit](../../c-runtime-library/reference/quick-exit1.md)   
 [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)
