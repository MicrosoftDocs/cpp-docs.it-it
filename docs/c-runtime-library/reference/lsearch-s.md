---
title: _lsearch_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _lsearch_s
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _lsearch_s
- lsearch_s
dev_langs:
- C++
helpviewer_keywords:
- linear searching
- values, searching for
- keys, finding in arrays
- arrays [CRT], searching
- searching, linear
- _lsearch_s function
- lsearch_s function
ms.assetid: d2db0635-be7a-4799-8660-255f14450882
caps.latest.revision: 17
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
ms.openlocfilehash: 6f89899e5fe2c00cf17a7a18c9de2eac2ba8462f
ms.lasthandoff: 02/24/2017

---
# <a name="lsearchs"></a>_lsearch_s
Esegue una ricerca lineare di un valore. Questa è una versione di [_lsearch](../../c-runtime-library/reference/lsearch.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_lsearch_s(  
   const void *key,  
   void *base,  
   unsigned int *num,  
   size_t size,  
   int (__cdecl *compare)(void *, const void *, const void *),  
   void * context  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `key`  
 Oggetto da cercare.  
  
 `base`  
 Puntatore alla base della matrice da cercare.  
  
 `num`  
 Numero di elementi.  
  
 `size`  
 Dimensione di ogni elemento della matrice in byte.  
  
 `compare`  
 Puntatore alla routine di confronto. Il secondo parametro è un puntatore alla chiave per la ricerca. Il terzo parametro è un puntatore a un elemento della matrice da confrontare con la chiave.  
  
 `context`  
 Puntatore a un oggetto che potrebbe essere accessibile nella funzione di confronto.  
  
## <a name="return-value"></a>Valore restituito  
 Se viene trovato `key`, `_lsearch_s` restituisce un puntatore all'elemento della matrice in `base` che corrisponde a `key`. Se `key` non viene trovato, `_lsearch_s` restituisce un puntatore all'elemento appena aggiunto alla fine della matrice.  
  
 Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`key`|`base`|`compare`|`num`|`size`|`errno`|  
|-----------|------------|---------------|-----------|------------|-------------|  
|`NULL`|qualsiasi|qualsiasi|qualsiasi|qualsiasi|`EINVAL`|  
|qualsiasi|`NULL`|qualsiasi|!= 0|qualsiasi|`EINVAL`|  
|qualsiasi|qualsiasi|qualsiasi|any|zero|`EINVAL`|  
|any|qualsiasi|`NULL`|any|qualsiasi|`EINVAL`|  
  
## <a name="remarks"></a>Note  
 La funzione `_lsearch_s` esegue una ricerca lineare del valore `key` in una matrice di `num` elementi, ognuno di `width` byte. A differenza di `bsearch_s`, `_lsearch_s` non richiede che la matrice sia ordinata. Se `key` non viene trovato, `_lsearch_s` lo aggiunge alla fine della matrice e incrementa `num`.  
  
 La funzione `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che specifica la relazione. La funzione `compare` accetta inoltre il puntatore al contesto come primo argomento. `_lsearch_s` chiama `compare` una o più volte durante la ricerca, passando i puntatori a due elementi della matrice per ogni chiamata. `compare` deve confrontare gli elementi e quindi restituire un valore diverso da zero (che indica che gli elementi sono diversi) o 0 (che indica che gli elementi sono identici).  
  
 Il puntatore `context` può essere utile se la struttura dei dati sottoposta a ricerca fa parte di un oggetto e la funzione `compare` deve accedere ai membri dell'oggetto. Ad esempio, il codice nella funzione `compare` può eseguire il cast del puntatore void nel tipo di oggetto appropriato e accedere ai membri di tale oggetto. L'aggiunta del puntatore `context` rende `_lsearch_s` più sicuro perché può essere usato un contesto aggiuntivo per evitare i bug di reentrancy associati all'uso di variabili statiche per rendere disponibili i dati alla funzione `compare`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_lsearch_s`|\<search.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch_s](../../c-runtime-library/reference/bsearch-s.md)   
 [_lfind_s](../../c-runtime-library/reference/lfind-s.md)   
 [_lsearch](../../c-runtime-library/reference/lsearch.md)
