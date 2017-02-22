---
title: "CMFCAutoHideButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCAutoHideButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCAutoHideButton class"
ms.assetid: c80e6b8b-25ca-4d12-9d27-457731028ab0
caps.latest.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 35
---
# CMFCAutoHideButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Pulsante che visualizza o nasconde una [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) configurata per nascondere elementi.  
  
## Sintassi  
  
```  
class CMFCAutoHideButton : public CObject  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAutoHideButton::BringToTop](../Topic/CMFCAutoHideButton::BringToTop.md)||  
|[CMFCAutoHideButton::Create](../Topic/CMFCAutoHideButton::Create.md)|Crea e inizializza il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::GetAlignment](../Topic/CMFCAutoHideButton::GetAlignment.md)|Recupera l'allineamento del pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::GetAutoHideWindow](../Topic/CMFCAutoHideButton::GetAutoHideWindow.md)|Restituisce l'oggetto [CDockablePane](../../mfc/reference/cdockablepane-class.md) associato al pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::GetParentToolBar](../Topic/CMFCAutoHideButton::GetParentToolBar.md)||  
|[CMFCAutoHideButton::GetRect](../Topic/CMFCAutoHideButton::GetRect.md)||  
|[CMFCAutoHideButton::GetSize](../Topic/CMFCAutoHideButton::GetSize.md)|Determina le dimensioni del pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::GetTextSize](../Topic/CMFCAutoHideButton::GetTextSize.md)|Restituisce le dimensioni dell'etichetta di testo per il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::HighlightButton](../Topic/CMFCAutoHideButton::HighlightButton.md)|Evidenzia il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::IsActive](../Topic/CMFCAutoHideButton::IsActive.md)|Indica se il pulsante Nascondi automaticamente è attivo.|  
|[CMFCAutoHideButton::IsHighlighted](../Topic/CMFCAutoHideButton::IsHighlighted.md)|Restituisce lo stato di evidenziazione del pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::IsHorizontal](../Topic/CMFCAutoHideButton::IsHorizontal.md)|Determina se il pulsante Nascondi automaticamente è orizzontale o verticale.|  
|[CMFCAutoHideButton::IsTop](../Topic/CMFCAutoHideButton::IsTop.md)||  
|[CMFCAutoHideButton::IsVisible](../Topic/CMFCAutoHideButton::IsVisible.md)|Indica se il pulsante è visibile.|  
|[CMFCAutoHideButton::Move](../Topic/CMFCAutoHideButton::Move.md)||  
|[CMFCAutoHideButton::OnDraw](../Topic/CMFCAutoHideButton::OnDraw.md)|Il framework chiama questo metodo quando disegna il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::OnDrawBorder](../Topic/CMFCAutoHideButton::OnDrawBorder.md)|Il framework chiama questo metodo quando disegna il bordo di un pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::OnFillBackground](../Topic/CMFCAutoHideButton::OnFillBackground.md)|Il framework chiama questo metodo quando riempie lo sfondo di un pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::ReplacePane](../Topic/CMFCAutoHideButton::ReplacePane.md)||  
|[CMFCAutoHideButton::ShowAttachedWindow](../Topic/CMFCAutoHideButton::ShowAttachedWindow.md)|Mostra o nasconde la [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) associata.|  
|[CMFCAutoHideButton::ShowButton](../Topic/CMFCAutoHideButton::ShowButton.md)|Mostra o nasconde il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::UnSetAutoHideMode](../Topic/CMFCAutoHideButton::UnSetAutoHideMode.md)||  
  
## Note  
 Al momento della creazione, l'oggetto `CMFCAutoHideButton` viene collegato a una [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  L'oggetto `CDockablePane` viene nascosto o visualizzato quando l'utente interagisce con l'oggetto `CMFCAutoHideButton`.  
  
 Per impostazione predefinita, il framework crea automaticamente un oggetto `CMFCAutoHideButton` quando l'utente attiva il pulsante Nascondi automaticamente.  Il framework può creare un elemento di una classe di interfaccia utente personalizzata anziché la classe `CMFCAutoHideButton`.  Per specificare la classe dell'interfaccia utente personalizzata che deve essere usata dal framework, impostare la variabile membro statica `CMFCAutoHideBar::m_pAutoHideButtonRTS` uguale alla classe dell'interfaccia utente personalizzata.  Per impostazione predefinita, questa variabile è impostata su `CMFCAutoHideButton`.  
  
## Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCAutoHideButton` e usare i vari metodi nella classe `CMFCAutoHideButton`.  L'esempio illustra come inizializzare un oggetto `CMFCAutoHideButton` usando il relativo metodo `Create`, visualizzare la classe `CDockablePane` associata e visualizzare il pulsante Nascondi automaticamente.  
  
 [!code-cpp[NVC_MFC_RibbonApp#32](../../mfc/reference/codesnippet/CPP/cmfcautohidebutton-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md)  
  
## Requisiti  
 **Intestazione:** afxautohidebutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCAutoHideBar Class](../../mfc/reference/cmfcautohidebar-class.md)   
 [CAutoHideDockSite Class](../../mfc/reference/cautohidedocksite-class.md)