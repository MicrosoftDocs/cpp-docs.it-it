---
title: Classe CRowsetImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CRowsetImpl
- ATL.CRowsetImpl
- ATL::CRowsetImpl
dev_langs: C++
helpviewer_keywords: CRowsetImpl class
ms.assetid: e97614b3-b11d-4806-a0d3-b9401331473f
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1ae1bb857353b72551e4766516c571c0091062d3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="crowsetimpl-class"></a>Classe CRowsetImpl
Fornisce un'implementazione standard di set di righe OLE DB senza ereditarietà multipla di molte delle interfacce di implementazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   class T,  
   class Storage,  
   class CreatorClass,  
   class ArrayType = CAtlArray<Storage>,   
   class RowClass = CSimpleRow,   
   class RowsetInterface = IRowsetImpl < T, IRowset >   
>  
class CRowsetImpl :    
   public CComObjectRootEx<CreatorClass::_ThreadModel>,   
   public CRowsetBaseImpl<T, Storage, ArrayType, RowsetInterface>,   
   public IRowsetInfoImpl<T, CreatorClass::_PropClass>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Classe dell'utente che deriva da `CRowsetImpl`.  
  
 `Storage`  
 La classe di record utente.  
  
 `CreatorClass`  
 La classe che contiene le proprietà per il set di righe. in genere il comando.  
  
 `ArrayType`  
 La classe che verrà utilizzato come spazio di archiviazione per i dati del set di righe. Per impostazione predefinita questo parametro per `CAtlArray`, ma può essere qualsiasi classe che supporta la funzionalità richiesta.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[NameFromDBID](../../data/oledb/crowsetimpl-namefromdbid.md)|Estrae una stringa da un **DBID** e la copia nel `bstr` passato.|  
|[SetCommandText](../../data/oledb/crowsetimpl-setcommandtext.md)|Convalida e memorizza il **DBID**s nelle due stringhe ([m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)).|  
  
### <a name="overridable-methods"></a>Metodi sottoponibili a override  
  
|||  
|-|-|  
|[GetColumnInfo](../../data/oledb/crowsetimpl-getcolumninfo.md)|Recupera le informazioni di colonna per una particolare richiesta client.|  
|[GetCommandFromID](../../data/oledb/crowsetimpl-getcommandfromid.md)|Controlla se uno o entrambi i parametri contengono i valori stringa e copia i valori di stringa per i membri dati [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).|  
|[ValidateCommandID](../../data/oledb/crowsetimpl-validatecommandid.md)|Controlla se uno o entrambi **DBID**contengono valori di stringa e in tal caso, copiarli in relativi membri dati [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_rgRowData](../../data/oledb/crowsetimpl-m-rgrowdata.md)|Per impostazione predefinita, un `CAtlArray` che templatizes per l'argomento di modello di record utente per `CRowsetImpl`. Un'altra classe del tipo di matrice può essere utilizzata modificando il `ArrayType` argomento del modello di `CRowsetImpl`.|  
|[m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md)|Contiene il comando iniziale del set di righe.|  
|[m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)|Contiene l'indice iniziale del set di righe.|  
  
## <a name="remarks"></a>Note  
 `CRowsetImpl`fornisce sostituzioni sotto forma di upcasts statico. I metodi di controllano il modo in cui un determinato set di righe convaliderà il testo del comando. È possibile creare `CRowsetImpl`-classe di stile apportando le interfacce di implementazione ereditata di più. L'unico metodo per cui è necessario fornire l'implementazione è **Execute**. A seconda di quale tipo di set di righe si sta creando, i metodi creator previsti firme diverse per **Execute**. Ad esempio, se si utilizza un `CRowsetImpl`-derivata per implementare un set di righe dello schema, il **Execute** metodo ha la firma seguente:  
  
 `HRESULT Execute(LONG* pcRows, ULONG cRestrictions, const VARIANT* rgRestrictions)`  
  
 Se si sta creando un `CRowsetImpl`-derivata per implementare un comando o set di righe della sessione, il **Execute** metodo ha la firma seguente:  
  
 `HRESULT Execute(LONG* pcRows, DBPARAMS* pParams)`  
  
 Per implementare qualsiasi il `CRowsetImpl`-derivato **Execute** metodi, è necessario popolare i buffer dei dati interni ([m_rgRowData](../../data/oledb/crowsetimpl-m-rgrowdata.md)).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h