---
description: 'Altre informazioni su: classe CTable'
title: Classe CTable
ms.date: 11/04/2016
f1_keywords:
- ATL::CTable
- ATL.CTable
- CTable
- ATL.CTable.Open
- ATL::CTable::Open
- CTable::Open
- CTable.Open
helpviewer_keywords:
- CTable class
- Open method
ms.assetid: f13fdaa3-e198-4557-977d-54b0bbc3454d
ms.openlocfilehash: 62808080a68bbd5de00b39c43661e06617ba53f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317727"
---
# <a name="ctable-class"></a>Classe CTable

Fornisce un metodo per accedere direttamente a un set di righe semplice (uno senza parametri).

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CNoAccessor,
            template <typename T> class TRowset = CRowset>
class CTable :
   public CAccessorRowset <TAccessor, TRowset>
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Classe della funzione di accesso.

*TRowset*<br/>
Classe del set di righe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[Apri](#open)|Consente di aprire la tabella.|

## <a name="remarks"></a>Commenti

Vedere [CCommand](../../data/oledb/ccommand-class.md) per informazioni su come eseguire un comando per accedere a un set di righe.

## <a name="ctableopen"></a><a name="open"></a> CTable:: Open

Consente di aprire la tabella.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Open(const CSession& session,
   LPCWSTR wszTableName,
   DBPROPSET* pPropSet = NULL,
   ULONG ulPropSets = 0) throw ();

HRESULT Open(const CSession& session,
   LPCSTR szTableName,
   DBPROPSET* pPropSet = NULL,
   ULONG ulPropSets = 0) throw ();

HRESULT Open(const CSession& session,
   DBID& dbid,
   DBPROPSET* pPropSet = NULL,
   ULONG ulPropSets = 0) throw ();
```

#### <a name="parameters"></a>Parametri

*sessione*<br/>
in Sessione per la quale viene aperta la tabella.

*wszTableName*<br/>
in Nome della tabella da aprire, passato come stringa Unicode.

*szTableName*<br/>
in Nome della tabella da aprire, passato come stringa ANSI.

*dbid*<br/>
in Oggetto `DBID` della tabella da aprire.

*pPropSet*<br/>
in Puntatore a una matrice di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) che contiene le proprietà e i valori da impostare. Vedere [set di proprietà e gruppi di proprietà](/previous-versions/windows/desktop/ms713696(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* nel Windows SDK. Il valore predefinito di NULL non specifica alcuna proprietà.

*ulPropSets*<br/>
in Numero di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) passate nell'argomento *pPropSet* .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [IOpenRowset:: OPENROWSET](/previous-versions/windows/desktop/ms716724(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
