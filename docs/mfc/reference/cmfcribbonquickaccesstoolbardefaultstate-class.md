---
title: "CMFCRibbonQuickAccessToolBarDefaultState Class | Microsoft Docs"
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
  - "CMFCRibbonQuickAccessToolBarDefaultState"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonQuickAccessToolBarDefaultState class"
ms.assetid: eca99200-b87b-47ba-b2e8-2f3f2444b176
caps.latest.revision: 28
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonQuickAccessToolBarDefaultState Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe di supporto che mantiene lo stato predefinito della barra di accesso rapido che si trova nella barra della barra multifunzione \([CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)\).  
  
## Sintassi  
  
```  
class CMFCRibbonQuickAccessToolBarDefaultState  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState](../Topic/CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState.md)|Costruisce un oggetto `CMFCRibbonQuickAccessToolbarDefaultState`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](../Topic/CMFCRibbonQuickAccessToolBarDefaultState::AddCommand.md)|Aggiungere un comando allo stato predefinito della barra di accesso rapido.  Ciò non modifica la barra degli strumenti stessa.|  
|[CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom](../Topic/CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom.md)|Copiare le proprietà di una barra di accesso rapido a un altro.|  
|[CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll](../Topic/CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll.md)|Rimuove tutti i controlli dalla barra di accesso rapido.  Ciò non modifica la barra degli strumenti stessa.|  
  
## Note  
 Dopo aver creato la barra di accesso rapido nell'applicazione, si consiglia di impostare lo stato predefinito chiamando [CMFCRibbonBar::SetQuickAccessDefaultState](../Topic/CMFCRibbonBar::SetQuickAccessDefaultState.md).  Questo stato predefinito viene ripristinato quando un utente fa clic sul pulsante **Reimposta** nella pagina **Personalizza** la finestra di dialogo **Opzioni** dell'applicazione.  
  
## Gerarchia di ereditarietà  
 [CMFCRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md)  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto con la classe `CMFCRibbonQuickAccessToolbarDefaultState` e come aggiungere un comando allo stato predefinito della barra di accesso rapido.  
  
 [!code-cpp[NVC_MFC_RibbonApp#21](../../mfc/reference/codesnippet/CPP/cmfcribbonquickaccesstoolbardefaultstate-class_1.cpp)]  
  
## Requisiti  
 **intestazione:** afxribbonquickaccesstoolbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)   
 [CMFCRibbonBar::SetQuickAccessDefaultState](../Topic/CMFCRibbonBar::SetQuickAccessDefaultState.md)