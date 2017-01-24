---
title: "Classe IAccessorImpl | Microsoft Docs"
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
  - "IAccessorImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAccessorImpl (classe)"
ms.assetid: 768606da-8b71-417c-a62c-88069ce7730d
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe IAccessorImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione dell'interfaccia di [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx).  
  
## Sintassi  
  
```  
template <  
   class T,   
   class BindType = ATLBINDINGS,   
   class BindingVector = CAtlMap <   
      HACCESSOR hAccessor,   
      BindType* pBindingsStructure   
   >   
>  
class ATL_NO_VTABLE IAccessorImpl : public IAccessorImplBase<BindType>  
```  
  
#### Parametri  
 `T`  
 La classe di oggetto comando o del rowset.  
  
 `BindType`  
 Unità di registrazione per le informazioni di associazione.  L'impostazione predefinita è la struttura di **ATLBINDINGS** \(vedere atldb.h\).  
  
 `BindingVector`  
 Unità di registrazione per informazioni sulla colonna.  L'impostazione predefinita è [CAtlMap](../../atl/reference/catlmap-class.md) in cui l'elemento chiave è un valore di **HACCESSOR** e l'elemento value è un puntatore a una struttura di `BindType`.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)|Costruttore.|  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[AddRefAccessor](../../data/oledb/iaccessorimpl-addrefaccessor.md)|Aggiunge un conteggio dei riferimenti a una funzione di accesso esistente.|  
|[CreateAccessor](../../data/oledb/iaccessorimpl-createaccessor.md)|Crea una funzione di accesso da un insieme di associazioni.|  
|[GetBindings](../../data/oledb/iaccessorimpl-getbindings.md)|Restituisce le associazioni contenute in una funzione di accesso.|  
|[ReleaseAccessor](../../data/oledb/iaccessorimpl-releaseaccessor.md)|Rilascia una funzione di accesso.|  
  
## Note  
 Questa condizione è obbligatoria sui rowset e controlli.  OLE DB richiede i provider di implementare **HACCESSOR**, un tag a una matrice di strutture [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  **HACCESSOR**s fornito da `IAccessorImpl` è indirizzi di strutture di `BindType`.  Per impostazione predefinita, `BindType` viene definito come **ATLBINDINGS** nella definizione del modello di `IAccessorImpl`.  `BindType` fornisce un meccanismo utilizzato da `IAccessorImpl` per tenere traccia del numero di elementi nella matrice di **DBBINDING** nonché flag di funzioni di accesso e un conteggio dei riferimenti.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)