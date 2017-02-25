---
title: "CMFCRibbonStatusBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonStatusBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonStatusBar class"
ms.assetid: 921eb57f-3b40-49fa-a38c-3f2fb6dc2893
caps.latest.revision: 37
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 39
---
# CMFCRibbonStatusBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCRibbonStatusBar` implementa un controllo barra di stato che può visualizzare gli elementi della barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonStatusBar : public CMFCRibbonBar  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonStatusBar::AddDynamicElement](../Topic/CMFCRibbonStatusBar::AddDynamicElement.md)|Aggiunge un elemento dinamico alla barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::AddElement](../Topic/CMFCRibbonStatusBar::AddElement.md)|Aggiungere un nuovo elemento barra multifunzione alla barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::AddExtendedElement](../Topic/CMFCRibbonStatusBar::AddExtendedElement.md)|Aggiunge un elemento barra multifunzione a l estesa barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::AddSeparator](../Topic/CMFCRibbonStatusBar::AddSeparator.md)|Aggiunge un separatore alla barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::Create](../Topic/CMFCRibbonStatusBar::Create.md)|Crea una barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::CreateEx](../Topic/CMFCRibbonStatusBar::CreateEx.md)|Crea una barra di stato della barra multifunzione con uno stile esteso.|  
|[CMFCRibbonStatusBar::FindByID](../Topic/CMFCRibbonStatusBar::FindByID.md)||  
|[CMFCRibbonStatusBar::FindElement](../Topic/CMFCRibbonStatusBar::FindElement.md)|Restituisce un puntatore all'elemento che dispone dell'ID di comando|  
|[CMFCRibbonStatusBar::GetCount](../Topic/CMFCRibbonStatusBar::GetCount.md)|Restituisce il numero di elementi presenti nella superficie principale della barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::GetElement](../Topic/CMFCRibbonStatusBar::GetElement.md)|Restituisce un puntatore all'elemento che viene inserito all'indice specificato.|  
|[CMFCRibbonStatusBar::GetExCount](../Topic/CMFCRibbonStatusBar::GetExCount.md)|Restituisce il numero di elementi presenti nella superficie estesa barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::GetExElement](../Topic/CMFCRibbonStatusBar::GetExElement.md)|Restituisce un puntatore all'elemento che viene inserito all'indice specificato nella superficie estesa barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::GetExtendedArea](../Topic/CMFCRibbonStatusBar::GetExtendedArea.md)||  
|[CMFCRibbonStatusBar::GetSpace](../Topic/CMFCRibbonStatusBar::GetSpace.md)||  
|[CMFCRibbonStatusBar::IsBottomFrame](../Topic/CMFCRibbonStatusBar::IsBottomFrame.md)||  
|[CMFCRibbonStatusBar::IsExtendedElement](../Topic/CMFCRibbonStatusBar::IsExtendedElement.md)||  
|[CMFCRibbonStatusBar::IsInformationMode](../Topic/CMFCRibbonStatusBar::IsInformationMode.md)|Determina se la modalità di informazioni è abilitata per la barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::RecalcLayout](../Topic/CMFCRibbonStatusBar::RecalcLayout.md)|\(Override [CMFCRibbonBar::RecalcLayout](../Topic/CMFCRibbonBar::RecalcLayout.md)\).|  
|[CMFCRibbonStatusBar::RemoveAll](../Topic/CMFCRibbonStatusBar::RemoveAll.md)|Rimuove tutti gli elementi dalla barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::RemoveElement](../Topic/CMFCRibbonStatusBar::RemoveElement.md)|Elimina l'elemento con un ID di comando specificato dalla barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::SetInformation](../Topic/CMFCRibbonStatusBar::SetInformation.md)|Abilita o disabilita la modalità di informazioni per la barra di stato della barra multifunzione.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonStatusBar::OnDrawInformation](../Topic/CMFCRibbonStatusBar::OnDrawInformation.md)|Visualizza la stringa di informazioni della barra di stato della barra multifunzione alla modalità di informazioni è abilitata.|  
  
## Note  
 Gli utenti possono modificare la visibilità degli elementi della barra multifunzione in una barra di stato della barra multifunzione utilizzando il menu di scelta rapida incorporato per la barra di stato della barra multifunzione.  È possibile aggiungere dinamicamente o eliminare elementi.  
  
 Una barra di stato della barra multifunzione presenta due aree: un'area principale e un'area estesa.  L'area estesa viene visualizzata a destra della barra di stato della barra multifunzione e visualizzato in un colore diverso che l'area principale è.  
  
 In genere, la superficie principale della barra di stato viene visualizzato notifiche dello stato e i controlli estesi visualizzazione delle visualizzazioni di area.  L'area estesa rimane per tutto il tempo possibile visibile quando l'utente ridimensiona la barra di stato della barra multifunzione.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCRibbonStatusBar`.  L'esempio mostra come aggiungere un nuovo elemento barra multifunzione alla barra di stato della barra multifunzione, aggiungere un elemento barra multifunzione a l estesa barra di stato della barra multifunzione, aggiungere un separatore e abilitare la modalità normale per la barra di stato della barra multifunzione.  
  
 [!code-cpp[NVC_MFC_RibbonApp#15](../../mfc/reference/codesnippet/CPP/cmfcribbonstatusbar-class_1.cpp)]  
[!code-cpp[NVC_MFC_RibbonApp#16](../../mfc/reference/codesnippet/CPP/cmfcribbonstatusbar-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)  
  
 [CMFCRibbonStatusBar](../../mfc/reference/cmfcribbonstatusbar-class.md)  
  
## Requisiti  
 **intestazione:** afxribbonstatusbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)   
 [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)