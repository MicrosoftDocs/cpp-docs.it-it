---
title: "getenv, _wgetenv | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "getenv"
  - "_wgetenv"
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
  - "api-ms-win-crt-environment-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_wgetenv"
  - "getenv"
  - "_tgetenv"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tgetenv (funzione)"
  - "_wgetenv (funzione)"
  - "valori di ambiente"
  - "variabili di ambiente"
  - "getenv (funzione)"
  - "tgetenv (funzione)"
  - "wgetenv (funzione)"
ms.assetid: 3b9cb9ab-a126-4e0e-a44f-6c5a7134daf4
caps.latest.revision: 31
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# getenv, _wgetenv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene un valore dell'ambiente corrente.  Sono disponibili versioni più sicure di queste funzioni; vedere [getenv\_s, \_wgetenv\_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md).  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *getenv(   
   const char *varname   
);  
wchar_t *_wgetenv(   
   const wchar_t *varname   
);  
```  
  
#### Parametri  
 `varname`  
 Nome della variabile d'ambiente.  
  
## Valore restituito  
 Restituisce un puntatore alla voce della tabella dell'ambiente contenente `varname`.  Non è sicuro modificare il valore della variabile di ambiente utilizzando il puntatore restituito.  Utilizzare la funzione `_putenv` per modificare il valore di una variabile di ambiente.  Il valore restituito è `NULL` se `varname` non viene trovato nella tabella dell'ambiente.  
  
## Note  
 La funzione `getenv` ricerca l'elenco delle variabili di ambiente per `varname`.  `getenv` non rileva la distinzione tra maiuscole e minuscole nel sistema operativo Windows.  `getenv` e `_putenv` usano la copia dell'ambiente puntato dalla variabile globale `_environ` per accedere all'ambiente.  `getenv` funziona solo nelle strutture dati che hanno accesso alla libreria di runtime e non sul "segmento" dell'ambiente creato per il processo dal sistema operativo.  Di conseguenza, i programmi che utilizzano l'argomento `envp` a [main](../../cpp/main-program-startup.md) o a [wmain](../../cpp/main-program-startup.md) possono recuperare informazioni non valide.  
  
 Se `varname` è `NULL`, questa funzione invoca un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `NULL`.  
  
 `_wgetenv` è una versione a caratteri estesi di `getenv`; gli argomenti e i valori restituiti di `_wgetenv` sono stringhe con caratteri estesi.  La variabile globale `_wenviron` è una versione a caratteri estesi di `_environ`.  
  
 In un programma MBCS \(ad esempio, in un programma ASCII SBCS\), `_wenviron` inizialmente è `NULL` perché l'ambiente è costituito da stringhe di caratteri multibyte.  Allora, alla prima chiamata a `_wputenv`, o alla prima chiamata a `_wgetenv` se un ambiente \(MBCS\) esiste già, un corrispondente ambiente di stringhe di caratteri estesi viene creata e punta a `_wenviron`.  
  
 Allo stesso modo in un programma Unicode \(`_wmain`\), `_environ` inizialmente è `NULL` perché l'ambiente è costituito da stringhe di caratteri estesi.  Quindi, alla prima chiamata a `_putenv`, o alla prima chiamata a `getenv` se un ambiente \(Unicode\) esiste già, un corrispondente ambiente MBCS viene creato e punta a `_environ`.  
  
 Quando due copie dell'ambiente \(MBCS e Unicode\) sono presenti contemporaneamente in un programma, il sistema runtime deve gestire entrambe le copie, con conseguente esecuzione più lenta.  Ad esempio, ogni volta che viene chiamato `_putenv`, viene eseguita automaticamente anche una chiamata a `_wputenv`, in modo che le due stringhe dell'ambiente corrispondano.  
  
> [!CAUTION]
>  In rare occasioni, quando il sistema runtime gestisce sia una versione Unicode che una versione multibyte dell'ambiente, queste due versioni dell'ambiente potrebbero non corrispondere esattamente.  Ciò è dovuto al fatto che, sebbene ogni stringa univoca con caratteri multibyte viene mappata in una stringa Unicode univoca, il mapping da una stringa Unicode univoca a una stringa di caratteri multibyte non è sempre univoco.  Per ulteriori informazioni, vedere [\_environ, \_wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  Le famiglie di funzioni `_getenv` e `_putenv` non sono thread\-safe.  `_getenv` potrebbe restituire un puntatore di stringa mentre `_putenv` sta modificando la stringa, causando errori casuali.  Assicurarsi che le chiamate alle funzioni siano sincronizzate.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tgetenv`|`getenv`|`getenv`|`_wgetenv`|  
  
 Per controllare o modificare il valore della variabile d'ambiente `TZ`, utilizzare `getenv`, `_putenv` e `_tzset` come necessario.  Per ulteriori informazioni su `TZ`, vedere [\_tzset](../../c-runtime-library/reference/tzset.md) e [\_daylight, timezone e \_tzname](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`getenv`|\<stdlib.h\>|  
|`_wgetenv`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_getenv.c  
// compile with: /W3  
// This program uses getenv to retrieve  
// the LIB environment variable and then uses  
// _putenv to change it to a new value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char *libvar;  
  
   // Get the value of the LIB environment variable.  
   libvar = getenv( "LIB" ); // C4996  
   // Note: getenv is deprecated; consider using getenv_s instead  
  
   if( libvar != NULL )  
      printf( "Original LIB variable is: %s\n", libvar );  
  
   // Attempt to change path. Note that this only affects the environment  
   // variable of the current process. The command processor's  
   // environment is not changed.  
   _putenv( "LIB=c:\\mylib;c:\\yourlib" ); // C4996  
   // Note: _putenv is deprecated; consider using putenv_s instead  
  
   // Get new value.  
   libvar = getenv( "LIB" ); // C4996  
  
   if( libvar != NULL )  
      printf( "New LIB variable is: %s\n", libvar );  
}  
```  
  
  **La variabile LIB originale è: C:\\progra~1\\devstu~1\\vc\\lib**  
**La nuova variabile LIB è: c:\\mylib;c:\\yourlib**   
## Equivalente .NET Framework  
 [System::Environment::GetEnvironmentVariable](https://msdn.microsoft.com/en-us/library/system.environment.getenvironmentvariable.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [\_putenv, \_wputenv](../../c-runtime-library/reference/putenv-wputenv.md)   
 [Costanti di ambiente](../../c-runtime-library/environmental-constants.md)