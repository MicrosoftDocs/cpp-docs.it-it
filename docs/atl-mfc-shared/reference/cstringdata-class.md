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
ms.openlocfilehash: 5977d26cade89f2e70453d5184323958e99e54c4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62198137"
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
|[data](#data)|Recupera i dati di un oggetto stringa.|
|[IsLocked](#islocked)|Determina se il buffer dell'oggetto string associato è bloccato.|
|[IsShared](#isshared)|Determina se il buffer dell'oggetto string associato è attualmente condivisa.|
|[Blocco](#lock)|Blocca il buffer dell'oggetto string associato.|
|[Rilascio](#release)|Rilascia l'oggetto stringa specificato.|
|[Lo sblocco](#unlock)|Sblocca il buffer dell'oggetto string associato.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[nAllocLength](#nalloclength)|Lunghezza dei dati allocati in `XCHAR`s (non tra cui terminazione null)|
|[nDataLength](#ndatalength)|Lunghezza dei dati attualmente usati in `XCHAR`s (non tra cui terminazione null)|
|[nRefs](#nrefs)|Il conteggio dei riferimenti corrente dell'oggetto.|
|[pStringMgr](#pstringmgr)|Puntatore al gestore di stringa dell'oggetto stringa.|

## <a name="remarks"></a>Note

Questa classe deve essere utilizzata solo dagli sviluppatori che implementano i responsabili di stringa personalizzato. Per altre informazioni sui gestori di stringa personalizzato, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md)

Questa classe incapsula i vari tipi di informazioni e dati associati a un oggetto stringa più alto, ad esempio [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), o [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md) oggetti. Ogni oggetto stringa superiore contiene un puntatore a esso associata `CStringData` oggetto, consentendo più oggetti stringa in modo che punti allo stesso oggetto di dati stringa. Questa relazione è rappresentata mediante il conteggio dei riferimenti (`nRefs`) del `CStringData` oggetto.

> [!NOTE]
>  In alcuni casi, un tipo stringa (ad esempio `CFixedString`) non condividono un oggetto di dati stringa con più di un oggetto stringa più alto. Per altre informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

Questi dati sono costituiti da:

- Il gestore della memoria (typu [IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)) della stringa.

- La lunghezza corrente ( [nDataLength](#ndatalength)) della stringa.

- La lunghezza allocata ( [nAllocLength](#nalloclength)) della stringa. Per motivi di prestazioni, questo può differire dalla lunghezza della stringa corrente

- Il conteggio di riferimenti corrente ( [nRefs](#nrefs)) del `CStringData` oggetto. Questo valore viene usato per determinare il numero di oggetti stringa condividono lo stesso `CStringData` oggetto.

- Il buffer di caratteri effettivi ( [dati](#data)) della stringa.

   > [!NOTE]
   > Il buffer di caratteri effettivi dell'oggetto string viene allocato dal gestore di stringa e viene aggiunto al `CStringData` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr.h

##  <a name="addref"></a>  CStringData::AddRef

Incrementa il conteggio dei riferimenti dell'oggetto stringa.

```
void AddRef() throw();
```

### <a name="remarks"></a>Note

Incrementa il conteggio dei riferimenti dell'oggetto stringa.

> [!NOTE]
>  Non chiamare questo metodo su una stringa con un conteggio dei riferimenti negativo, poiché un numero negativo indica che il buffer di stringa deve essere bloccato.

##  <a name="data"></a>  CStringData::data

Restituisce un puntatore al buffer di caratteri di un oggetto stringa.

```
void* data() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer di caratteri dell'oggetto stringa.

### <a name="remarks"></a>Note

Chiamare questa funzione per restituire i buffer di caratteri corrente dell'oggetto string associato.

> [!NOTE]
>  Questo buffer non è allocato dal `CStringData` oggetto, ma per la gestione di stringhe quando necessario. Quando allocato, il buffer viene aggiunto all'oggetto di dati stringa.

##  <a name="islocked"></a>  CStringData::IsLocked

Determina se il buffer di caratteri è bloccato.

```
bool IsLocked() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il buffer è bloccato; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questa funzione per determinare se il buffer di caratteri di un oggetto string è attualmente bloccato.

##  <a name="isshared"></a>  CStringData::IsShared

Determina se il buffer di caratteri è condivisa.

```
bool IsShared() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il buffer è condiviso; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questa funzione per determinare se il buffer di caratteri di un oggetto di dati stringa è attualmente condiviso tra più oggetti stringa.

##  <a name="lock"></a>  CStringData::Lock

Blocca il buffer di caratteri dell'oggetto string associato.

```
void Lock() throw();
```

### <a name="remarks"></a>Note

Chiamare questa funzione per bloccare il buffer di caratteri dell'oggetto dati stringa. Blocco e sblocco viene usato quando è necessario l'accesso diretto al buffer di caratteri dallo sviluppatore. Un buon esempio di blocco viene dimostrato la [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) metodi `CSimpleStringT`.

> [!NOTE]
>  È possibile bloccare un buffer di caratteri solo se il buffer non è condiviso tra gli oggetti stringa successiva.

##  <a name="nalloclength"></a>  CStringData::nAllocLength

Lunghezza del buffer di caratteri allocato.

```
int nAllocLength;
```

### <a name="remarks"></a>Note

Archivia la lunghezza del buffer di dati allocati in `XCHAR`s (non tra cui terminazione null).

##  <a name="ndatalength"></a>  CStringData::nDataLength

Lunghezza corrente dell'oggetto stringa.

```
int nDataLength;
```

### <a name="remarks"></a>Note

Archivia la lunghezza dei dati attualmente usati in `XCHAR`s (non tra cui terminazione null).

##  <a name="nrefs"></a>  CStringData::nRefs

Conteggio dei riferimenti dell'oggetto dati stringa.

```
long nRefs;
```

### <a name="remarks"></a>Note

Archivia il conteggio dei riferimenti dell'oggetto dati stringa. Questo conteggio indica il numero di oggetti stringa superiore associati con l'oggetto di dati stringa. Un valore negativo indica che l'oggetto di dati stringa è attualmente bloccato.

##  <a name="pstringmgr"></a>  CStringData::pStringMgr

Il gestore della memoria dell'oggetto string associato.

```
IAtlStringMgr* pStringMgr;
```

### <a name="remarks"></a>Note

Archivia il gestore della memoria per l'oggetto stringa associata. Per altre informazioni su stringhe e i gestori di memoria, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

##  <a name="release"></a>  CStringData::Release

Decrementa il conteggio dei riferimenti dell'oggetto dati stringa.

```
void Release() throw();
```

### <a name="remarks"></a>Note

Chiamare questa funzione per diminuire il conteggio dei riferimenti, liberando il `CStringData` struttura se il conteggio dei riferimenti raggiunge zero. Questa operazione viene in genere eseguita quando viene eliminato un oggetto string e pertanto non è più necessario fare riferimento all'oggetto di dati stringa.

Ad esempio, chiamare il codice seguente `CStringData::Release` per l'oggetto di dati stringa associato `str1`:

[!code-cpp[NVC_ATLMFC_Utilities#104](../../atl-mfc-shared/codesnippet/cpp/cstringdata-class_1.cpp)]

##  <a name="unlock"></a>  CStringData::Unlock

Sblocca il buffer di caratteri dell'oggetto string associato.

```
void Unlock() throw();
```

### <a name="remarks"></a>Note

Chiamare questa funzione per sbloccare il buffer di caratteri dell'oggetto dati stringa. Dopo aver sbloccato un buffer, è condivisibile e può essere conteggiato riferimento.

> [!NOTE]
>  Ogni chiamata a `Lock` devono essere corrisposte da una chiamata corrispondente a `Unlock`.

Blocco e sblocco viene usato quando lo sviluppatore deve assicurarsi che i dati della stringa non sia condivisa. Un buon esempio di blocco viene dimostrato la [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) metodi `CSimpleStringT`.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
