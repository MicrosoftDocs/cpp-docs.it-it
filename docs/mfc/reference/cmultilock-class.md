---
title: Classe CMultiLock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMultiLock
- AFXMT/CMultiLock
- AFXMT/CMultiLock::CMultiLock
- AFXMT/CMultiLock::IsLocked
- AFXMT/CMultiLock::Lock
- AFXMT/CMultiLock::Unlock
dev_langs:
- C++
helpviewer_keywords:
- CMultiLock [MFC], CMultiLock
- CMultiLock [MFC], IsLocked
- CMultiLock [MFC], Lock
- CMultiLock [MFC], Unlock
ms.assetid: c5b7c78b-1f81-4387-b7dd-2c813c5b6b61
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 097f6173faad4f99f64c5dac45e2a0d1292a07eb
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50076360"
---
# <a name="cmultilock-class"></a>Classe CMultiLock

Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso alle risorse di un programma multithread.

## <a name="syntax"></a>Sintassi

```
class CMultiLock
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMultiLock::CMultiLock](#cmultilock)|Costruisce un oggetto `CMultiLock`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMultiLock::IsLocked](#islocked)|Determina se un oggetto di sincronizzazione specifico della matrice è bloccato.|
|[CMultiLock::Lock](#lock)|È in attesa su una matrice di oggetti di sincronizzazione.|
|[CMultiLock::Unlock](#unlock)|Rilascia qualsiasi oggetto di sincronizzazione secondari.|

## <a name="remarks"></a>Note

`CMultiLock` non è una classe di base.

Usare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), e [CEvent](../../mfc/reference/cevent-class.md), è possibile creare un `CMultiLock` o [CSingleLock](../../mfc/reference/csinglelock-class.md)oggetto di attesa e rilasciare l'oggetto di sincronizzazione. Usare `CMultiLock` quando sono presenti più oggetti che è possibile usare in un determinato momento. Usare `CSingleLock` quando è necessario solo in attesa di un oggetto alla volta.

Usare un `CMultiLock` dell'oggetto, creare prima una matrice di oggetti di sincronizzazione che si desiderano attendere. Successivamente, chiamare il `CMultiLock` costruttore dell'oggetto all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi il [blocco](#lock) funzione membro per determinare se una risorsa è disponibile (segnalato). Se uno, continuare con il resto della funzione membro. Se nessuna risorsa è disponibile, attendere per un determinato periodo di tempo per una risorsa deve essere rilasciato o restituito un errore. Al termine dell'utilizzo di una risorsa, chiama il [Unlock](#unlock) funzionare se il `CMultiLock` oggetto è per essere riusata o consentire il `CMultiLock` oggetto da distruggere.

`CMultiLock` gli oggetti sono particolarmente utili quando un thread è un numero elevato di `CEvent` può rispondere a oggetti. Creare una matrice contenente tutti i `CEvent` puntatori e chiamare `Lock`. In questo modo il thread in attesa fino a quando non viene segnalato uno degli eventi.

Per altre informazioni su come usare `CMultiLock` oggetti, vedere l'articolo [Multithreading: come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CMultiLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

##  <a name="cmultilock"></a>  CMultiLock::CMultiLock

Costruisce un oggetto `CMultiLock`.

```
CMultiLock(
    CSyncObject* ppObjects [ ],
    DWORD dwCount,
    BOOL bInitialLock = FALSE);
```

### <a name="parameters"></a>Parametri

*ppObjects*<br/>
Matrice di puntatori agli oggetti di sincronizzazione in attesa. Non può essere NULL.

*dwCount*<br/>
Numero di oggetti nel *ppObjects*. Deve essere maggiore di 0.

*bInitialLock*<br/>
Specifica se inizialmente il tentativo di accedere a qualsiasi altro oggetto fornito.

### <a name="remarks"></a>Note

Questa funzione viene chiamata dopo la creazione della matrice di oggetti di sincronizzazione viene eseguita l'attesa. Viene in genere chiamata dall'interno del thread che deve attendere per uno degli oggetti di sincronizzazione diventi disponibile.

##  <a name="islocked"></a>  CMultiLock::IsLocked

Determina se l'oggetto specificato è impostato su non segnalato (non disponibile).

```
BOOL IsLocked(DWORD dwItem);
```

### <a name="parameters"></a>Parametri

*dwItem*<br/>
Indice nella matrice di oggetti corrispondente all'oggetto cui stato viene eseguita la query.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto specificato è bloccato; in caso contrario 0.

##  <a name="lock"></a>  CMultiLock::Lock

Chiamare questa funzione per ottenere l'accesso a uno o più delle risorse controllate da oggetti di sincronizzazione forniti al `CMultiLock` costruttore.

```
DWORD Lock(
    DWORD dwTimeOut = INFINITE,
    BOOL bWaitForAll = TRUE,
    DWORD dwWakeMask = 0);
```

### <a name="parameters"></a>Parametri

*dwTimeOut*<br/>
Specifica la quantità di tempo di attesa per l'oggetto di sincronizzazione siano disponibili (segnalato). Se l'impostazione è INFINITE, `Lock` resta in attesa finché l'oggetto viene segnalato prima della restituzione.

*bWaitForAll*<br/>
Specifica se devono diventare segnalati tutti gli oggetti di attesa in base allo stesso tempo prima della restituzione. Se FALSE, `Lock` restituirà quando uno degli oggetti stato di attesa viene segnalato.

*dwWakeMask*<br/>
Specifica altre condizioni che sono autorizzati a interrompere l'attesa. Per un elenco completo delle opzioni disponibili per questo parametro, vedere [MsgWaitForMultipleObjects](/windows/desktop/api/winuser/nf-winuser-msgwaitformultipleobjects) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Se `Lock` ha esito negativo, restituisce - 1. Se ha esito positivo, verrà restituito uno dei valori seguenti:

- Tra WAIT_OBJECT_0 e WAIT_OBJECT_0 + (numero di oggetti - 1)

   Se *bWaitForAll* è TRUE, tutti gli oggetti vengono segnalati (disponibile). Se *bWaitForAll* è FALSE, il valore restituito - WAIT_OBJECT_0 è l'indice nella matrice di oggetti dell'oggetto che viene segnalato (disponibile).

- WAIT_OBJECT_0 + (numero di oggetti)

   Un evento specificato nella *dwWakeMask* è disponibile nella coda di input del thread.

- Tra WAIT_ABANDONED_0 e WAIT_ABANDONED_0 + (numero di oggetti - 1)

   Se *bWaitForAll* è TRUE, vengono segnalati tutti gli oggetti e almeno uno degli oggetti è un oggetto mutex abbandonato. Se *bWaitForAll* è FALSE, il valore restituito - WAIT_ABANDONED_0 è l'indice nella matrice di oggetti dell'oggetto mutex abbandonato che ha soddisfatto l'attesa.

- WAIT_TIMEOUT

   L'intervallo di timeout specificato nel *dwTimeOut* scaduto senza la successiva di attesa.

### <a name="remarks"></a>Note

Se *bWaitForAll* è TRUE, `Lock` restituirà correttamente, non appena tutti gli oggetti di sincronizzazione venga segnalati contemporaneamente. Se *bWaitForAll* è FALSE, `Lock` restituirà, non appena diventa segnalato uno o più oggetti di sincronizzazione.

Se `Lock` non è in grado di restituire immediatamente, di attesa necessario per non superi il numero di millisecondi specificato nella *dwTimeOut* parametro prima della restituzione. Se *dwTimeOut* è INFINITE, `Lock` non verrà restituito fino a quando non viene ottenuto l'accesso a un oggetto o una condizione specificata nella finestra *dwWakeMask* è stata soddisfatta. In caso contrario, se `Lock` è stato in grado di acquisire un oggetto di sincronizzazione, verrà restituito correttamente; in caso contrario, restituirà un errore.

##  <a name="unlock"></a>  CMultiLock::Unlock

Rilascia l'oggetto di sincronizzazione di proprietà `CMultiLock`.

```
BOOL Unlock();

BOOL Unlock(
    LONG lCount,
    LPLONG lPrevCount = NULL);
```

### <a name="parameters"></a>Parametri

*lCount*<br/>
Numero di riferimento conta per rilasciare. Deve essere maggiore di 0. Se la quantità specificata potrebbe causare il conteggio dell'oggetto di superare il limite massimo, il conteggio non viene modificato e la funzione restituisce FALSE.

*lPrevCount*<br/>
Punta a una variabile per ricevere il conteggio precedente per l'oggetto di sincronizzazione. Se NULL, non viene restituito il conteggio precedente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione viene chiamata da `CMultiLock`del distruttore.

La prima forma del `Unlock` tenta di sbloccare l'oggetto di sincronizzazione gestito da `CMultiLock`. La seconda forma di `Unlock` tenta di sbloccare il `CSemaphore` oggetti posseduti da `CMultiLock`. Se `CMultiLock` non dispone di qualsiasi blocco `CSemaphore` oggetto, la funzione restituisce FALSE; in caso contrario, restituisce TRUE. *lCount* e *lpPrevCount* corrispondono esattamente ai parametri del [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock). La seconda forma di `Unlock` è raramente applicabile a situazioni multilock.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

