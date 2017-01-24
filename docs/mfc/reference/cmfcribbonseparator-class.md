---
title: "CMFCRibbonSeparator Class | Microsoft Docs"
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
  - "GetThisClass"
  - "CMFCRibbonSeparator::GetThisClass"
  - "CMFCRibbonSeparator.CreateObject"
  - "CMFCRibbonSeparator::CreateObject"
  - "CMFCRibbonSeparator"
  - "CreateObject"
  - "CMFCRibbonSeparator.GetThisClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonSeparator class"
  - "CreateObject method"
  - "GetThisClass method"
ms.assetid: bedb1a53-cb07-4c3c-be12-698c5409e7cf
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonSeparator Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa il separatore della barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonSeparator : public CMFCRibbonBaseElement  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::CMFCRibbonSeparator](../Topic/CMFCRibbonSeparator::CMFCRibbonSeparator.md)|Costruisce un oggetto `CMFCRibbonSeparator`.|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::AddToListBox](../Topic/CMFCRibbonSeparator::AddToListBox.md)|Aggiunge un separatore all'elenco **Comandi** nella finestra di dialogo **Personalizza**.  \(Override [CMFCRibbonBaseElement::AddToListBox](../Topic/CMFCRibbonBaseElement::AddToListBox.md)\).|  
|`CMFCRibbonSeparator::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|`CMFCRibbonSeparator::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
  
### Metodi protetti  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::CopyFrom](../Topic/CMFCRibbonSeparator::CopyFrom.md)|Un metodo copy che imposta le variabili membro di un separatore da un altro oggetto.|  
|[CMFCRibbonSeparator::GetRegularSize](../Topic/CMFCRibbonSeparator::GetRegularSize.md)|Restituisce la dimensione di un separatore.|  
|[CMFCRibbonSeparator::IsSeparator](../Topic/CMFCRibbonSeparator::IsSeparator.md)|Indica se questo è un separatore.|  
|[CMFCRibbonSeparator::IsTabStop](../Topic/CMFCRibbonSeparator::IsTabStop.md)|Indica se questa è una tabulazione.|  
|[CMFCRibbonSeparator::OnDraw](../Topic/CMFCRibbonSeparator::OnDraw.md)|Chiamato dal sistema per disegnare il separatore della barra multifunzione o nella barra di accesso rapido.|  
|[CMFCRibbonSeparator::OnDrawOnList](../Topic/CMFCRibbonSeparator::OnDrawOnList.md)|Chiamato dal sistema per disegnare il separatoreelenco **Comandi**.|  
  
## Note  
 Un separatore della barra multifunzione è una linea verticale o orizzontale che separano logicamente gli elementi della barra multifunzione.  Un separatore può essere attintoe il controllo della barra multifunzione, il menu principale dell'applicazione, la barra di stato della barra multifunzione e la barra di accesso rapido.  
  
 Per utilizzare un separatore nell'applicazione, creare il nuovo oggetto e aggiungerlo al menu principale dell'applicazione come illustrato di seguito:  
  
```  
CMFCRibbonMainPanel* pMainPanel = m_wndRibbonBar.AddMainCategory(_T("Main Menu"), IDB_FILESMALL, IDB_FILELARGE);   
...  
pMainPanel->Add(new CMFCRibbonSeparator(TRUE));  
```  
  
 Chiamare [CMFCRibbonPanel::AddSeparator](../Topic/CMFCRibbonPanel::AddSeparator.md) per aggiungere i separatori pannelli della barra multifunzione.  I separatori vengono allocati e aggiunte internamente con il metodo `AddSeparator`.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md)  
  
## Requisiti  
 **intestazione:** afxbaseribbonelement.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)