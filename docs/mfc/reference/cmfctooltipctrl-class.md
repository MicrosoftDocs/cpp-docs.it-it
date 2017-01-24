---
title: "CMFCToolTipCtrl Class | Microsoft Docs"
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
  - "CMFCToolTipCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolTipCtrl class"
ms.assetid: 9fbfcfb1-a8ab-417f-ae29-9a9ca85ee58f
caps.latest.revision: 33
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCToolTipCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un'implementazione completa di descrizione comando basata su [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md).  Una descrizione comando basata sulla classe `CMFCToolTipCtrl` può visualizzare un'icona, un'etichetta e una descrizione.  È possibile personalizzare l'aspetto visivo usando un riempimento sfumato, testo e colori del bordo personalizzati, testo in grassetto, angoli arrotondati o uno stile di tipo fumetto.  
  
## Sintassi  
  
```  
class CMFCToolTipCtrl : public CToolTipCtrl  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCToolTipCtrl::CMFCToolTipCtrl`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolTipCtrl::GetIconSize](../Topic/CMFCToolTipCtrl::GetIconSize.md)|Restituisce le dimensioni di un'icona in una descrizione comando.|  
|[CMFCToolTipCtrl::GetParams](../Topic/CMFCToolTipCtrl::GetParams.md)|Restituisce le impostazioni di visualizzazione di una descrizione comando.|  
|[CMFCToolTipCtrl::OnDrawBorder](../Topic/CMFCToolTipCtrl::OnDrawBorder.md)|Estrae il bordo di una descrizione comando.|  
|[CMFCToolTipCtrl::OnDrawDescription](../Topic/CMFCToolTipCtrl::OnDrawDescription.md)||  
|[CMFCToolTipCtrl::OnDrawIcon](../Topic/CMFCToolTipCtrl::OnDrawIcon.md)|Visualizza un'icona in una descrizione comando.|  
|[CMFCToolTipCtrl::OnDrawLabel](../Topic/CMFCToolTipCtrl::OnDrawLabel.md)|Crea l'etichetta della descrizione comando o calcola la dimensione dell'etichetta.|  
|[CMFCToolTipCtrl::OnDrawSeparator](../Topic/CMFCToolTipCtrl::OnDrawSeparator.md)|Crea il separatore tra l'etichetta e la descrizione in una descrizione comando.|  
|[CMFCToolTipCtrl::OnFillBackground](../Topic/CMFCToolTipCtrl::OnFillBackground.md)|Riempie lo sfondo di descrizione comando.|  
|[CMFCToolTipCtrl::SetDescription](../Topic/CMFCToolTipCtrl::SetDescription.md)|Imposta la descrizione che verrà visualizzata dalla descrizione comando.|  
|[CMFCToolTipCtrl::SetFixedWidth](../Topic/CMFCToolTipCtrl::SetFixedWidth.md)||  
|[CMFCToolTipCtrl::SetHotRibbonButton](../Topic/CMFCToolTipCtrl::SetHotRibbonButton.md)||  
|[CMFCToolTipCtrl::SetLocation](../Topic/CMFCToolTipCtrl::SetLocation.md)||  
|[CMFCToolTipCtrl::SetParams](../Topic/CMFCToolTipCtrl::SetParams.md)|Specifica l'aspetto di una descrizione comando con un oggetto `CMFCToolTipInfo`.|  
  
## Note  
 Usare insieme gli oggetti `CMFCToolTipCtrl`, `CMFCToolTipInfo` e [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md) per implementare descrizioni comando personalizzate nell'applicazione.  
  
 Ad esempio, per usare le descrizioni comando di tipo fumetto, seguire questa procedura:  
  
 1.  Usare il metodo [CWinAppEx Class](../../mfc/reference/cwinappex-class.md) per inizializzare l'amministratore di descrizione comando nell'applicazione.  
  
 2.  Creare una struttura `CMFCToolTipInfo` per specificare lo stile di visualizzazione desiderata:  
  
```  
CMFCToolTipInfo params;  
 params.m_bBoldLabel = FALSE;  
 params.m_bDrawDescription = FALSE;  
 params.m_bDrawIcon = FALSE;  
 params.m_bRoundedCorners = TRUE;  
 params.m_bDrawSeparator = FALSE;  
 if (m_bCustomColors)  
 {  
  params.m_clrFill = RGB (255, 255, 255);  
  params.m_clrFillGradient = RGB (228, 228, 240);  
  params.m_clrText = RGB (61, 83, 80);  
  params.m_clrBorder = RGB (144, 149, 168);  
 }  
```  
  
 3.  Usare il metodo [CTooltipManager::SetTooltipParams](../Topic/CTooltipManager::SetTooltipParams.md) per impostare lo stile di visualizzazione delle descrizioni comando nell'applicazione usando gli stili definiti nell'oggetto `CMFCToolTipInfo`:  
  
```  
theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,  
    RUNTIME_CLASS (CMFCToolTipCtrl), &params);  
```  
  
 È anche possibile derivare una nuova classe da `CMFCToolTipCtrl` per controllare il comportamento e il rendering di descrizione comando.  Per specificare una nuova classe del controllo Tooltip, usare il metodo `CTooltipManager::SetTooltipParams`:  
  
```  
myApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,  
    RUNTIME_CLASS (CMyToolTipCtrl))  
```  
  
 Per ripristinare la classe predefinita del controllo Tooltip e reimpostare il relativo aspetto allo stato predefinito, specificare NULL nei parametri di informazioni di descrizione comando e nella classe di runtime `SetTooltipParams`:  
  
```  
theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,  
    NULL, NULL);  
```  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCToolTipCtrl`, come impostare la descrizione visualizzata dalla descrizione comando e come impostare la larghezza del controllo Tooltip.  
  
 [!code-cpp[NVC_MFC_RibbonApp#41](../../mfc/reference/codesnippet/CPP/cmfctooltipctrl-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md)  
  
 [CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)  
  
## Requisiti  
 **Intestazione:** afxtooltipctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md)   
 [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md)   
 [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)