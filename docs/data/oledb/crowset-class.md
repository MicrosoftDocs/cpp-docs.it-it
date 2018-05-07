---
title: Classe CRowset | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CRowset<TAccessor>
- CRowset
- ATL::CRowset
- ATL::CRowset<TAccessor>
- ATL.CRowset
dev_langs:
- C++
helpviewer_keywords:
- CRowset class
ms.assetid: b0228a90-b8dd-47cc-b397-8d4c15c1e7f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5c9a23c2e879f0d2fe1add1a970c64f6fbcc27b2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="crowset-class"></a>Classe CRowset
Incapsula un oggetto set di righe OLE DB e diverse relative interfacce e fornisce metodi di modifica per i dati di set di righe.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>  
class CRowset  
```  
  
#### <a name="parameters"></a>Parametri  
 `TAccessor`  
 Una classe di funzione di accesso. Il valore predefinito è `CAccessorBase`.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddRefRows](../../data/oledb/crowset-addrefrows.md)|Incrementa il conteggio dei riferimenti associati con la riga corrente.|  
|[Chiudi](../../data/oledb/crowset-close.md)|Rilascia le righe e corrente `IRowset` interfaccia.|  
|[Compare](../../data/oledb/crowset-compare.md)|Confronta due segnalibri utilizzando [IRowsetLocate::Compare](https://msdn.microsoft.com/en-us/library/ms709539.aspx).|  
|[CRowset](../../data/oledb/crowset-crowset.md)|Crea un nuovo `CRowset` dell'oggetto e (facoltativamente) lo associa a un **IRowset** interfaccia fornita come parametro.|  
|[Eliminazione](../../data/oledb/crowset-delete.md)|Elimina le righe dal set di righe utilizzando [IRowsetChange:DeleteRows](https://msdn.microsoft.com/en-us/library/ms724362.aspx).|  
|[FindNextRow](../../data/oledb/crowset-findnextrow.md)|Trova la riga corrispondente successiva dopo il segnalibro specificato.|  
|[GetApproximatePosition](../../data/oledb/crowset-getapproximateposition.md)|Restituisce la posizione approssimativa di una riga corrispondente a un segnalibro.|  
|[GetData](../../data/oledb/crowset-getdata.md)|Recupera dati da una copia del set di righe della riga.|  
|[GetDataHere](../../data/oledb/crowset-getdatahere.md)|Recupera i dati dal buffer specificato.|  
|[GetOriginalData](../../data/oledb/crowset-getoriginaldata.md)|Recupera i dati recuperati da più di recente o trasmesso all'origine dei dati, ignorando le modifiche in sospeso.|  
|[GetRowStatus](../../data/oledb/crowset-getrowstatus.md)|Restituisce lo stato di tutte le righe.|  
|[Inserisci](../../data/oledb/crowset-insert.md)|Crea e inserisce una nuova riga utilizzando [IRowsetChange:InsertRow](https://msdn.microsoft.com/en-us/library/ms716921.aspx).|  
|[IsSameRow](../../data/oledb/crowset-issamerow.md)|Confronta la riga specificata con la riga corrente.|  
|[MoveFirst](../../data/oledb/crowset-movefirst.md)|Riposiziona il percorso di recupero successivo per la posizione iniziale.|  
|[MoveLast](../../data/oledb/crowset-movelast.md)|Passa all'ultimo record.|  
|[Metodo MoveNext](../../data/oledb/crowset-movenext.md)|Recupera i dati dalla riga successiva sequenza o un numero specificato di posizioni successive alla riga successiva.|  
|[MovePrev](../../data/oledb/crowset-moveprev.md)|Passa al record precedente.|  
|[MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)|Recupera la riga contrassegnata da un segnalibro o la riga in corrispondenza di un offset specificato dal segnalibro.|  
|[MoveToRatio](../../data/oledb/crowset-movetoratio.md)|Recupera le righe a partire da una posizione decimale nel set di righe.|  
|[ReleaseRows](../../data/oledb/crowset-releaserows.md)|Chiamate [IRowset:: ReleaseRows](https://msdn.microsoft.com/en-us/library/ms719771.aspx) per rilasciare l'handle di riga corrente.|  
|[SetData](../../data/oledb/crowset-setdata.md)|Imposta i valori dei dati in una o più colonne di una riga utilizzando [IRowsetChange:SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx).|  
|[Annulla](../../data/oledb/crowset-undo.md)|Annullare le modifiche apportate a una riga dall'ultimo recupero o [aggiornamento](../../data/oledb/crowset-update.md).|  
|[Aggiornamento](../../data/oledb/crowset-update.md)|Consente di trasmettere le modifiche apportate alla riga corrente dopo l'ultimo recupero o l'aggiornamento in sospeso.|  
|[UpdateAll](../../data/oledb/crowset-updateall.md)|Consente di trasmettere le modifiche apportate a tutte le righe l'ultima operazione di recupero o l'aggiornamento in sospeso.|  
  
## <a name="remarks"></a>Note  
 In OLE DB, un set di righe è l'oggetto tramite il quale un programma imposta e recupera i dati.  
  
 Questa classe non deve essere creata un'istanza, ma piuttosto passato come parametro di modello per `CTable` o `CCommand` (`CRowset` è l'impostazione predefinita).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio DBViewer](../../visual-cpp-samples.md)   
 [Esempio multiRead](../../visual-cpp-samples.md)   
 [Attributi multiRead](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)