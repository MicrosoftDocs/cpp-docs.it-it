---
title: "IPersistStreamInitImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::IPersistStreamInitImpl"
  - "ATL::IPersistStreamInitImpl<T>"
  - "ATL.IPersistStreamInitImpl<T>"
  - "IPersistStreamInitImpl"
  - "ATL.IPersistStreamInitImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IPersistStreamInit ATL implementation"
  - "IPersistStreamInitImpl class"
  - "flussi, ATL"
ms.assetid: ef217c3c-020f-4cf8-871e-ef68e57865b8
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IPersistStreamInitImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita dell'interfaccia [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template<  
class T   
>  
class ATL_NO_VTABLE IPersistStreamInitImpl :  
public IPersistStreamInit  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IPersistStreamInitImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistStreamInitImpl::GetClassID](../Topic/IPersistStreamInitImpl::GetClassID.md)|Recupera il CLSID dell'oggetto.|  
|[IPersistStreamInitImpl::GetSizeMax](../Topic/IPersistStreamInitImpl::GetSizeMax.md)|Recupera la dimensione del flusso necessario per salvare i dati dell'oggetto.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IPersistStreamInitImpl::InitNew](../Topic/IPersistStreamInitImpl::InitNew.md)|Inizializza un oggetto appena creato.|  
|[IPersistStreamInitImpl::IsDirty](../Topic/IPersistStreamInitImpl::IsDirty.md)|Controlla se i dati dell'oggetto siano stati modificati da quando sono stati salvati per ultima.|  
|[IPersistStreamInitImpl::Load](../Topic/IPersistStreamInitImpl::Load.md)|Carica le proprietà dell'oggetto dal flusso specificato.|  
|[IPersistStreamInitImpl::Save](../Topic/IPersistStreamInitImpl::Save.md)|Carica le proprietà di un oggetto al flusso specificato.|  
  
## Note  
 L'interfaccia [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) consente a un client richiedono che l'oggetto caricare e salvare i dati persistenti in un unico flusso.  La classe `IPersistStreamInitImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IPersistStreamInit`  
  
 `IPersistStreamInitImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Storages and Streams](http://msdn.microsoft.com/library/windows/desktop/aa380352)   
 [Class Overview](../../atl/atl-class-overview.md)