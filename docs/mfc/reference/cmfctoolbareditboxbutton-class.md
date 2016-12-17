---
title: "CMFCToolBarEditBoxButton Class | Microsoft Docs"
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
  - "OnDrawOnCustomizeList"
  - "OnDraw"
  - "CMFCToolBarEditBoxButton::OnDrawOnCustomizeList"
  - "CMFCToolBarEditBoxButton.SetACCData"
  - "CMFCToolBarEditBoxButton::OnDraw"
  - "OnCalculateSize"
  - "SetACCData"
  - "CMFCToolBarEditBoxButton"
  - "CMFCToolBarEditBoxButton::SetACCData"
  - "CMFCToolBarEditBoxButton::Serialize"
  - "CMFCToolBarEditBoxButton.OnDraw"
  - "CMFCToolBarEditBoxButton.OnDrawOnCustomizeList"
  - "CMFCToolBarEditBoxButton::OnCalculateSize"
  - "Serialize"
  - "CMFCToolBarEditBoxButton.Serialize"
  - "CMFCToolBarEditBoxButton.OnCalculateSize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarEditBoxButton class"
  - "OnCalculateSize method"
  - "OnDraw method"
  - "OnDrawOnCustomizeList method"
  - "Serialize method"
  - "SetACCData method"
ms.assetid: b21d9b67-6bf7-4ca9-bd62-b237756e0ab3
caps.latest.revision: 28
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCToolBarEditBoxButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un pulsante della barra degli strumenti contenente un controllo di modifica \([CEdit Class](../../mfc/reference/cedit-class.md)\).  
  
## Sintassi  
  
```  
class CMFCToolBarEditBoxButton : public CMFCToolBarButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton](../Topic/CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton.md)|Costruisce un oggetto `CMFCToolBarEditBoxButton`.|  
|`CMFCToolBarEditBoxButton::~CMFCToolBarEditBoxButton`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarEditBoxButton::CanBeStretched](../Topic/CMFCToolBarEditBoxButton::CanBeStretched.md)|Specifica se un utente può contenere il pulsante durante la personalizzazione.  \(Override [CMFCToolBarButton::CanBeStretched](../Topic/CMFCToolBarButton::CanBeStretched.md)\).|  
|[CMFCToolBarEditBoxButton::CopyFrom](../Topic/CMFCToolBarEditBoxButton::CopyFrom.md)|Copiare le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente.  \(Override [CMFCToolBarButton::CopyFrom](../Topic/CMFCToolBarButton::CopyFrom.md)\).|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::CreateEdit](../Topic/CMFCToolBarEditBoxButton::CreateEdit.md)|Crea un nuovo controllo di modifica il pulsante.|  
|`CMFCToolBarEditBoxButton::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCToolBarEditBoxButton::GetByCmd](../Topic/CMFCToolBarEditBoxButton::GetByCmd.md)|Recupera il primo oggetto `CMFCToolBarEditBoxButton` nell'applicazione che dispone dell'ID di comando|  
|[CMFCToolBarEditBoxButton::GetContentsAll](../Topic/CMFCToolBarEditBoxButton::GetContentsAll.md)|Recupera il testo del primo controllo toolbar della casella di modifica che dispone dell'ID di comando|  
|[CMFCToolBarEditBoxButton::GetContextMenuID](../Topic/CMFCToolBarEditBoxButton::GetContextMenuID.md)|Recupera gli ID di risorsa del menu di scelta rapida associato al pulsante.|  
|[CMFCToolBarEditBoxButton::GetEditBorder](../Topic/CMFCToolBarEditBoxButton::GetEditBorder.md)|Recupera il rettangolo di delimitazione della parte di modifica del pulsante della casella di modifica.|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::GetEditBox](../Topic/CMFCToolBarEditBoxButton::GetEditBox.md)|Restituisce un puntatore al controllo di modifica che è incorporato nel pulsante.|  
|[CMFCToolBarEditBoxButton::GetHwnd](../Topic/CMFCToolBarEditBoxButton::GetHwnd.md)|Recupera l'handle della finestra associata al pulsante della barra degli strumenti.  \(Override [CMFCToolBarButton::GetHwnd](../Topic/CMFCToolBarButton::GetHwnd.md)\).|  
|[CMFCToolBarEditBoxButton::GetInvalidateRect](../Topic/CMFCToolBarEditBoxButton::GetInvalidateRect.md)|Recupera l'area dell'area client del pulsante da ridisegnare.  \(Override [CMFCToolBarButton::GetInvalidateRect](../Topic/CMFCToolBarButton::GetInvalidateRect.md)\).|  
|`CMFCToolBarEditBoxButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCToolBarEditBoxButton::HaveHotBorder](../Topic/CMFCToolBarEditBoxButton::HaveHotBorder.md)|Determina se un bordo del pulsante viene visualizzato quando un utente fa clic sul pulsante.  \(Override [CMFCToolBarButton::HaveHotBorder](../Topic/CMFCToolBarButton::HaveHotBorder.md)\).|  
|[CMFCToolBarEditBoxButton::IsFlatMode](../Topic/CMFCToolBarEditBoxButton::IsFlatMode.md)|Determina se i pulsanti della casella di modifica di uno stile piano.|  
|[CMFCToolBarEditBoxButton::NotifyCommand](../Topic/CMFCToolBarEditBoxButton::NotifyCommand.md)|Specifica se il pulsante elabora il messaggio [WM\_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591).  \(Override [CMFCToolBarButton::NotifyCommand](../Topic/CMFCToolBarButton::NotifyCommand.md)\).|  
|[CMFCToolBarEditBoxButton::OnAddToCustomizePage](../Topic/CMFCToolBarEditBoxButton::OnAddToCustomizePage.md)|Chiamato dal framework quando il pulsante viene aggiunto a una finestra di dialogo **Personalizza**.  \(Override [CMFCToolBarButton::OnAddToCustomizePage](../Topic/CMFCToolBarButton::OnAddToCustomizePage.md)\).|  
|`CMFCToolBarEditBoxButton::OnCalculateSize`|Chiamato dal framework per calcolare la dimensione del pulsante per lo stato specificato di ancoraggio e di contesto di dispositivo.  \(Override [CMFCToolBarButton::OnCalculateSize](../Topic/CMFCToolBarButton::OnCalculateSize.md)\).|  
|[CMFCToolBarEditBoxButton::OnChangeParentWnd](../Topic/CMFCToolBarEditBoxButton::OnChangeParentWnd.md)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.  \(Override [CMFCToolBarButton::OnChangeParentWnd](../Topic/CMFCToolBarButton::OnChangeParentWnd.md)\).|  
|[CMFCToolBarEditBoxButton::OnClick](../Topic/CMFCToolBarEditBoxButton::OnClick.md)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.  \(Override [CMFCToolBarButton::OnClick](../Topic/CMFCToolBarButton::OnClick.md)\).|  
|[CMFCToolBarEditBoxButton::OnCtlColor](../Topic/CMFCToolBarEditBoxButton::OnCtlColor.md)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio `WM_CTLCOLOR`.  \(Override [CMFCToolBarButton::OnCtlColor](../Topic/CMFCToolBarButton::OnCtlColor.md)\).|  
|`CMFCToolBarEditBoxButton::OnDraw`|Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificate.  \(Override [CMFCToolBarButton::OnDraw](../Topic/CMFCToolBarButton::OnDraw.md)\).|  
|`CMFCToolBarEditBoxButton::OnDrawOnCustomizeList`|Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** la finestra di dialogo **Personalizza**.  \(Override [CMFCToolBarButton::OnDrawOnCustomizeList](../Topic/CMFCToolBarButton::OnDrawOnCustomizeList.md)\).|  
|[CMFCToolBarEditBoxButton::OnGlobalFontsChanged](../Topic/CMFCToolBarEditBoxButton::OnGlobalFontsChanged.md)|Chiamato dal framework quando il tipo globale è stato modificato.  \(Override [CMFCToolBarButton::OnGlobalFontsChanged](../Topic/CMFCToolBarButton::OnGlobalFontsChanged.md)\).|  
|[CMFCToolBarEditBoxButton::OnMove](../Topic/CMFCToolBarEditBoxButton::OnMove.md)|Chiamato dal framework quando la barra degli strumenti padre viene spostato.  \(Override [CMFCToolBarButton::OnMove](../Topic/CMFCToolBarButton::OnMove.md)\).|  
|[CMFCToolBarEditBoxButton::OnShow](../Topic/CMFCToolBarEditBoxButton::OnShow.md)|Chiamato dal framework quando il pulsante diventa visibile o invisibile.  \(Override [CMFCToolBarButton::OnShow](../Topic/CMFCToolBarButton::OnShow.md)\).|  
|[CMFCToolBarEditBoxButton::OnSize](../Topic/CMFCToolBarEditBoxButton::OnSize.md)|Chiamato dal framework quando la barra degli strumenti padre modifica le relative cause di dimensione o di posizione e di questa modifica il pulsante alle dimensioni di modifica.  \(Override [CMFCToolBarButton::OnSize](../Topic/CMFCToolBarButton::OnSize.md)\).|  
|[CMFCToolBarEditBoxButton::OnUpdateToolTip](../Topic/CMFCToolBarEditBoxButton::OnUpdateToolTip.md)|Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo di descrizione comando.  \(Override [CMFCToolBarButton::OnUpdateToolTip](../Topic/CMFCToolBarButton::OnUpdateToolTip.md)\).|  
|`CMFCToolBarEditBoxButton::Serialize`|Legge l'oggetto da un archivio o scritto in un archivio.  \(Override [CMFCToolBarButton::Serialize](../Topic/CMFCToolBarButton::Serialize.md)\).|  
|`CMFCToolBarEditBoxButton::SetACCData`|Popola l'oggetto fornito `CAccessibilityData` con i dati di accessibilità il pulsante della barra degli strumenti.  \(Override [CMFCToolBarButton::SetACCData](../Topic/CMFCToolBarButton::SetACCData.md)\).|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContents](../Topic/CMFCToolBarEditBoxButton::SetContents.md)|Imposta il testo del controllo di modifica del pulsante.|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContentsAll](../Topic/CMFCToolBarEditBoxButton::SetContentsAll.md)|Cerca il pulsante del controllo di modifica con un ID di comando specificata e imposta il testo nel controllo di modifica di tale pulsante.|  
|[CMFCToolBarEditBoxButton::SetContextMenuID](../Topic/CMFCToolBarEditBoxButton::SetContextMenuID.md)|Specifica l'id della risorsa del menu di scelta rapida associato al pulsante.|  
|[CMFCToolBarEditBoxButton::SetFlatMode](../Topic/CMFCToolBarEditBoxButton::SetFlatMode.md)|Consente di specificare l'aspetto dello stile dei pulsanti della casella di modifica dell'applicazione.|  
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetStyle](../Topic/CMFCToolBarEditBoxButton::SetStyle.md)|Specifica lo stile del pulsante.  \(Override [CMFCToolBarButton::SetStyle](../Topic/CMFCToolBarButton::SetStyle.md)\).|  
  
## Note  
 Per aggiungere un pulsante della casella di modifica a una barra degli strumenti, attenersi alla seguente procedura:  
  
 1.  Riservare un ID di risorsa fittizio al pulsante nella risorsa padre della barra degli strumenti.  
  
 2.  Costruire un oggetto `CMFCToolBarEditBoxButton`.  
  
 3.  Nel gestore di messaggi che elabora il messaggio `AFX_WM_RESETTOOLBAR`, sostituire il pulsante fittizio con il nuovo pulsante della casella combinata utilizzando [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md).  
  
 Per ulteriori informazioni, vedere [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCToolBarEditBoxButton`.  L'esempio mostra come specificare che un utente può contenere il pulsante durante la personalizzazione, specifica che un bordo del pulsante viene visualizzato quando un utente fa clic sul pulsante, imposta il testo del controllo casella di testo, consente di specificare l'aspetto dello stile dei pulsanti della casella di modifica nell'applicazione e specificare lo stile di un controllo casella di modifica della barra degli strumenti.  
  
 [!code-cpp[NVC_MFC_RibbonApp#40](../../mfc/reference/codesnippet/CPP/cmfctoolbareditboxbutton-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md)  
  
## Requisiti  
 **intestazione:** afxtoolbareditboxbutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)