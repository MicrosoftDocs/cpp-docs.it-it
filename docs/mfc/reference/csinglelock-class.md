---
description: 'Altre informazioni su: classe CSingleLock'
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
ms.openlocfilehash: 7fa4fe32ce38bf47ede1b6ac133d1a057907f9c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342856"
---
# <a name="csinglelock-class"></a>Classe CSingleLock

Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso a una risorsa di un programma multithread.

## <a name="syntax"></a>Sintassi

```
class CSingleLock
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSingleLock:: CSingleLock](#csinglelock)|Costruisce un oggetto `CSingleLock`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSingleLock:: locked](#islocked)|Determina se l'oggetto è bloccato.|
|[CSingleLock:: Lock](#lock)|Attende un oggetto di sincronizzazione.|
|[CSingleLock:: Unlock](#unlock)|Rilascia un oggetto di sincronizzazione.|

## <a name="remarks"></a>Commenti

`CSingleLock` non dispone di una classe base.

Per usare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md)e [CEvent](../../mfc/reference/cevent-class.md), è necessario creare un `CSingleLock` oggetto o [CMultiLock](../../mfc/reference/cmultilock-class.md) per attendere e rilasciare l'oggetto di sincronizzazione. Usare `CSingleLock` quando è necessario attendere solo un oggetto alla volta. Usare `CMultiLock` quando sono presenti più oggetti che è possibile usare in un determinato momento.

Per usare un `CSingleLock` oggetto, chiamare il relativo costruttore all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi la funzione membro [bloccherà](#islocked) per determinare se la risorsa è disponibile. In caso contrario, continuare con il resto della funzione membro. Se la risorsa non è disponibile, attendere un periodo di tempo specificato per il rilascio della risorsa o restituire un errore. Una volta completata l'utilizzo della risorsa, chiamare la funzione [Unlock](#unlock) se l' `CSingleLock` oggetto deve essere nuovamente utilizzato oppure consentire l'eliminazione dell' `CSingleLock` oggetto.

`CSingleLock` gli oggetti richiedono la presenza di un oggetto derivato da [CSyncObject](../../mfc/reference/csyncobject-class.md). Si tratta in genere di un membro dati della classe della risorsa controllata. Per ulteriori informazioni sull'utilizzo degli `CSingleLock` oggetti, vedere l'articolo [multithreading: come utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CSingleLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

## <a name="csinglelockcsinglelock"></a><a name="csinglelock"></a> CSingleLock:: CSingleLock

Costruisce un oggetto `CSingleLock`.

```
explicit CSingleLock(
    CSyncObject* pObject,
    BOOL bInitialLock = FALSE);
```

### <a name="parameters"></a>Parametri

*pObject*<br/>
Punta all'oggetto di sincronizzazione a cui accedere. Non può essere NULL.

*bInitialLock*<br/>
Specifica se provare inizialmente ad accedere all'oggetto fornito.

### <a name="remarks"></a>Commenti

Questa funzione viene in genere chiamata dall'interno di una funzione membro di accesso della risorsa controllata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#19](../../mfc/codesnippet/cpp/csinglelock-class_1.h)]

## <a name="csinglelockislocked"></a><a name="islocked"></a> CSingleLock:: locked

Determina se l'oggetto associato all' `CSingleLock` oggetto non è segnalato (non disponibile).

```
BOOL IsLocked();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è bloccato. in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#20](../../mfc/codesnippet/cpp/csinglelock-class_2.h)]

## <a name="csinglelocklock"></a><a name="lock"></a> CSingleLock:: Lock

Chiamare questa funzione per ottenere l'accesso alla risorsa controllata dall'oggetto di sincronizzazione fornito al `CSingleLock` costruttore.

```
BOOL Lock(DWORD dwTimeOut = INFINITE);
```

### <a name="parameters"></a>Parametri

*dwTimeOut*<br/>
Specifica la quantità di tempo di attesa prima che l'oggetto di sincronizzazione sia disponibile (segnalato). Se infinito, `Lock` attende fino a quando l'oggetto non viene segnalato prima della restituzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se l'oggetto di sincronizzazione viene segnalato, `Lock` restituirà correttamente e il thread ora è proprietario dell'oggetto. Se l'oggetto di sincronizzazione non è segnalato (non disponibile), `Lock` attenderà che l'oggetto di sincronizzazione venga segnalato fino al numero di millisecondi specificato nel parametro *dwTimeOut* . Se l'oggetto di sincronizzazione non è stato segnalato nel periodo di tempo specificato, `Lock` restituisce un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]

## <a name="csinglelockunlock"></a><a name="unlock"></a> CSingleLock:: Unlock

Rilascia l'oggetto di sincronizzazione di proprietà di `CSingleLock` .

```
BOOL Unlock();

BOOL Unlock(
    LONG lCount,
    LPLONG lPrevCount = NULL);
```

### <a name="parameters"></a>Parametri

*lCount*<br/>
Numero di accessi da rilasciare. Deve essere maggiore di 0. Se il valore specificato determina il superamento del valore massimo per il conteggio dell'oggetto, il conteggio non viene modificato e la funzione restituisce FALSE.

*lPrevCount*<br/>
Punta a una variabile per ricevere il numero precedente dell'oggetto di sincronizzazione. Se NULL, il conteggio precedente non viene restituito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata dal `CSingleLock` distruttore.

Se è necessario rilasciare più di un conteggio degli accessi di un semaforo, usare la seconda forma di `Unlock` e specificare il numero di accessi da rilasciare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMultiLock](../../mfc/reference/cmultilock-class.md)
