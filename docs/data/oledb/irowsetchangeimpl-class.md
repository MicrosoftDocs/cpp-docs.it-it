---
title: Classe IRowsetChangeImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::IRowsetChangeImpl
- IRowsetChangeImpl
- ATL.IRowsetChangeImpl
- ATL.IRowsetChangeImpl.DeleteRows
- ATL::IRowsetChangeImpl::DeleteRows
- IRowsetChangeImpl.DeleteRows
- DeleteRows
- IRowsetChangeImpl::DeleteRows
- ATL.IRowsetChangeImpl.InsertRow
- InsertRow
- IRowsetChangeImpl.InsertRow
- ATL::IRowsetChangeImpl::InsertRow
- IRowsetChangeImpl::InsertRow
- SetData
- IRowsetChangeImpl::SetData
- ATL.IRowsetChangeImpl.SetData
- IRowsetChangeImpl.SetData
- ATL::IRowsetChangeImpl::SetData
- IRowsetChangeImpl::FlushData
- IRowsetChangeImpl.FlushData
- FlushData
dev_langs:
- C++
helpviewer_keywords:
- providers, updatable
- updatable providers, immediate update
- IRowsetChangeImpl class
- DeleteRows method
- InsertRow method
- SetData method
- FlushData method
ms.assetid: 1e9fee15-ed9e-4387-af8f-215569beca6c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3cac23621959fb71247b649171309ec9d12cf35b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46038745"
---
# <a name="irowsetchangeimpl-class"></a>Classe IRowsetChangeImpl

L'implementazione di modelli OLE DB del [IRowsetChange](/previous-versions/windows/desktop/ms715790\(v=vs.85\)) interfaccia nella specifica OLE DB.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <  
   class T,   
   class Storage,   
   class BaseInterface = IRowsetChange,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap <RowClass::KeyType, RowClass*>>  
class ATL_NO_VTABLE IRowsetChangeImpl : public BaseInterface  
```  
  
### <a name="parameters"></a>Parametri  

*T*<br/>
Una classe derivata da `IRowsetChangeImpl`.  
  
*Archiviazione*<br/>
Il record dell'utente.  
  
*BaseInterface*<br/>
La classe di base per l'interfaccia, ad esempio `IRowsetChange`.  
  
*RowClass*<br/>
L'unità di archiviazione per l'handle di riga.  
  
*MapClass*<br/>
L'unità di archiviazione per tutti gli handle di riga utilizzato dal provider.  

## <a name="requirements"></a>Requisiti  

**Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods-used-with-irowsetchange"></a>Metodi di interfaccia (utilizzati con IRowsetChange)  
  
|||  
|-|-|  
|[DeleteRows](#deleterows)|Elimina le righe dal set di righe.|  
|[InsertRow](#insertrow)|Inserisce una riga nel set di righe.|  
|[SetData](#setdata)|Imposta i valori dei dati in una o più colonne.|  
  
### <a name="implementation-method-callback"></a>Metodo di implementazione (Callback)  
  
|||  
|-|-|  
|[FlushData](#flushdata)|Sottoposto a override dal provider per eseguire il commit nel proprio archivio dati.|  
  
## <a name="remarks"></a>Note  

Questa interfaccia è responsabile delle operazioni di scrittura immediata a un archivio dati. "Immediati" significa che quando l'utente finale (l'utente che utilizza il consumer) effettua tutte le modifiche, tali modifiche vengono immediatamente trasmesse ai dati di archiviarla e non può essere annullata.  
  
`IRowsetChangeImpl` implementa OLE DB `IRowsetChange` interfaccia, che consente l'aggiornamento dei valori delle colonne in righe esistenti, l'eliminazione delle righe e inserendo nuove righe.  
  
L'implementazione di modelli OLE DB supporta tutti i metodi di base (`SetData`, `InsertRow`, e `DeleteRows`).  
  
> [!IMPORTANT]
>  È consigliabile leggere la documentazione seguente prima di tentare di implementare un provider:  
  
- [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)  
  
- Capitolo 6 del *riferimento per programmatori OLE DB*  
  
- Vedere anche il `RUpdateRowset` classe viene utilizzata nel [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) esempio.  
  
## <a name="deleterows"></a> IRowsetChangeImpl:: DeleteRows

Elimina le righe dal set di righe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD (DeleteRows )(HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBROWSTATUS rgRowStatus[]);  
```  
  
#### <a name="parameters"></a>Parametri  

Visualizzare [IRowsetChange:: DeleteRows](/previous-versions/windows/desktop/ms724362(v%3dvs.85)) nel *riferimento per programmatori OLE DB*. 

## <a name="insertrow"></a> IRowsetChangeImpl:: InsertRow

Crea e Inizializza una nuova riga nel set di righe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD (InsertRow )(HCHAPTER /* hReserved */,  
   HACCESSOR hAccessor,  
   void* pData,  
   HROW* phRow);  
```  
  
#### <a name="parameters"></a>Parametri  

Visualizzare [IRowsetChange:: InsertRow](/previous-versions/windows/desktop/ms716921\(v=vs.85\)) nel *riferimento per programmatori OLE DB*. 

## <a name="setdata"></a> IRowsetChangeImpl:: SetData

Imposta i valori dei dati in una o più colonne.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD (SetData )(HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData);  
```  
  
#### <a name="parameters"></a>Parametri  

Visualizzare [IRowsetChange:: SetData](/previous-versions/windows/desktop/ms721232\(v=vs.85\)) nel *riferimento per programmatori OLE DB*. 

## <a name="flushdata"></a> IRowsetChangeImpl:: FlushData

Sottoposto a override dal provider per eseguire il commit nel proprio archivio dati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT FlushData(HROW hRowToFlush,  
   HACCESSOR hAccessorToFlush);  
```  
  
#### <a name="parameters"></a>Parametri  

*hRowToFlush*<br/>
[in] Handle per le righe per i dati. Il tipo di questa riga è determinato dal *RowClass* argomento di modello delle `IRowsetImpl` classe (`CSimpleRow` per impostazione predefinita).  
  
*hAccessorToFlush*<br/>
[in] Handle per la funzione di accesso, che contiene le informazioni di associazione e le informazioni sul tipo nel relativo `PROVIDER_MAP` (vedere [IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)).  
  
### <a name="return-value"></a>Valore restituito  

Un valore HRESULT standard.  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)