---
title: "IPointerInactiveImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IPointerInactiveImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inactive objects"
  - "IPointerInactive ATL implementation"
  - "IPointerInactiveImpl class"
ms.assetid: e1fe9ea6-d38a-4527-9112-eb344771e0b7
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# IPointerInactiveImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** i metodi di interfaccia [IPointerInactive](http://msdn.microsoft.com/library/windows/desktop/ms693712).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template< class   
      T  
      >  
class IPointerInactiveImpl  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IPointerInactiveImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPointerInactiveImpl::GetActivationPolicy](../Topic/IPointerInactiveImpl::GetActivationPolicy.md)|Recupera i criteri di attivazione correnti per l'oggetto.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IPointerInactiveImpl::OnInactiveMouseMove](../Topic/IPointerInactiveImpl::OnInactiveMouseMove.md)|Notifica l'oggetto che il puntatore del mouse se si è spostato su, per indicare che l'oggetto può generare eventi del mouse.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IPointerInactiveImpl::OnInactiveSetCursor](../Topic/IPointerInactiveImpl::OnInactiveSetCursor.md)|Imposta il puntatore del mouse per l'oggetto inattivo.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
  
## Note  
 Un oggetto è inattivo uno caricato o semplicemente in esecuzione.  A differenza di un oggetto attivo, l'oggetto inattivo non può ricevere messaggi della tastiera e del mouse di Windows.  Pertanto, gli oggetti non utilizzano meno risorse e sono in genere più efficienti.  
  
 L'interfaccia [IPointerInactive](http://msdn.microsoft.com/library/windows/desktop/ms693712) consente a un oggetto supporta un livello minimo di interazioni con il mouse rimane inattiva.  Questa funzionalità è particolarmente utile per i controlli.  
  
 La classe `IPointerInactiveImpl` implementa i metodi `IPointerInactive` completare l'esecuzione **E\_NOTIMPL**.  Tuttavia, implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IPointerInactive`  
  
 `IPointerInactiveImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)