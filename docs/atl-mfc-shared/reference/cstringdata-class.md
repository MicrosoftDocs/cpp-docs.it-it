---
title: Classe CStringData
ms.date: 11/04/2016
f1_keywords:
- CStringData
- ATLSIMPSTR/ATL::CStringData
- ATLSIMPSTR/ATL::AddRef
- ATLSIMPSTR/ATL::data
- ATLSIMPSTR/ATL::IsLocked
- ATLSIMPSTR/ATL::IsShared
- ATLSIMPSTR/ATL::Lock
- ATLSIMPSTR/ATL::Release
- ATLSIMPSTR/ATL::Unlock
- ATLSIMPSTR/ATL::nAllocLength
- ATLSIMPSTR/ATL::nDataLength
- ATLSIMPSTR/ATL::nRefs
- ATLSIMPSTR/ATL::pStringMgr
helpviewer_keywords:
- CStringData class
- shared classes, CStringData
ms.assetid: 4e31b5ca-3dbe-4fd5-b692-8211fbfb2593
ms.openlocfilehash: 5915d9e25588e4e35538619662281ceaf1b35ff7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317602"
---
# <a name="cstringdata-class"></a>Classe CStringData

Questa classe rappresenta i dati di un oggetto stringa.

## <a name="syntax"></a>Sintassi

```
struct CStringData
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto dati stringa.|
|[data](#data)|Recupera i dati di tipo carattere di un oggetto stringa.|
|[IsLocked](#islocked)|Determina se il buffer dell'oggetto stringa associato è bloccato.|
|[IsShared](#isshared)|Determina se il buffer dell'oggetto stringa associato è attualmente condiviso.|
|[Blocco](#lock)|Blocca il buffer dell'oggetto stringa associato.|
|[Versione](#release)|Rilascia l'oggetto stringa specificato.|
|[Sbloccare](#unlock)|Sblocca il buffer dell'oggetto stringa associato.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[nAllocLength (lunghezza in talld)](#nalloclength)|Lunghezza dei dati `XCHAR`allocati in s (esclusa la terminazione null)|
|[nDataLength (lunghezza in data)](#ndatalength)|Lunghezza dei dati `XCHAR`attualmente utilizzati in s (esclusa la terminazione null)|
|[nOr di vita](#nrefs)|Conteggio dei riferimenti corrente dell'oggetto.|
|[pStringMgr (informazioni in stato indue)](#pstringmgr)|Puntatore al gestore di stringhe di questo oggetto stringa.|

## <a name="remarks"></a>Osservazioni

Questa classe deve essere utilizzata solo dagli sviluppatori che implementano gestori di stringhe personalizzati. Per altre informazioni sui gestori di stringhe personalizzati, vedere [Gestione della memoria e CStringTFor more](../../atl-mfc-shared/memory-management-with-cstringt.md) information on custom string managers, see Memory Management and CStringT

Questa classe incapsula vari tipi di informazioni e dati associati a un oggetto stringa superiore, ad esempio [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)o [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md) oggetti. Ogni oggetto stringa superiore contiene `CStringData` un puntatore all'oggetto associato, consentendo a più oggetti stringa di puntare allo stesso oggetto dati stringa. Questa relazione è rappresentata`nRefs`dal conteggio `CStringData` dei riferimenti ( ) dell'oggetto.

> [!NOTE]
> In alcuni casi, un tipo `CFixedString`stringa (ad esempio ) non condividerà un oggetto dati stringa con più di un oggetto stringa superiore. Per ulteriori informazioni, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

Questi dati sono composti da:

- Il gestore della memoria (di tipo [IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)) della stringa.

- Lunghezza corrente ( [nDataLength](#ndatalength)) della stringa.

- Lunghezza allocata ( [nAllocLength](#nalloclength)) della stringa. Per motivi di prestazioni, questo può differire dalla lunghezza della stringa corrente

- Conteggio dei riferimenti corrente ( [nRefs](#nrefs)) dell'oggetto. `CStringData` Questo valore viene utilizzato per determinare quanti oggetti `CStringData` stringa condividono lo stesso oggetto.

- Buffer di caratteri effettivo ( [dati](#data)) della stringa.

   > [!NOTE]
   > Il buffer di caratteri effettivo dell'oggetto stringa viene allocato dal gestore di stringhe e viene aggiunto all'oggetto. `CStringData`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr.h

## <a name="cstringdataaddref"></a><a name="addref"></a>Dati Stringa::AddRefCStringData::AddRef

Incrementa il conteggio dei riferimenti dell'oggetto stringa.

```
void AddRef() throw();
```

### <a name="remarks"></a>Osservazioni

Incrementa il conteggio dei riferimenti dell'oggetto stringa.

> [!NOTE]
> Non chiamare questo metodo su una stringa con un conteggio dei riferimenti negativo, poiché un conteggio negativo indica che il buffer di stringa è bloccato.

## <a name="cstringdatadata"></a><a name="data"></a>CStringData::data

Restituisce un puntatore al buffer di caratteri di un oggetto stringa.

```
void* data() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer di caratteri dell'oggetto stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire il buffer di caratteri corrente dell'oggetto stringa associato.

> [!NOTE]
> Questo buffer non viene `CStringData` allocato dall'oggetto, ma dal gestore di stringhe quando necessario. Quando viene allocato, il buffer viene aggiunto all'oggetto dati stringa.

## <a name="cstringdataislocked"></a><a name="islocked"></a>Dati Stringa::IsLockedCStringData::IsLocked

Determina se il buffer dei caratteri è bloccato.

```
bool IsLocked() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il buffer è bloccato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per determinare se il buffer di caratteri di un oggetto stringa è attualmente bloccato.

## <a name="cstringdataisshared"></a><a name="isshared"></a>Dati di base::IsSharedCStringData::IsShared

Determina se il buffer dei caratteri è condiviso.

```
bool IsShared() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il buffer è condiviso; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per determinare se il buffer di caratteri di un oggetto dati stringa è attualmente condiviso tra più oggetti stringa.

## <a name="cstringdatalock"></a><a name="lock"></a>CStringData::Blocco

Blocca il buffer di caratteri dell'oggetto stringa associato.

```
void Lock() throw();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per bloccare il buffer di caratteri dell'oggetto dati di stringa. Il blocco e lo sblocco vengono utilizzati quando lo sviluppatore richiede l'accesso diretto al buffer di caratteri. Un buon esempio di blocco è dimostrato dai metodi `CSimpleStringT` [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) di .

> [!NOTE]
> Un buffer di caratteri può essere bloccato solo se il buffer non è condiviso tra oggetti stringa più elevati.

## <a name="cstringdatanalloclength"></a><a name="nalloclength"></a>CStringData::nAllocLength

Lunghezza del buffer di caratteri allocato.

```
int nAllocLength;
```

### <a name="remarks"></a>Osservazioni

Archivia la lunghezza del `XCHAR`buffer di dati allocato in s (esclusa la terminazione null).

## <a name="cstringdatandatalength"></a><a name="ndatalength"></a>CStringData::nDataLength

Lunghezza corrente dell'oggetto stringa.

```
int nDataLength;
```

### <a name="remarks"></a>Osservazioni

Archivia la lunghezza dei `XCHAR`dati attualmente utilizzati in s (esclusa la terminazione null).

## <a name="cstringdatanrefs"></a><a name="nrefs"></a>CStringData::nRefs

Conteggio dei riferimenti dell'oggetto dati stringa.

```
long nRefs;
```

### <a name="remarks"></a>Osservazioni

Archivia il conteggio dei riferimenti dell'oggetto dati stringa. Questo conteggio indica il numero di oggetti stringa superiori associati all'oggetto dati stringa. Un valore negativo indica che l'oggetto dati stringa è attualmente bloccato.

## <a name="cstringdatapstringmgr"></a><a name="pstringmgr"></a>CStringData::pStringMgr

Gestore della memoria dell'oggetto stringa associato.

```
IAtlStringMgr* pStringMgr;
```

### <a name="remarks"></a>Osservazioni

Archivia il gestore di memoria per l'oggetto stringa associato. Per ulteriori informazioni su gestori di memoria e stringhe, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="cstringdatarelease"></a><a name="release"></a>CStringData::Release

Decrementa il conteggio dei riferimenti dell'oggetto dati stringa.

```
void Release() throw();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per diminuire il conteggio `CStringData` dei riferimenti, liberando la struttura se il conteggio dei riferimenti raggiunge zero. Questa operazione viene in genere eseguita quando un oggetto stringa viene eliminato e pertanto non è più necessario fare riferimento all'oggetto dati stringa.

Ad esempio, il codice `CStringData::Release` seguente chiamerebbe per `str1`l'oggetto dati stringa associato a :

[!code-cpp[NVC_ATLMFC_Utilities#104](../../atl-mfc-shared/codesnippet/cpp/cstringdata-class_1.cpp)]

## <a name="cstringdataunlock"></a><a name="unlock"></a>CStringData::Sblocca

Sblocca il buffer di caratteri dell'oggetto stringa associato.

```
void Unlock() throw();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per sbloccare il buffer di caratteri dell'oggetto dati stringa. Una volta sbloccato, un buffer è condiscibile e può essere conteggiato.

> [!NOTE]
> Ogni chiamata `Lock` a deve essere abbinata da una chiamata corrispondente a `Unlock`.

Il blocco e lo sblocco vengono utilizzati quando lo sviluppatore deve garantire che i dati della stringa non vengano condivisi. Un buon esempio di blocco è dimostrato dai metodi `CSimpleStringT` [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) di .

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
