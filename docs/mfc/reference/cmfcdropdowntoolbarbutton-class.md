---
title: "CMFCDropDownToolbarButton Class | Microsoft Docs"
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
  - "CMFCDropDownToolbarButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDropDownToolbarButton class"
  - "OnCancelMode method"
ms.assetid: bc9d69e6-bd3e-4c15-9368-e80a504a0ba7
caps.latest.revision: 31
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCDropDownToolbarButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un tipo di pulsante della barra degli strumenti che si comporta come un pulsante standard quando viene selezionato.  Tuttavia, visualizzata una barra degli strumenti dell'elenco a discesa \([CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md) se l'utente comprime e utilizza il pulsante della barra degli strumenti.  
  
## Sintassi  
  
```  
class CMFCDropDownToolbarButton : public CMFCToolBarButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](../Topic/CMFCDropDownToolbarButton::CMFCDropDownToolbarButton.md)|Costruisce un oggetto `CMFCDropDownToolbarButton`.|  
|`CMFCDropDownToolbarButton::~CMFCDropDownToolbarButton`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::CopyFrom](../Topic/CMFCDropDownToolbarButton::CopyFrom.md)|Copiare le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente.  \(Override [CMFCToolBarButton::CopyFrom](../Topic/CMFCToolBarButton::CopyFrom.md)\).|  
|`CMFCDropDownToolbarButton::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCDropDownToolbarButton::DropDownToolbar](../Topic/CMFCDropDownToolbarButton::DropDownToolbar.md)|Apre una barra degli strumenti a discesa.|  
|[CMFCDropDownToolbarButton::ExportToMenuButton](../Topic/CMFCDropDownToolbarButton::ExportToMenuButton.md)|Le copie il testo del pulsante della barra degli strumenti a un menu.  \(Override [CMFCToolBarButton::ExportToMenuButton](../Topic/CMFCToolBarButton::ExportToMenuButton.md)\).|  
|[CMFCDropDownToolbarButton::GetDropDownToolBar](../Topic/CMFCDropDownToolbarButton::GetDropDownToolBar.md)|Recupera la barra degli strumenti a discesa associata al pulsante.|  
|`CMFCDropDownToolbarButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCDropDownToolbarButton::IsDropDown](../Topic/CMFCDropDownToolbarButton::IsDropDown.md)|Determina se la barra degli strumenti a discesa è attualmente aperta.|  
|[CMFCDropDownToolbarButton::IsExtraSize](../Topic/CMFCDropDownToolbarButton::IsExtraSize.md)|Determina se il pulsante può essere visualizzata con un bordo esteso.  \(Override [CMFCToolBarButton::IsExtraSize](../Topic/CMFCToolBarButton::IsExtraSize.md)\).|  
|[CMFCDropDownToolbarButton::OnCalculateSize](../Topic/CMFCDropDownToolbarButton::OnCalculateSize.md)|Chiamato dal framework per calcolare la dimensione del pulsante per lo stato specificato di ancoraggio e di contesto di dispositivo.  \(Override [CMFCToolBarButton::OnCalculateSize](../Topic/CMFCToolBarButton::OnCalculateSize.md)\).|  
|`CMFCDropDownToolbarButton::OnCancelMode`|Chiamato dal framework per gestire il messaggio [WM\_CANCELMODE](http://msdn.microsoft.com/library/windows/desktop/ms632615).  \(Override `CMCToolBarButton::OnCancelMode`\).|  
|[CMFCDropDownToolbarButton::OnChangeParentWnd](../Topic/CMFCDropDownToolbarButton::OnChangeParentWnd.md)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.  \(Override [CMFCToolBarButton::OnChangeParentWnd](../Topic/CMFCToolBarButton::OnChangeParentWnd.md)\).|  
|[CMFCDropDownToolbarButton::OnClick](../Topic/CMFCDropDownToolbarButton::OnClick.md)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.  \(Override [CMFCToolBarButton::OnClick](../Topic/CMFCToolBarButton::OnClick.md)\).|  
|[CMFCDropDownToolbarButton::OnClickUp](../Topic/CMFCDropDownToolbarButton::OnClickUp.md)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse.  \(Override [CMFCToolBarButton::OnClickUp](../Topic/CMFCToolBarButton::OnClickUp.md)\).|  
|[CMFCDropDownToolbarButton::OnContextHelp](../Topic/CMFCDropDownToolbarButton::OnContextHelp.md)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio `WM_HELPHITTEST`.  \(Override [CMFCToolBarButton::OnContextHelp](../Topic/CMFCToolBarButton::OnContextHelp.md)\).|  
|[CMFCDropDownToolbarButton::OnCustomizeMenu](../Topic/CMFCDropDownToolbarButton::OnCustomizeMenu.md)|Modifica il menu fornito quando l'applicazione visualizza un menu di scelta rapida nella barra degli strumenti padre.  \(Override [CMFCToolBarButton::OnCustomizeMenu](../Topic/CMFCToolBarButton::OnCustomizeMenu.md)\).|  
|[CMFCDropDownToolbarButton::OnDraw](../Topic/CMFCDropDownToolbarButton::OnDraw.md)|Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificate.  \(Override [CMFCToolBarButton::OnDraw](../Topic/CMFCToolBarButton::OnDraw.md)\).|  
|[CMFCDropDownToolbarButton::OnDrawOnCustomizeList](../Topic/CMFCDropDownToolbarButton::OnDrawOnCustomizeList.md)|Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** la finestra di dialogo **Personalizza**.  \(Override [CMFCToolBarButton::OnDrawOnCustomizeList](../Topic/CMFCToolBarButton::OnDrawOnCustomizeList.md)\).|  
|[CMFCDropDownToolbarButton::Serialize](../Topic/CMFCDropDownToolbarButton::Serialize.md)|Legge l'oggetto da un archivio o scritto in un archivio.  \(Override [CMFCToolBarButton::Serialize](../Topic/CMFCToolBarButton::Serialize.md)\).|  
|[CMFCDropDownToolbarButton::SetDefaultCommand](../Topic/CMFCDropDownToolbarButton::SetDefaultCommand.md)|Imposta il comando predefinito che il framework utilizza quando un utente fa clic sul pulsante.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::m\_uiShowBarDelay](../Topic/CMFCDropDownToolbarButton::m_uiShowBarDelay.md)|Specifica la durata che un utente deve mantenere il pulsante del mouse prima della barra degli strumenti a discesa visualizzata.|  
  
## Note  
 `CMFCDropDownToolBarButton` differisce da un pulsante comune in quanto presenta una piccola freccia nell'angolo inferiore destro del pulsante.  Dopo la selezione di un pulsante dalla barra degli strumenti a discesa, il framework visualizzata la relativa icona sul pulsante della barra degli strumenti di primo livello \(il pulsante con una piccola freccia nell'angolo inferiore destro\).  
  
 Per informazioni su come implementare una barra degli strumenti a discesa, vedere [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md).  
  
 L'oggetto `CMFCDropDownToolBarButton` è necessario che a un oggetto [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md) e visualizzato come pulsante di menu a un menu di scelta rapida.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)  
  
## Requisiti  
 **intestazione:** afxdropdowntoolbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)