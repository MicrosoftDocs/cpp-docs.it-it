---
title: Classe CEnumeratorAccessor | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
- m_nType
- ATL::CEnumeratorAccessor::m_szDescription
- CEnumeratorAccessor.m_szDescription
- CEnumeratorAccessor::m_szDescription
- ATL.CEnumeratorAccessor.m_szDescription
- CEnumeratorAccessor::m_szName
- ATL.CEnumeratorAccessor.m_szName
- m_szName
- ATL::CEnumeratorAccessor::m_szName
- CEnumeratorAccessor.m_szName
- CEnumeratorAccessor::m_szParseName
- ATL::CEnumeratorAccessor::m_szParseName
- m_szParseName
- CEnumeratorAccessor.m_szParseName
- ATL.CEnumeratorAccessor.m_szParseName
dev_langs:
- C++
helpviewer_keywords:
- CEnumeratorAccessor class
- m_bIsParent
- m_nType
- m_szDescription
- m_szName
- m_szParseName
ms.assetid: 21e8e7ea-3511-4afe-b33f-d520f4ff82bb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0af12e1cd2f9925d5b7df8ccf16a7838a2e8c78b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43215611"
---
# <a name="cenumeratoraccessor-class"></a>Classe CEnumeratorAccessor
Utilizzato da [CEnumerator](../../data/oledb/cenumerator-class.md) per accedere ai dati dal set di righe di enumeratore.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CEnumeratorAccessor  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_bIsParent](#bisparent)|Una variabile che indica se l'enumeratore è un enumeratore di padre, se la riga è un enumeratore.|  
|[m_nType](#ntype)|Una variabile che indica se la riga descrive un'origine dati o un enumeratore.|  
|[m_szDescription](#szdescription)|Descrizione dell'origine dati o enumeratore.|  
|[m_szName](#szname)|Il nome dell'origine dati o enumeratore.|  
|[m_szParseName](#szparsename)|Stringa da passare al [IParseDisplayName](/windows/desktop/api/oleidl/nn-oleidl-iparsedisplayname) per ottenere un moniker per l'origine dati o di un enumeratore.|  
  
## <a name="remarks"></a>Note  
 Questo set di righe è costituito da origini dati e gli enumeratori visibili dell'enumeratore corrente.  
  
## <a name="bisparent"></a> Cenumeratoraccessor:: M_bisparent
Una variabile che indica se l'enumeratore è un enumeratore di padre, se la riga è un enumeratore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
VARIANT_BOOL m_bIsParent;  
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per altre informazioni. 

## <a name="ntype"></a> Cenumeratoraccessor:: M_ntype
Una variabile che indica se la riga descrive un'origine dati o un enumeratore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
USHORT m_nType;  
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per altre informazioni.

## <a name="szdescription"></a> Cenumeratoraccessor:: M_szdescription
Descrizione dell'origine dati o enumeratore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
WCHAR m_szDescription[129];  
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per altre informazioni.

## <a name="szname"></a> Cenumeratoraccessor:: M_szname
Il nome dell'origine dati o enumeratore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
WCHAR m_szName[129];  
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per altre informazioni.  

## <a name="szparsename"></a> Cenumeratoraccessor:: M_szparsename
Stringa da passare al [IParseDisplayName](/windows/desktop/api/oleidl/nn-oleidl-iparsedisplayname) per ottenere un moniker per l'origine dati o di un enumeratore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
WCHAR m_szParseName[129];  
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [ISourcesRowset:: GetSourcesRowset](/previous-versions/windows/desktop/ms711200\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per altre informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)