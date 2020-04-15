---
title: Classe CSingleLock
ms.date: 11/04/2016
f1_keywords:
- CSingleLock
- AFXMT/CSingleLock
- AFXMT/CSingleLock::CSingleLock
- AFXMT/CSingleLock::IsLocked
- AFXMT/CSingleLock::Lock
- AFXMT/CSingleLock::Unlock
helpviewer_keywords:
- CSingleLock [MFC], CSingleLock
- CSingleLock [MFC], IsLocked
- CSingleLock [MFC], Lock
- CSingleLock [MFC], Unlock
ms.assetid: 7dae7288-8066-4a3e-85e0-78d28bfc6bc8
ms.openlocfilehash: 231397228d94e58665602453b5d377571e24a967
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318264"
---
# <a name="csinglelock-class"></a>Classe CSingleLock

Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso a una risorsa di un programma multithread.

## <a name="syntax"></a>Sintassi

```
class CSingleLock
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSingleLock::CSingleLock](#csinglelock)|Costruisce un oggetto `CSingleLock`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSingleLock::IsLocked](#islocked)|Determina se l'oggetto è bloccato.|
|[CSingleLock::Blocco](#lock)|Attende un oggetto di sincronizzazione.|
|[CSingleLock::Sblocca](#unlock)|Rilascia un oggetto di sincronizzazione.|

## <a name="remarks"></a>Osservazioni

`CSingleLock`non dispone di una classe base.

Per utilizzare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md)e [CEvent](../../mfc/reference/cevent-class.md), è necessario creare un `CSingleLock` oggetto o [CMultiLock](../../mfc/reference/cmultilock-class.md) per attendere e rilasciare l'oggetto di sincronizzazione. Utilizzare `CSingleLock` quando è necessario attendere solo un oggetto alla volta. Utilizzare `CMultiLock` quando sono presenti più oggetti che è possibile utilizzare in un determinato momento.

Per utilizzare `CSingleLock` un oggetto, chiamare il relativo costruttore all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi la funzione membro [IsLocked](#islocked) per determinare se la risorsa è disponibile. In caso affermativo, continuare con il resto della funzione membro. Se la risorsa non è disponibile, attendere un periodo di tempo specificato per il rilascio della risorsa oppure restituire un errore. Al termine dell'utilizzo della risorsa, chiamare `CSingleLock` la funzione [Unlock](#unlock) se l'oggetto deve essere utilizzato nuovamente oppure consentire l'eliminazione dell'oggetto. `CSingleLock`

`CSingleLock`gli oggetti richiedono la presenza di un oggetto derivato da [CSyncObject](../../mfc/reference/csyncobject-class.md). Si tratta in genere di un membro dati della classe della risorsa controllata. Per ulteriori informazioni sull'utilizzo `CSingleLock` degli oggetti, vedere l'articolo [Multithreading: utilizzo delle classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CSingleLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt.h

## <a name="csinglelockcsinglelock"></a><a name="csinglelock"></a>CSingleLock::CSingleLock

Costruisce un oggetto `CSingleLock`.

```
explicit CSingleLock(
    CSyncObject* pObject,
    BOOL bInitialLock = FALSE);
```

### <a name="parameters"></a>Parametri

*pOggetto*<br/>
Punta all'oggetto di sincronizzazione a cui accedere. Non può essere NULL.

*bBloccoiniziale*<br/>
Specifica se tentare inizialmente di accedere all'oggetto fornito.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata dall'interno di una funzione membro di accesso della risorsa controllata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#19](../../mfc/codesnippet/cpp/csinglelock-class_1.h)]

## <a name="csinglelockislocked"></a><a name="islocked"></a>CSingleLock::IsLocked

Determina se l'oggetto `CSingleLock` associato all'oggetto non è segnalato (non disponibile).

```
BOOL IsLocked();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è bloccato; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#20](../../mfc/codesnippet/cpp/csinglelock-class_2.h)]

## <a name="csinglelocklock"></a><a name="lock"></a>CSingleLock::Blocco

Chiamare questa funzione per ottenere l'accesso alla risorsa `CSingleLock` controllata dall'oggetto di sincronizzazione fornito al costruttore.

```
BOOL Lock(DWORD dwTimeOut = INFINITE);
```

### <a name="parameters"></a>Parametri

*dwTimeOut*<br/>
Specifica il tempo di attesa affinché l'oggetto di sincronizzazione sia disponibile (segnalato). Se INFINITE, `Lock` attenderà fino a quando l'oggetto viene segnalato prima di restituire.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'oggetto di `Lock` sincronizzazione viene segnalato, restituirà correttamente e il thread è proprietario dell'oggetto. Se l'oggetto di sincronizzazione non `Lock` è segnalato (non disponibile), attenderà che l'oggetto di sincronizzazione venga segnalato fino al numero di millisecondi specificato nel parametro *dwTimeOut.* Se l'oggetto di sincronizzazione non è stato `Lock` segnalato nel periodo di tempo specificato, restituisce un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]

## <a name="csinglelockunlock"></a><a name="unlock"></a>CSingleLock::Sblocca

Rilascia l'oggetto `CSingleLock`di sincronizzazione di proprietà di .

```
BOOL Unlock();

BOOL Unlock(
    LONG lCount,
    LPLONG lPrevCount = NULL);
```

### <a name="parameters"></a>Parametri

*lCount (conteggio)*<br/>
Numero di accessi da rilasciare. Deve essere maggiore di 0. Se la quantità specificata fa sì che il conteggio dell'oggetto superi il limite massimo, il conteggio non viene modificato e la funzione restituisce FALSO.

*lPrevCount (conteggio)*<br/>
Punta a una variabile per ricevere il conteggio precedente dell'oggetto di sincronizzazione. Se NULL, il conteggio precedente non viene restituito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione viene `CSingleLock`chiamata dal distruttore 's.

Se è necessario rilasciare più di un conteggio di accesso di `Unlock` un semaforo, utilizzare la seconda forma di e specificare il numero di accessi da rilasciare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMultiLock](../../mfc/reference/cmultilock-class.md)
