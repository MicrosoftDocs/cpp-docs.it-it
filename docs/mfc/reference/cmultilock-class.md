---
description: 'Altre informazioni su: classe CMultiLock'
title: Classe CMultiLock
ms.date: 11/04/2016
f1_keywords:
- CMultiLock
- AFXMT/CMultiLock
- AFXMT/CMultiLock::CMultiLock
- AFXMT/CMultiLock::IsLocked
- AFXMT/CMultiLock::Lock
- AFXMT/CMultiLock::Unlock
helpviewer_keywords:
- CMultiLock [MFC], CMultiLock
- CMultiLock [MFC], IsLocked
- CMultiLock [MFC], Lock
- CMultiLock [MFC], Unlock
ms.assetid: c5b7c78b-1f81-4387-b7dd-2c813c5b6b61
ms.openlocfilehash: 1a45c3c302b9f8028061649e2a0d270d47ed58aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331538"
---
# <a name="cmultilock-class"></a>Classe CMultiLock

Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso alle risorse di un programma multithread.

## <a name="syntax"></a>Sintassi

```
class CMultiLock
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMultiLock:: CMultiLock](#cmultilock)|Costruisce un oggetto `CMultiLock`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMultiLock:: locked](#islocked)|Determina se un oggetto di sincronizzazione specifico nella matrice è bloccato.|
|[CMultiLock:: Lock](#lock)|Attende la matrice di oggetti di sincronizzazione.|
|[CMultiLock:: Unlock](#unlock)|Rilascia tutti gli oggetti di sincronizzazione di proprietà.|

## <a name="remarks"></a>Commenti

`CMultiLock` non dispone di una classe base.

Per usare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md)e [CEvent](../../mfc/reference/cevent-class.md), è possibile creare un `CMultiLock` oggetto o [CSingleLock](../../mfc/reference/csinglelock-class.md) per attendere e rilasciare l'oggetto di sincronizzazione. Usare `CMultiLock` quando sono presenti più oggetti che è possibile usare in un determinato momento. Usare `CSingleLock` quando è necessario attendere solo un oggetto alla volta.

Per usare un `CMultiLock` oggetto, creare prima di tutto una matrice degli oggetti di sincronizzazione che si desidera attendere. Chiamare quindi il `CMultiLock` costruttore dell'oggetto all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi la funzione membro [Lock](#lock) per determinare se una risorsa è disponibile (segnalata). Se uno è, continuare con il resto della funzione membro. Se non è disponibile alcuna risorsa, attendere un periodo di tempo specificato per il rilascio di una risorsa o restituire un errore. Al termine dell'utilizzo di una risorsa, chiamare la funzione [Unlock](#unlock) se l' `CMultiLock` oggetto deve essere nuovamente utilizzato oppure consentire l'eliminazione dell' `CMultiLock` oggetto.

`CMultiLock` gli oggetti sono particolarmente utili quando un thread ha un numero elevato di `CEvent` oggetti a cui può rispondere. Creare una matrice contenente tutti i `CEvent` puntatori e chiamare `Lock` . In questo modo il thread resta in attesa fino a quando non viene segnalato uno degli eventi.

Per ulteriori informazioni sull'utilizzo degli `CMultiLock` oggetti, vedere l'articolo [multithreading: come utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CMultiLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

## <a name="cmultilockcmultilock"></a><a name="cmultilock"></a> CMultiLock:: CMultiLock

Costruisce un oggetto `CMultiLock`.

```
CMultiLock(
    CSyncObject* ppObjects [ ],
    DWORD dwCount,
    BOOL bInitialLock = FALSE);
```

### <a name="parameters"></a>Parametri

*ppObjects*<br/>
Matrice di puntatori agli oggetti di sincronizzazione da attendere. Non può essere NULL.

*dwCount*<br/>
Numero di oggetti in *ppObjects*. Deve essere maggiore di 0.

*bInitialLock*<br/>
Specifica se provare inizialmente ad accedere a uno degli oggetti forniti.

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata dopo la creazione della matrice di oggetti di sincronizzazione da attendere. Viene in genere chiamato dall'interno del thread che deve attendere che uno degli oggetti di sincronizzazione diventi disponibile.

## <a name="cmultilockislocked"></a><a name="islocked"></a> CMultiLock:: locked

Determina se l'oggetto specificato non è segnalato (non disponibile).

```
BOOL IsLocked(DWORD dwItem);
```

### <a name="parameters"></a>Parametri

*dwItem*<br/>
Indice nella matrice di oggetti corrispondenti all'oggetto di cui viene eseguita la query sullo stato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto specificato è bloccato. in caso contrario, 0.

## <a name="cmultilocklock"></a><a name="lock"></a> CMultiLock:: Lock

Chiamare questa funzione per ottenere l'accesso a una o più risorse controllate dagli oggetti di sincronizzazione forniti al `CMultiLock` costruttore.

```
DWORD Lock(
    DWORD dwTimeOut = INFINITE,
    BOOL bWaitForAll = TRUE,
    DWORD dwWakeMask = 0);
```

### <a name="parameters"></a>Parametri

*dwTimeOut*<br/>
Specifica la quantità di tempo di attesa prima che l'oggetto di sincronizzazione sia disponibile (segnalato). Se infinito, `Lock` attende fino a quando l'oggetto non viene segnalato prima della restituzione.

*bWaitForAll*<br/>
Specifica se tutti gli oggetti di attesa devono essere segnalati nello stesso momento prima della restituzione. Se FALSE, `Lock` restituirà quando viene segnalato uno degli oggetti in attesa su.

*dwWakeMask*<br/>
Specifica altre condizioni a cui è consentito interrompere l'attesa. Per un elenco completo delle opzioni disponibili per questo parametro, vedere [MsgWaitForMultipleObjects](/windows/win32/api/winuser/nf-winuser-msgwaitformultipleobjects) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Se `Lock` ha esito negativo, restituisce-1. Se ha esito positivo, restituisce uno dei valori seguenti:

- Tra WAIT_OBJECT_0 e WAIT_OBJECT_0 + (numero di oggetti-1)

   Se *bWaitForAll* è true, tutti gli oggetti vengono segnalati (disponibili). Se *bWaitForAll* è false, il valore restituito WAIT_OBJECT_0 è l'indice nella matrice di oggetti dell'oggetto segnalato (disponibile).

- WAIT_OBJECT_0 + (numero di oggetti)

   Un evento specificato in *dwWakeMask* è disponibile nella coda di input del thread.

- Tra WAIT_ABANDONED_0 e WAIT_ABANDONED_0 + (numero di oggetti-1)

   Se *bWaitForAll* è true, tutti gli oggetti vengono segnalati e almeno uno degli oggetti è un oggetto mutex abbandonato. Se *bWaitForAll* è false, il valore restituito WAIT_ABANDONED_0 è l'indice nella matrice di oggetti dell'oggetto mutex abbandonato che ha soddisfatto l'attesa.

- WAIT_TIMEOUT

   L'intervallo di timeout specificato in *dwTimeOut* è scaduto senza la riuscita dell'attesa.

### <a name="remarks"></a>Commenti

Se *bWaitForAll* è true, `Lock` restituirà correttamente non appena tutti gli oggetti di sincronizzazione vengono segnalati simultaneamente. Se *bWaitForAll* è false, `Lock` restituirà non appena uno o più oggetti di sincronizzazione diventeranno segnalati.

Se `Lock` non è in grado di restituire immediatamente, attenderà non più del numero di millisecondi specificati nel parametro *dwTimeOut* prima della restituzione. Se *dwTimeOut* è infinito, `Lock` non restituisce alcun valore finché non viene acquisito l'accesso a un oggetto o viene soddisfatta una condizione specificata in *dwWakeMask* . In caso contrario, se `Lock` è stato in grado di acquisire un oggetto di sincronizzazione, viene restituito correttamente; in caso contrario, verrà restituito un errore.

## <a name="cmultilockunlock"></a><a name="unlock"></a> CMultiLock:: Unlock

Rilascia l'oggetto di sincronizzazione di proprietà di `CMultiLock` .

```
BOOL Unlock();

BOOL Unlock(
    LONG lCount,
    LPLONG lPrevCount = NULL);
```

### <a name="parameters"></a>Parametri

*lCount*<br/>
Numero di conteggi dei riferimenti da rilasciare. Deve essere maggiore di 0. Se il valore specificato determina il superamento del valore massimo per il conteggio dell'oggetto, il conteggio non viene modificato e la funzione restituisce FALSE.

*lPrevCount*<br/>
Punta a una variabile per ricevere il numero precedente per l'oggetto di sincronizzazione. Se NULL, il conteggio precedente non viene restituito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata dal `CMultiLock` distruttore.

La prima forma di `Unlock` prova a sbloccare l'oggetto di sincronizzazione gestito da `CMultiLock` . La seconda forma di `Unlock` prova a sbloccare gli `CSemaphore` oggetti di proprietà di `CMultiLock` . Se `CMultiLock` non possiede alcun oggetto bloccato `CSemaphore` , la funzione restituisce false. in caso contrario, restituisce true. *lCount* e *lpPrevCount* sono esattamente uguali ai parametri di [CSingleLock:: Unlock](../../mfc/reference/csinglelock-class.md#unlock). La seconda forma di `Unlock` è raramente applicabile a situazioni a più blocchi.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
