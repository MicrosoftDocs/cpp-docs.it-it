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
ms.openlocfilehash: 2a48acb8a961d76c34d2ba85ede5c827c880f400
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214919"
---
# <a name="cenumerator-class"></a>Classe CEnumerator

Usa un oggetto OLE DB enumeratore, che espone l'interfaccia [ISourcesRowset](/previous-versions/windows/desktop/ms715969(v=vs.85)) per restituire un set di righe che descrive tutte le origini dati e gli enumeratori.

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

## <a name="remarks"></a>Osservazioni

È possibile recuperare i `ISourcesRowset` dati indirettamente da questa classe.

## <a name="cenumeratorfind"></a><a name="find"></a>CEnumerator:: Find

Cerca un nome specificato tra i provider disponibili.

### <a name="syntax"></a>Sintassi

```cpp
bool Find(TCHAR* szSearchName) throw();
```

#### <a name="parameters"></a>Parametri

*szSearchName*<br/>
in Nome da cercare.

### <a name="return-value"></a>Valore restituito

**`true`** Se il nome è stato trovato. In caso contrario, **`false`** .

### <a name="remarks"></a>Osservazioni

Questo nome esegue il mapping al `SOURCES_NAME` membro dell'interfaccia [ISourcesRowset](/previous-versions/windows/desktop/ms715969(v=vs.85)) .

## <a name="cenumeratorgetmoniker"></a><a name="getmoniker"></a>CEnumerator:: GetMoniker

Analizza il nome visualizzato per estrarre il componente della stringa che può essere convertito in un moniker.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetMoniker(LPMONIKER* ppMoniker) const throw();

HRESULT GetMoniker(LPMONIKER* ppMoniker,
   LPCTSTR lpszDisplayName) const throw();
```

#### <a name="parameters"></a>Parametri

*ppMoniker*<br/>
out Moniker analizzato dal nome visualizzato ([CEnumeratorAccessor:: m_szParseName](../../data/oledb/cenumeratoraccessor-m-szparsename.md)) della riga corrente.

*lpszDisplayName*<br/>
in Nome visualizzato da analizzare.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cenumeratoropen"></a><a name="open"></a>CEnumerator:: Open

Associa il moniker per l'enumeratore, se ne viene specificato uno, recupera il set di righe per l'enumeratore chiamando [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Open(LPMONIKER pMoniker) throw();

HRESULT Open(const CLSID* pClsid = & CLSID_OLEDB_ENUMERATOR) throw();

HRESULT Open(const CEnumerator& enumerator) throw();
```

#### <a name="parameters"></a>Parametri

*pMoniker*<br/>
in Puntatore a un moniker per un enumeratore.

*pClsid*<br/>
in Puntatore all'oggetto `CLSID` di un enumeratore.

*enumeratore*<br/>
in Riferimento a un enumeratore.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[DBViewer](../../overview/visual-cpp-samples.md)<br/>
[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
