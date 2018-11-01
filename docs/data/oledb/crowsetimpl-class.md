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
- GetColumnInfo
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
ms.openlocfilehash: e62e58273daf74d8551efb2165fe71d6fb7d3181
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50429974"
---
# <a name="crowsetimpl-class"></a>Classe CRowsetImpl

Fornisce un'implementazione di set di righe OLE DB standard senza richiedere l'ereditarietà multipla del numero di interfacce di implementazione.

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
La classe dell'utente che deriva da `CRowsetImpl`.

*Archiviazione*<br/>
La classe di record utente.

*CreatorClass*<br/>
La classe che contiene le proprietà per il set di righe. in genere il comando.

*ArrayType*<br/>
La classe che verrà usato come risorsa di archiviazione per i dati del set di righe. Questo parametro viene impostato su `CAtlArray`, ma può essere qualsiasi classe che supporta la funzionalità richiesta.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[NameFromDBID](#namefromdbid)|Estrae una stringa da un `DBID` e lo copia il *bstr* passato.|
|[SetCommandText](#setcommandtext)|Convalida e memorizza i `DBID`s nelle due stringhe ([m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)).|

### <a name="overridable-methods"></a>Metodi sottoponibili a override

|||
|-|-|
|[GetColumnInfo](#getcolumninfo)|Recupera le informazioni di colonna per una particolare richiesta client.|
|[GetCommandFromID](#getcommandfromid)|Controlla se uno o entrambi i parametri contengono i valori stringa e in questo caso, copia i valori di stringa per i membri dei dati [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).|
|[ValidateCommandID](#validatecommandid)|Verifica per vedere se uno o entrambi `DBID`contengono i valori stringa e in questo caso, li copia i relativi membri dati [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_rgRowData](#rgrowdata)|Per impostazione predefinita, un `CAtlArray` che templatizes nell'argomento del modello record utente per `CRowsetImpl`. Un'altra classe del tipo di matrice può essere utilizzata modificando la `ArrayType` argomento di modello per `CRowsetImpl`.|
|[m_strCommandText](#strcommandtext)|Contiene il comando iniziale del set di righe.|
|[m_strIndexText](#strindextext)|Contiene l'indice iniziale del set di righe.|

## <a name="remarks"></a>Note

`CRowsetImpl` fornisce le sostituzioni in forma di upcasts statico. I metodi di controllano il modo in cui un determinato set di righe convaliderà il testo del comando. È possibile creare il proprio `CRowsetImpl`-classe di stile, rendendo le interfacce di implementazione ereditata multiplo. L'unico metodo per cui è necessario fornire l'implementazione è `Execute`. A seconda di quale tipo di set di righe si sta creando, i metodi di creator previsti firme diverse per `Execute`. Ad esempio, se si usa una `CRowsetImpl`-classe per implementare un set di righe dello schema, derivata il `Execute` metodo non avrà la firma seguente:

`HRESULT Execute(LONG* pcRows, ULONG cRestrictions, const VARIANT* rgRestrictions)`

Se si sta creando un `CRowsetImpl`-classe per implementare un comando o set di righe della sessione, derivata il `Execute` metodo non avrà la firma seguente:

`HRESULT Execute(LONG* pcRows, DBPARAMS* pParams)`

Per implementare uno qualsiasi dei `CRowsetImpl`-derivato `Execute` metodi, è necessario popolare i buffer dei dati interni ([m_rgRowData](../../data/oledb/crowsetimpl-m-rgrowdata.md)).

## <a name="namefromdbid"></a> CRowsetImpl:: Namefromdbid

Estrae una stringa da un `DBID` e lo copia il *bstr* passato.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CRowsetBaseImpl::NameFromDBID(DBID* pDBID,
   CComBSTR& bstr,
   bool bIndex);
```

#### <a name="parameters"></a>Parametri

*pDBID*<br/>
[in] Un puntatore al `DBID` da cui estrarre una stringa.

*BSTR*<br/>
[in] Oggetto [CComBSTR](../../atl/reference/ccombstr-class.md) per memorizzare una copia del riferimento di `DBID` stringa.

*bIndex*<br/>
[in] **true** se un indice `DBID`; **false** se una tabella `DBID`.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard. A seconda che il `DBID` è una tabella o un indice (indicata dal *bIndex*), il metodo che restituirà quindi DB_E_NOINDEX o DB_E_NOTABLE.

### <a name="remarks"></a>Note

Questo metodo viene chiamato il `CRowsetImpl` implementazioni di [ValidateCommandID](../../data/oledb/crowsetimpl-validatecommandid.md) e [GetCommandFromID](../../data/oledb/crowsetimpl-getcommandfromid.md).

## <a name="setcommandtext"></a> CRowsetImpl:: SetCommandText

Convalida e memorizza i `DBID`s nelle due stringhe ([m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CRowsetBaseImpl::SetCommandText(DBID* pTableID,
   DBID* pIndexID);
```

#### <a name="parameters"></a>Parametri

*pTableID*<br/>
[in] Un puntatore al `DBID` che rappresenta l'ID di tabella.

*pIndexID*<br/>
[in] Un puntatore al `DBID` che rappresenta l'ID di indice.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Il `SetCommentText` viene chiamato dal `CreateRowset`, un valore statico di tipo template metodo `IOpenRowsetImpl`.

Questo metodo delega il lavoro chiamando [ValidateCommandID](../../data/oledb/crowsetimpl-validatecommandid.md) e [GetCommandFromID](../../data/oledb/crowsetimpl-getcommandfromid.md) tramite un puntatore con upcast.

## <a name="getcolumninfo"></a> CRowsetImpl:: GetColumnInfo

Recupera le informazioni di colonna per una particolare richiesta client.

### <a name="syntax"></a>Sintassi

```cpp
static ATLCOLUMNINFO* CRowsetBaseImpl::GetColumnInfo(T* pv,
   ULONG* pcCols);
```

#### <a name="parameters"></a>Parametri

*PV*<br/>
[in] Un puntatore a dell'utente `CRowsetImpl` classe derivata.

*pcCols*<br/>
[in] Un puntatore (output) al numero di colonne restituite.

### <a name="return-value"></a>Valore restituito

Un puntatore a un valore statico `ATLCOLUMNINFO` struttura.

### <a name="remarks"></a>Note

Questo metodo è una sostituzione avanzata.

Questo metodo viene chiamato da diverse classi di implementazione di base per recuperare le informazioni di colonna per una particolare richiesta client. In genere, questo metodo viene chiamato dal `IColumnsInfoImpl`. Se si esegue l'override di questo metodo, è necessario inserire una versione del metodo nel `CRowsetImpl`-classe derivata. Poiché il metodo può essere inserito in una classe non-creato un modello, è necessario modificare *pv* appropriato `CRowsetImpl`-classe derivata.

L'esempio seguente illustra `GetColumnInfo` utilizzo. In questo esempio `CMyRowset` è un `CRowsetImpl`-classe derivata. Per eseguire l'override `GetColumnInfo` per tutte le istanze di questa classe, inserire il metodo seguente il `CMyRowset` definizione della classe:

[!code-cpp[NVC_OLEDB_Provider#1](../../data/oledb/codesnippet/cpp/crowsetimpl-getcolumninfo_1.h)]

## <a name="getcommandfromid"></a> CRowsetImpl:: Getcommandfromid

Controlla se uno o entrambi i parametri contengono i valori stringa e in questo caso, copia i valori di stringa per i membri dei dati [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CRowsetBaseImpl::GetCommandFromID(DBID* pTableID,
   DBID* pIndexID);
```

#### <a name="parameters"></a>Parametri

*pTableID*<br/>
[in] Un puntatore al `DBID` che rappresenta l'ID di tabella.

*pIndexID*<br/>
[in] Un puntatore al `DBID` che rappresenta l'ID di indice.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo viene chiamato tramite un upcast statico dal `CRowsetImpl` per popolare i membri di dati [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md). Per impostazione predefinita, questo metodo verifica se uno o entrambi i parametri contengono i valori stringa. Se contengono i valori stringa, questo metodo copia i valori di stringa per i membri dati. Inserendo un metodo con questa firma di `CRowsetImpl`-classe, derivata verrà chiamato il metodo invece l'implementazione di base.

## <a name="validatecommandid"></a> CRowsetImpl:: ValidateCommandID

Verifica per vedere se uno o entrambi `DBID`contengono i valori stringa e in questo caso, li copia i relativi membri dati [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CRowsetBaseImpl::ValidateCommandID(DBID* pTableID,
   DBID* pIndexID);
```

#### <a name="parameters"></a>Parametri

*pTableID*<br/>
[in] Un puntatore al `DBID` che rappresenta l'ID di tabella.

*pIndexID*<br/>
[in] Un puntatore al `DBID` che rappresenta l'ID di indice.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo viene chiamato tramite un upcast statico dal `CRowsetImpl` per popolare i relativi membri dati [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md). Per impostazione predefinita, questo metodo controlla per vedere se uno o entrambi `DBID`s contengono i valori stringa e in questo caso, li copia i relativi membri dati. Inserendo un metodo con questa firma di `CRowsetImpl`-classe, derivata verrà chiamato il metodo invece l'implementazione di base.

## <a name="rgrowdata"></a> CRowsetImpl:: M_rgrowdata

Per impostazione predefinita, un `CAtlArray` che templatizes nell'argomento del modello record utente per `CRowsetImpl`.

### <a name="syntax"></a>Sintassi

```cpp
ArrayType CRowsetBaseImpl::m_rgRowData;
```

### <a name="remarks"></a>Note

*ArrayType* è un parametro di modello per `CRowsetImpl`.

## <a name="strcommandtext"></a> CRowsetImpl:: M_strcommandtext

Contiene il comando iniziale del set di righe.

### <a name="syntax"></a>Sintassi

```cpp
CComBSTR CRowsetBaseImpl::m_strCommandText;
```

## <a name="strindextext"></a> CRowsetImpl:: M_strindextext

Contiene l'indice iniziale del set di righe.

### <a name="syntax"></a>Sintassi

```cpp
CComBSTR CRowsetBaseImpl::m_strIndexText;
```