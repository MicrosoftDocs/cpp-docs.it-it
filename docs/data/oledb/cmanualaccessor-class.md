---
title: Classe CManualAccessor
ms.date: 11/04/2016
f1_keywords:
- ATL::CManualAccessor
- ATL.CManualAccessor
- CManualAccessor
- ATL::CManualAccessor::AddBindEntry
- ATL.CManualAccessor.AddBindEntry
- CManualAccessor::AddBindEntry
- CManualAccessor.AddBindEntry
- CManualAccessor::AddParameterEntry
- ATL.CManualAccessor.AddParameterEntry
- CManualAccessor.AddParameterEntry
- AddParameterEntry
- ATL::CManualAccessor::AddParameterEntry
- ATL::CManualAccessor::CreateAccessor
- ATL.CManualAccessor.CreateAccessor
- CManualAccessor.CreateAccessor
- CManualAccessor::CreateAccessor
- ATL::CManualAccessor::CreateParameterAccessor
- ATL.CManualAccessor.CreateParameterAccessor
- CManualAccessor.CreateParameterAccessor
- CreateParameterAccessor
- CManualAccessor::CreateParameterAccessor
helpviewer_keywords:
- CManualAccessor class
- AddBindEntry method
- AddParameterEntry method
- CreateAccessor method
- CreateParameterAccessor method
ms.assetid: a0088074-7135-465c-b228-69097a50b8cc
ms.openlocfilehash: 4d9fb79bbf5203fa959672faec8c3b076c17f1ca
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80211848"
---
# <a name="cmanualaccessor-class"></a>Classe CManualAccessor

Rappresenta un tipo di funzione di accesso progettato per l'utilizzo avanzato.

## <a name="syntax"></a>Sintassi

```cpp
class CManualAccessor : public CAccessorBase
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddBindEntry](#addbindentry)|Aggiunge una voce di associazione alle colonne di output.|
|[AddParameterEntry](#addparameterentry)|Aggiunge una voce di parametro alla funzione di accesso del parametro.|
|[CreateAccessor](#createaccessor)|Alloca memoria per le strutture di associazione di colonna e inizializza i membri dati della colonna.|
|[CreateParameterAccessor](#createparameteraccessor)|Alloca la memoria per le strutture di associazione dei parametri e inizializza i membri dati del parametro.|

## <a name="remarks"></a>Osservazioni

Utilizzando `CManualAccessor`, è possibile specificare l'associazione del parametro e della colonna di output per le chiamate di funzione di run-time.

## <a name="cmanualaccessoraddbindentry"></a><a name="addbindentry"></a>CManualAccessor:: AddBindEntry

Aggiunge una voce di associazione alle colonne di output.

### <a name="syntax"></a>Sintassi

```cpp
void AddBindEntry(DBORDINAL nOrdinal,
   DBTYPE wType,  DBLENGTH nColumnSize,
   void* pData,
   void* pLength = NULL,
   void* pStatus = NULL) throw ();
```

#### <a name="parameters"></a>Parametri

Vedere [DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
in Numero di colonna.

*wType*<br/>
in Tipo di dati.

*nColumnSize*<br/>
in Dimensione della colonna in byte.

*pData*<br/>
in Puntatore ai dati della colonna archiviati nel buffer.

*pLength*<br/>
in Puntatore alla lunghezza del campo, se necessario.

*pStatus*<br/>
in Puntatore alla variabile da associare allo stato della colonna, se necessario.

### <a name="remarks"></a>Osservazioni

Per usare questa funzione, è necessario chiamare prima [CreateAccessor](../../data/oledb/cmanualaccessor-createaccessor.md). Non è possibile aggiungere più voci rispetto al numero di colonne specificato in `CreateAccessor`.

## <a name="cmanualaccessoraddparameterentry"></a><a name="addparameterentry"></a>CManualAccessor:: AddParameterEntry

Aggiunge una voce di parametro alle strutture di immissione dei parametri.

### <a name="syntax"></a>Sintassi

```cpp
void AddParameterEntry(DBORDINAL nOrdinal,
   DBTYPE wType,  DBLENGTH nColumnSize,
   void* pData,
   void* pLength = NULL,
   void* pStatus = NULL,
   DBPARAMIO eParamIO = DBPARAMIO_INPUT) throw ();
```

#### <a name="parameters"></a>Parametri

Vedere [DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

*nOrdinal*<br/>
in Numero di parametro.

*wType*<br/>
in Tipo di dati.

*nColumnSize*<br/>
in Dimensione della colonna in byte.

*pData*<br/>
in Puntatore ai dati della colonna archiviati nel buffer.

*pLength*<br/>
in Puntatore alla lunghezza del campo, se necessario.

*pStatus*<br/>
in Puntatore alla variabile da associare allo stato della colonna, se necessario.

*eParamIO*<br/>
in Specifica se il parametro a cui è associata l'associazione è un parametro di input, di input/output o di output.

### <a name="remarks"></a>Osservazioni

Per usare questa funzione, è necessario chiamare prima [CreateParameterAccessor](../../data/oledb/cmanualaccessor-createparameteraccessor.md).

## <a name="cmanualaccessorcreateaccessor"></a><a name="createaccessor"></a>CManualAccessor:: CreateAccessor

Alloca memoria per le strutture di associazione di colonna e inizializza i membri dati della colonna.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CreateAccessor(int nBindEntries,
  void* pBuffer,
   DBLENGTH nBufferSize) throw();
```

#### <a name="parameters"></a>Parametri

*nBindEntries*<br/>
in Numero di colonne. Questo numero deve corrispondere al numero di chiamate alla funzione [CManualAccessor:: AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md) .

*pBuffer*<br/>
in Puntatore al buffer in cui sono archiviate le colonne di output.

*nBufferSize*<br/>
in Dimensione del buffer in byte.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione prima di chiamare la funzione `CManualAccessor::AddBindEntry`.

## <a name="cmanualaccessorcreateparameteraccessor"></a><a name="createparameteraccessor"></a>CManualAccessor:: CreateParameterAccessor

Alloca la memoria per le strutture di associazione dei parametri e inizializza i membri dati del parametro.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CreateParameterAccessor(int nBindEntries,
   void* pBuffer,
   DBLENGTH nBufferSize) throw();
```

#### <a name="parameters"></a>Parametri

*nBindEntries*<br/>
in Numero di colonne.

*pBuffer*<br/>
in Puntatore al buffer in cui sono archiviate le colonne di input.

*nBufferSize*<br/>
in Dimensione del buffer in byte.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

È necessario chiamare questa funzione prima di chiamare [AddParameterEntry](../../data/oledb/cmanualaccessor-addparameterentry.md).

## <a name="see-also"></a>Vedere anche

[DBViewer](../../overview/visual-cpp-samples.md)<br/>
[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)
