---
title: _lsearch_s
ms.date: 4/2/2020
api_name:
- _lsearch_s
- _o__lsearch_s
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 720b83dd48b42d77f35bce12f16e8ac79eb3b4d3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81341655"
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

*Chiave*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore alla base della matrice da cercare.

*Numero*<br/>
Numero di elementi.

*Dimensione*<br/>
Dimensione di ogni elemento della matrice in byte.

*Confrontare*<br/>
Puntatore alla routine di confronto. Il secondo parametro è un puntatore alla chiave per la ricerca. Il terzo parametro è un puntatore a un elemento della matrice da confrontare con la chiave.

*context*<br/>
Puntatore a un oggetto che potrebbe essere accessibile nella funzione di confronto.

## <a name="return-value"></a>Valore restituito

Se *key* viene trovato, **_lsearch_s** restituisce un puntatore all'elemento della matrice in *corrispondenza* della chiave di base che corrisponde *alla chiave*. Se *key* non viene trovato, **_lsearch_s** restituisce un puntatore all'elemento appena aggiunto alla fine della matrice.

Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e la funzione restituisce **NULL**. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

### <a name="error-conditions"></a>Condizioni di errore

|*Chiave*|*base*|*Confrontare*|*Numero*|*Dimensione*|**errno**|
|-----------|------------|---------------|-----------|------------|-------------|
|**Null**|any|any|any|any|**Einval**|
|any|**Null**|any|!= 0|any|**Einval**|
|any|any|any|any|zero|**Einval**|
|any|any|**Null**|any|any|**Einval**|

## <a name="remarks"></a>Osservazioni

La funzione **_lsearch_s** esegue una ricerca lineare per la *chiave* di valore in una matrice di elementi *numerici,* ognuno dei byte di *larghezza.* A differenza **di bsearch_s**, **non _lsearch_s** richiede l'ordinamento della matrice. Se *key* non viene trovato, **_lsearch_s** lo aggiunge alla fine della matrice e incrementa il *numero*.

La funzione *di confronto* è un puntatore a una routine fornita dall'utente che confronta due elementi della matrice e restituisce un valore che ne specifica la relazione. La funzione *di confronto* accetta anche il puntatore al contesto come primo argomento. **_lsearch_s** chiamate *confrontano* una o più volte durante la ricerca, passando puntatori a due elementi della matrice a ogni chiamata. *compare* deve confrontare gli elementi e quindi restituire diverso da zero (ovvero gli elementi sono diversi) o 0 (ovvero gli elementi sono identici).

Il puntatore di *contesto* può essere utile se la struttura di dati ricercati fa parte di un oggetto e la funzione di *confronto* deve accedere ai membri dell'oggetto. Ad esempio, il codice nella funzione *di confronto* può eseguire il cast del puntatore void nel tipo di oggetto appropriato e accedere ai membri di tale oggetto. L'aggiunta del puntatore di *contesto* rende **_lsearch_s** più sicuro perché è possibile utilizzare un contesto aggiuntivo per evitare bug di rientranza associati all'utilizzo di variabili statiche per rendere disponibili i dati per la funzione di *confronto.*

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lsearch_s**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch_s](bsearch-s.md)<br/>
[_lfind_s](lfind-s.md)<br/>
[_lsearch](lsearch.md)<br/>
