---
title: _lsearch_s
ms.date: 11/04/2016
api_name:
- _lsearch_s
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _lsearch_s
- lsearch_s
helpviewer_keywords:
- linear searching
- values, searching for
- keys, finding in arrays
- arrays [CRT], searching
- searching, linear
- _lsearch_s function
- lsearch_s function
ms.assetid: d2db0635-be7a-4799-8660-255f14450882
ms.openlocfilehash: 1c3c0ac41a4805acb558c75fb5ff4cbc0e3aa838
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70953013"
---
# <a name="_lsearch_s"></a>_lsearch_s

Esegue una ricerca lineare di un valore. Questa è una versione di [_lsearch](lsearch.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
void *_lsearch_s(
   const void *key,
   void *base,
   unsigned int *num,
   size_t size,
   int (__cdecl *compare)(void *, const void *, const void *),
   void * context
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore alla base della matrice da cercare.

*numero*<br/>
Numero di elementi.

*size*<br/>
Dimensione di ogni elemento della matrice in byte.

*compare*<br/>
Puntatore alla routine di confronto. Il secondo parametro è un puntatore alla chiave per la ricerca. Il terzo parametro è un puntatore a un elemento della matrice da confrontare con la chiave.

*context*<br/>
Puntatore a un oggetto che potrebbe essere accessibile nella funzione di confronto.

## <a name="return-value"></a>Valore restituito

Se la *chiave* viene trovata, **_lsearch_s** restituisce un puntatore all'elemento della matrice in *base* che corrisponde alla *chiave*. Se *Key* non viene trovato, **_lsearch_s** restituisce un puntatore all'elemento appena aggiunto alla fine della matrice.

Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **null**. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

### <a name="error-conditions"></a>Condizioni di errore

|*key*|*base*|*compare*|*numero*|*size*|**errno**|
|-----------|------------|---------------|-----------|------------|-------------|
|**NULL**|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|
|qualsiasi|**NULL**|qualsiasi|!= 0|qualsiasi|**EINVAL**|
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|zero|**EINVAL**|
|qualsiasi|qualsiasi|**NULL**|any|qualsiasi|**EINVAL**|

## <a name="remarks"></a>Note

La funzione **_lsearch_s** esegue una ricerca lineare per la *chiave* del valore in una matrice di elementi *numerici* , ciascuno di byte di *larghezza* . A differenza di **bsearch_s**, **_lsearch_s** non richiede che la matrice sia ordinata. Se *Key* non viene trovato, **_lsearch_s** lo aggiunge alla fine della matrice e incrementa il *numero*.

La funzione *compare* è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che ne specifica la relazione. La funzione di *confronto* accetta anche il puntatore al contesto come primo argomento. le chiamate **_lsearch_s** *vengono confrontate* una o più volte durante la ricerca, passando i puntatori a due elementi di matrice per ogni chiamata. *confrontare* deve confrontare gli elementi e quindi restituire un valore diverso da zero (che indica che gli elementi sono diversi) o 0 (che indica che gli elementi sono identici).

Il puntatore di *contesto* può essere utile se la struttura dei dati cercati fa parte di un oggetto e la funzione di *confronto* deve accedere ai membri dell'oggetto. Il codice nella funzione di *confronto* , ad esempio, può eseguire il cast del puntatore void nel tipo di oggetto appropriato e accedere ai membri di tale oggetto. L'aggiunta del puntatore di *contesto* rende **_lsearch_s** più sicuro perché può essere usato un contesto aggiuntivo per evitare i bug rientranti associati all'uso di variabili statiche per rendere disponibili i dati alla funzione di *confronto* .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lsearch_s**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch_s](bsearch-s.md)<br/>
[_lfind_s](lfind-s.md)<br/>
[_lsearch](lsearch.md)<br/>
