---
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
ms.openlocfilehash: a051c6a510c53ac0c7c0a6efd8b4b5720080b264
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319717"
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
|[BloccoMulti::IsLocked](#islocked)|Determina se un oggetto di sincronizzazione specifico nella matrice è bloccato.|
|[CMultiLock::Blocco](#lock)|Attende la matrice di oggetti di sincronizzazione.|
|[CMultiLock::Sblocca](#unlock)|Rilascia tutti gli oggetti di sincronizzazione di proprietà.|

## <a name="remarks"></a>Osservazioni

`CMultiLock`non dispone di una classe base.

Per utilizzare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md)e [CEvent](../../mfc/reference/cevent-class.md), è possibile creare un `CMultiLock` oggetto o [CSingleLock](../../mfc/reference/csinglelock-class.md) per attendere e rilasciare l'oggetto di sincronizzazione. Utilizzare `CMultiLock` quando sono presenti più oggetti che è possibile utilizzare in un determinato momento. Utilizzare `CSingleLock` quando è necessario attendere solo un oggetto alla volta.

Per utilizzare `CMultiLock` un oggetto, creare innanzitutto una matrice degli oggetti di sincronizzazione che si desidera attendere. Chiamare quindi `CMultiLock` il costruttore dell'oggetto all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi la funzione membro [Lock](#lock) per determinare se una risorsa è disponibile (segnalato). In caso affermativo, continuare con il resto della funzione membro. Se non è disponibile alcuna risorsa, attendere un periodo di tempo specificato per il rilascio di una risorsa oppure restituire un errore. Al termine dell'utilizzo di una [Unlock](#unlock) risorsa, `CMultiLock` chiamare la funzione Unlock se `CMultiLock` l'oggetto deve essere utilizzato nuovamente oppure consentire l'eliminazione dell'oggetto.

`CMultiLock`gli oggetti sono particolarmente utili quando `CEvent` un thread ha un numero elevato di oggetti a cui può rispondere. Creare una matrice `CEvent` contenente tutti i `Lock`puntatori e chiamare . In questo modo il thread attenderà fino a quando uno degli eventi viene segnalato.

Per ulteriori informazioni sull'utilizzo `CMultiLock` degli oggetti, vedere l'articolo [Multithreading: utilizzo delle classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CMultiLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt.h

## <a name="cmultilockcmultilock"></a><a name="cmultilock"></a>CMultiLock::CMultiLock

Costruisce un oggetto `CMultiLock`.

```
CMultiLock(
    CSyncObject* ppObjects [ ],
    DWORD dwCount,
    BOOL bInitialLock = FALSE);
```

### <a name="parameters"></a>Parametri

*Oggetti ppOggetti*<br/>
Matrice di puntatori agli oggetti di sincronizzazione da attendere. Non può essere NULL.

*dwCount (conta informazioni su dwCount)*<br/>
Numero di oggetti in *ppObjects*. Deve essere maggiore di 0.

*bBloccoiniziale*<br/>
Specifica se tentare inizialmente di accedere a uno degli oggetti forniti.

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata dopo la creazione della matrice di oggetti di sincronizzazione da attendere. Viene in genere chiamato dall'interno del thread che deve attendere che uno degli oggetti di sincronizzazione diventi disponibile.

## <a name="cmultilockislocked"></a><a name="islocked"></a>BloccoMulti::IsLocked

Determina se l'oggetto specificato non è segnalato (non disponibile).

```
BOOL IsLocked(DWORD dwItem);
```

### <a name="parameters"></a>Parametri

*dwItem (elemento dwItem)*<br/>
Indice nella matrice di oggetti corrispondenti all'oggetto il cui stato viene eseguita una query.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto specificato è bloccato; in caso contrario 0.

## <a name="cmultilocklock"></a><a name="lock"></a>CMultiLock::Blocco

Chiamare questa funzione per ottenere l'accesso a una o più `CMultiLock` risorse controllate dagli oggetti di sincronizzazione forniti al costruttore.

```
DWORD Lock(
    DWORD dwTimeOut = INFINITE,
    BOOL bWaitForAll = TRUE,
    DWORD dwWakeMask = 0);
```

### <a name="parameters"></a>Parametri

*dwTimeOut*<br/>
Specifica il tempo di attesa affinché l'oggetto di sincronizzazione sia disponibile (segnalato). Se INFINITE, `Lock` attenderà fino a quando l'oggetto viene segnalato prima di restituire.

*bWaitForall (informazioni in questo stato instato in cui è*<br/>
Specifica se tutti gli oggetti in attesa devono essere segnalati contemporaneamente prima della restituzione. Se FALSE, `Lock` restituirà quando uno qualsiasi degli oggetti attesa viene segnalato.

*dwWakeMask*<br/>
Specifica altre condizioni a cui è consentito interrompere l'attesa. Per un elenco completo delle opzioni disponibili per questo parametro, vedere [MsgWaitForMultipleObjects](/windows/win32/api/winuser/nf-winuser-msgwaitformultipleobjects) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Se `Lock` ha esito negativo, restituisce - 1. Se ha esito positivo, restituisce uno dei seguenti valori:

- Tra WAIT_OBJECT_0 e WAIT_OBJECT_0 (numero di oggetti - 1)

   Se *bWaitForAll* è TRUE, tutti gli oggetti vengono segnalati (disponibili). Se *bWaitForAll* è FALSE, il valore restituito - WAIT_OBJECT_0 è l'indice nella matrice di oggetti dell'oggetto segnalato (disponibile).

- WAIT_OBJECT_0 (numero di oggetti)

   Un evento specificato in *dwWakeMask* è disponibile nella coda di input del thread.

- Tra WAIT_ABANDONED_0 e WAIT_ABANDONED_0 (numero di oggetti - 1)

   Se *bWaitForAll* è TRUE, tutti gli oggetti vengono segnalati e almeno uno degli oggetti è un oggetto mutex abbandonato. Se *bWaitForAll* è FALSE, il valore restituito - WAIT_ABANDONED_0 è l'indice nella matrice di oggetti dell'oggetto mutex abbandonato che ha soddisfatto l'attesa.

- WAIT_TIMEOUT

   L'intervallo di timeout specificato in *dwTimeOut* è scaduto senza che l'attesa abbia esito positivo.

### <a name="remarks"></a>Osservazioni

Se *bWaitForAll* è `Lock` TRUE, verrà restituito correttamente non appena tutti gli oggetti di sincronizzazione vengono segnalati contemporaneamente. Se *bWaitForAll* è `Lock` FALSE, verrà restituito non appena uno o più oggetti di sincronizzazione vengono segnalati.

Se `Lock` non è in grado di restituire immediatamente, attenderà non più del numero di millisecondi specificato nel *parametro dwTimeOut* prima della restituzione. Se *dwTimeOut* è `Lock` INFINITE, non verrà restituito fino a quando non viene ottenuto l'accesso a un oggetto o non è stata soddisfatta una condizione specificata in *dwWakeMask.* In caso `Lock` contrario, se è stato in grado di acquisire un oggetto di sincronizzazione, restituirà correttamente; in caso contrario, restituirà un errore.

## <a name="cmultilockunlock"></a><a name="unlock"></a>CMultiLock::Sblocca

Rilascia l'oggetto `CMultiLock`di sincronizzazione di proprietà di .

```
BOOL Unlock();

BOOL Unlock(
    LONG lCount,
    LPLONG lPrevCount = NULL);
```

### <a name="parameters"></a>Parametri

*lCount (conteggio)*<br/>
Numero di conteggi dei riferimenti da rilasciare. Deve essere maggiore di 0. Se la quantità specificata fa sì che il conteggio dell'oggetto superi il limite massimo, il conteggio non viene modificato e la funzione restituisce FALSO.

*lPrevCount (conteggio)*<br/>
Punta a una variabile per ricevere il conteggio precedente per l'oggetto di sincronizzazione. Se NULL, il conteggio precedente non viene restituito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione viene `CMultiLock`chiamata dal distruttore 's.

La prima `Unlock` forma di tenta di `CMultiLock`sbloccare l'oggetto di sincronizzazione gestito da . La seconda `Unlock` forma di `CSemaphore` tenta di `CMultiLock`sbloccare gli oggetti di proprietà di . Se `CMultiLock` non è `CSemaphore` proprietario di alcun oggetto bloccato, la funzione restituisce FALSE; in caso contrario, restituisce TRUE. *lCount* e *lpPrevCount* sono esattamente gli stessi dei parametri di [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock). La seconda `Unlock` forma di è raramente applicabile alle situazioni multiblocca.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
