---
title: "CMFCToolBarMenuButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarMenuButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarMenuButton class"
ms.assetid: cfa50176-7e4b-4527-9904-86a1b48fc1bc
caps.latest.revision: 31
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 33
---
# CMFCToolBarMenuButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un pulsante della barra degli strumenti che contiene un menu di scelta rapida.  
  
## Sintassi  
  
```  
class CMFCToolBarMenuButton : public CMFCToolBarButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::CMFCToolBarMenuButton](../Topic/CMFCToolBarMenuButton::CMFCToolBarMenuButton.md)|Costruisce un oggetto `CMFCToolBarMenuButton`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::CompareWith](../Topic/CMFCToolBarMenuButton::CompareWith.md)|Confronta questa istanza di con l'oggetto specificato `CMFCToolBarButton`.  \(Override [CMFCToolBarButton::CompareWith](../Topic/CMFCToolBarButton::CompareWith.md)\).|  
|[CMFCToolBarMenuButton::CopyFrom](../Topic/CMFCToolBarMenuButton::CopyFrom.md)|Copiare le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente.  \(Override [CMFCToolBarButton::CopyFrom](../Topic/CMFCToolBarButton::CopyFrom.md)\).|  
|[CMFCToolBarMenuButton::CreateFromMenu](../Topic/CMFCToolBarMenuButton::CreateFromMenu.md)|Inizializza il menu della barra degli strumenti di menu handle di Windows.|  
|[CMFCToolBarMenuButton::CreateMenu](../Topic/CMFCToolBarMenuButton::CreateMenu.md)|Crea un menu di Windows costituito dai comandi del menu della barra degli strumenti.  Restituisce un handle al menu di Windows.|  
|[CMFCToolBarMenuButton::CreatePopupMenu](../Topic/CMFCToolBarMenuButton::CreatePopupMenu.md)|Crea un oggetto di menu di scelta rapida \([CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)\) per visualizzare il menu della barra degli strumenti.|  
|[CMFCToolBarMenuButton::EnableQuickCustomize](../Topic/CMFCToolBarMenuButton::EnableQuickCustomize.md)||  
|[CMFCToolBarMenuButton::GetCommands](../Topic/CMFCToolBarMenuButton::GetCommands.md)|Fornisce l'accesso in sola lettura all'elenco dei comandi del menu della barra degli strumenti.|  
|[CMFCToolBarMenuButton::GetImageRect](../Topic/CMFCToolBarMenuButton::GetImageRect.md)|Recupera il rettangolo di delimitazione dell'immagine di un pulsante.|  
|[CMFCToolBarMenuButton::GetPaletteRows](../Topic/CMFCToolBarMenuButton::GetPaletteRows.md)|Restituisce il numero di righe nel menu di scelta rapida quando il menu è in modalità della tavolozza.|  
|[CMFCToolBarMenuButton::GetPopupMenu](../Topic/CMFCToolBarMenuButton::GetPopupMenu.md)|Restituisce un puntatore a un oggetto di menu di scelta rapida associato al pulsante.|  
|[CMFCToolBarMenuButton::HasButton](../Topic/CMFCToolBarMenuButton::HasButton.md)||  
|[CMFCToolBarMenuButton::HaveHotBorder](../Topic/CMFCToolBarMenuButton::HaveHotBorder.md)|Determina se un bordo del pulsante viene visualizzato quando un utente seleziona il pulsante.  \(Override [CMFCToolBarButton::HaveHotBorder](../Topic/CMFCToolBarButton::HaveHotBorder.md)\).|  
|[CMFCToolBarMenuButton::IsBorder](../Topic/CMFCToolBarMenuButton::IsBorder.md)||  
|[CMFCToolBarMenuButton::IsClickedOnMenu](../Topic/CMFCToolBarMenuButton::IsClickedOnMenu.md)||  
|[CMFCToolBarMenuButton::IsDroppedDown](../Topic/CMFCToolBarMenuButton::IsDroppedDown.md)|Determina se il menu di scelta rapida visualizzato.|  
|[CMFCToolBarMenuButton::IsEmptyMenuAllowed](../Topic/CMFCToolBarMenuButton::IsEmptyMenuAllowed.md)|Chiamato dal framework per determinare se un utente può aprire un sottomenu alla voce di menu.|  
|[CMFCToolBarMenuButton::IsExclusive](../Topic/CMFCToolBarMenuButton::IsExclusive.md)|Determina se il pulsante è in modalità esclusiva, ovvero, se il menu di scelta rapida rimane aperto anche quando l'utente sposta il puntatore su un'altra barra degli strumenti oppure pulsante.|  
|[CMFCToolBarMenuButton::IsMenuPaletteMode](../Topic/CMFCToolBarMenuButton::IsMenuPaletteMode.md)|Determina se il menu di scelta rapida è in modalità della tavolozza.|  
|[CMFCToolBarMenuButton::IsQuickMode](../Topic/CMFCToolBarMenuButton::IsQuickMode.md)||  
|[CMFCToolBarMenuButton::IsTearOffMenu](../Topic/CMFCToolBarMenuButton::IsTearOffMenu.md)|Determina se il menu di scelta rapida dispone di una barra di sradicamento.|  
|[CMFCToolBarMenuButton::OnAfterCreatePopupMenu](../Topic/CMFCToolBarMenuButton::OnAfterCreatePopupMenu.md)||  
|[CMFCToolBarMenuButton::OnBeforeDrag](../Topic/CMFCToolBarMenuButton::OnBeforeDrag.md)|Specifica se il pulsante è possibile trascinare.  \(Override [CMFCToolBarButton::OnBeforeDrag](../Topic/CMFCToolBarButton::OnBeforeDrag.md)\).|  
|[CMFCToolBarMenuButton::OnCalculateSize](../Topic/CMFCToolBarMenuButton::OnCalculateSize.md)|Chiamato dal framework per calcolare la dimensione del pulsante per lo stato specificato di ancoraggio e di contesto di dispositivo.  \(Override [CMFCToolBarButton::OnCalculateSize](../Topic/CMFCToolBarButton::OnCalculateSize.md)\).|  
|[CMFCToolBarMenuButton::OnCancelMode](../Topic/CMFCToolBarMenuButton::OnCancelMode.md)|Chiamato dal framework per gestire il messaggio [WM\_CANCELMODE](http://msdn.microsoft.com/library/windows/desktop/ms632615).  \(Override [CMFCToolBarButton::OnCancelMode](../Topic/CMFCToolBarButton::OnCancelMode.md)\).|  
|[CMFCToolBarMenuButton::OnChangeParentWnd](../Topic/CMFCToolBarMenuButton::OnChangeParentWnd.md)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.  \(Override [CMFCToolBarButton::OnChangeParentWnd](../Topic/CMFCToolBarButton::OnChangeParentWnd.md)\).|  
|[CMFCToolBarMenuButton::OnClick](../Topic/CMFCToolBarMenuButton::OnClick.md)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.  \(Override [CMFCToolBarButton::OnClick](../Topic/CMFCToolBarButton::OnClick.md)\).|  
|[CMFCToolBarMenuButton::OnClickMenuItem](../Topic/CMFCToolBarMenuButton::OnClickMenuItem.md)|Chiamato dal framework quando l'utente seleziona un elemento nel menu di scelta rapida.|  
|[CMFCToolBarMenuButton::OnContextHelp](../Topic/CMFCToolBarMenuButton::OnContextHelp.md)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio `WM_HELPHITTEST`.  \(Override [CMFCToolBarButton::OnContextHelp](../Topic/CMFCToolBarButton::OnContextHelp.md)\).|  
|[CMFCToolBarMenuButton::OnDraw](../Topic/CMFCToolBarMenuButton::OnDraw.md)|Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificate.  \(Override [CMFCToolBarButton::OnDraw](../Topic/CMFCToolBarButton::OnDraw.md)\).|  
|[CMFCToolBarMenuButton::OnDrawOnCustomizeList](../Topic/CMFCToolBarMenuButton::OnDrawOnCustomizeList.md)|Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** la finestra di dialogo **Personalizza**.  \(Override [CMFCToolBarButton::OnDrawOnCustomizeList](../Topic/CMFCToolBarButton::OnDrawOnCustomizeList.md)\).|  
|[CMFCToolBarMenuButton::OpenPopupMenu](../Topic/CMFCToolBarMenuButton::OpenPopupMenu.md)|Chiamato dal framework quando l'utente apre il menu di scelta rapida.|  
|[CMFCToolBarMenuButton::ResetImageToDefault](../Topic/CMFCToolBarMenuButton::ResetImageToDefault.md)|Imposta il valore predefinito l'immagine associata al pulsante.  \(Override [CMFCToolBarButton::ResetImageToDefault](../Topic/CMFCToolBarButton::ResetImageToDefault.md)\).|  
|[CMFCToolBarMenuButton::SaveBarState](../Topic/CMFCToolBarMenuButton::SaveBarState.md)|Salvare lo stato del pulsante della barra degli strumenti.  \(Override [CMFCToolBarButton::SaveBarState](../Topic/CMFCToolBarButton::SaveBarState.md)\).|  
|[CMFCToolBarMenuButton::Serialize](../Topic/CMFCToolBarMenuButton::Serialize.md)|Legge l'oggetto da un archivio o scritto in un archivio.  \(Override [CMFCToolBarButton::Serialize](../Topic/CMFCToolBarButton::Serialize.md)\).|  
|[CMFCToolBarMenuButton::SetACCData](../Topic/CMFCToolBarMenuButton::SetACCData.md)|Popola l'oggetto fornito `CAccessibilityData` con i dati di accessibilità il pulsante della barra degli strumenti.  \(Override [CMFCToolBarButton::SetACCData](../Topic/CMFCToolBarButton::SetACCData.md)\).|  
|[CMFCToolBarMenuButton::SetMenuOnly](../Topic/CMFCToolBarMenuButton::SetMenuOnly.md)|Specifica se il pulsante è possibile aggiungere una barra degli strumenti.|  
|[CMFCToolBarMenuButton::SetMenuPaletteMode](../Topic/CMFCToolBarMenuButton::SetMenuPaletteMode.md)|Specifica se il menu di scelta rapida è in modalità della tavolozza.|  
|[CMFCToolBarMenuButton::SetMessageWnd](../Topic/CMFCToolBarMenuButton::SetMessageWnd.md)||  
|[CMFCToolBarMenuButton::SetRadio](../Topic/CMFCToolBarMenuButton::SetRadio.md)|Forza il pulsante del menu della barra degli strumenti per visualizzare un'icona che indica che è selezionata.|  
|[CMFCToolBarMenuButton::SetTearOff](../Topic/CMFCToolBarMenuButton::SetTearOff.md)|Specifica una barra ID di sradicamento dal menu di scelta rapida.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::DrawDocumentIcon](../Topic/CMFCToolBarMenuButton::DrawDocumentIcon.md)|Disegna un'icona sul pulsante del menu.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::m\_bAlwaysCallOwnerDraw](../Topic/CMFCToolBarMenuButton::m_bAlwaysCallOwnerDraw.md)|Se `TRUE`, il framework chiama sempre [CFrameWndEx::OnDrawMenuImage](../Topic/CFrameWndEx::OnDrawMenuImage.md) quando un pulsante viene tracciato.|  
  
## Note  
 `CMFCToolBarMenuButton` può apparire come menu, una voce di menu che contiene un sottomenu, un pulsante che esegue un comando o visualizzare un menu, o un pulsante che visualizza un solo menu.  Determina il comportamento e l'aspetto del pulsante del menu specificando parametri come immagine, testo, l'handle del menu e l'id di comando associato al pulsante nel costruttore `CMFCToolbarMenuButton::CMFCToolbarMenuButton`.  
  
 Una classe personalizzata derivata dalla classe `CMFCToolbarMenuButton` deve utilizzare la macro [DECLARE\_SERIAL](../Topic/DECLARE_SERIAL.md).  La macro [DECLARE\_DYNCREATE](../Topic/DECLARE_DYNCREATE.md) generato un errore quando l'applicazione viene chiusa.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare un oggetto `CMFCToolBarMenuButton`.  Il codice illustra come specificare che il menu a discesa è in modalità della tavolozza e specificare l'id della barra di sradicamento creata quando l'utente trascina il pulsante del menu esterno di una barra dei menu.  Questo frammento di codice fa parte [Esempio di cuscinetto di Word](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#10](../../mfc/reference/codesnippet/CPP/cmfctoolbarmenubutton-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)  
  
## Requisiti  
 **intestazione:** afxtoolbarmenubutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)