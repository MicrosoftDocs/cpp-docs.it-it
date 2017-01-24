---
title: "CMFCVisualManager Class | Microsoft Docs"
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
  - "CMFCVisualManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCVisualManager class"
ms.assetid: beed80f7-36a2-4d64-9f09-e807cfefc3fe
caps.latest.revision: 58
caps.handback.revision: 46
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCVisualManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce supporto per modificare l'aspetto di un livello globale.  Funzionamento della classe `CMFCVisualManager` insieme a una classe che fornisce istruzioni estrarre i controlli GUI dell'applicazione utilizzando uno stile coerente.  Queste altre classi sono definiti i gestori visualizzazione e ereditano da `CMFCBaseVisualManager`.  
  
## Sintassi  
  
```  
class CMFCVisualManager : public CMFCBaseVisualManager  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCVisualManager::CMFCVisualManager`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCVisualManager::AdjustFrames](../Topic/CMFCVisualManager::AdjustFrames.md)||  
|[CMFCVisualManager::AdjustToolbars](../Topic/CMFCVisualManager::AdjustToolbars.md)||  
|[CMFCVisualManager::AlwaysHighlight3DTabs](../Topic/CMFCVisualManager::AlwaysHighlight3DTabs.md)|Chiamato dal framework per determinare se le schede tridimensionale devono essere disegnato sempre utilizzando un colore di evidenziazione.|  
|[CMFCVisualManager::DestroyInstance](../Topic/CMFCVisualManager::DestroyInstance.md)||  
|[CMFCVisualManager::DoDrawHeaderSortArrow](../Topic/CMFCVisualManager::DoDrawHeaderSortArrow.md)||  
|[CMFCVisualManager::DrawComboDropButtonWinXP](../Topic/CMFCVisualManager::DrawComboDropButtonWinXP.md)||  
|[CMFCVisualManager::DrawPushButtonWinXP](../Topic/CMFCVisualManager::DrawPushButtonWinXP.md)||  
|[CMFCVisualManager::DrawTextOnGlass](../Topic/CMFCVisualManager::DrawTextOnGlass.md)||  
|[CMFCVisualManager::GetAutoHideButtonTextColor](../Topic/CMFCVisualManager::GetAutoHideButtonTextColor.md)|Chiamato dal framework per recuperare il colore del testo per un pulsante Nascondi automaticamente.|  
|[CMFCVisualManager::GetButtonExtraBorder](../Topic/CMFCVisualManager::GetButtonExtraBorder.md)|Chiamato dal framework per recuperare la dimensione maggiore del pulsante che il gestore visualizzazione corrente è necessario estrarre un pulsante.|  
|[CMFCVisualManager::GetCaptionBarTextColor](../Topic/CMFCVisualManager::GetCaptionBarTextColor.md)|Chiamato dal framework per recuperare il colore del testo di una barra del titolo.|  
|[CMFCVisualManager::GetDockingTabsBordersSize](../Topic/CMFCVisualManager::GetDockingTabsBordersSize.md)|Chiamato dal framework per recuperare la dimensione del bordo di una barra a schede ancorata.|  
|[CMFCVisualManager::GetHighlightedMenuItemTextColor](../Topic/CMFCVisualManager::GetHighlightedMenuItemTextColor.md)||  
|[CMFCVisualManager::GetInstance](../Topic/CMFCVisualManager::GetInstance.md)|Restituisce un puntatore a un oggetto `CMFCVisualManager`.|  
|[CMFCVisualManager::GetMDITabsBordersSize](../Topic/CMFCVisualManager::GetMDITabsBordersSize.md)|Chiamato dal framework per recuperare la dimensione del bordo della finestra di MDITabs.|  
|[CMFCVisualManager::GetMenuItemTextColor](../Topic/CMFCVisualManager::GetMenuItemTextColor.md)||  
|[CMFCVisualManager::GetMenuShadowDepth](../Topic/CMFCVisualManager::GetMenuShadowDepth.md)|Restituisce un valore che determina la larghezza e l'altezza di ombreggiatura il menu.|  
|[CMFCVisualManager::GetNcBtnSize](../Topic/CMFCVisualManager::GetNcBtnSize.md)|Chiamato dal framework per determinare la dimensione dei pulsanti di sistema in base al gestore visualizzazione corrente.  I pulsanti di sistema sono i pulsanti nella barra del titolo della cornice principale che eseguono il mapping ai controlli **Chiudi**, **Riduci a icona**, **Ingrandisci**e **Ripristina**.|  
|[CMFCVisualManager::GetPopupMenuBorderSize](../Topic/CMFCVisualManager::GetPopupMenuBorderSize.md)|Chiamato dal framework per recuperare la dimensione del bordo di un menu di scelta rapida.|  
|[CMFCVisualManager::GetPropertyGridGroupColor](../Topic/CMFCVisualManager::GetPropertyGridGroupColor.md)|Chiamato dal framework per recuperare il colore di sfondo di un elenco.|  
|[CMFCVisualManager::GetPropertyGridGroupTextColor](../Topic/CMFCVisualManager::GetPropertyGridGroupTextColor.md)|Chiamato dal framework per recuperare il colore del testo di un elenco.|  
|[CMFCVisualManager::GetRibbonHyperlinkTextColor](../Topic/CMFCVisualManager::GetRibbonHyperlinkTextColor.md)||  
|[CMFCVisualManager::GetRibbonPopupBorderSize](../Topic/CMFCVisualManager::GetRibbonPopupBorderSize.md)||  
|[CMFCVisualManager::GetRibbonQuickAccessToolBarTextColor](../Topic/CMFCVisualManager::GetRibbonQuickAccessToolBarTextColor.md)||  
|[CMFCVisualManager::GetRibbonSliderColors](../Topic/CMFCVisualManager::GetRibbonSliderColors.md)||  
|[CMFCVisualManager::GetShowAllMenuItemsHeight](../Topic/CMFCVisualManager::GetShowAllMenuItemsHeight.md)||  
|[CMFCVisualManager::GetSmartDockingBaseGuideColors](../Topic/CMFCVisualManager::GetSmartDockingBaseGuideColors.md)||  
|[CMFCVisualManager::GetSmartDockingHighlightToneColor](../Topic/CMFCVisualManager::GetSmartDockingHighlightToneColor.md)||  
|[CMFCVisualManager::GetSmartDockingTheme](../Topic/CMFCVisualManager::GetSmartDockingTheme.md)|Restituisce un tema utilizzato per visualizzare marcatori intelligenti di ancoraggio.|  
|[CMFCVisualManager::GetStatusBarPaneTextColor](../Topic/CMFCVisualManager::GetStatusBarPaneTextColor.md)||  
|[CMFCVisualManager::GetTabFrameColors](../Topic/CMFCVisualManager::GetTabFrameColors.md)|Chiamato dal framework per recuperare il set di colori da utilizzare quando si estrae un riquadro della scheda.|  
|[CMFCVisualManager::GetTabTextColor](../Topic/CMFCVisualManager::GetTabTextColor.md)||  
|[CMFCVisualManager::GetToolbarButtonTextColor](../Topic/CMFCVisualManager::GetToolbarButtonTextColor.md)|Chiamato dal framework per recuperare il colore corrente di testo sul pulsante della barra degli strumenti.  Il colore varia in base al gestore visualizzazione corrente e dello stato del pulsante.|  
|[CMFCVisualManager::GetToolbarDisabledTextColor](../Topic/CMFCVisualManager::GetToolbarDisabledTextColor.md)|Chiamato dal framework per determinare il colore del testo visualizzato negli elementi disabilitati della barra degli strumenti.|  
|[CMFCVisualManager::GetToolbarHighlightColor](../Topic/CMFCVisualManager::GetToolbarHighlightColor.md)||  
|[CMFCVisualManager::GetToolTipInfo](../Topic/CMFCVisualManager::GetToolTipInfo.md)||  
|[CMFCVisualManager::HasOverlappedAutoHideButtons](../Topic/CMFCVisualManager::HasOverlappedAutoHideButtons.md)|Specifica se i pulsanti Nascondi automaticamente si sovrappongono.|  
|[CMFCVisualManager::IsDockingTabHasBorder](../Topic/CMFCVisualManager::IsDockingTabHasBorder.md)|Specifica se il gestore visualizzazione corrente viene disegnato un bordo intorno alle barre ancorabili a schede.|  
|[CMFCVisualManager::IsEmbossDisabledImage](../Topic/CMFCVisualManager::IsEmbossDisabledImage.md)|Specifica se le immagini disabilitate devono essere impresse.|  
|[CMFCVisualManager::IsFadeInactiveImage](../Topic/CMFCVisualManager::IsFadeInactiveImage.md)|Chiamato dal framework per determinare se le immagini di inattività di una barra degli strumenti o in un menu vengono visualizzate in grigio.|  
|[CMFCVisualManager::IsMenuFlatLook](../Topic/CMFCVisualManager::IsMenuFlatLook.md)|Specifica se i pulsanti di menu ha un aspetto bidimensionale.|  
|[CMFCVisualManager::IsOfficeXPStyleMenus](../Topic/CMFCVisualManager::IsOfficeXPStyleMenus.md)|Specifica se il gestore visualizzazione implementa i menu stile XP di Office.|  
|[CMFCVisualManager::IsOwnerDrawCaption](../Topic/CMFCVisualManager::IsOwnerDrawCaption.md)|Specifica se il gestore visualizzazione corrente implementa le didascalie create dal proprietario di una finestra cornice.|  
|[CMFCVisualManager::IsShadowHighlightedImage](../Topic/CMFCVisualManager::IsShadowHighlightedImage.md)|Specifica se un'immagine evidenziata con un'ombreggiatura.|  
|[CMFCVisualManager::OnDrawAutoHideButtonBorder](../Topic/CMFCVisualManager::OnDrawAutoHideButtonBorder.md)|Chiamato dal framework quando si estrae il bordo di un pulsante Nascondi automaticamente.|  
|[CMFCVisualManager::OnDrawBarGripper](../Topic/CMFCVisualManager::OnDrawBarGripper.md)|Chiamato dal framework quando si estrae la pinza di rimozione di una barra di controllo.  L'utente deve fare clic sulla pinza di effettuata per spostare la barra di controllo.|  
|[CMFCVisualManager::OnDrawBrowseButton](../Topic/CMFCVisualManager::OnDrawBrowseButton.md)|Chiamato dal framework quando si estrae un pulsante sfoglia appartenente a un controllo di modifica \([CMFCEditBrowseCtrl Class](../../mfc/reference/cmfceditbrowsectrl-class.md)\).|  
|[CMFCVisualManager::OnDrawButtonBorder](../Topic/CMFCVisualManager::OnDrawButtonBorder.md)|Chiamato dal framework quando si estrae il bordo di un pulsante della barra degli strumenti.|  
|[CMFCVisualManager::OnDrawButtonSeparator](../Topic/CMFCVisualManager::OnDrawButtonSeparator.md)||  
|[CMFCVisualManager::OnDrawCaptionBarBorder](../Topic/CMFCVisualManager::OnDrawCaptionBarBorder.md)|Chiamato dal framework quando si estrae il bordo della barra del titolo.|  
|[CMFCVisualManager::OnDrawCaptionBarButtonBorder](../Topic/CMFCVisualManager::OnDrawCaptionBarButtonBorder.md)||  
|[CMFCVisualManager::OnDrawCaptionBarInfoArea](../Topic/CMFCVisualManager::OnDrawCaptionBarInfoArea.md)||  
|[CMFCVisualManager::OnDrawCaptionButton](../Topic/CMFCVisualManager::OnDrawCaptionButton.md)|Chiamato dal framework quando si estrae un pulsante della barra del titolo.|  
|[CMFCVisualManager::OnDrawCheckBox](../Topic/CMFCVisualManager::OnDrawCheckBox.md)||  
|[CMFCVisualManager::OnDrawCheckBoxEx](../Topic/CMFCVisualManager::OnDrawCheckBoxEx.md)||  
|[CMFCVisualManager::OnDrawComboBorder](../Topic/CMFCVisualManager::OnDrawComboBorder.md)|Chiamato dal framework quando si estrae il bordo di un pulsante della casella combinata.|  
|[CMFCVisualManager::OnDrawComboDropButton](../Topic/CMFCVisualManager::OnDrawComboDropButton.md)|Chiamato dal framework quando si estrae un pulsante di selezione della casella combinata.|  
|[CMFCVisualManager::OnDrawControlBorder](../Topic/CMFCVisualManager::OnDrawControlBorder.md)||  
|[CMFCVisualManager::OnDrawDefaultRibbonImage](../Topic/CMFCVisualManager::OnDrawDefaultRibbonImage.md)|Chiamato dal framework quando l'immagine viene disegnata predefinita della barra multifunzione.|  
|[CMFCVisualManager::OnDrawEditBorder](../Topic/CMFCVisualManager::OnDrawEditBorder.md)|Chiamato dal framework quando si estrae un bordo intorno a un oggetto [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md).|  
|[CMFCVisualManager::OnDrawExpandingBox](../Topic/CMFCVisualManager::OnDrawExpandingBox.md)||  
|[CMFCVisualManager::OnDrawFloatingToolbarBorder](../Topic/CMFCVisualManager::OnDrawFloatingToolbarBorder.md)|Chiamato dal framework quando si estrae i bordi di una barra degli strumenti mobile.  La barra degli strumenti mobile è una barra degli strumenti visualizzata come una finestra cornice piccola.|  
|[CMFCVisualManager::OnDrawHeaderCtrlBorder](../Topic/CMFCVisualManager::OnDrawHeaderCtrlBorder.md)|Chiamato dal framework quando si estrae il bordo contenente il controllo intestazione.|  
|[CMFCVisualManager::OnDrawHeaderCtrlSortArrow](../Topic/CMFCVisualManager::OnDrawHeaderCtrlSortArrow.md)|Chiamato dal framework quando si estrae la freccia di ordinamento del controllo intestazione.|  
|[CMFCVisualManager::OnDrawMenuArrowOnCustomizeList](../Topic/CMFCVisualManager::OnDrawMenuArrowOnCustomizeList.md)||  
|[CMFCVisualManager::OnDrawMenuBorder](../Topic/CMFCVisualManager::OnDrawMenuBorder.md)|Chiamato dal framework quando si estrae un bordo del menu.|  
|[CMFCVisualManager::OnDrawMenuCheck](../Topic/CMFCVisualManager::OnDrawMenuCheck.md)||  
|[CMFCVisualManager::OnDrawMenuItemButton](../Topic/CMFCVisualManager::OnDrawMenuItemButton.md)||  
|[CMFCVisualManager::OnDrawMenuLabel](../Topic/CMFCVisualManager::OnDrawMenuLabel.md)||  
|[CMFCVisualManager::OnDrawMenuResizeBar](../Topic/CMFCVisualManager::OnDrawMenuResizeBar.md)||  
|[CMFCVisualManager::OnDrawMenuScrollButton](../Topic/CMFCVisualManager::OnDrawMenuScrollButton.md)|Chiamato dal framework quando si estrae un pulsante di scorrimento il menu.|  
|[CMFCVisualManager::OnDrawMenuShadow](../Topic/CMFCVisualManager::OnDrawMenuShadow.md)||  
|[CMFCVisualManager::OnDrawMenuSystemButton](../Topic/CMFCVisualManager::OnDrawMenuSystemButton.md)|Chiamato dal framework quando si disegna il menu di sistema button **Chiudi**, **Riduci a icona**, **Ingrandisci**e **Ripristina**.|  
|[CMFCVisualManager::OnDrawMiniFrameBorder](../Topic/CMFCVisualManager::OnDrawMiniFrameBorder.md)||  
|[CMFCVisualManager::OnDrawOutlookBarSplitter](../Topic/CMFCVisualManager::OnDrawOutlookBarSplitter.md)|Chiamato dal framework quando si estrae il separatore per una barra di Outlook.  Il separatore è una barra orizzontale utilizzata per i controlli gruppo.|  
|[CMFCVisualManager::OnDrawOutlookPageButtonBorder](../Topic/CMFCVisualManager::OnDrawOutlookPageButtonBorder.md)|Chiamato dal framework quando si estrae il bordo di un pulsante della pagina di Outlook.  I pulsanti della pagina di Outlook sembrano se il riquadro della barra di Outlook contiene più pulsanti che possono visualizzare.|  
|[CMFCVisualManager::OnDrawPaneBorder](../Topic/CMFCVisualManager::OnDrawPaneBorder.md)|Chiamato dal framework quando si estrae il bordo [CPane Class](../../mfc/reference/cpane-class.md).|  
|[CMFCVisualManager::OnDrawPaneCaption](../Topic/CMFCVisualManager::OnDrawPaneCaption.md)|Chiamato dal framework quando si estrae la didascalia per `CPane`.|  
|[CMFCVisualManager::OnDrawPaneDivider](../Topic/CMFCVisualManager::OnDrawPaneDivider.md)||  
|[CMFCVisualManager::OnDrawPopupWindowBorder](../Topic/CMFCVisualManager::OnDrawPopupWindowBorder.md)||  
|[CMFCVisualManager::OnDrawPopupWindowButtonBorder](../Topic/CMFCVisualManager::OnDrawPopupWindowButtonBorder.md)||  
|[CMFCVisualManager::OnDrawPopupWindowCaption](../Topic/CMFCVisualManager::OnDrawPopupWindowCaption.md)||  
|[CMFCVisualManager::OnDrawRibbonApplicationButton](../Topic/CMFCVisualManager::OnDrawRibbonApplicationButton.md)|Chiamato dal framework quando vengono **pulsante principale** sulla barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonButtonBorder](../Topic/CMFCVisualManager::OnDrawRibbonButtonBorder.md)|Chiamato dal framework quando si estrae il bordo di un pulsante della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonButtonsGroup](../Topic/CMFCVisualManager::OnDrawRibbonButtonsGroup.md)|Chiamato dal framework quando si estrae un gruppo di pulsanti della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonCaption](../Topic/CMFCVisualManager::OnDrawRibbonCaption.md)|Chiamato dal framework quando si estrae la barra del titolo della cornice principale, ma solo se la barra della barra multifunzione viene integrata con il frame.|  
|[CMFCVisualManager::OnDrawRibbonCaptionButton](../Topic/CMFCVisualManager::OnDrawRibbonCaptionButton.md)|Chiamato dal framework quando si estrae un pulsante della barra del titolo trova sulla barra della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonCategory](../Topic/CMFCVisualManager::OnDrawRibbonCategory.md)|Chiamato dal framework quando si disegna una categoria della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonCategoryCaption](../Topic/CMFCVisualManager::OnDrawRibbonCategoryCaption.md)|Chiamato dal framework quando si estrae la didascalia per una categoria della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonCategoryScroll](../Topic/CMFCVisualManager::OnDrawRibbonCategoryScroll.md)||  
|[CMFCVisualManager::OnDrawRibbonCategoryTab](../Topic/CMFCVisualManager::OnDrawRibbonCategoryTab.md)|Chiamato dal framework quando si estrae la scheda per una categoria della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonCheckBoxOnList](../Topic/CMFCVisualManager::OnDrawRibbonCheckBoxOnList.md)||  
|[CMFCVisualManager::OnDrawRibbonColorPaletteBox](../Topic/CMFCVisualManager::OnDrawRibbonColorPaletteBox.md)||  
|[CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext](../Topic/CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext.md)||  
|[CMFCVisualManager::OnDrawRibbonDefaultPaneButton](../Topic/CMFCVisualManager::OnDrawRibbonDefaultPaneButton.md)|Chiamato dal framework quando si estrae il pulsante predefinito del pannello della barra multifunzione.  Il pulsante predefinito viene visualizzato quando l'utente riduce un pannello della barra multifunzione in modo che non troppo piccolo per visualizzare gli elementi della barra multifunzione.  Il pulsante predefinito viene disegnato e gli elementi della barra multifunzione vengono aggiunti come elementi in un menu a discesa.|  
|[CMFCVisualManager::OnDrawRibbonDefaultPaneButtonIndicator](../Topic/CMFCVisualManager::OnDrawRibbonDefaultPaneButtonIndicator.md)||  
|[CMFCVisualManager::OnDrawRibbonGalleryBorder](../Topic/CMFCVisualManager::OnDrawRibbonGalleryBorder.md)||  
|[CMFCVisualManager::OnDrawRibbonGalleryButton](../Topic/CMFCVisualManager::OnDrawRibbonGalleryButton.md)||  
|[CMFCVisualManager::OnDrawRibbonKeyTip](../Topic/CMFCVisualManager::OnDrawRibbonKeyTip.md)||  
|[CMFCVisualManager::OnDrawRibbonLabel](../Topic/CMFCVisualManager::OnDrawRibbonLabel.md)|Chiamato dal framework quando si disegna l'etichetta della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonMainPanelButtonBorder](../Topic/CMFCVisualManager::OnDrawRibbonMainPanelButtonBorder.md)|Chiamato dal framework quando si estrae il bordo di un pulsante della barra multifunzione che si trova nel pannello **principale**.  Il pannello **principale** il pannello viene visualizzato quando un utente fa clic **pulsante principale**.|  
|[CMFCVisualManager::OnDrawRibbonMainPanelFrame](../Topic/CMFCVisualManager::OnDrawRibbonMainPanelFrame.md)|Chiamato dal framework quando si estrae il frame intorno al pannello **principale**.|  
|[CMFCVisualManager::OnDrawRibbonMenuCheckFrame](../Topic/CMFCVisualManager::OnDrawRibbonMenuCheckFrame.md)||  
|[CMFCVisualManager::OnDrawRibbonPanel](../Topic/CMFCVisualManager::OnDrawRibbonPanel.md)|Chiamato dal framework quando si estrae un pannello della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonPanelCaption](../Topic/CMFCVisualManager::OnDrawRibbonPanelCaption.md)|Chiamato dal framework quando si estrae la barra del titolo di un pannello della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonProgressBar](../Topic/CMFCVisualManager::OnDrawRibbonProgressBar.md)|Chiamato dal framework quando viene disegnato un oggetto [CMFCRibbonProgressBar](../../mfc/reference/cmfcribbonprogressbar-class.md).|  
|[CMFCVisualManager::OnDrawRibbonQuickAccessToolBarSeparator](../Topic/CMFCVisualManager::OnDrawRibbonQuickAccessToolBarSeparator.md)|Chiamato dal framework quando si estrae un separatore su **barra di accesso rapido**della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonRecentFilesFrame](../Topic/CMFCVisualManager::OnDrawRibbonRecentFilesFrame.md)|Chiamato dal framework quando si estrae un frame intorno a un elenco recente dei file.|  
|[CMFCVisualManager::OnDrawRibbonSliderChannel](../Topic/CMFCVisualManager::OnDrawRibbonSliderChannel.md)|Chiamato dal framework quando si estrae il canale di oggetto [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md).|  
|[CMFCVisualManager::OnDrawRibbonSliderThumb](../Topic/CMFCVisualManager::OnDrawRibbonSliderThumb.md)|Chiamato dal framework quando si estrae il cursore di un oggetto `CMFCRibbonSlider`.|  
|[CMFCVisualManager::OnDrawRibbonSliderZoomButton](../Topic/CMFCVisualManager::OnDrawRibbonSliderZoomButton.md)|Chiamato dal framework quando si estrae i pulsanti di zoom di un oggetto `CMFCRibbonSlider`.|  
|[CMFCVisualManager::OnDrawRibbonStatusBarPane](../Topic/CMFCVisualManager::OnDrawRibbonStatusBarPane.md)|Chiamato dal framework quando si estrae il riquadro della barra di stato della barra multifunzione.|  
|[CMFCVisualManager::OnDrawRibbonTabsFrame](../Topic/CMFCVisualManager::OnDrawRibbonTabsFrame.md)|Chiamato dal framework quando si estrae un frame intorno a un gruppo di schede della barra multifunzione.|  
|[CMFCVisualManager::OnDrawScrollButtons](../Topic/CMFCVisualManager::OnDrawScrollButtons.md)||  
|[CMFCVisualManager::OnDrawSeparator](../Topic/CMFCVisualManager::OnDrawSeparator.md)|Chiamato dal framework quando si estrae un separatore.  Separatore in genere utilizzato in una barra di controllo per separare i gruppi di icone.|  
|[CMFCVisualManager::OnDrawShowAllMenuItems](../Topic/CMFCVisualManager::OnDrawShowAllMenuItems.md)||  
|[CMFCVisualManager::OnDrawSpinButtons](../Topic/CMFCVisualManager::OnDrawSpinButtons.md)|Chiamato dal framework quando si estrae i pulsanti di selezione.|  
|[CMFCVisualManager::OnDrawSplitterBorder](../Topic/CMFCVisualManager::OnDrawSplitterBorder.md)|Chiamato dal framework quando si estrae il bordo di una finestra divisa.|  
|[CMFCVisualManager::OnDrawSplitterBox](../Topic/CMFCVisualManager::OnDrawSplitterBox.md)|Chiamato dal framework quando si estrae il contenitore di trascinamento il separatore per una finestra divisa.|  
|[CMFCVisualManager::OnDrawStatusBarPaneBorder](../Topic/CMFCVisualManager::OnDrawStatusBarPaneBorder.md)|Chiamato dal framework quando si estrae il bordo di un riquadro della barra di stato.|  
|[CMFCVisualManager::OnDrawStatusBarProgress](../Topic/CMFCVisualManager::OnDrawStatusBarProgress.md)|Chiamato dal framework quando si estrae l'indicatore di stato della barra di stato.|  
|[CMFCVisualManager::OnDrawStatusBarSizeBox](../Topic/CMFCVisualManager::OnDrawStatusBarSizeBox.md)|Chiamato dal framework quando si estrae la casella di dimensioni della barra di stato.|  
|[CMFCVisualManager::OnDrawTab](../Topic/CMFCVisualManager::OnDrawTab.md)|Chiamato dal framework quando viene disegnato un oggetto [CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md).|  
|[CMFCVisualManager::OnDrawTabCloseButton](../Topic/CMFCVisualManager::OnDrawTabCloseButton.md)|Chiamato dal framework quando si estrae il pulsante **Chiudi** nella scheda attiva.|  
|[CMFCVisualManager::OnDrawTabContent](../Topic/CMFCVisualManager::OnDrawTabContent.md)|Chiamato dal framework quando viene disegnato l'interno della scheda \(immagini, test\).|  
|[CMFCVisualManager::OnDrawTabsButtonBorder](../Topic/CMFCVisualManager::OnDrawTabsButtonBorder.md)|Chiamato dal framework quando si estrae il bordo di un pulsante della scheda.|  
|[CMFCVisualManager::OnDrawTask](../Topic/CMFCVisualManager::OnDrawTask.md)|Chiamato dal framework quando si disegna un'attività nel riquadro attività.|  
|[CMFCVisualManager::OnDrawTasksGroupAreaBorder](../Topic/CMFCVisualManager::OnDrawTasksGroupAreaBorder.md)|Chiamato dal framework quando si estrae un bordo intorno a un'area del gruppo nel riquadro attività.|  
|[CMFCVisualManager::OnDrawTasksGroupCaption](../Topic/CMFCVisualManager::OnDrawTasksGroupCaption.md)|Chiamato dal framework quando si estrae la didascalia per un gruppo di attività nel riquadro attività.|  
|[CMFCVisualManager::OnDrawTasksGroupIcon](../Topic/CMFCVisualManager::OnDrawTasksGroupIcon.md)||  
|[CMFCVisualManager::OnDrawTearOffCaption](../Topic/CMFCVisualManager::OnDrawTearOffCaption.md)|Chiamato dal framework quando si estrae la barra del titolo di sradicamento per una barra di sradicamento.|  
|[CMFCVisualManager::OnDrawToolBoxFrame](../Topic/CMFCVisualManager::OnDrawToolBoxFrame.md)||  
|[CMFCVisualManager::OnEraseMDIClientArea](../Topic/CMFCVisualManager::OnEraseMDIClientArea.md)|Chiamato dal framework quando si elimina l'area client MDI.|  
|[CMFCVisualManager::OnErasePopupWindowButton](../Topic/CMFCVisualManager::OnErasePopupWindowButton.md)||  
|[CMFCVisualManager::OnEraseTabsArea](../Topic/CMFCVisualManager::OnEraseTabsArea.md)|Chiamato dal framework quando si elimina l'area della scheda in una finestra della scheda.|  
|[CMFCVisualManager::OnEraseTabsButton](../Topic/CMFCVisualManager::OnEraseTabsButton.md)|Chiamato dal framework quando cancella l'icona e il testo di un pulsante della scheda.|  
|[CMFCVisualManager::OnEraseTabsFrame](../Topic/CMFCVisualManager::OnEraseTabsFrame.md)|Chiamato dal framework quando si elimina un riquadro della scheda.|  
|[CMFCVisualManager::OnFillAutoHideButtonBackground](../Topic/CMFCVisualManager::OnFillAutoHideButtonBackground.md)|Chiamato dal framework quando si riempie lo sfondo di un pulsante Nascondi automaticamente.|  
|[CMFCVisualManager::OnFillBarBackground](../Topic/CMFCVisualManager::OnFillBarBackground.md)|Chiamato dal framework quando si riempie lo sfondo di una barra di controllo.|  
|[CMFCVisualManager::OnFillButtonInterior](../Topic/CMFCVisualManager::OnFillButtonInterior.md)|Chiamato dal framework quando si riempie lo sfondo di un pulsante della barra degli strumenti.|  
|[CMFCVisualManager::OnFillCaptionBarButton](../Topic/CMFCVisualManager::OnFillCaptionBarButton.md)||  
|[CMFCVisualManager::OnFillCommandsListBackground](../Topic/CMFCVisualManager::OnFillCommandsListBackground.md)|Chiamato dal framework quando si riempie lo sfondo di un pulsante della barra degli strumenti che appartiene a un elenco di comando che, a sua volta, fa parte di una finestra di dialogo di personalizzazione.|  
|[CMFCVisualManager::OnFillHeaderCtrlBackground](../Topic/CMFCVisualManager::OnFillHeaderCtrlBackground.md)|Chiamato dal framework quando si riempie lo sfondo di un controllo intestazione.|  
|[CMFCVisualManager::OnFillMiniFrameCaption](../Topic/CMFCVisualManager::OnFillMiniFrameCaption.md)|Chiamato dal framework quando si riempie la didascalia di mini finestra cornice.|  
|[CMFCVisualManager::OnFillOutlookBarCaption](../Topic/CMFCVisualManager::OnFillOutlookBarCaption.md)|Chiamato dal framework quando si riempie lo sfondo della didascalia della barra di Outlook.|  
|[CMFCVisualManager::OnFillOutlookPageButton](../Topic/CMFCVisualManager::OnFillOutlookPageButton.md)|Chiamato dal framework quando si riempie l'interno di un pulsante della pagina di Outlook.|  
|[CMFCVisualManager::OnFillPopupWindowBackground](../Topic/CMFCVisualManager::OnFillPopupWindowBackground.md)|Chiamato dal framework quando si riempie lo sfondo di una finestra popup.|  
|[CMFCVisualManager::OnFillRibbonButton](../Topic/CMFCVisualManager::OnFillRibbonButton.md)|Chiamato dal framework quando si riempie l'interno di un pulsante della barra multifunzione.|  
|[CMFCVisualManager::OnFillRibbonEdit](../Topic/CMFCVisualManager::OnFillRibbonEdit.md)|Chiamato dal framework quando si riempie l'interno di un controllo di modifica della barra multifunzione.|  
|[CMFCVisualManager::OnFillRibbonMainPanelButton](../Topic/CMFCVisualManager::OnFillRibbonMainPanelButton.md)|Chiamato dal framework quando si riempie l'interno di un pulsante della barra multifunzione trova nel pannello **principale**.|  
|[CMFCVisualManager::OnFillRibbonMenuFrame](../Topic/CMFCVisualManager::OnFillRibbonMenuFrame.md)|Chiamato dal framework quando si compila il frame del menu del pannello principale della barra multifunzione.|  
|[CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup](../Topic/CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup.md)||  
|[CMFCVisualManager::OnFillSplitterBackground](../Topic/CMFCVisualManager::OnFillSplitterBackground.md)|Chiamato dal framework quando si riempie lo sfondo di una finestra divisa.|  
|[CMFCVisualManager::OnFillTab](../Topic/CMFCVisualManager::OnFillTab.md)|Chiamato dal framework quando si riempie lo sfondo di una scheda.|  
|[CMFCVisualManager::OnFillTasksGroupInterior](../Topic/CMFCVisualManager::OnFillTasksGroupInterior.md)|Chiamato dal framework quando si riempie l'interno di un oggetto [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) su [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md).|  
|[CMFCVisualManager::OnFillTasksPaneBackground](../Topic/CMFCVisualManager::OnFillTasksPaneBackground.md)|Chiamato dal framework quando si riempie lo sfondo di un controllo `CMFCTasksPane`.|  
|[CMFCVisualManager::OnHighlightMenuItem](../Topic/CMFCVisualManager::OnHighlightMenuItem.md)|Chiamato dal framework quando si disegna una voce di menu evidenziata.|  
|[CMFCVisualManager::OnHighlightRarelyUsedMenuItems](../Topic/CMFCVisualManager::OnHighlightRarelyUsedMenuItems.md)|Chiamato dal framework quando si disegna una voce di menu evidenziata e utilizzata raramente.|  
|[CMFCVisualManager::OnNcPaint](../Topic/CMFCVisualManager::OnNcPaint.md)|Chiamato dal framework quando si disegna l'area non client.|  
|[CMFCVisualManager::OnSetWindowRegion](../Topic/CMFCVisualManager::OnSetWindowRegion.md)|Chiamato dal framework quando si imposta un'area che contiene i frame e menu di scelta rapida.|  
|[CMFCVisualManager::OnUpdateSystemColors](../Topic/CMFCVisualManager::OnUpdateSystemColors.md)|Chiamato dal framework quando si modifica l'impostazione di colore di sistema.|  
|[CMFCVisualManager::RedrawAll](../Topic/CMFCVisualManager::RedrawAll.md)|Ridisegna tutte le barre di controllo nell'applicazione.|  
|[CMFCVisualManager::RibbonCategoryColorToRGB](../Topic/CMFCVisualManager::RibbonCategoryColorToRGB.md)||  
|[CMFCVisualManager::SetDefaultManager](../Topic/CMFCVisualManager::SetDefaultManager.md)|Imposta il gestore visualizzazione predefinito.|  
|[CMFCVisualManager::SetEmbossDisabledImage](../Topic/CMFCVisualManager::SetEmbossDisabledImage.md)|Abilita o disabilita la modalità impressa per le immagini disabilitate della barra degli strumenti.|  
|[CMFCVisualManager::SetFadeInactiveImage](../Topic/CMFCVisualManager::SetFadeInactiveImage.md)|Abilita o disabilita l'effetto della luce per le immagini inattive in un menu o una barra degli strumenti.|  
|[CMFCVisualManager::SetMenuFlatLook](../Topic/CMFCVisualManager::SetMenuFlatLook.md)|Impostare un flag che indica se i pulsanti di menu di applicazioni presentano un aspetto bidimensionale.|  
|[CMFCVisualManager::SetMenuShadowDepth](../Topic/CMFCVisualManager::SetMenuShadowDepth.md)|Imposta la larghezza e l'altezza dell'ombreggiatura il menu.|  
|[CMFCVisualManager::SetShadowHighlightedImage](../Topic/CMFCVisualManager::SetShadowHighlightedImage.md)|Impostare un flag che indica se visualizzare ombreggiatura quando esegue il rendering delle immagini evidenziate.|  
  
## Note  
 Poiché la classe `CMFCVisualManager` controlla il GUI dell'applicazione, ciascuna applicazione può avere un'istanza `CMFCVisualManager`, o un'istanza di una classe derivata da `CMFCVisualManager`.  L'applicazione può inoltre essere eseguita senza `CMFCVisualManager`.  Utilizzare il metodo statico `GetInstance` per ottenere un puntatore a `CMFCVisualManager`corrente oggetto derivato da.  
  
 Per modificare l'aspetto dell'applicazione è necessario utilizzare altre classi che forniscono metodi per visualizzare tutti gli elementi visivi dell'applicazione.  Alcuni esempi di queste classi sono [CMFCVisualManagerOfficeXP Class](../../mfc/reference/cmfcvisualmanagerofficexp-class.md), [CMFCVisualManagerOffice2003 Class](../../mfc/reference/cmfcvisualmanageroffice2003-class.md)e [CMFCVisualManagerOffice2007 Class](../../mfc/reference/cmfcvisualmanageroffice2007-class.md).  Quando si desidera modificare l'aspetto dell'applicazione, passare uno di questi gestori visualizzazione nel metodo `SetDefaultManager`.  Per un esempio che illustra come l'applicazione può riprodurre l'aspetto di Microsoft Office 2003, vedere [CMFCVisualManagerOffice2003 Class](../../mfc/reference/cmfcvisualmanageroffice2003-class.md).  
  
 Tutti i metodi di disegno sono virtuali.  Questo consente di creare uno stile di visualizzazione personalizzata per il GUI dell'applicazione.  Se si desidera creare un stile di visualizzazione, derivare una classe da una delle classi dei gestori visualizzazione ed eseguire l'override dei metodi di disegno che si desidera modificare.  
  
## Esempio  
 In questo esempio viene illustrato come creare un'istanza degli oggetti `CMFCVisualManager` personalizzate e standard.  
  
```  
void CMFCSkinsApp::SetSkin (int iIndex)  
{   // destroy the current visual manager  
   if (CMFCVisualManager::GetInstance () != NULL)  
   {  
      delete CMFCVisualManager::GetInstance ();  
   }  
   switch (iIndex)  
  {  
   case 0:  
      CMFCVisualManager::GetInstance (); // create the standard visual manager  
      break;  
   case 1:  
      new CMyVisualManager (); // create the first custom visual manager  
      break;  
   case 2:  
      new CMacStyle ();  // create the second custom visual manager  
      break;  
   }  
  
   // access the manager and set it properly  
   CMFCVisualManager::GetInstance ()->SetLook2000 ();  
   CMFCVisualManager::GetInstance ()->RedrawAll ();  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene illustrato come recuperare i valori predefiniti di un oggetto `CMFCVisualManager`.  Questo frammento di codice fa parte [Esempio di riquadro attività](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_TasksPane#1](../../mfc/reference/codesnippet/CPP/cmfcvisualmanager-class_1.h)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
 [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)  
  
## Requisiti  
 **intestazione:** afxvisualmanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCVisualManager::GetInstance](../Topic/CMFCVisualManager::GetInstance.md)   
 [Gestione visualizzazione](../../mfc/visualization-manager.md)