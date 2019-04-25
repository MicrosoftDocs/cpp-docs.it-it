---
title: _lsearch_s
ms.date: 11/04/2016
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
helpviewer_keywords:
- linear searching
- values, searching for
- keys, finding in arrays
- arrays [CRT], searching
- searching, linear
- _lsearch_s function
- lsearch_s function
ms.assetid: d2db0635-be7a-4799-8660-255f14450882
ms.openlocfilehash: f57a96622419e3f72fc2df5b260cbbbdd59666ae
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62156956"
---
# <a name="lsearchs"></a>_lsearch_s

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

*number*<br/>
Numero di elementi.

*size*<br/>
Dimensione di ogni elemento della matrice in byte.

*compare*<br/>
Puntatore alla routine di confronto. Il secondo parametro è un puntatore alla chiave per la ricerca. Il terzo parametro è un puntatore a un elemento della matrice da confrontare con la chiave.

*context*<br/>
Puntatore a un oggetto che potrebbe essere accessibile nella funzione di confronto.

## <a name="return-value"></a>Valore restituito

Se *chiave* viene trovato **lsearch_s** restituisce un puntatore all'elemento della matrice in corrispondenza *base* che corrisponde al *chiave*. Se *key* non viene trovato, **lsearch_s** restituisce un puntatore all'elemento appena aggiunto alla fine della matrice.

Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, quindi **errno** è impostata su **EINVAL** e la funzione restituisce **NULL**. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

### <a name="error-conditions"></a>Condizioni di errore

|*key*|*base*|*compare*|*number*|*size*|**errno**|
|-----------|------------|---------------|-----------|------------|-------------|
|**NULL**|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|
|qualsiasi|**NULL**|qualsiasi|!= 0|qualsiasi|**EINVAL**|
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|zero|**EINVAL**|
|qualsiasi|qualsiasi|**NULL**|any|qualsiasi|**EINVAL**|

## <a name="remarks"></a>Note

Il **lsearch_s** funzione esegue una ricerca lineare per il valore *chiave* in una matrice di *numero* elementi, ognuno dei *larghezza* byte. A differenza **bsearch_s**, **lsearch_s** richiede che la matrice da ordinare. Se *key* non viene trovato, quindi **lsearch_s** lo aggiunge alla fine della matrice e incrementa *numero*.

Il *confrontare* funzione è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che specifica la relazione. Il *confrontare* funzione accetta inoltre il puntatore al contesto come primo argomento. **lsearch_s** chiamate *confrontare* una o più volte durante la ricerca, passando i puntatori a due elementi della matrice per ogni chiamata. *confrontare* deve confrontare gli elementi e quindi restituire un diverso da zero (vale a dire gli elementi sono diversi) o 0 (ovvero gli elementi sono identici).

Il *contesto* puntatore può essere utile se la struttura dei dati cercati fa parte di un oggetto e il *confrontare* deve accedere ai membri dell'oggetto funzione. Esempio di codice nel *confrontare* funzione può eseguire il cast del puntatore void nei membri di accesso e tipo di oggetto appropriato di quell'oggetto. L'aggiunta del *contesto* puntatore rende **lsearch_s** più sicuro perché può essere usato un contesto aggiuntivo per evitare i bug di reentrancy associati all'uso di variabili statiche per rendere disponibili per i dati di *confrontare* (funzione).

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
