---
title: _putenv, _wputenv | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _putenv
- _wputenv
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
- api-ms-win-crt-environment-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _tputenv
- _wputenv
- _putenv
- wputenv
- tputenv
dev_langs:
- C++
helpviewer_keywords:
- _putenv function
- environment variables, deleting
- putenv function
- tputenv function
- environment variables, creating
- wputenv function
- _wputenv function
- _tputenv function
- environment variables, modifying
ms.assetid: 9ba9b7fd-276e-45df-8420-d70c4204b8bd
caps.latest.revision: 22
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
ms.openlocfilehash: 9fc67bbf6c900a79825fe62b6882c4459c348d61
ms.lasthandoff: 02/24/2017

---
# <a name="putenv-wputenv"></a>_putenv, _wputenv
Crea, modifica o rimuove variabili di ambiente. Sono disponibili versioni più sicure di queste funzioni. Vedere [_putenv_s, _wputenv_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _putenv(  
   const char *envstring   
);  
int _wputenv(  
   const wchar_t *envstring   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `envstring`  
 Definizione della stringa di ambiente.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce 0 in caso di esito positivo o -1 in caso di errore.  
  
## <a name="remarks"></a>Note  
 La funzione `_putenv` aggiunge nuove variabili di ambiente o modifica i valori delle variabili di ambiente esistente. Le variabili di ambiente definiscono l'ambiente in cui viene eseguito un processo (ad esempio, il percorso di ricerca predefinito per le librerie da collegare a un programma). `_wputenv` è una versione a caratteri wide di `_putenv`; l'argomento `envstring` in `_wputenv` è una stringa di caratteri wide.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tputenv`|`_putenv`|`_putenv`|`_wputenv`|  
  
 L'argomento `envstring` deve essere un puntatore a una stringa nel formato `varname=string`, dove `varname` è il nome della variabile di ambiente da aggiungere o modificare e `string` è il valore della variabile. Se `varname` è già parte dell'ambiente, il valore viene sostituito da `string`. In caso contrario, la nuova variabile `varname` e il relativo valore `string` vengono aggiunti all'ambiente. È possibile rimuovere una variabile dall'ambiente specificando un valore `string` vuoto, ovvero specificando solo `varname=`.  
  
 `_putenv` e `_wputenv` interessano solo l'ambiente con impostazioni locali per il processo corrente, è possibile usarli per modificare l'ambiente a livello di comando. Questo significa che le funzioni agiscono solo su strutture di dati accessibili dalla libreria di runtime e non nel segmento di ambiente creato per un processo dal sistema operativo. Al termine del processo corrente, l'ambiente viene ripristinato al livello del processo chiamante, ovvero nella maggior parte dei casi il livello del sistema operativo. Tuttavia, l'ambiente modificato può essere passato a tutti i nuovi processi creati da `_spawn`, `_exec` oppure da `system` e questi nuovi processi ottengono gli eventuali nuovi elementi aggiunti da `_putenv` e `_wputenv`.  
  
 Non modificare direttamente una voce di ambiente. Usare invece `_putenv` o `_wputenv` per modificarla. In particolare, liberare direttamente gli elementi della matrice globale `_environ[]` potrebbe causare un indirizzamento di memoria non valido.  
  
 `getenv` e `_putenv` usano la variabile globale `_environ` per accedere e modificare la tabella dell'ambiente; `_wgetenv` e `_wputenv` usano `_wenviron`. `_putenv` e `_wputenv` possono modificare il valore di `_environ` e `_wenviron` e pertanto invalidano l'argomento `_envp` per `main` e l'argomento `wenvp` per `wmain`. È di conseguenza preferibile usare `_environ` o `_wenviron` per accedere alle informazioni dell'ambiente. Per altre informazioni sulla relazione tra `_putenv` e `_wputenv` e le variabili globali, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).  
  
> [!NOTE]
>  Le famiglie di funzioni `_putenv` e `_getenv` non sono thread-safe. `_getenv` potrebbe restituire un puntatore di stringa mentre `_putenv` sta modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_putenv`|\<stdlib.h>|  
|`_wputenv`|\<stdlib.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio su come usare `_putenv`, vedere [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [getenv, _wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [_searchenv, _wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)
