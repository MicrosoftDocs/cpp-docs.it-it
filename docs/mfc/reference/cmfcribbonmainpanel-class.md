---
title: "CMFCRibbonMainPanel Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonMainPanel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonMainPanel class"
ms.assetid: 1af78798-5e75-4365-9c81-a54aa5679602
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CMFCRibbonMainPanel Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un pannello della barra multifunzione visualizzato quando si fa clic [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md).  
  
## Sintassi  
  
```  
class CMFCRibbonMainPanel : public CMFCRibbonPanel  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonMainPanel::CMFCRibbonMainPanel`|Costruttore predefinito.|  
|`CMFCRibbonMainPanel::~CMFCRibbonMainPanel`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonMainPanel::Add](../Topic/CMFCRibbonMainPanel::Add.md)|Aggiunge un riquadro dell'elemento barra multifunzione a sinistra del pannello pulsante di applicazione.  \(Override [CMFCRibbonPanel::Add](../Topic/CMFCRibbonPanel::Add.md)\).|  
|[CMFCRibbonMainPanel::AddRecentFilesList](../Topic/CMFCRibbonMainPanel::AddRecentFilesList.md)|Aggiunge una stringa di testo al menu recente dell'elenco di file.|  
|[CMFCRibbonMainPanel::AddToBottom](../Topic/CMFCRibbonMainPanel::AddToBottom.md)|Aggiunge un elemento barra multifunzione nel riquadro inferiore del riquadro di applicazione della barra multifunzione.|  
|[CMFCRibbonMainPanel::AddToRight](../Topic/CMFCRibbonMainPanel::AddToRight.md)|Aggiunge un elemento barra multifunzione nel riquadro di destra del pulsante di applicazione.|  
|`CMFCRibbonMainPanel::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCRibbonMainPanel::GetCommandsFrame](../Topic/CMFCRibbonMainPanel::GetCommandsFrame.md)|Restituisce un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.|  
|`CMFCRibbonMainPanel::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
  
## Note  
 Il framework `CMFCRibbonMainPanel` visualizzato quando si apre il pannello di applicazione.  Contiene tre riquadri:  
  
-   Il riquadro sinistro contiene i controlli associati ai file, come **Apri**, **Salva**, **Stampa**e **Chiudi**.  Per aggiungere un comando al riquadro, chiamare [CMFCRibbonMainPanel::Add](../Topic/CMFCRibbonMainPanel::Add.md).  
  
-   Il riquadro di destra contiene le opzioni che modificano il comando che si fa clic su nel riquadro sinistro.  Ad esempio, se si fa clic **Salva con nome** dal riquadro, il riquadro destro vengono visualizzati i tipi di file disponibili.  Per aggiungere un elemento a questo riquadro, chiamare [CMFCRibbonMainPanel::AddToRight](../Topic/CMFCRibbonMainPanel::AddToRight.md).  
  
-   Nel riquadro inferiore contiene pulsanti che consentono modificare le impostazioni dell'applicazione e terminare il programma.  Per aggiungere un elemento a questo riquadro, chiamare [CMFCRibbonMainPanel::AddToBottom](../Topic/CMFCRibbonMainPanel::AddToBottom.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)  
  
 [CMFCRibbonMainPanel](../../mfc/reference/cmfcribbonmainpanel-class.md)  
  
## Requisiti  
 **intestazione:** afxRibbonMainPanel.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonPanel Class](../../mfc/reference/cmfcribbonpanel-class.md)