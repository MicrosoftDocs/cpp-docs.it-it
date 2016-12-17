---
title: "_putenv, _wputenv | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_putenv"
  - "_wputenv"
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
  - "_tputenv"
  - "_wputenv"
  - "_putenv"
  - "wputenv"
  - "tputenv"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_putenv (funzione)"
  - "_tputenv (funzione)"
  - "_wputenv (funzione)"
  - "variabili di ambiente, creazione"
  - "variabili di ambiente, eliminazione"
  - "variabili di ambiente, modifica"
  - "putenv (funzione)"
  - "tputenv (funzione)"
  - "wputenv (funzione)"
ms.assetid: 9ba9b7fd-276e-45df-8420-d70c4204b8bd
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _putenv, _wputenv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Creazione, modifica, o rimozione delle variabili di ambiente.  Sono disponibili versioni più sicure di queste funzioni; vedere [\_putenv\_s, \_wputenv\_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md).  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _putenv(  
   const char *envstring   
);  
int _wputenv(  
   const wchar_t *envstring   
);  
```  
  
#### Parametri  
 `envstring`  
 Definizione di una Stringa di ambiente.  
  
## Valore restituito  
 Restituisce 0 in caso di esito positivo oppure \- 1 in caso di errore.  
  
## Note  
 La funzione `_putenv` aggiunte nuove variabili di ambiente o modifica i valori delle variabili di ambiente esistenti.  Le variabili di ambiente definite nell'ambiente in cui un processo viene eseguito\(ad esempio, il percorso di ricerca predefinito per le librerie per essere collegate con un programma\).  `_wputenv` è una versione a caratteri estesi di `_putenv`; l'argomento `envstring` in `_wputenv` è una stringa di caratteri estesi.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tputenv`|`_putenv`|`_putenv`|`_wputenv`|  
  
 L'argomento `envstring` deve essere un puntatore ad una stringa del form `varname=string`, dove `varname` è il nome della variabile di ambiente da aggiungere o modificare e `string` è il valore della variabile.  Se `varname` è già parte dell'ambiente, il valore viene sostituito da `string`; in caso contrario, la nuova variabile `varname` e il relativo valore `string` vengono aggiunte all'ambiente.  È possibile rimuovere una variabile di ambiente specificando una `string` vuota — ovvero, specificando solo `varname=`.  
  
 `_putenv` e `_wputenv` influiscono solo sull'ambiente che è locale al processo corrente; non è possibile utilizzarle per la modifica dell'ambiente a livello di comando.  Ovvero, queste funzioni sono disponibili solo nelle strutture dati accessibili dalla libreria di runtime e non nel segmento dell'ambiente creato per un processo dal sistema operativo .  Quando il processo corrente termina, l'ambiente viene ripristinato al livello del processo chiamante \(nella maggior parte dei casi, il livello del sistema operativo\).  Tuttavia, l'ambiente modificato può essere passato a tutti i nuovi processi creati da `_spawn`, `_exec` oppure da `system` e i nuovi processi ottengono i nuovi elementi aggiunti da `_putenv` e `_wputenv`.  
  
 Non modificare direttamente una voce dell'ambiente: in alternativa, utilizzare `_putenv` oppure `_wputenv` per modificarla.  In particolare, gli elementi direttamente liberati della matrice globale `_environ[]` potrebbero portare ad un indirizzamento di memoria non valido.  
  
 `getenv` e `_putenv` utilizzano la variabile globale `_environ` per accedere alla tabella dell'ambiente; `_wgetenv` e `_wputenv` utilizzano `_wenviron`.  `_putenv` e `_wputenv` potrebbero modificare il valore di `_environ` e `_wenviron`, invalidando in tal modo l'argomento `_envp` a `main` e l'argomento \_`wenvp` a `wmain`.  Di conseguenza, è consigliabile utilizzare `_environ` o `_wenviron` per accedere alle informazioni dell'ambiente.  Per ulteriori informazioni sulla relazione `_putenv` e `_wputenv` alle variabili globali, vedere [\_environ, \_wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  Le famiglie di funzioni `_getenv` e `_putenv` non sono thread\-safe.  `_getenv` potrebbe restituire un puntatore di stringa mentre `_putenv` sta modificando la stringa, causando errori casuali.  Assicurarsi che le chiamate alle funzioni siano sincronizzate.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_putenv`|\<stdlib.h\>|  
|`_wputenv`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Per un esempio sull'utilizzo del metodo `_putenv`, vedere [getenv, \_wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [getenv, \_wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [\_searchenv, \_wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)