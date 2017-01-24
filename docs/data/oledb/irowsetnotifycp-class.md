---
title: "Classe IRowsetNotifyCP | Microsoft Docs"
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
  - "IRowsetNotifyCP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetNotifyCP (classe)"
ms.assetid: ccef402b-94a0-4c2e-9a13-7e854ef82390
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe IRowsetNotifyCP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa il sito del provider dell'interfaccia [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx)di punti di connessione.  
  
## Sintassi  
  
```  
template <  
   class T,   
   class ReentrantEventSync = CComSharedMutex   
>  
class IRowsetNotifyCP :   
   public IConnectionPointImpl<  
      T,   
      piid = &__uuidof(IRowsetNotify),   
      CComDynamicUnkArray DynamicUnkArray  
   >,  
   public ReentrantEventSync  
```  
  
#### Parametri  
 `T`  
 Classe derivata da `IRowsetNotifyCP`.  
  
 `ReentrantEventSync`  
 Una classe mutex che supporta il motivo \(l'impostazione predefinita è **CComSharedMutex**\).  Un mutex è un oggetto di sincronizzazione che consente a un thread \- accesso esclusivo a una risorsa.  
  
 `piid`  
 Un puntatore all'ID dell'interfaccia \(**IID\***\) per un'interfaccia del punto di connessione di **IRowsetNotify** .  Il valore predefinito è **&\_\_uuidof\(IRowsetNotify\)**.  
  
 `DynamicUnkArray`  
 Una matrice di tipo [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che è una matrice allocato di puntatori a **IUnknown** alle interfacce client ai sink.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Fire\_OnFieldChange](../../data/oledb/irowsetnotifycp-fire-onfieldchange.md)|Notifica al consumer di una modifica al valore di una colonna.|  
|[Fire\_OnRowChange](../../data/oledb/irowsetnotifycp-fire-onrowchange.md)|Notifica al consumer di un modifica riguarda le righe.|  
|[Fire\_OnRowsetChange](../../data/oledb/irowsetnotifycp-fire-onrowsetchange.md)|Notifica al consumer di un modifica riguarda l'intero rowset.|  
  
## Note  
 `IRowsetNotifyCP` implementa le funzioni di trasmissione per comunicare ai listener sul punto di connessione **IID\_IRowsetNotify** le modifiche apportate al contenuto del rowset.  
  
 Si noti che è anche necessario implementare e registrare `IRowsetNotify` sul consumer \(anche noto come "il sink"\) utilizzando [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) in modo che il consumer possa gestire le notifiche.  Vedere [Ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione del punto di connessione per collegare sul consumer.  
  
 Per informazioni dettagliate sull'implementazione delle notifiche, vedere "notifiche di supporto" in [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Notifications \(COM\)](http://msdn.microsoft.com/library/windows/desktop/ms678433)   
 [Overview of Notifications \(OLE DB\)](https://msdn.microsoft.com/en-us/library/ms725406.aspx)   
 [BEGIN\_CONNECTION\_POINT\_MAP](../Topic/BEGIN_CONNECTION_POINT_MAP.md)   
 [END\_CONNECTION\_POINT\_MAP](../Topic/END_CONNECTION_POINT_MAP.md)   
 [CONNECTION\_POINT\_ENTRY](../Topic/CONNECTION_POINT_ENTRY.md)   
 [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)