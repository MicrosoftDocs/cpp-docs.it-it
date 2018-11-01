---
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
ms.openlocfilehash: 15081173edfae5ba0f881a6c1607a22e77a8a7c0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50452169"
---
# <a name="ctable-class"></a>Classe CTable

Fornisce un mezzo per accedere direttamente a un rowset semplice (uno senza parametri).

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CNoAccessor,
            template <typename T> class TRowset = CRowset>
class CTable :
   public CAccessorRowset <TAccessor, TRowset>
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Una classe di funzione di accesso.

*TRowset*<br/>
Una classe di set di righe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Apri](#open)|Apre la tabella.|

## <a name="remarks"></a>Note

Visualizzare [CCommand](../../data/oledb/ccommand-class.md) per informazioni su come eseguire un comando per accedere a un set di righe.

## <a name="open"></a> CTable:: Open

Apre la tabella.

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

*Sessione*<br/>
[in] Per il quale la tabella verrà aperta la sessione.

*wszTableName*<br/>
[in] Il nome della tabella da aprire, passato come stringa Unicode.

*szTableName*<br/>
[in] Il nome della tabella da aprire, passati come una stringa ANSI.

*dbid*<br/>
[in] Il `DBID` della tabella da aprire.

*pPropSet*<br/>
[in] Un puntatore a una matrice di [DBPROPSET](/previous-versions/windows/desktop/ms714367) strutture contenenti le proprietà e valori da impostare. Visualizzare [set di proprietà e i gruppi di proprietà](/previous-versions/windows/desktop/ms713696) nel *riferimento per programmatori OLE DB* in Windows SDK. Il valore predefinito NULL non specifica alcuna proprietà.

*ulPropSets*<br/>
[in] Il numero di [DBPROPSET](/previous-versions/windows/desktop/ms714367) strutture passato il *pPropSet* argomento.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [IOpenRowset:: OPENROWSET](/previous-versions/windows/desktop/ms716724) nel *riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)