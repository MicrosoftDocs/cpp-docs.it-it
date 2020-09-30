---
title: Classe CRowsetImpl
ms.date: 11/04/2016
f1_keywords:
- CRowsetImpl
- ATL.CRowsetImpl
- ATL::CRowsetImpl
- CRowsetImpl.NameFromDBID
- CRowsetImpl::NameFromDBID
- CRowsetImpl.SetCommandText
- CRowsetImpl::SetCommandText
- CRowsetImpl.GetColumnInfo
- CRowsetImpl::GetColumnInfo
- CRowsetImpl::GetCommandFromID
- GetCommandFromID
- CRowsetImpl.GetCommandFromID
- CRowsetImpl.ValidateCommandID
- CRowsetImpl::ValidateCommandID
- CRowsetImpl.m_rgRowData
- CRowsetImpl::m_rgRowData
- CRowsetImpl::m_strCommandText
- CRowsetImpl.m_strCommandText
- CRowsetImpl::m_strIndexText
- CRowsetImpl.m_strIndexText
helpviewer_keywords:
- CRowsetImpl class
- NameFromDBID method
- SetCommandText method
- GetColumnInfo method
- GetCommandFromID method
- ValidateCommandID method
- m_rgRowData
- m_strCommandText
- m_strIndexText
ms.assetid: e97614b3-b11d-4806-a0d3-b9401331473f
ms.openlocfilehash: cca74504c80b964b14742e7405953ad68764aa62
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91507266"
---
# <a name="crowsetimpl-class"></a>Classe CRowsetImpl

Fornisce un'implementazione standard del set di righe OLE DB senza richiedere l'ereditarietà multipla di numerose interfacce di implementazione.

## <a name="syntax"></a>Sintassi

```cpp
template <
   class T,
   class Storage,
   class CreatorClass,
   class ArrayType = CAtlArray<Storage>,
   class RowClass = CSimpleRow,
   class RowsetInterface = IRowsetImpl <T, IRowset>
>
class CRowsetImpl :
   public CComObjectRootEx<CreatorClass::_ThreadModel>,
   public CRowsetBaseImpl<T, Storage, ArrayType, RowsetInterface>,
   public IRowsetInfoImpl<T, CreatorClass::_PropClass>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe dell'utente che deriva da `CRowsetImpl` .

*Archiviazione*<br/>
Classe di record utente.

*CreatorClass*<br/>
Classe che contiene le proprietà per il set di righe; in genere il comando.

*ArrayType*<br/>
Classe che fungerà da archiviazione per i dati del set di righe. Il valore predefinito di questo parametro `CAtlArray` è, ma può essere qualsiasi classe che supporta la funzionalità richiesta.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[NameFromDBID](#namefromdbid)|Estrae una stringa da un oggetto `DBID` e lo copia nell'oggetto *BSTR* passato.|
|[SetCommandText](#setcommandtext)|Convalida e archivia le istanze `DBID` di nelle due stringhe ([m_strCommandText](#strcommandtext) e [m_strIndexText](#strindextext)).|

### <a name="overridable-methods"></a>Metodi sottoponibili a override

| Nome | Descrizione |
|-|-|
|[GetColumnInfo](#getcolumninfo)|Recupera le informazioni sulle colonne per una determinata richiesta client.|
|[GetCommandFromID](#getcommandfromid)|Verifica se uno o entrambi i parametri contengono valori stringa e, in tal caso, copia i valori stringa nei membri dati [m_strCommandText](#strcommandtext) e [m_strIndexText](#strindextext).|
|[ValidateCommandID](#validatecommandid)|Verifica se una o entrambe le istanze `DBID` contengono valori stringa e, in tal caso, le copia nei relativi membri dati [m_strCommandText](#strcommandtext) e [m_strIndexText](#strindextext).|

### <a name="data-members"></a>Membri dei dati

| Nome | Descrizione |
|-|-|
|[m_rgRowData](#rgrowdata)|Per impostazione predefinita, un oggetto `CAtlArray` che templatizes nell'argomento del modello di record utente a `CRowsetImpl` . È possibile utilizzare un'altra classe di tipo matrice modificando l' `ArrayType` argomento di modello in `CRowsetImpl` .|
|[m_strCommandText](#strcommandtext)|Contiene il comando iniziale del set di righe.|
|[m_strIndexText](#strindextext)|Contiene l'indice iniziale del set di righe.|

## <a name="remarks"></a>Osservazioni

`CRowsetImpl` fornisce le sostituzioni sotto forma di multicast statici. I metodi controllano il modo in cui un determinato set di righe convaliderà il testo del comando. È possibile creare una `CRowsetImpl` classe personalizzata rendendo le interfacce di implementazione multiple ereditate. L'unico metodo per cui è necessario fornire l'implementazione è `Execute` . A seconda del tipo di set di righe che si sta creando, i metodi dell'autore si aspettano firme diverse per `Execute` . Se, ad esempio, si utilizza una `CRowsetImpl` classe derivata da per implementare un set di righe dello schema, il `Execute` metodo avrà la firma seguente:

`HRESULT Execute(LONG* pcRows, ULONG cRestrictions, const VARIANT* rgRestrictions)`

Se si sta creando una `CRowsetImpl` classe derivata da per implementare un comando o un set di righe della sessione, il `Execute` metodo avrà la firma seguente:

`HRESULT Execute(LONG* pcRows, DBPARAMS* pParams)`

Per implementare uno dei `CRowsetImpl` metodi derivati da `Execute` , è necessario popolare i buffer di dati interni ([m_rgRowData](#rgrowdata)).

## <a name="crowsetimplnamefromdbid"></a><a name="namefromdbid"></a> CRowsetImpl:: NameFromDBID

Estrae una stringa da un oggetto `DBID` e lo copia nell'oggetto *BSTR* passato.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CRowsetBaseImpl::NameFromDBID(DBID* pDBID,
   CComBSTR& bstr,
   bool bIndex);
```

#### <a name="parameters"></a>Parametri

*pDBID*<br/>
in Puntatore all'oggetto `DBID` da cui estrarre una stringa.

*BSTR*<br/>
in Riferimento [CComBSTR](../../atl/reference/ccombstr-class.md) per inserire una copia della `DBID` stringa.

*bIndex*<br/>
[in] **`true`** Se un indice `DBID` ; **`false`** se una tabella `DBID` .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. A seconda che l'oggetto `DBID` sia una tabella o un indice (indicato da *bindex*), il metodo restituirà DB_E_NOINDEX o DB_E_NOTABLE.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dalle `CRowsetImpl` implementazioni di [ValidateCommandID](#validatecommandid) e [GetCommandFromID](#getcommandfromid).

## <a name="crowsetimplsetcommandtext"></a><a name="setcommandtext"></a> CRowsetImpl:: secommandtext

Convalida e archivia le istanze `DBID` di nelle due stringhe ([m_strCommandText](#strcommandtext) e [m_strIndexText](#strindextext)).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CRowsetBaseImpl::SetCommandText(DBID* pTableID,
   DBID* pIndexID);
```

#### <a name="parameters"></a>Parametri

*pTableID*<br/>
in Puntatore all'oggetto `DBID` che rappresenta l'ID della tabella.

*pIndexID*<br/>
in Puntatore all'oggetto `DBID` che rappresenta l'ID dell'indice.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il `SetCommentText` metodo viene chiamato da `CreateRowset` , un metodo creato un modello statico di `IOpenRowsetImpl` .

Questo metodo delega il lavoro chiamando [ValidateCommandID](#validatecommandid) e [GetCommandFromID](#getcommandfromid) tramite un puntatore di cui è stato eseguito il cast.

## <a name="crowsetimplgetcolumninfo"></a><a name="getcolumninfo"></a> CRowsetImpl:: GetColumnInfo

Recupera le informazioni sulle colonne per una determinata richiesta client.

### <a name="syntax"></a>Sintassi

```cpp
static ATLCOLUMNINFO* CRowsetBaseImpl::GetColumnInfo(T* pv,
   ULONG* pcCols);
```

#### <a name="parameters"></a>Parametri

*PV*<br/>
in Puntatore alla classe derivata dell'utente `CRowsetImpl` .

*pcCols*<br/>
in Puntatore (output) al numero di colonne restituite.

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura statica `ATLCOLUMNINFO` .

### <a name="remarks"></a>Osservazioni

Questo metodo è una sostituzione avanzata.

Questo metodo viene chiamato da diverse classi di implementazione di base per recuperare le informazioni sulle colonne per una determinata richiesta client. In genere, questo metodo verrebbe chiamato da `IColumnsInfoImpl` . Se si esegue l'override di questo metodo, è necessario inserire una versione del metodo nella `CRowsetImpl` classe derivata da. Poiché il metodo può essere inserito in una classe non creato un modello, è necessario impostare *PV* sulla `CRowsetImpl` classe derivata da appropriata.

Nell'esempio seguente viene illustrato l' `GetColumnInfo` utilizzo di. In questo esempio, `CMyRowset` è una `CRowsetImpl` classe derivata da. Per eseguire l'override di `GetColumnInfo` tutte le istanze di questa classe, inserire il metodo seguente nella `CMyRowset` definizione della classe:

[!code-cpp[NVC_OLEDB_Provider#1](../../data/oledb/codesnippet/cpp/crowsetimpl-getcolumninfo_1.h)]

## <a name="crowsetimplgetcommandfromid"></a><a name="getcommandfromid"></a> CRowsetImpl:: GetCommandFromID

Verifica se uno o entrambi i parametri contengono valori stringa e, in tal caso, copia i valori stringa nei membri dati [m_strCommandText](#strcommandtext) e [m_strIndexText](#strindextext).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CRowsetBaseImpl::GetCommandFromID(DBID* pTableID,
   DBID* pIndexID);
```

#### <a name="parameters"></a>Parametri

*pTableID*<br/>
in Puntatore all'oggetto `DBID` che rappresenta l'ID della tabella.

*pIndexID*<br/>
in Puntatore all'oggetto `DBID` che rappresenta l'ID dell'indice.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato tramite un oggetto statico di cui viene eseguito `CRowsetImpl` il cast per popolare i membri dati [m_strCommandText](#strcommandtext) e [m_strIndexText](#strindextext). Per impostazione predefinita, questo metodo verifica se uno o entrambi i parametri contengono valori di stringa. Se contengono valori stringa, questo metodo copia i valori stringa nei membri dati. Inserendo un metodo con questa firma nella `CRowsetImpl` classe derivata da, il metodo verrà chiamato al posto dell'implementazione di base.

## <a name="crowsetimplvalidatecommandid"></a><a name="validatecommandid"></a> CRowsetImpl:: ValidateCommandID

Verifica se una o entrambe le istanze `DBID` contengono valori stringa e, in tal caso, le copia nei relativi membri dati [m_strCommandText](#strcommandtext) e [m_strIndexText](#strindextext).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CRowsetBaseImpl::ValidateCommandID(DBID* pTableID,
   DBID* pIndexID);
```

#### <a name="parameters"></a>Parametri

*pTableID*<br/>
in Puntatore all'oggetto `DBID` che rappresenta l'ID della tabella.

*pIndexID*<br/>
in Puntatore all'oggetto `DBID` che rappresenta l'ID dell'indice.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato tramite un oggetto statico di cui è stato eseguito il cast `CRowsetImpl` per popolare i relativi membri dati [m_strCommandText](#strcommandtext) e [m_strIndexText](#strindextext). Per impostazione predefinita, questo metodo verifica se una o entrambe `DBID` le istanze contengono valori stringa e, in tal caso, le copia nei relativi membri dati. Inserendo un metodo con questa firma nella `CRowsetImpl` classe derivata da, il metodo verrà chiamato al posto dell'implementazione di base.

## <a name="crowsetimplm_rgrowdata"></a><a name="rgrowdata"></a> CRowsetImpl:: m_rgRowData

Per impostazione predefinita, un oggetto `CAtlArray` che templatizes nell'argomento del modello di record utente a `CRowsetImpl` .

### <a name="syntax"></a>Sintassi

```cpp
ArrayType CRowsetBaseImpl::m_rgRowData;
```

### <a name="remarks"></a>Osservazioni

*ArrayType* è un parametro di modello di `CRowsetImpl` .

## <a name="crowsetimplm_strcommandtext"></a><a name="strcommandtext"></a> CRowsetImpl:: m_strCommandText

Contiene il comando iniziale del set di righe.

### <a name="syntax"></a>Sintassi

```cpp
CComBSTR CRowsetBaseImpl::m_strCommandText;
```

## <a name="crowsetimplm_strindextext"></a><a name="strindextext"></a> CRowsetImpl:: m_strIndexText

Contiene l'indice iniziale del set di righe.

### <a name="syntax"></a>Sintassi

```cpp
CComBSTR CRowsetBaseImpl::m_strIndexText;
```
