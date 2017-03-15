---
title: _putenv_s, _wputenv_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wputenv_s
- _putenv_s
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
apitype: DLLExport
f1_keywords:
- putenv_s
- wputenv_s
- _wputenv_s
- _putenv_s
dev_langs:
- C++
helpviewer_keywords:
- wputenv_s function
- _putenv_s function
- environment variables, deleting
- putenv_s function
- _wputenv_s function
- environment variables, creating
- environment variables, modifying
ms.assetid: fbf51225-a8da-4b9b-9d7c-0b84ef72df18
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
ms.openlocfilehash: b8db4c9aa0db780bf0cd0819be083c989ff29149
ms.lasthandoff: 02/24/2017

---
# <a name="putenvs-wputenvs"></a>_putenv_s, _wputenv_s
Crea, modifica o rimuove variabili di ambiente. Queste sono versioni di [_putenv, _wputenv](../../c-runtime-library/reference/putenv-wputenv.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/en-us/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _putenv_s(  
   const char *name,  
   const char *value   
);  
errno_t _wputenv_s(  
   const wchar_t *name,  
   const wchar_t *value  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `name`  
 Il nome della variabile di ambiente.  
  
 `value`  
 Il valore da impostare nella variabile di ambiente.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce 0 se ha esito positivo o un codice di errore.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`name`|`value`|Valore restituito|  
|------------|-------------|------------------|  
|`NULL`|qualsiasi|`EINVAL`|  
|qualsiasi|`NULL`|`EINVAL`|  
  
 Se si verifica una delle condizioni di errore, queste funzioni richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `EINVAL` e impostano `errno` su `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_putenv_s` aggiunge nuove variabili di ambiente o modifica i valori delle variabili di ambiente esistente. Le variabili di ambiente definiscono l'ambiente in cui viene eseguito un processo (ad esempio, il percorso di ricerca predefinito per le librerie da collegare a un programma). `_wputenv_s` è una versione a caratteri wide di `_putenv_s`; l'argomento `envstring` in `_wputenv_s` è una stringa di caratteri wide.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tputenv_s`|`_putenv_s`|`_putenv_s`|`_wputenv_s`|  
  
 `name` è il nome della variabile di ambiente da aggiungere o modificare e `value` è il valore della variabile. Se `name` è già parte dell'ambiente, il valore viene sostituito da `value`; in caso contrario, la nuova variabile `name` e il relativo `value` vengono aggiunti all'ambiente. È possibile rimuovere una variabile dall'ambiente specificando una stringa vuota (ovvero, "") per `value`.  
  
 `_putenv_s` e `_wputenv_s` interessano solo l'ambiente con impostazioni locali per il processo corrente, è possibile usarli per modificare l'ambiente a livello di comando. Queste funzioni sono disponibili solo nelle strutture dati accessibili dalla libreria di runtime e non nel "segmento" di ambiente creato per un processo dal sistema operativo. Quando il processo corrente termina, l'ambiente viene ripristinato al livello del processo chiamante che, nella maggior parte dei casi, è il livello del sistema operativo. Tuttavia, l'ambiente modificato può essere passato a tutti i nuovi processi creati da `_spawn`, `_exec` oppure da `system` e questi nuovi processi ottengono i nuovi elementi aggiunti da `_putenv_s` e `_wputenv_s`.  
  
 Non modificare direttamente una voce dell'ambiente; in alternativa, usare `_putenv_s` o `_wputenv_s` per modificarla. In particolare, la liberazione diretta di elementi della matrice globale `_environ[]` potrebbero portare ad un indirizzamento di memoria non valido.  
  
 `getenv` e `_putenv_s` usano la variabile globale `_environ` per accedere e modificare la tabella dell'ambiente; `_wgetenv` e `_wputenv_s` usano `_wenviron`. `_putenv_s` e `_wputenv_s` possono modificare il valore di `_environ` e `_wenviron` e pertanto invalidano l'argomento `envp` a `main` e l'argomento `_wenvp` a `wmain`. È di conseguenza preferibile usare `_environ` o `_wenviron` per accedere alle informazioni dell'ambiente. Per altre informazioni sulla relazione tra `_putenv_s` e `_wputenv_s` e le variabili globali, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  Le famiglie di funzioni `_putenv_s` e `_getenv_s` non sono thread-safe. `_getenv_s` potrebbe restituire un puntatore di stringa mentre `_putenv_s` modifica la stringa e, quindi, causa errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_putenv_s`|\<stdlib.h>|  
|`_wputenv_s`|\<stdlib.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio che illustra come usare `_putenv_s`, vedere [getenv_s, _wgetenv_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [_searchenv, _wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)
