---
title: Classe CEnumerator
ms.date: 11/04/2016
f1_keywords:
- CEnumerator
- CEnumerator::Find
- ATL::CEnumerator::Find
- ATL.CEnumerator.Find
- CEnumerator.Find
- GetMoniker
- CEnumerator.GetMoniker
- CEnumerator::GetMoniker
- ATL.CEnumerator.GetMoniker
- ATL::CEnumerator::GetMoniker
- ATL.CEnumerator.Open
- CEnumerator::Open
- ATL::CEnumerator::Open
- CEnumerator.Open
helpviewer_keywords:
- CEnumerator class
- Find method
- GetMoniker method
- Open method
ms.assetid: 25805f1b-26e3-402f-af83-1b5fe5ddebf7
ms.openlocfilehash: 23467caf46d38175a74dab061f60e11009f1f481
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030180"
---
# <a name="cenumerator-class"></a>Classe CEnumerator

Usa un oggetto enumeratore OLE DB, che espone il [ISourcesRowset](/previous-versions/windows/desktop/ms715969(v=vs.85)) interfaccia da restituire un set di righe che descrivono tutte le origini dati e gli enumeratori.

## <a name="syntax"></a>Sintassi

```cpp
class CEnumerator :
   public CAccessorRowset< CAccessor <CEnumeratorAccessor >>
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Find](#find)|Esegue una ricerca attraverso i provider disponibili (origini dati) per cercare un elemento con il nome specificato.|
|[GetMoniker](#getmoniker)|Recupera l'interfaccia `IMoniker` per il record corrente.|
|[Apri](#open)|Apre l'enumeratore.|

## <a name="remarks"></a>Note

È possibile recuperare il `ISourcesRowset` dati indirettamente da questa classe.

## <a name="find"></a> CEnumerator:: Find

Cerca un nome specificato tra i provider disponibili.

### <a name="syntax"></a>Sintassi

```cpp
bool Find(TCHAR* szSearchName) throw();
```

#### <a name="parameters"></a>Parametri

*szSearchName*<br/>
[in] Nome da cercare.

### <a name="return-value"></a>Valore restituito

**true** se il nome è stato trovato. In caso contrario, **false**.

### <a name="remarks"></a>Note

Questo nome viene eseguito il mapping per il `SOURCES_NAME` membro del [ISourcesRowset](/previous-versions/windows/desktop/ms715969(v=vs.85)) interfaccia.

## <a name="getmoniker"></a> CEnumerator:: GetMoniker

Analizza il nome visualizzato per estrarre il componente della stringa che può essere convertito in moniker.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetMoniker(LPMONIKER* ppMoniker) const throw();

HRESULT GetMoniker(LPMONIKER* ppMoniker,
   LPCTSTR lpszDisplayName) const throw();
```

#### <a name="parameters"></a>Parametri

*ppMoniker*<br/>
[out] Il moniker analizzato dal nome visualizzato ([cenumeratoraccessor:: M_szparsename](../../data/oledb/cenumeratoraccessor-m-szparsename.md)) della riga corrente.

*lpszDisplayName*<br/>
[in] Il nome visualizzato da analizzare.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

## <a name="open"></a> CEnumerator:: Open

Associa il moniker per l'enumeratore, se uno è specificato, quindi recupera il set di righe per l'enumeratore chiamando [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Open(LPMONIKER pMoniker) throw();

HRESULT Open(const CLSID* pClsid = & CLSID_OLEDB_ENUMERATOR) throw();

HRESULT Open(const CEnumerator& enumerator) throw();
```

#### <a name="parameters"></a>Parametri

*pMoniker*<br/>
[in] Puntatore a un moniker per l'enumeratore.

*pClsid*<br/>
[in] Un puntatore al `CLSID` dell'enumeratore.

*enumerator*<br/>
[in] Un riferimento a un enumeratore.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[DBViewer](../../overview/visual-cpp-samples.md)<br/>
[Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)