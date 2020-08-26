---
title: Classe CEnumeratorAccessor
ms.date: 11/04/2016
f1_keywords:
- ATL::CEnumeratorAccessor
- CEnumeratorAccessor
- ATL.CEnumeratorAccessor
- CEnumeratorAccessor.m_bIsParent
- ATL::CEnumeratorAccessor::m_bIsParent
- m_bIsParent
- ATL.CEnumeratorAccessor.m_bIsParent
- CEnumeratorAccessor::m_bIsParent
- ATL::CEnumeratorAccessor::m_nType
- CEnumeratorAccessor.m_nType
- CEnumeratorAccessor::m_nType
- ATL.CEnumeratorAccessor.m_nType
- ATL::CEnumeratorAccessor::m_szDescription
- CEnumeratorAccessor.m_szDescription
- CEnumeratorAccessor::m_szDescription
- ATL.CEnumeratorAccessor.m_szDescription
- CEnumeratorAccessor::m_szName
- ATL.CEnumeratorAccessor.m_szName
- ATL::CEnumeratorAccessor::m_szName
- CEnumeratorAccessor.m_szName
- CEnumeratorAccessor::m_szParseName
- ATL::CEnumeratorAccessor::m_szParseName
- m_szParseName
- CEnumeratorAccessor.m_szParseName
- ATL.CEnumeratorAccessor.m_szParseName
helpviewer_keywords:
- CEnumeratorAccessor class
- m_bIsParent
- m_nType
- m_szDescription
- m_szName
- m_szParseName
ms.assetid: 21e8e7ea-3511-4afe-b33f-d520f4ff82bb
ms.openlocfilehash: 0b4baa4671a013699e51a9ab28c002a680dfcd61
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88838139"
---
# <a name="cenumeratoraccessor-class"></a>Classe CEnumeratorAccessor

Usato da [CEnumerator](../../data/oledb/cenumerator-class.md) per accedere ai dati dal set di righe dell'enumeratore.

## <a name="syntax"></a>Sintassi

```cpp
class CEnumeratorAccessor
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="data-members"></a>Membri dei dati

| Nome | Descrizione |
|-|-|
|[m_bIsParent](#bisparent)|Variabile che indica se l'enumeratore è un enumeratore padre, se la riga è un enumeratore.|
|[m_nType](#ntype)|Variabile che indica se la riga descrive un'origine dati o un enumeratore.|
|[m_szDescription](#szdescription)|Descrizione dell'origine dati o dell'enumeratore.|
|[m_szName](#szname)|Nome dell'origine dati o dell'enumeratore.|
|[m_szParseName](#szparsename)|Stringa da passare a [IParseDisplayName](/windows/win32/api/oleidl/nn-oleidl-iparsedisplayname) per ottenere un moniker per l'enumeratore o l'origine dati.|

## <a name="remarks"></a>Osservazioni

Questo set di righe è costituito dalle origini dati e dagli enumeratori visibili dall'enumeratore corrente.

## <a name="cenumeratoraccessorm_bisparent"></a><a name="bisparent"></a> CEnumeratorAccessor:: m_bIsParent

Variabile che indica se l'enumeratore è un enumeratore padre, se la riga è un enumeratore.

### <a name="syntax"></a>Sintassi

```cpp
VARIANT_BOOL m_bIsParent;
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

## <a name="cenumeratoraccessorm_ntype"></a><a name="ntype"></a> CEnumeratorAccessor:: m_nType

Variabile che indica se la riga descrive un'origine dati o un enumeratore.

### <a name="syntax"></a>Sintassi

```cpp
USHORT m_nType;
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

## <a name="cenumeratoraccessorm_szdescription"></a><a name="szdescription"></a> CEnumeratorAccessor:: m_szDescription

Descrizione dell'origine dati o dell'enumeratore.

### <a name="syntax"></a>Sintassi

```cpp
WCHAR m_szDescription[129];
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

## <a name="cenumeratoraccessorm_szname"></a><a name="szname"></a> CEnumeratorAccessor:: m_szName

Nome dell'origine dati o dell'enumeratore.

### <a name="syntax"></a>Sintassi

```cpp
WCHAR m_szName[129];
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

## <a name="cenumeratoraccessorm_szparsename"></a><a name="szparsename"></a> CEnumeratorAccessor:: m_szParseName

Stringa da passare a [IParseDisplayName](/windows/win32/api/oleidl/nn-oleidl-iparsedisplayname) per ottenere un moniker per l'enumeratore o l'origine dati.

### <a name="syntax"></a>Sintassi

```cpp
WCHAR m_szParseName[129];
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
