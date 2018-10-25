---
title: Classe CSingleLock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSingleLock
- AFXMT/CSingleLock
- AFXMT/CSingleLock::CSingleLock
- AFXMT/CSingleLock::IsLocked
- AFXMT/CSingleLock::Lock
- AFXMT/CSingleLock::Unlock
dev_langs:
- C++
helpviewer_keywords:
- CSingleLock [MFC], CSingleLock
- CSingleLock [MFC], IsLocked
- CSingleLock [MFC], Lock
- CSingleLock [MFC], Unlock
ms.assetid: 7dae7288-8066-4a3e-85e0-78d28bfc6bc8
author: mikeblome
ms.author: mblome
ms.openlocfilehash: 063ad23a9d356af0cac6c5b9dd8903e81530d2df
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50061339"
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
|[CSingleLock::Lock](#lock)|È in attesa di un oggetto di sincronizzazione.|
|[CSingleLock::Unlock](#unlock)|Rilascia un oggetto di sincronizzazione.|

## <a name="remarks"></a>Note

`CSingleLock` non è una classe di base.

Per poter usare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md), e [CEvent](../../mfc/reference/cevent-class.md), è necessario creare un `CSingleLock` oppure [CMultiLock](../../mfc/reference/cmultilock-class.md) oggetto per restare in attesa e rilasciare l'oggetto di sincronizzazione. Usare `CSingleLock` quando è necessario solo in attesa di un oggetto alla volta. Usare `CMultiLock` quando sono presenti più oggetti che è possibile usare in un determinato momento.

Usare un `CSingleLock` oggetto, chiamare il relativo costruttore all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi il [IsLocked](#islocked) funzione membro per determinare se la risorsa è disponibile. Se si tratta, continuare con il resto della funzione membro. Se la risorsa è disponibile, attendere per un determinato periodo di tempo per la risorsa deve essere rilasciato o restituito un errore. Al termine dell'uso della risorsa, chiama il [Unlock](#unlock) funzionare se il `CSingleLock` oggetto è per essere riusata o consentire il `CSingleLock` oggetto da distruggere.

`CSingleLock` gli oggetti richiedono la presenza di un oggetto derivato dalla [CSyncObject](../../mfc/reference/csyncobject-class.md). Questo è in genere un membro dati della classe della risorsa controllata. Per altre informazioni su come usare `CSingleLock` oggetti, vedere l'articolo [Multithreading: come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CSingleLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

##  <a name="csinglelock"></a>  CSingleLock::CSingleLock

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
Specifica se inizialmente il tentativo di accedere all'oggetto fornito.

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata dall'interno una funzione membro di accesso della risorsa controllata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#19](../../mfc/codesnippet/cpp/csinglelock-class_1.h)]

##  <a name="islocked"></a>  CSingleLock::IsLocked

Determina se l'oggetto è associato il `CSingleLock` oggetto è impostato su non segnalato (non disponibile).

```
BOOL IsLocked();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è bloccato; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#20](../../mfc/codesnippet/cpp/csinglelock-class_2.h)]

##  <a name="lock"></a>  CSingleLock::Lock

Chiamare questa funzione per ottenere l'accesso alla risorsa controllata dall'oggetto di sincronizzazione specificato per il `CSingleLock` costruttore.

```
BOOL Lock(DWORD dwTimeOut = INFINITE);
```

### <a name="parameters"></a>Parametri

*dwTimeOut*<br/>
Specifica la quantità di tempo di attesa per l'oggetto di sincronizzazione siano disponibili (segnalato). Se l'impostazione è INFINITE, `Lock` resta in attesa finché l'oggetto viene segnalato prima della restituzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se viene segnalata l'oggetto di sincronizzazione, `Lock` restituirà correttamente e il thread appartiene a questo punto l'oggetto. Se l'oggetto di sincronizzazione è impostato su non segnalato (non disponibile), `Lock` attenderà per l'oggetto di sincronizzazione venga segnalato fino al numero di millisecondi specificato nella *dwTimeOut* parametro. Se l'oggetto di sincronizzazione non è stato segnalato entro il periodo di tempo, specificato `Lock` restituisce un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]

##  <a name="unlock"></a>  CSingleLock::Unlock

Rilascia l'oggetto di sincronizzazione di proprietà `CSingleLock`.

```
BOOL Unlock();

BOOL Unlock(
    LONG lCount,
    LPLONG lPrevCount = NULL);
```

### <a name="parameters"></a>Parametri

*lCount*<br/>
Numero di accessi da rilasciare. Deve essere maggiore di 0. Se la quantità specificata potrebbe causare il conteggio dell'oggetto di superare il limite massimo, il conteggio non viene modificato e la funzione restituisce FALSE.

*lPrevCount*<br/>
Punta a una variabile per ricevere il conteggio precedente dell'oggetto di sincronizzazione. Se NULL, non viene restituito il conteggio precedente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione viene chiamata da `CSingleLock`del distruttore.

Se è necessario rilasciare più di un numero di accesso di un semaforo denominato, usare la seconda forma di `Unlock` e specificare il numero di accessi da rilasciare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CMultiLock](../../mfc/reference/cmultilock-class.md)
