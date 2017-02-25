---
title: "_matherr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_matherr"
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
apitype: "DLLExport"
f1_keywords: 
  - "_matherr"
  - "matherr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_matherr (funzione)"
  - "matherr (funzione)"
ms.assetid: b600d66e-165a-4608-a856-8fb418d46760
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _matherr
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestire gli errori matematici.  
  
## Sintassi  
  
```  
  
      int _matherr(  
   struct _exception *except   
);  
```  
  
#### Parametri  
 *except*  
 Puntatore a una struttura contenente le informazioni sull'errore.  
  
## Valore restituito  
 \_**matherr** restituisce 0 per indicare un errore o un valore diverso da zero per indicare l'esito positivo.  Se \_**matherr** restituisce 0, un messaggio di errore è possibile visualizzare e `errno` è impostata su un valore di errore appropriato.  Se \_**matherr** restituisce un valore diverso da zero, nessun messaggio di errore e `errno` rimane invariato.  
  
 Per ulteriori informazioni su questi e altri codici restituiti, consultare [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione **matherr** genera errori generati dalle funzioni a virgola mobile nella libreria matematica.  Tutte queste funzioni chiamano \_**matherr** quando viene rilevato un errore.  
  
 Per la gestione degli errori speciali, è possibile fornire una definizione diversa di \_**matherr**.  Se si utilizza la versione collegata in modo dinamico della libreria di runtime C \(Msvcr90.dll\), è possibile sostituire la routine predefinita di **matherr** in un client eseguibile con una versione definita dall'utente.  Tuttavia, non è possibile sostituire la routine predefinita di `_matherr` in un client DLL Msvcr90.dll.  
  
 Quando si verifica un errore in una routine matematiche, \_**matherr** viene chiamato con un puntatore a una struttura del tipo **\_exception** \(definita in Math.h\) come argomento.  La struttura **\_exception** contiene i seguenti elementi.  
  
 **int type**  
 Tipo di eccezione.  
  
 **char \*name**  
 Nome della funzione in cui si è verificato l'errore.  
  
 **double arg1**, **arg2**  
 Primo e il secondo \(se presenti\) argomenti della funzione.  
  
 **double retval**  
 Valore restituito dalla funzione.  
  
 **type** specifica il tipo di errore matematica.  È uno dei seguenti valori, definiti in Math.h.  
  
 `_DOMAIN`  
 Errore di dominio dell'argomento.  
  
 `_SING`  
 Singolarità dell'argomento.  
  
 `_OVERFLOW`  
 Errore di intervallo di overflow.  
  
 `_PLOSS`  
 Perdita parziale di significato.  
  
 `_TLOSS`  
 Perdita totale di significato.  
  
 `_UNDERFLOW`  
 Il risultato è troppo piccolo per essere rappresentato. \(Questa condizione non è attualmente supportata.\)  
  
 Il membro della struttura **name** è un puntatore a una stringa con terminazione null che contiene il nome della funzione che ha provocato l'errore.  I membri della struttura **arg1** e **arg2** specificano i valori che hanno provocato l'errore. \(Se un solo argomento viene fornito, viene archiviato in **arg1**\).  
  
 Il valore restituito predefinito dell'errore specificato è **retval**.  Se si modifica il valore restituito, deve specificare se un errore in realtà si è verificato.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_matherr`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_matherr.c  
/* illustrates writing an error routine for math   
 * functions. The error function must be:  
 *      _matherr  
 */  
  
#include <math.h>  
#include <string.h>  
#include <stdio.h>  
  
int main()  
{  
    /* Do several math operations that cause errors. The _matherr  
     * routine handles _DOMAIN errors, but lets the system handle  
     * other errors normally.  
     */  
    printf( "log( -2.0 ) = %e\n", log( -2.0 ) );  
    printf( "log10( -5.0 ) = %e\n", log10( -5.0 ) );  
    printf( "log( 0.0 ) = %e\n", log( 0.0 ) );  
}  
  
/* Handle several math errors caused by passing a negative argument  
 * to log or log10 (_DOMAIN errors). When this happens, _matherr  
 * returns the natural or base-10 logarithm of the absolute value  
 * of the argument and suppresses the usual error message.  
 */  
int _matherr( struct _exception *except )  
{  
    /* Handle _DOMAIN errors for log or log10. */  
    if( except->type == _DOMAIN )  
    {  
        if( strcmp( except->name, "log" ) == 0 )  
        {  
            except->retval = log( -(except->arg1) );  
            printf( "Special: using absolute value: %s: _DOMAIN "  
                     "error\n", except->name );  
            return 1;  
        }  
        else if( strcmp( except->name, "log10" ) == 0 )  
        {  
            except->retval = log10( -(except->arg1) );  
            printf( "Special: using absolute value: %s: _DOMAIN "  
                     "error\n", except->name );  
            return 1;  
        }  
    }  
    printf( "Normal: " );  
    return 0;    /* Else use the default actions */  
}  
```  
  
## Output  
  
```  
Special: using absolute value: log: _DOMAIN error  
log( -2.0 ) = 6.931472e-001  
Special: using absolute value: log10: _DOMAIN error  
log10( -5.0 ) = 6.989700e-001  
Normal: log( 0.0 ) = -1.#INF00e+000  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Long Double](../../misc/long-double.md)