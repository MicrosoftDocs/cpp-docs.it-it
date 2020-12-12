---
description: 'Altre informazioni su: classe CStringData'
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
ms.openlocfilehash: 74bf3563cb5dca506498ceef05ddc84f13c44f41
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166590"
---
# <a name="cstringdata-class"></a>Classe CStringData

Questa classe rappresenta i dati di un oggetto String.

## <a name="syntax"></a>Sintassi

```
struct CStringData
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|Nome|Description|
|-|-|
|[AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto dati di stringa.|
|[data](#data)|Recupera i dati di tipo carattere di un oggetto String.|
|[IsLocked](#islocked)|Determina se il buffer dell'oggetto stringa associato è bloccato.|
|[IsShared](#isshared)|Determina se il buffer dell'oggetto stringa associato è attualmente condiviso.|
|[Lock](#lock)|Blocca il buffer dell'oggetto stringa associato.|
|[Versione](#release)|Rilascia l'oggetto stringa specificato.|
|[Sblocca](#unlock)|Sblocca il buffer dell'oggetto stringa associato.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|-|-|
|[nAllocLength](#nalloclength)|Lunghezza dei dati allocati in `XCHAR` s (escluso il termine null)|
|[nDataLength](#ndatalength)|Lunghezza dei dati attualmente utilizzati in `XCHAR` s (escluso il termine null)|
|[nRefs](#nrefs)|Conteggio dei riferimenti correnti dell'oggetto.|
|[pStringMgr](#pstringmgr)|Puntatore alla gestione delle stringhe di questo oggetto stringa.|

## <a name="remarks"></a>Commenti

Questa classe deve essere usata solo dagli sviluppatori che implementano gestioni stringhe personalizzate. Per altre informazioni sui gestori di stringhe personalizzati, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md)

Questa classe incapsula vari tipi di informazioni e dati associati a un oggetto stringa superiore, ad esempio gli oggetti [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)o [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md) . Ogni oggetto stringa di livello superiore contiene un puntatore all' `CStringData` oggetto associato, consentendo a più oggetti stringa di puntare allo stesso oggetto dati di stringa. Questa relazione è rappresentata dal conteggio dei riferimenti ( `nRefs` ) dell' `CStringData` oggetto.

> [!NOTE]
> In alcuni casi, un tipo stringa, ad esempio, `CFixedString` non condividerà un oggetto dati stringa con più di un oggetto stringa più alto. Per altre informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

Questi dati sono composti da:

- Gestore della memoria (di tipo [IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)) della stringa.

- Lunghezza corrente ( [nDataLength](#ndatalength)) della stringa.

- Lunghezza allocata ( [nAllocLength](#nalloclength)) della stringa. Per motivi di prestazioni, la lunghezza della stringa può essere diversa da quella corrente

- Conteggio dei riferimenti corrente ( [nRefs](#nrefs)) dell' `CStringData` oggetto. Questo valore viene utilizzato per determinare il numero di oggetti stringa che condividono lo stesso `CStringData` oggetto.

- Il buffer di caratteri effettivo ( [dati](#data)) della stringa.

   > [!NOTE]
   > Il buffer di caratteri effettivo dell'oggetto stringa viene allocato da Gestione stringhe e viene aggiunto all' `CStringData` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr. h

## <a name="cstringdataaddref"></a><a name="addref"></a> CStringData:: AddRef

Incrementa il conteggio dei riferimenti dell'oggetto stringa.

```cpp
void AddRef() throw();
```

### <a name="remarks"></a>Commenti

Incrementa il conteggio dei riferimenti dell'oggetto stringa.

> [!NOTE]
> Non chiamare questo metodo su una stringa con un conteggio dei riferimenti negativi, perché un conteggio negativo indica che il buffer di stringa è bloccato.

## <a name="cstringdatadata"></a><a name="data"></a> CStringData::d ATA

Restituisce un puntatore al buffer di caratteri di un oggetto String.

```cpp
void* data() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer di caratteri dell'oggetto stringa.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per restituire il buffer di caratteri corrente dell'oggetto stringa associato.

> [!NOTE]
> Questo buffer non viene allocato dall' `CStringData` oggetto ma da Gestione stringhe quando necessario. Quando viene allocato, il buffer viene accodato all'oggetto dati di stringa.

## <a name="cstringdataislocked"></a><a name="islocked"></a> CStringData:: locked

Determina se il buffer di caratteri è bloccato.

```
bool IsLocked() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il buffer è bloccato. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per determinare se il buffer di caratteri di un oggetto stringa è attualmente bloccato.

## <a name="cstringdataisshared"></a><a name="isshared"></a> CStringData:: transshared

Determina se il buffer di caratteri è condiviso.

```
bool IsShared() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il buffer è condiviso; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per determinare se il buffer di caratteri di un oggetto dati stringa è attualmente condiviso tra più oggetti stringa.

## <a name="cstringdatalock"></a><a name="lock"></a> CStringData:: Lock

Blocca il buffer di caratteri dell'oggetto stringa associato.

```cpp
void Lock() throw();
```

### <a name="remarks"></a>Commenti

Chiamare questa funzione per bloccare il buffer di caratteri dell'oggetto dati stringa. Il blocco e lo sblocco vengono usati quando lo sviluppatore deve accedere direttamente al buffer di caratteri. Un valido esempio di blocco è dimostrato dai metodi [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) di `CSimpleStringT` .

> [!NOTE]
> Un buffer di caratteri può essere bloccato solo se il buffer non è condiviso tra più oggetti stringa più elevati.

## <a name="cstringdatanalloclength"></a><a name="nalloclength"></a> CStringData:: nAllocLength

Lunghezza del buffer di caratteri allocato.

```
int nAllocLength;
```

### <a name="remarks"></a>Commenti

Archivia la lunghezza del buffer di dati allocato in `XCHAR` s (escluso il termine null).

## <a name="cstringdatandatalength"></a><a name="ndatalength"></a> CStringData:: nDataLength

Lunghezza corrente dell'oggetto stringa.

```
int nDataLength;
```

### <a name="remarks"></a>Commenti

Archivia la lunghezza dei dati attualmente utilizzati in `XCHAR` s (escluso il termine null).

## <a name="cstringdatanrefs"></a><a name="nrefs"></a> CStringData:: nRefs

Conteggio dei riferimenti dell'oggetto dati di stringa.

```
long nRefs;
```

### <a name="remarks"></a>Commenti

Archivia il conteggio dei riferimenti dell'oggetto dati di stringa. Questo conteggio indica il numero di oggetti stringa più elevati associati all'oggetto dati stringa. Un valore negativo indica che l'oggetto dati stringa è attualmente bloccato.

## <a name="cstringdatapstringmgr"></a><a name="pstringmgr"></a> CStringData::p StringMgr

Gestore della memoria dell'oggetto stringa associato.

```
IAtlStringMgr* pStringMgr;
```

### <a name="remarks"></a>Commenti

Archivia il gestore della memoria per l'oggetto stringa associato. Per ulteriori informazioni sui gestori della memoria e sulle stringhe, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="cstringdatarelease"></a><a name="release"></a> CStringData:: Release

Decrementa il conteggio dei riferimenti dell'oggetto dati di stringa.

```cpp
void Release() throw();
```

### <a name="remarks"></a>Commenti

Chiamare questa funzione per decrementare il conteggio dei riferimenti, liberando la `CStringData` struttura se il conteggio dei riferimenti raggiunge zero. Questa operazione viene in genere eseguita quando un oggetto stringa viene eliminato e pertanto non deve più fare riferimento all'oggetto dati di stringa.

Il codice seguente, ad esempio, chiamerebbe `CStringData::Release` per l'oggetto dati stringa associato a `str1` :

[!code-cpp[NVC_ATLMFC_Utilities#104](../../atl-mfc-shared/codesnippet/cpp/cstringdata-class_1.cpp)]

## <a name="cstringdataunlock"></a><a name="unlock"></a> CStringData:: Unlock

Sblocca il buffer di caratteri dell'oggetto stringa associato.

```cpp
void Unlock() throw();
```

### <a name="remarks"></a>Commenti

Chiamare questa funzione per sbloccare il buffer di caratteri dell'oggetto dati stringa. Una volta sbloccato, un buffer può essere condiviso e può essere conteggiato come riferimento.

> [!NOTE]
> Ogni chiamata a `Lock` deve essere confrontata con una chiamata corrispondente a `Unlock` .

Il blocco e lo sblocco vengono usati quando lo sviluppatore deve assicurarsi che i dati stringa non siano condivisi. Un valido esempio di blocco è dimostrato dai metodi [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) di `CSimpleStringT` .

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
