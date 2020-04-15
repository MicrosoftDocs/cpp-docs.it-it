---
title: Classe CSyncObject
ms.date: 11/04/2016
f1_keywords:
- CSyncObject
- AFXMT/CSyncObject
- AFXMT/CSyncObject::CSyncObject
- AFXMT/CSyncObject::Lock
- AFXMT/CSyncObject::Unlock
- AFXMT/CSyncObject::m_hObject
helpviewer_keywords:
- CSyncObject [MFC], CSyncObject
- CSyncObject [MFC], Lock
- CSyncObject [MFC], Unlock
- CSyncObject [MFC], m_hObject
ms.assetid: c62ea6eb-a17b-4e01-aed4-321fc435a5f4
ms.openlocfilehash: ebfbc185cdca2effc96ce2e6d96d05f997c52bf7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365977"
---
# <a name="csyncobject-class"></a>Classe CSyncObject

Classe virtuale pura che fornisce la funzionalità comune agli oggetti di sincronizzazione in Win32.

## <a name="syntax"></a>Sintassi

```
class CSyncObject : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CSyncObject::CSyncObject](#csyncobject)|Costruisce un oggetto `CSyncObject`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CSyncObject::Lock](#lock)|Ottiene l'accesso all'oggetto di sincronizzazione.|
|[Oggetto CSyncObject::Sblocca](#unlock)|Ottiene l'accesso all'oggetto di sincronizzazione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSyncObject::operatore HANDLE](#operator_handle)|Fornisce l'accesso all'oggetto di sincronizzazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CSyncObject::m_hObject](#m_hobject)|Handle per l'oggetto di sincronizzazione sottostante.|

## <a name="remarks"></a>Osservazioni

La libreria Microsoft Foundation Class `CSyncObject`fornisce diverse classi derivate da . Si tratta di [CEvent](../../mfc/reference/cevent-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md)e [CSemaphore](../../mfc/reference/csemaphore-class.md).

Per informazioni su come utilizzare gli oggetti di sincronizzazione, vedere l'articolo [Multithreading: utilizzo delle classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CSyncObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt.h

## <a name="csyncobjectcsyncobject"></a><a name="csyncobject"></a>Oggetto CSyncObject::CSyncObject

Costruisce un oggetto di sincronizzazione con il nome fornito.

```
explicit CSyncObject(LPCTSTR pstrName);
virtual ~CSyncObject();
```

### <a name="parameters"></a>Parametri

*pstrName (nome di database)*<br/>
Nome dell'oggetto . Se NULL, *pstrName* sarà null.

## <a name="csyncobjectlock"></a><a name="lock"></a>Oggetto CSyncObject::Lock

Chiamare questa funzione per ottenere l'accesso alla risorsa controllata dall'oggetto di sincronizzazione.

```
virtual BOOL Lock(DWORD dwTimeout = INFINITE);
```

### <a name="parameters"></a>Parametri

*dwTimeout (dwTimeout)*<br/>
Specifica il tempo in millisecondi di attesa per la disponibilità dell'oggetto di sincronizzazione (segnalato). Se INFINITE, `Lock` attenderà fino a quando l'oggetto viene segnalato prima di restituire.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'oggetto di `Lock` sincronizzazione viene segnalato, restituirà correttamente e il thread è proprietario dell'oggetto. Se l'oggetto di sincronizzazione non `Lock` è segnalato (non disponibile), attenderà che l'oggetto di sincronizzazione venga segnalato fino al numero di millisecondi specificato nel parametro *dwTimeOut.* Se l'oggetto di sincronizzazione non è stato `Lock` segnalato nel periodo di tempo specificato, restituisce un errore.

## <a name="csyncobjectm_hobject"></a><a name="m_hobject"></a>Oggetto CSyncObject::m_hObject

Handle per l'oggetto di sincronizzazione sottostante.

```
HANDLE m_hObject;
```

## <a name="csyncobjectoperator-handle"></a><a name="operator_handle"></a>CSyncObject::operatore HANDLE

Utilizzare questo operatore per `CSyncObject` ottenere l'handle dell'oggetto.

```
operator HANDLE() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, l'handle dell'oggetto di sincronizzazione; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare l'handle per chiamare direttamente le API di Windows.You can use the handle to call Windows APIs directly.

## <a name="csyncobjectunlock"></a><a name="unlock"></a>Oggetto CSyncObject::Sblocca

La dichiarazione di `Unlock` senza parametri è una funzione virtuale pura e `CSyncObject`deve essere sottoposta a override da tutte le classi che derivano da .

```
virtual BOOL Unlock() = 0; virtual BOOL Unlock(
    LONG lCount,
    LPLONG lpPrevCount = NULL);
```

### <a name="parameters"></a>Parametri

*lCount (conteggio)*<br/>
Non utilizzato dall'implementazione predefinita.

*lpPrevCount (conteggio di lpPrev)*<br/>
Non utilizzato dall'implementazione predefinita.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita della dichiarazione con due parametri restituisce sempre TRUE. Questa funzione viene chiamata per rilasciare l'accesso all'oggetto di sincronizzazione di proprietà del thread chiamante. La seconda dichiarazione viene fornita per gli oggetti di sincronizzazione, ad esempio i semafori che consentono più di un accesso a una risorsa controllata.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
