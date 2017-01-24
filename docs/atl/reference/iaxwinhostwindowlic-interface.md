---
title: "IAxWinHostWindowLic Interface | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IAxWinHostWindowLic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAxWinHostWindowLic interface"
ms.assetid: 750f1520-6bce-428c-aca0-fccbe3f063c7
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IAxWinHostWindowLic Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa interfaccia fornisce metodi per modificare un controllo concesso in licenza e il relativo oggetto host.  
  
## Sintassi  
  
```  
  
interface IAxWinHostWindowLic : IAxWinHostWindow  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CreateControlLic](../Topic/IAxWinHostWindowLic::CreateControlLic.md)|Crea un controllo concesso in licenza e lo aggiunge all'oggetto host.|  
|[CreateControlLicEx](../Topic/IAxWinHostWindowLic::CreateControlLicEx.md)|Crea un controllo concesso in licenza, lo aggiunge all'oggetto host e facoltativamente l'installazione di un gestore eventi.|  
  
## Note  
 `IAxWinHostWindowLic` eredita da [IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md) e aggiunge metodi che supportano la creazione di controlli con licenza.  
  
 Vedere [Controlli ActiveX di hosting mediante ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza i membri di questa interfaccia.  
  
## Requisiti  
 La definizione di questa interfaccia è disponibile come IDL o C\+\+, come illustrato di seguito.  
  
|Tipo di definizione|File|  
|-------------------------|----------|  
|IDL|ATLIFace.idl|  
|C\+\+|ATLIFace.h \(anche incluso in ATLBase.h\)|