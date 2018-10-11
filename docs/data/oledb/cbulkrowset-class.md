---
title: Classe CBulkRowset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CBulkRowset
- ATL.CBulkRowset
- ATL::CBulkRowset<TAccessor>
- CBulkRowset
- ATL.CBulkRowset<TAccessor>
- CBulkRowset::AddRefRows
- AddRefRows
- CBulkRowset.AddRefRows
- ATL.CBulkRowset<TAccessor>.AddRefRows
- ATL::CBulkRowset::AddRefRows
- CBulkRowset<TAccessor>::AddRefRows
- ATL.CBulkRowset.AddRefRows
- ATL::CBulkRowset<TAccessor>::AddRefRows
- ATL.CBulkRowset<TAccessor>.CBulkRowset
- ATL::CBulkRowset::CBulkRowset
- CBulkRowset.CBulkRowset
- CBulkRowset::CBulkRowset
- ATL.CBulkRowset.CBulkRowset
- ATL::CBulkRowset<TAccessor>::CBulkRowset
- CBulkRowset<TAccessor>::CBulkRowset
- CBulkRowset
- ATL.CBulkRowset.MoveFirst
- CBulkRowset<TAccessor>.MoveFirst
- ATL.CBulkRowset<TAccessor>.MoveFirst
- ATL::CBulkRowset::MoveFirst
- ATL::CBulkRowset<TAccessor>::MoveFirst
- CBulkRowset::MoveFirst
- CBulkRowset<TAccessor>::MoveFirst
- CBulkRowset.MoveFirst
- CBulkRowset.MoveLast
- ATL.CBulkRowset.MoveLast
- ATL::CBulkRowset<TAccessor>::MoveLast
- CBulkRowset::MoveLast
- CBulkRowset<TAccessor>.MoveLast
- ATL::CBulkRowset::MoveLast
- ATL.CBulkRowset<TAccessor>.MoveLast
- CBulkRowset<TAccessor>::MoveLast
- MoveLast
- ATL.CBulkRowset<TAccessor>.MoveNext
- ATL::CBulkRowset::MoveNext
- CBulkRowset::MoveNext
- ATL.CBulkRowset.MoveNext
- CBulkRowset.MoveNext
- ATL::CBulkRowset<TAccessor>::MoveNext
- CBulkRowset<TAccessor>.MoveNext
- CBulkRowset<TAccessor>::MoveNext
- CBulkRowset::MovePrev
- MovePrev
- CBulkRowset<TAccessor>::MovePrev
- ATL::CBulkRowset<TAccessor>::MovePrev
- CBulkRowset<TAccessor>.MovePrev
- ATL::CBulkRowset::MovePrev
- CBulkRowset.MovePrev
- ATL.CBulkRowset.MovePrev
- ATL.CBulkRowset<TAccessor>.MovePrev
- CBulkRowset<TAccessor>::MoveToBookmark
- CBulkRowset.MoveToBookmark
- MoveToBookmark
- ATL.CBulkRowset.MoveToBookmark
- CBulkRowset::MoveToBookmark
- ATL::CBulkRowset<TAccessor>::MoveToBookmark
- ATL::CBulkRowset::MoveToBookmark
- CBulkRowset.MoveToRatio
- ATL::CBulkRowset::MoveToRatio
- MoveToRatio
- CBulkRowset::MoveToRatio
- ATL.CBulkRowset<TAccessor>.MoveToRatio
- ATL::CBulkRowset<TAccessor>::MoveToRatio
- ATL.CBulkRowset.MoveToRatio
- CBulkRowset<TAccessor>::MoveToRatio
- ReleaseRows
- ATL.CBulkRowset<TAccessor>.ReleaseRows
- ATL::CBulkRowset<TAccessor>::ReleaseRows
- ATL.CBulkRowset.ReleaseRows
- CBulkRowset<TAccessor>::ReleaseRows
- ATL::CBulkRowset::ReleaseRows
- CBulkRowset::ReleaseRows
- CBulkRowset.ReleaseRows
- ATL.CBulkRowset.SetRows
- CBulkRowset::SetRows
- CBulkRowset<TAccessor>.SetRows
- ATL.CBulkRowset<TAccessor>.SetRows
- CBulkRowset<TAccessor>::SetRows
- ATL::CBulkRowset<TAccessor>::SetRows
- ATL::CBulkRowset::SetRows
- CBulkRowset.SetRows
- SetRows
dev_langs:
- C++
helpviewer_keywords:
- CBulkRowset class
- AddRefRows method
- CBulkRowset class, constructor
- MoveFirst method
- MoveLast method
- MoveNext method
- MovePrev method
- MoveToBookmark method
- MoveToRatio method
- ReleaseRows method
- SetRows method
ms.assetid: c6bde426-c543-4022-a98a-9519d9e2ae59
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3538a8cd15fc315f4d91d1c83c517811acce1802
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49082904"
---
# <a name="cbulkrowset-class"></a>Classe CBulkRowset

Recupera e gestisce le righe da usare sui dati in blocco, recuperare più handle di riga con una singola chiamata.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor>  
class CBulkRowset : public CRowset<TAccessor>  
```  
  
### <a name="parameters"></a>Parametri  

*TAccessor*<br/>
Una classe di funzione di accesso.  

## <a name="requirements"></a>Requisiti  

**Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddRefRows](#addrefrows)|Incrementa il conteggio dei riferimenti.|  
|[CBulkRowset](#cbulkrowset)|Costruttore.|  
|[MoveFirst](#movefirst)|Recupera la prima riga di dati, eseguire il nuovo recupero bulk se necessario.|  
|[MoveLast](#movelast)|Passa all'ultima riga.|  
|[Metodo MoveNext](#movenext)|Recupera la riga successiva di dati.|  
|[MovePrev](#moveprev)|Passa alla riga precedente.|  
|[MoveToBookmark](#movetobookmark)|Recupera la riga contrassegnata da un segnalibro o la riga in corrispondenza di un offset specificato da questo segnalibro.|  
|[MoveToRatio](#movetoratio)|Recupera le righe a partire da una posizione frazionaria nel set di righe.|  
|[ReleaseRows](#releaserows)|Imposta la riga corrente (`m_nCurrentRow`) a zero e rilascia tutte le righe.|  
|[SetRows](#setrows)|Imposta il numero di handle di riga da recuperare da un'unica chiamata.|  
  
## <a name="example"></a>Esempio  

Nell'esempio seguente viene illustrato l'utilizzo del `CBulkRowset` classe.  
  
[!code-cpp[NVC_OLEDB_Consumer#1](../../data/oledb/codesnippet/cpp/cbulkrowset-class_1.cpp)]  

## <a name="addrefrows"></a> CBulkRowset:: Addrefrows

Le chiamate [IRowset:: Addrefrows](/previous-versions/windows/desktop/ms719619) incrementare il conteggio dei riferimenti per tutte le righe attualmente recuperate dal rowset di massa.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT AddRefRows() throw();  
```  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard. 
  
## <a name="cbulkrowset"></a> CBulkRowset:: CBulkRowset

Crea un nuovo `CBulkRowset` dell'oggetto e imposta il numero di riga predefinito su 10.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CBulkRowset();  
```  

## <a name="movefirst"></a> CBulkRowset:: MoveFirst

Recupera la prima riga di dati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveFirst() throw();  
```  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard.

## <a name="movelast"></a> CBulkRowset:: MoveLast

Passa all'ultima riga.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveLast() throw();  
```  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard.  

## <a name="movenext"></a> CBulkRowset:: MoveNext

Recupera la riga successiva di dati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveNext() throw();  
```  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard. Quando è stata raggiunta la fine del set di righe, restituisce DB_S_ENDOFROWSET. 

## <a name="moveprev"></a> CBulkRowset:: MovePrev

Passa alla riga precedente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MovePrev() throw();  
```  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard.  

## <a name="movetobookmark"></a> CBulkRowset:: MoveToBookmark

Recupera la riga contrassegnata da un segnalibro o la riga in corrispondenza di un offset specificato (*lSkip*) dal segnalibro.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveToBookmark(const CBookmarkBase& bookmark, 
   DBCOUNTITEM lSkip = 0) throw();  
```  
  
#### <a name="parameters"></a>Parametri  

*Segnalibro*<br/>
[in] Un segnalibro contrassegna la posizione da cui si desidera recuperare i dati.  
  
*lSkip*<br/>
[in] Conteggio numero di righe del segnalibro nella riga di destinazione. Se *lSkip* è uguale a zero, la prima riga recuperata è la riga con segnalibro. Se *lSkip* è 1, la prima riga recuperata è la riga dopo la riga con segnalibro. Se *lSkip* è -1, la prima riga recuperata è la riga precedente alla riga con segnalibro.  
  
### <a name="return-value"></a>Valore restituito  

Visualizzare [IRowset:: GetData](/previous-versions/windows/desktop/ms716988) nel *riferimento per programmatori OLE DB*. 

## <a name="movetoratio"></a> CBulkRowset:: Movetoratio

Recupera le righe a partire da una posizione frazionaria nel set di righe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveToRatio(DBCOUNTITEM nNumerator, 
   DBCOUNTITEM nDenominator)throw();  
```  
  
#### <a name="parameters"></a>Parametri  

*nNumerator*<br/>
[in] Il numeratore utilizzato per determinare la posizione da cui recuperare i dati frazionaria.  
  
*nDenominator*<br/>
[in] Il denominatore consente di determinare la posizione da cui recuperare i dati frazionaria.  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  

`MoveToRatio` Recupera le righe approssimativamente in base alla formula seguente:  
  
`(nNumerator *  RowsetSize ) / nDenominator`  
  
In cui `RowsetSize` è la dimensione del set di righe, misurata in righe. L'accuratezza di questa formula dipende dal provider specifico. Per informazioni dettagliate, vedere [IRowsetScroll:: GetRowsAtRatio](/previous-versions/windows/desktop/ms709602) nel *riferimento per programmatori OLE DB*.   

## <a name="releaserows"></a> CBulkRowset:: ReleaseRows

Le chiamate [:: ReleaseRows](/previous-versions/windows/desktop/ms719771) per decrementare il conteggio dei riferimenti per tutte le righe attualmente recuperate dal rowset di massa.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT ReleaseRows() throw();   
```  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard.  

## <a name="setrows"></a> CBulkRowset:: setRows

Imposta il numero di handle di riga recuperati da ogni chiamata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void SetRows(DBROWCOUNT nRows) throw();  
```  
  
#### <a name="parameters"></a>Parametri  

*nRows*<br/>
[in] La nuova dimensione del set di righe (numero di righe).  
  
### <a name="remarks"></a>Note  

Se si chiama questa funzione, deve essere prima che venga aperto il set di righe.
  
## <a name="see-also"></a>Vedere anche  

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)