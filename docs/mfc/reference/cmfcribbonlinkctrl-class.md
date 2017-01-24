---
title: "CMFCRibbonLinkCtrl Class | Microsoft Docs"
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
  - "CMFCRibbonLinkCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonLinkCtrl class"
ms.assetid: 77ae1941-e0ab-4a9d-911e-1752d34c079b
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonLinkCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un collegamento ipertestuale collocato in una barra multifunzione.  Il collegamento ipertestuale apre una pagina Web quando si fa clic su di esso.  
  
## Sintassi  
  
```  
class CMFCRibbonLinkCtrl : public CMFCRibbonButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl](../Topic/CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl.md)|Costruisce e inizializza un oggetto `CMFCRibbonLinkCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonLinkCtrl::CopyFrom](../Topic/CMFCRibbonLinkCtrl::CopyFrom.md)|Esegue l'override di `CMFCRibbonButton::CopyFrom`.|  
|[CMFCRibbonLinkCtrl::GetCompactSize](../Topic/CMFCRibbonLinkCtrl::GetCompactSize.md)|Esegue l'override di [CMFCRibbonButton::GetCompactSize](../Topic/CMFCRibbonButton::GetCompactSize.md).|  
|[CMFCRibbonLinkCtrl::GetLink](../Topic/CMFCRibbonLinkCtrl::GetLink.md)|Restituisce il valore del collegamento ipertestuale.|  
|[CMFCRibbonLinkCtrl::GetRegularSize](../Topic/CMFCRibbonLinkCtrl::GetRegularSize.md)|Esegue l'override di [CMFCRibbonButton::GetRegularSize](../Topic/CMFCRibbonButton::GetRegularSize.md).|  
|[CMFCRibbonLinkCtrl::GetToolTipText](../Topic/CMFCRibbonLinkCtrl::GetToolTipText.md)|Esegue l'override di [CMFCRibbonButton::GetToolTipText](../Topic/CMFCRibbonButton::GetToolTipText.md).|  
|[CMFCRibbonLinkCtrl::IsDrawTooltipImage](../Topic/CMFCRibbonLinkCtrl::IsDrawTooltipImage.md)|Esegue l'override di `CMFCRibbonButton::IsDrawTooltipImage`.|  
|[CMFCRibbonLinkCtrl::OnDraw](../Topic/CMFCRibbonLinkCtrl::OnDraw.md)|Esegue l'override di [CMFCRibbonButton::OnDraw](../Topic/CMFCRibbonButton::OnDraw.md).|  
|[CMFCRibbonLinkCtrl::OnDrawMenuImage](../Topic/CMFCRibbonLinkCtrl::OnDrawMenuImage.md)|Esegue l'override di [CMFCRibbonBaseElement::OnDrawMenuImage](../Topic/CMFCRibbonBaseElement::OnDrawMenuImage.md).|  
|[CMFCRibbonLinkCtrl::OnMouseMove](../Topic/CMFCRibbonLinkCtrl::OnMouseMove.md)|Esegue l'override di `CMFCRibbonButton::OnMouseMove`.|  
|[CMFCRibbonLinkCtrl::OnSetIcon](../Topic/CMFCRibbonLinkCtrl::OnSetIcon.md)||  
|[CMFCRibbonLinkCtrl::OpenLink](../Topic/CMFCRibbonLinkCtrl::OpenLink.md)|Apre la pagina Web specificata nel collegamento ipertestuale.|  
|[CMFCRibbonLinkCtrl::SetLink](../Topic/CMFCRibbonLinkCtrl::SetLink.md)|Imposta il valore del collegamento ipertestuale.|  
  
## Note  
 Dopo aver creato il collegamento ipertestuale, aggiungerlo a un pannello chiamando [CMFCRibbonPanel::Add](../Topic/CMFCRibbonPanel::Add.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md) [CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md)  
  
## Requisiti  
 **Intestazione:** afxRibbonLinkCtrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)