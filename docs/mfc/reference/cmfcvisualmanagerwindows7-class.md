---
title: "CMFCVisualManagerWindows7 Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxvisualmanagerwindows7/CMFCVisualManagerWindows7"
  - "CMFCVisualManagerWindows7"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCVisualManagerWindows7 class"
ms.assetid: e8d87df1-0c09-4b58-8ade-4e911f796e42
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CMFCVisualManagerWindows7 Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CMFCVisualManagerWindows7` fornisce a un'applicazione l'aspetto di un'applicazione [!INCLUDE[win7](../../build/includes/win7_md.md)].  
  
## Sintassi  
  
```  
class CMFCVisualManagerWindows7 : public CMFCVisualManagerWindows;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCVisualManagerWindows7::CMFCVisualManagerWindows7](../Topic/CMFCVisualManagerWindows7::CMFCVisualManagerWindows7.md)|Costruttore predefinito.|  
|[CMFCVisualManagerWindows7::~CMFCVisualManagerWindows7](../Topic/CMFCVisualManagerWindows7::~CMFCVisualManagerWindows7.md)|Impostare il valore predefinito del distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCVisualManagerWindows7::CleanStyle`|Cancella lo stile visivo corrente e viene reimpostato lo stile visivo predefinito.|  
|`CMFCVisualManagerWindows7::CleanUp`|Rimuove tutti gli oggetti nell'interfaccia utente e reimpostare i menu.|  
|`CMFCVisualManagerWindows7::DrawNcBtn`|Estrae un pulsante nell'area non client su frame.  Il framework utilizza questo metodo per disegnare viene ridotta a icona, viene ingrandita, fine e di ripristino nell'angolo superiore destro della struttura della finestra.  Questo metodo non viene chiamato quando il programma utilizza un tema non Piano.|  
|`CMFCVisualManagerWindows7::DrawNcText`|Estrae il testo nell'area non client su frame.  Il framework utilizza questo metodo per disegnare il titolo dell'applicazione nella barra del titolo nella parte superiore della finestra cornice.|  
|`CMFCVisualManagerWindows7::DrawSeparator`|Estrae un separatore su [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md).|  
|`CMFCVisualManagerWindows7::GetRibbonBar`|Recupera [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md) associato all'interfaccia utente.|  
|[CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor](../Topic/CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor.md)|Ottiene un colore di sfondo della casella di modifica della barra multifunzione.|  
|`CMFCVisualManagerWindows7::GetRibbonPopupBorderSize`|Esegue l'override della proprietà [CMFCVisualManager::GetRibbonPopupBorderSize](../Topic/CMFCVisualManager::GetRibbonPopupBorderSize.md)|  
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarChevronOffset`|Esegue l'override della proprietà [CMFCVisualManager::GetRibbonQuickAccessToolBarChevronOffset](../Topic/CMFCVisualManager::GetRibbonQuickAccessToolBarChevronOffset.md)|  
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarRightMargin`|Esegue l'override della proprietà [CMFCVisualManager::GetRibbonQuickAccessToolBarRightMargin](../Topic/CMFCVisualManager::GetRibbonQuickAccessToolBarRightMargin.md)|  
|`CMFCVisualManagerWindows7::IsHighlightWholeMenuItem`|Esegue l'override della proprietà [CMFCVisualManagerWindows::IsHighlightWholeMenuItem](../Topic/CMFCVisualManagerWindows::IsHighlightWholeMenuItem.md)|  
|`CMFCVisualManagerWindows7::IsOwnerDrawMenuCheck`|Esegue l'override della proprietà [CMFCVisualManager::IsOwnerDrawMenuCheck](../Topic/CMFCVisualManager::IsOwnerDrawMenuCheck.md)|  
|`CMFCVisualManagerWindows7::IsRibbonPresent`|Determina se `CMFCRibbonBar` è presente e visibile.|  
|`CMFCVisualManagerWindows7::OnDrawButtonBorder`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnDrawButtonBorder](../Topic/CMFCVisualManagerWindows::OnDrawButtonBorder.md)|  
|`CMFCVisualManagerWindows7::OnDrawCheckBoxEx`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnDrawCheckBoxEx](../Topic/CMFCVisualManagerWindows::OnDrawCheckBoxEx.md)|  
|`CMFCVisualManagerWindows7::OnDrawComboDropButton`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnDrawComboDropButton](../Topic/CMFCVisualManagerWindows::OnDrawComboDropButton.md)|  
|`CMFCVisualManagerWindows7::OnDrawDefaultRibbonImage`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawDefaultRibbonImage](../Topic/CMFCVisualManager::OnDrawDefaultRibbonImage.md)|  
|`CMFCVisualManagerWindows7::OnDrawMenuBorder`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnDrawMenuBorder](../Topic/CMFCVisualManagerWindows::OnDrawMenuBorder.md)|  
|`CMFCVisualManagerWindows7::OnDrawMenuCheck`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawMenuCheck](../Topic/CMFCVisualManager::OnDrawMenuCheck.md)|  
|`CMFCVisualManagerWindows7::OnDrawMenuLabel`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawMenuLabel](../Topic/CMFCVisualManager::OnDrawMenuLabel.md)|  
|`CMFCVisualManagerWindows7::OnDrawRadioButton`|Esegue l'override della proprietà `CMFCVisualManager::OnDrawRadioButton`|  
|`CMFCVisualManagerWindows7::OnDrawRibbonApplicationButton`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonApplicationButton](../Topic/CMFCVisualManager::OnDrawRibbonApplicationButton.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonButtonBorder`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonButtonBorder](../Topic/CMFCVisualManager::OnDrawRibbonButtonBorder.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCaption`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonCaption](../Topic/CMFCVisualManager::OnDrawRibbonCaption.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCaptionButton`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonCaptionButton](../Topic/CMFCVisualManager::OnDrawRibbonCaptionButton.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCategory`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonCategory](../Topic/CMFCVisualManager::OnDrawRibbonCategory.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCategoryTab`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonCategoryTab](../Topic/CMFCVisualManager::OnDrawRibbonCategoryTab.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonDefaultPaneButton`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonDefaultPaneButton](../Topic/CMFCVisualManager::OnDrawRibbonDefaultPaneButton.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonGalleryButton`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonGalleryButton](../Topic/CMFCVisualManager::OnDrawRibbonGalleryButton.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonLaunchButton`|Esegue l'override della proprietà `CMFCVisualManager::OnDrawRibbonLaunchButton`|  
|`CMFCVisualManagerWindows7::OnDrawRibbonMenuCheckFrame`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonMenuCheckFrame](../Topic/CMFCVisualManager::OnDrawRibbonMenuCheckFrame.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonPanel`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonPanel](../Topic/CMFCVisualManager::OnDrawRibbonPanel.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonPanelCaption`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonPanelCaption](../Topic/CMFCVisualManager::OnDrawRibbonPanelCaption.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonProgressBar`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonProgressBar](../Topic/CMFCVisualManager::OnDrawRibbonProgressBar.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonRecentFilesFrame`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonRecentFilesFrame](../Topic/CMFCVisualManager::OnDrawRibbonRecentFilesFrame.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderChannel`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonSliderChannel](../Topic/CMFCVisualManager::OnDrawRibbonSliderChannel.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderThumb`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonSliderThumb](../Topic/CMFCVisualManager::OnDrawRibbonSliderThumb.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderZoomButton`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonSliderZoomButton](../Topic/CMFCVisualManager::OnDrawRibbonSliderZoomButton.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonStatusBarPane`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonStatusBarPane](../Topic/CMFCVisualManager::OnDrawRibbonStatusBarPane.md)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonTabsFrame`|Esegue l'override della proprietà [CMFCVisualManager::OnDrawRibbonTabsFrame](../Topic/CMFCVisualManager::OnDrawRibbonTabsFrame.md)|  
|`CMFCVisualManagerWindows7::OnDrawStatusBarSizeBox`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnDrawStatusBarSizeBox](../Topic/CMFCVisualManagerWindows::OnDrawStatusBarSizeBox.md)|  
|`CMFCVisualManagerWindows7::OnFillBarBackground`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnFillBarBackground](../Topic/CMFCVisualManagerWindows::OnFillBarBackground.md)|  
|`CMFCVisualManagerWindows7::OnFillButtonInterior`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnFillButtonInterior](../Topic/CMFCVisualManagerWindows::OnFillButtonInterior.md)|  
|[CMFCVisualManagerWindows7::OnFillMenuImageRect](../Topic/CMFCVisualManagerWindows7::OnFillMenuImageRect.md)|Il framework chiama questo metodo quando si riempie l'area intorno alle immagini voce di menu.|  
|`CMFCVisualManagerWindows7::OnFillRibbonButton`|Esegue l'override della proprietà [CMFCVisualManager::OnFillRibbonButton](../Topic/CMFCVisualManager::OnFillRibbonButton.md)|  
|`CMFCVisualManagerWindows7::OnFillRibbonQuickAccessToolBarPopup`|Esegue l'override della proprietà [CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup](../Topic/CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup.md)|  
|`CMFCVisualManagerWindows7::OnHighlightMenuItem`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnHighlightMenuItem](../Topic/CMFCVisualManagerWindows::OnHighlightMenuItem.md)|  
|`CMFCVisualManagerWindows7::OnNcActivate`|Esegue l'override della proprietà [CMFCVisualManager::OnNcActivate](../Topic/CMFCVisualManager::OnNcActivate.md)|  
|`CMFCVisualManagerWindows7::OnNcPaint`|Esegue l'override della proprietà [CMFCVisualManager::OnNcPaint](../Topic/CMFCVisualManager::OnNcPaint.md)|  
|`CMFCVisualManagerWindows7::OnUpdateSystemColors`|Esegue l'override della proprietà [CMFCVisualManagerWindows::OnUpdateSystemColors](../Topic/CMFCVisualManagerWindows::OnUpdateSystemColors.md)|  
|`CMFCVisualManagerWindows7::SetResourceHandle`|Impostare l'handle di risorsa che descrivono gli attributi del gestore visualizzazione.|  
|`CMFCVisualManagerWindows7::SetStyle`|Imposta la combinazione di colori `CMFCVisualManagerWindows7` GUI.|  
  
## Note  
 Utilizzare la classe `CMFCVisualManagerWindows7` per modificare l'aspetto dell'applicazione riprodurre un'applicazione predefinita [!INCLUDE[win7](../../build/includes/win7_md.md)].  Questa classe potrebbe non essere valida se l'applicazione è in esecuzione in precedenza su una versione di Windows [!INCLUDE[win7](../../build/includes/win7_md.md)].  In tale scenario, l'applicazione utilizza il gestore visualizzazione predefinito definito in [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md).  
  
 Il CMFCVisualManagerWindows7 eredita più metodi da [CMFCVisualManagerWindows Class](../../mfc/reference/cmfcvisualmanagerwindows-class.md) dalla classe `CMFCVisualManager`.  I metodi elencati nella sezione precedente sono nuovi metodi alla classe `CMFCVisualManagerWindows7`.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
 [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)  
  
 [CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)  
  
 [CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)  
  
 `CMFCVisualManagerWindows7`  
  
## Requisiti  
 **intestazione:** afxvisualmanagerwindows7.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)   
 [CMFCVisualManagerWindows Class](../../mfc/reference/cmfcvisualmanagerwindows-class.md)   
 [CMFCVisualManager::SetDefaultManager](../Topic/CMFCVisualManager::SetDefaultManager.md)