---
title: "CFontHolder Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFontHolder"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFontHolder class"
  - "custom fonts"
  - "tipi di carattere, controlli ActiveX"
ms.assetid: 728ab472-0c97-440d-889f-1324c6e1b6b8
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# CFontHolder Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la proprietà predefinite predefinita e incapsula la funzionalità di un oggetto del tipo di Windows e dell'interfaccia `IFont`.  
  
## Sintassi  
  
```  
class CFontHolder  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontHolder::CFontHolder](../Topic/CFontHolder::CFontHolder.md)|Costruisce un oggetto `CFontHolder`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontHolder::GetDisplayString](../Topic/CFontHolder::GetDisplayString.md)|Recuperare la stringa viene visualizzata nel Visualizzatore proprietà di un contenitore.|  
|[CFontHolder::GetFontDispatch](../Topic/CFontHolder::GetFontDispatch.md)|Restituisce l'interfaccia `IDispatch` di carattere.|  
|[CFontHolder::GetFontHandle](../Topic/CFontHolder::GetFontHandle.md)|Restituisce un handle a un tipo di carattere di Windows.|  
|[CFontHolder::InitializeFont](../Topic/CFontHolder::InitializeFont.md)|Inizializza un oggetto `CFontHolder`.|  
|[CFontHolder::QueryTextMetrics](../Topic/CFontHolder::QueryTextMetrics.md)|Recupera le informazioni per il tipo correlata.|  
|[CFontHolder::ReleaseFont](../Topic/CFontHolder::ReleaseFont.md)|Disconnette l'oggetto `CFontHolder` interfacce `IFontNotification` e `IFont`.|  
|[CFontHolder::Select](../Topic/CFontHolder::Select.md)|Selezionare una risorsa del carattere in un contesto di dispositivo.|  
|[CFontHolder::SetFont](../Topic/CFontHolder::SetFont.md)|Collega l'oggetto `CFontHolder` a un'interfaccia `IFont`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontHolder::m\_pFont](../Topic/CFontHolder::m_pFont.md)|Un puntatore a un'interfaccia `IFont` dell'oggetto `CFontHolder`.|  
  
## Note  
 `CFontHolder` non dispone di una classe base.  
  
 Utilizzare questa classe per implementare le proprietà del carattere personalizzate per il controllo.  Per informazioni sulla creazione di tali proprietà, vedere l'articolo [controlli ActiveX: Utilizzo dei tipi di carattere](../../mfc/mfc-activex-controls-using-fonts.md).  
  
## Gerarchia di ereditarietà  
 `CFontHolder`  
  
## Requisiti  
 **Header:** afxctl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPropExchange Class](../../mfc/reference/cpropexchange-class.md)