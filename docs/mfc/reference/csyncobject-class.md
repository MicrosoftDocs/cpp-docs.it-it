---
description: 'Altre informazioni su: classe CSyncObject'
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
ms.openlocfilehash: 5743f632f9a8c482ac15995e8d2429851ba015d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318598"
---
# <a name="csyncobject-class"></a>Classe CSyncObject

Classe virtuale pura che fornisce la funzionalità comune agli oggetti di sincronizzazione in Win32.

## <a name="syntax"></a>Sintassi

```
class CSyncObject : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSyncObject:: CSyncObject](#csyncobject)|Costruisce un oggetto `CSyncObject`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSyncObject:: Lock](#lock)|Ottiene l'accesso all'oggetto di sincronizzazione.|
|[CSyncObject:: Unlock](#unlock)|Ottiene l'accesso all'oggetto di sincronizzazione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[HANDLE CSyncObject:: operator](#operator_handle)|Consente di accedere all'oggetto di sincronizzazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CSyncObject:: m_hObject](#m_hobject)|Handle per l'oggetto di sincronizzazione sottostante.|

## <a name="remarks"></a>Commenti

Il libreria Microsoft Foundation Class fornisce diverse classi derivate da `CSyncObject` . Si tratta di [CEvent](../../mfc/reference/cevent-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md)e [CSemaphore](../../mfc/reference/csemaphore-class.md).

Per informazioni su come usare gli oggetti di sincronizzazione, vedere l'articolo [multithreading: come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CSyncObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

## <a name="csyncobjectcsyncobject"></a><a name="csyncobject"></a> CSyncObject:: CSyncObject

Costruisce un oggetto di sincronizzazione con il nome fornito.

```
explicit CSyncObject(LPCTSTR pstrName);
virtual ~CSyncObject();
```

### <a name="parameters"></a>Parametri

*pstrName*<br/>
Nome dell'oggetto. Se è NULL, *pstrName* sarà null.

## <a name="csyncobjectlock"></a><a name="lock"></a> CSyncObject:: Lock

Chiamare questa funzione per ottenere l'accesso alla risorsa controllata dall'oggetto di sincronizzazione.

```
virtual BOOL Lock(DWORD dwTimeout = INFINITE);
```

### <a name="parameters"></a>Parametri

*dwTimeout*<br/>
Specifica la quantità di tempo in millisecondi di attesa che l'oggetto di sincronizzazione sia disponibile (segnalato). Se infinito, `Lock` attende fino a quando l'oggetto non viene segnalato prima della restituzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se l'oggetto di sincronizzazione viene segnalato, `Lock` restituirà correttamente e il thread ora è proprietario dell'oggetto. Se l'oggetto di sincronizzazione non è segnalato (non disponibile), `Lock` attenderà che l'oggetto di sincronizzazione venga segnalato fino al numero di millisecondi specificato nel parametro *dwTimeOut* . Se l'oggetto di sincronizzazione non è stato segnalato nel periodo di tempo specificato, `Lock` restituisce un errore.

## <a name="csyncobjectm_hobject"></a><a name="m_hobject"></a> CSyncObject:: m_hObject

Handle per l'oggetto di sincronizzazione sottostante.

```
HANDLE m_hObject;
```

## <a name="csyncobjectoperator-handle"></a><a name="operator_handle"></a> HANDLE CSyncObject:: operator

Utilizzare questo operatore per ottenere l'handle dell' `CSyncObject` oggetto.

```
operator HANDLE() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, l'handle dell'oggetto di sincronizzazione; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

È possibile usare l'handle per chiamare direttamente le API di Windows.

## <a name="csyncobjectunlock"></a><a name="unlock"></a> CSyncObject:: Unlock

La dichiarazione di senza `Unlock` parametri è una funzione virtuale pura e deve essere sottoposta a override da tutte le classi che derivano da `CSyncObject` .

```
virtual BOOL Unlock() = 0; virtual BOOL Unlock(
    LONG lCount,
    LPLONG lpPrevCount = NULL);
```

### <a name="parameters"></a>Parametri

*lCount*<br/>
Non utilizzato dall'implementazione predefinita.

*lpPrevCount*<br/>
Non utilizzato dall'implementazione predefinita.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Commenti

L'implementazione predefinita della dichiarazione con due parametri restituisce sempre TRUE. Questa funzione viene chiamata per rilasciare l'accesso all'oggetto di sincronizzazione di proprietà del thread chiamante. La seconda dichiarazione viene fornita per gli oggetti di sincronizzazione, ad esempio i semafori che consentono più di un accesso a una risorsa controllata.

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
