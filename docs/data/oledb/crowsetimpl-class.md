---
title: "Classe CRowsetImpl | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowsetImpl"
  - "ATL.CRowsetImpl"
  - "ATL::CRowsetImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRowsetImpl (classe)"
ms.assetid: e97614b3-b11d-4806-a0d3-b9401331473f
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CRowsetImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione di rowset OLE DB standard senza richiedere l'ereditarietà multipla di molte interfacce di implementazione.  
  
## Sintassi  
  
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
  
#### Parametri  
 `T`  
 La classe dell'utente che deriva da `CRowsetImpl`.  
  
 `Storage`  
 La classe di record utente.  
  
 `CreatorClass`  
 La classe che contiene le proprietà del rowset; in genere il comando.  
  
 `ArrayType`  
 La classe che fungerà dall'archiviazione dei dati del rowset.  Impostazioni predefinite di questo parametro a `CAtlArray`, ma possono essere qualsiasi classe che supporta la funzionalità richiesta.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[NameFromDBID](../../data/oledb/crowsetimpl-namefromdbid.md)|Estrae una stringa da **DBID** e di copiarlo in `bstr` passato.|  
|[SetCommandText](../../data/oledb/crowsetimpl-setcommandtext.md)|Convalida e archivia **DBID**s nelle due stringhe \([m\_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m\_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)\).|  
  
### Metodi sottoponibili a override  
  
|||  
|-|-|  
|[GetColumnInfo](../../data/oledb/crowsetimpl-getcolumninfo.md)|Recupera le informazioni di colonna per una richiesta del client specifico.|  
|[GetCommandFromID](../../data/oledb/crowsetimpl-getcommandfromid.md)|Verifica se una o entrambi i parametri contengono valori stringa e in caso affermativo, copie valori stringa ai membri dati [m\_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m\_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).|  
|[ValidateCommandID](../../data/oledb/crowsetimpl-validatecommandid.md)|I verifica se una o entrambe il **DBID**s contiene valori stringa e in caso affermativo, quindi copiati ai relativi membri dati [m\_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m\_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_rgRowData](../../data/oledb/crowsetimpl-m-rgrowdata.md)|Per impostazione predefinita, `CAtlArray` che templatizes nell'argomento di template record utente a `CRowsetImpl`.  Un'altra classe del tipo di matrice può essere utilizzata modificando un argomento di template di `ArrayType` a `CRowsetImpl`.|  
|[m\_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md)|Contiene il comando iniziale del rowset.|  
|[m\_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)|Contiene l'indice iniziale del rowset.|  
  
## Note  
 `CRowsetImpl` fornisce override sotto forma di upcast statici.  I metodi controllano il modo in cui un rowset specificato verrà convalidato il testo del comando.  È possibile creare una classe di stile `CRowsetImpl`tramite le interfacce di implementazione più ereditate.  L'unico metodo per il quale è necessario fornire l'implementazione è **Esegui**.  A seconda del tipo di rowset si sta creando, i metodi dell'autore prevedranno firme diverse per **Esegui**.  Ad esempio, se si utilizza `CRowsetImpl`\- classe derivata da implementare un rowset dello schema, il metodo di **Esegui** avrà la firma seguente:  
  
 `HRESULT Execute(LONG* pcRows, ULONG cRestrictions, const VARIANT* rgRestrictions)`  
  
 Se si crea `CRowsetImpl`\- classe derivata da implementare un rowset di sessione o il comando, il metodo di **Esegui** avrà la firma seguente:  
  
 `HRESULT Execute(LONG* pcRows, DBPARAMS* pParams)`  
  
 Per implementare uno di `CRowsetImpl`\- metodi derivati di **Esegui**, è necessario inserire un buffer di dati interni \([m\_rgRowData](../../data/oledb/crowsetimpl-m-rgrowdata.md)\).  
  
## Requisiti  
 **Intestazione:** atldb.h