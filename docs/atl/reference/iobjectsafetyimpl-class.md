---
title: "IObjectSafetyImpl Class | Microsoft Docs"
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
  - "IObjectSafetyImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli [ATL], safe"
  - "IObjectSafety, implementazione ATL"
  - "IObjectSafetyImpl class"
  - "safe for scripting and initialization (controls)"
ms.assetid: 64e32082-d910-4a8a-a5bf-ebed9145359d
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IObjectSafetyImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce un'implementazione predefinita dell'interfaccia `IObjectSafety` per consentire a un client recuperare e impostare i livelli di sicurezza di un oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template <class   
      T  
      , DWORD   
      dwSupportedSafety  
      >  
class IObjectSafetyImpl  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IObjectSafetyImpl`.  
  
 *dwSupportedSafety*  
 Specifica opzioni supportate della sicurezza per il controllo.  Sono possibili i seguenti valori:  
  
-   **INTERFACESAFE\_FOR\_UNTRUSTED\_CALLER** l'interfaccia identificata dal parametro `riid`[SetInterfaceSafetyOptions](../Topic/IObjectSafetyImpl::SetInterfaceSafetyOptions.md) deve essere resoe sicuro per lo script.  
  
-   **INTERFACESAFE\_FOR\_UNTRUSTED\_DATA** l'interfaccia identificata dal parametro `riid``SetInterfaceSafetyOptions` deve essere resoe sicuro per i dati non attendibili durante l'inizializzazione.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectSafetyImpl::GetInterfaceSafetyOptions](../Topic/IObjectSafetyImpl::GetInterfaceSafetyOptions.md)|Recupera le opzioni di sicurezza supportate dall'oggetto e le opzioni di sicurezza attualmente impostata per l'oggetto.|  
|[IObjectSafetyImpl::SetInterfaceSafetyOptions](../Topic/IObjectSafetyImpl::SetInterfaceSafetyOptions.md)|Esegue la sicurezza dell'oggetto per l'inizializzazione o lo script.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectSafetyImpl::m\_dwCurrentSafety](../Topic/IObjectSafetyImpl::m_dwCurrentSafety.md)|Archivia il livello corrente della sicurezza dell'oggetto.|  
  
## Note  
 La classe `IObjectSafetyImpl` fornisce un'implementazione predefinita `IObjectSafety`.  L'interfaccia `IObjectSafety` consente a un client recuperare e impostare i livelli di sicurezza di un oggetto.  Ad esempio, un browser può chiamare **IObjectSafety::SetInterfaceSafetyOptions** per eseguire una cassaforte del controllo per l'inizializzazione o safe per lo script.  
  
 Si noti che tramite la macro [IMPLEMENTED\_CATEGORY](../Topic/IMPLEMENTED_CATEGORY.md) con **CATID\_SafeForScripting** le categorie e componenti **CATID\_SafeForInitializing** offre un modo alternativo per specificare che un componente è sicura.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IObjectSafety`  
  
 `IObjectSafetyImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [IObjectSafety Interface](https://msdn.microsoft.com/en-us/library/aa768224.aspx)   
 [Class Overview](../../atl/atl-class-overview.md)