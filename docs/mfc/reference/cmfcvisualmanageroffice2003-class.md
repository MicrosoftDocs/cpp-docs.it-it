---
title: "CMFCVisualManagerOffice2003 Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCVisualManagerOffice2003"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCVisualManagerOffice2003 class"
ms.assetid: 115482cd-e349-450a-8dc4-c6023d092aab
caps.latest.revision: 31
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 33
---
# CMFCVisualManagerOffice2003 Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CMFCVisualManagerOffice2003` fornisce a un'applicazione un aspetto di Microsoft Office 2003.  
  
## Sintassi  
  
```  
class CMFCVisualManagerOffice2003 : public CMFCVisualManagerOfficeXP  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCVisualManagerOffice2003::DrawComboBorderWinXP](../Topic/CMFCVisualManagerOffice2003::DrawComboBorderWinXP.md)|Estrae il bordo della casella combinata utilizzando il tema corrente di Windows XP.  \(Override [CMFCVisualManager::DrawComboBorderWinXP](../Topic/CMFCVisualManager::DrawComboBorderWinXP.md)\).|  
|[CMFCVisualManagerOffice2003::DrawComboDropButtonWinXP](../Topic/CMFCVisualManagerOffice2003::DrawComboDropButtonWinXP.md)|Estrae un pulsante a discesa della casella combinata utilizzando il tema corrente di Windows XP.  \(Override [CMFCVisualManager::DrawComboDropButtonWinXP](../Topic/CMFCVisualManager::DrawComboDropButtonWinXP.md)\).|  
|[CMFCVisualManagerOffice2003::DrawCustomizeButton](../Topic/CMFCVisualManagerOffice2003::DrawCustomizeButton.md)|Estrae un pulsante di personalizzare.|  
|[CMFCVisualManagerOffice2003::DrawPushButtonWinXP](../Topic/CMFCVisualManagerOffice2003::DrawPushButtonWinXP.md)|Estrae un pulsante di comando utilizzando il tema corrente di Windows XP.  \(Override [CMFCVisualManager::DrawPushButtonWinXP](../Topic/CMFCVisualManager::DrawPushButtonWinXP.md)\).|  
|[CMFCVisualManagerOffice2003::GetBaseThemeColor](../Topic/CMFCVisualManagerOffice2003::GetBaseThemeColor.md)|Ottiene il colore di base del tema.|  
|[CMFCVisualManagerOffice2003::GetHighlightMenuItemColor](../Topic/CMFCVisualManagerOffice2003::GetHighlightMenuItemColor.md)|Ottiene il colore utilizzato per la voce di menu evidenziata.|  
|[CMFCVisualManagerOffice2003::GetPropertyGridGroupColor](../Topic/CMFCVisualManagerOffice2003::GetPropertyGridGroupColor.md)|Il framework chiama questo metodo per ottenere il colore di sfondo di un elenco.  \(Override `CMFCVisualManagerOfficeXP::GetPropertyGridGroupColor`\).|  
|[CMFCVisualManagerOffice2003::GetPropertyGridGroupTextColor](../Topic/CMFCVisualManagerOffice2003::GetPropertyGridGroupTextColor.md)|Il framework chiama questo metodo per recuperare il colore del testo di un elenco.  \(Override `CMFCVisualManagerOfficeXP::GetPropertyGridGroupTextColor`\).|  
|[CMFCVisualManagerOffice2003::GetShowAllMenuItemsHeight](../Topic/CMFCVisualManagerOffice2003::GetShowAllMenuItemsHeight.md)|Restituisce l'altezza di tutte le voci di menu.  \(Override [CMFCVisualManager::GetShowAllMenuItemsHeight](../Topic/CMFCVisualManager::GetShowAllMenuItemsHeight.md)\).|  
|[CMFCVisualManagerOffice2003::GetSmartDockingBaseGuideColors](../Topic/CMFCVisualManagerOffice2003::GetSmartDockingBaseGuideColors.md)|Imposta il colore di sfondo specificato e del bordo del gruppo di base.  \(Override `CMFCVisualManagerOfficeXP::GetSmartDockingBaseGuideColors`\).|  
|[CMFCVisualManagerOffice2003::GetSmartDockingHighlightToneColor](../Topic/CMFCVisualManagerOffice2003::GetSmartDockingHighlightToneColor.md)|Ottiene il colore di tono di evidenziazione.  \(Override [CMFCVisualManager::GetSmartDockingHighlightToneColor](../Topic/CMFCVisualManager::GetSmartDockingHighlightToneColor.md)\).|  
|[CMFCVisualManagerOffice2003::GetTabFrameColors](../Topic/CMFCVisualManagerOffice2003::GetTabFrameColors.md)|Il framework chiama la funzione quando deve recuperare il set di colori per disegnare una finestra della scheda.  \(Override [CMFCVisualManager::GetTabFrameColors](../Topic/CMFCVisualManager::GetTabFrameColors.md)\).|  
|[CMFCVisualManagerOffice2003::GetToolBarCustomizeButtonMargin](../Topic/CMFCVisualManagerOffice2003::GetToolBarCustomizeButtonMargin.md)|Ottiene il margine della barra degli strumenti personalizzazione del pulsante.  \(Override `CMFCVisualManager::GetToolBarCustomizeButtonMargin`\).|  
|[CMFCVisualManagerOffice2003::GetToolbarDisabledColor](../Topic/CMFCVisualManagerOffice2003::GetToolbarDisabledColor.md)|Ottiene il colore disabilitato per la barra degli strumenti.  \(Override `CMFCVisualManager::GetToolbarDisabledColor`\).|  
|[CMFCVisualManagerOffice2003::GetToolTipInfo](../Topic/CMFCVisualManagerOffice2003::GetToolTipInfo.md)|Chiamato dal framework per ottenere informazioni di descrizione comandi.  \(Override [CMFCVisualManager::GetToolTipInfo](../Topic/CMFCVisualManager::GetToolTipInfo.md)\).|  
|[CMFCVisualManagerOffice2003::IsDefaultWinXPColorsEnabled](../Topic/CMFCVisualManagerOffice2003::IsDefaultWinXPColorsEnabled.md)|Indica se il gestore visualizzazione utilizza i colori dei temi di Windows XP nativi.|  
|[CMFCVisualManagerOffice2003::IsDockingTabHasBorder](../Topic/CMFCVisualManagerOffice2003::IsDockingTabHasBorder.md)|Restituisce se il gestore visualizzazione corrente disegna i bordi attorno ai riquadri che sono ancorati e a schede.  \(Override [CMFCVisualManager::IsDockingTabHasBorder](../Topic/CMFCVisualManager::IsDockingTabHasBorder.md)\).|  
|[CMFCVisualManagerOffice2003::IsHighlightOneNoteTabs](../Topic/CMFCVisualManagerOffice2003::IsHighlightOneNoteTabs.md)|Indica se le schede di OneNote dovrebbero essere evidenziate.  \(Override `CMFCVisualManager::IsHighlightOneNoteTabs`\).|  
|[CMFCVisualManagerOffice2003::IsOffsetPressedButton](../Topic/CMFCVisualManagerOffice2003::IsOffsetPressedButton.md)|Chiamato dal framework quando viene disegnato un pulsante della barra degli strumenti.  \(Override `CMFCVisualManager::IsOffsetPressedButton`\).|  
|[CMFCVisualManagerOffice2003::IsStatusBarOfficeXPLook](../Topic/CMFCVisualManagerOffice2003::IsStatusBarOfficeXPLook.md)|Indica se esiste una barra di stato con un aspetto di Office XP.|  
|[CMFCVisualManagerOffice2003::IsToolbarRoundShape](../Topic/CMFCVisualManagerOffice2003::IsToolbarRoundShape.md)|Indica se una barra degli strumenti specificata è una forma rotonda.  \(Override [CMFCVisualManager::IsToolbarRoundShape](../Topic/CMFCVisualManager::IsToolbarRoundShape.md)\).|  
|[CMFCVisualManagerOffice2003::IsUseGlobalTheme](../Topic/CMFCVisualManagerOffice2003::IsUseGlobalTheme.md)|Indica se un tema globale di Windows XP viene utilizzato.|  
|[CMFCVisualManagerOffice2003::IsWindowsThemingSupported](../Topic/CMFCVisualManagerOffice2003::IsWindowsThemingSupported.md)|Indica se le finestre che theming è supportata.  \(Override [CMFCVisualManager::IsWindowsThemingSupported](../Topic/CMFCVisualManager::IsWindowsThemingSupported.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di un pulsante Nascondi automaticamente.  \(Override [CMFCVisualManager::OnDrawAutoHideButtonBorder](../Topic/CMFCVisualManager::OnDrawAutoHideButtonBorder.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawBarGripper](../Topic/CMFCVisualManagerOffice2003::OnDrawBarGripper.md)|Chiamato dal framework quando si estrae la pinza di controllo per una barra di controllo.  \(Override `CMFCVisualManagerOfficeXP::OnDrawBarGripper`\).|  
|[CMFCVisualManagerOffice2003::OnDrawBrowseButton](../Topic/CMFCVisualManagerOffice2003::OnDrawBrowseButton.md)|Il framework chiama questo metodo quando si estrae il pulsante sfoglia per un controllo di modifica.  \(Override `CMFCVisualManagerOfficeXP::OnDrawBrowseButton`\).|  
|[CMFCVisualManagerOffice2003::OnDrawButtonBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawButtonBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di un pulsante della barra degli strumenti.  \(Override `CMFCVisualManagerOfficeXP::OnDrawButtonBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawCaptionBarBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawCaptionBarBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di un oggetto di [Classe CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md).  \(Override [CMFCVisualManager::OnDrawCaptionBarBorder](../Topic/CMFCVisualManager::OnDrawCaptionBarBorder.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawCheckBoxEx](../Topic/CMFCVisualManagerOffice2003::OnDrawCheckBoxEx.md)|Il framework chiama questo metodo quando si estrae una casella di controllo.  \(Override [CMFCVisualManager::OnDrawCheckBoxEx](../Topic/CMFCVisualManager::OnDrawCheckBoxEx.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawComboBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawComboBorder.md)|Il framework chiama questo metodo quando si estrae il bordo attorno a un oggetto di [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawComboBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawComboDropButton](../Topic/CMFCVisualManagerOffice2003::OnDrawComboDropButton.md)|Il framework chiama questo metodo quando si estrae il pulsante di selezione di [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawComboDropButton`\).|  
|[CMFCVisualManagerOffice2003::OnDrawControlBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawControlBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di un controllo.  \(Override [CMFCVisualManager::OnDrawControlBorder](../Topic/CMFCVisualManager::OnDrawControlBorder.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawExpandingBox](../Topic/CMFCVisualManagerOffice2003::OnDrawExpandingBox.md)|Il framework chiama questo metodo quando si estrae una casella espandibile.  \(Override [CMFCVisualManager::OnDrawExpandingBox](../Topic/CMFCVisualManager::OnDrawExpandingBox.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawHeaderCtrlBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawHeaderCtrlBorder.md)|Il framework chiama questo metodo quando si estrae il bordo attorno a un'istanza di [CMFCHeaderCtrl Class](../../mfc/reference/cmfcheaderctrl-class.md).  \(Override [CMFCVisualManager::OnDrawHeaderCtrlBorder](../Topic/CMFCVisualManager::OnDrawHeaderCtrlBorder.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawMenuBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawMenuBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawMenuBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawOutlookBarSplitter](../Topic/CMFCVisualManagerOffice2003::OnDrawOutlookBarSplitter.md)|Il framework chiama questo metodo quando si estrae il separatore per una barra di Outlook.  \(Override[CMFCVisualManager::OnDrawOutlookBarSplitter](../Topic/CMFCVisualManager::OnDrawOutlookBarSplitter.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawOutlookPageButtonBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawOutlookPageButtonBorder.md)|Chiamato dal framework quando si estrae il bordo di un pulsante della pagina di Outlook.  \(Override [CMFCVisualManager::OnDrawOutlookPageButtonBorder](../Topic/CMFCVisualManager::OnDrawOutlookPageButtonBorder.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawPaneBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawPaneBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di un oggetto di [CPane Class](../../mfc/reference/cpane-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawPaneBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawPaneCaption](../Topic/CMFCVisualManagerOffice2003::OnDrawPaneCaption.md)|Il framework chiama questo metodo quando si estrae una didascalia per un oggetto di [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawPaneCaption`\).|  
|[CMFCVisualManagerOffice2003::OnDrawPopupWindowBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawPopupWindowBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di una finestra popup.  \(Override `CMFCVisualManagerOfficeXP::OnDrawPopupWindowBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawPopupWindowButtonBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawPopupWindowButtonBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di un pulsante in una finestra popup.  \(Override `CMFCVisualManagerOfficeXP::OnDrawPopupWindowButtonBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawPopupWindowCaption](../Topic/CMFCVisualManagerOffice2003::OnDrawPopupWindowCaption.md)|Il framework chiama questo metodo quando si estrae la barra del titolo di una finestra popup.  \(Override `CMFCVisualManagerOfficeXP::OnDrawPopupWindowCaption`\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonButtonsGroup](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonButtonsGroup.md)|Il framework chiama questo metodo quando si estrae un gruppo di pulsanti della barra multifunzione.  \(Override [CMFCVisualManager::OnDrawRibbonButtonsGroup](../Topic/CMFCVisualManager::OnDrawRibbonButtonsGroup.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonCategoryCaption](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonCategoryCaption.md)|Il framework chiama questo metodo quando si estrae la didascalia per una categoria della barra multifunzione.  \(Override [CMFCVisualManager::OnDrawRibbonCategoryCaption](../Topic/CMFCVisualManager::OnDrawRibbonCategoryCaption.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonCategoryTab](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonCategoryTab.md)|Il framework chiama questo metodo quando si estrae la scheda per una categoria della barra multifunzione.  \(Override [CMFCVisualManager::OnDrawRibbonCategoryTab](../Topic/CMFCVisualManager::OnDrawRibbonCategoryTab.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonProgressBar](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonProgressBar.md)|Il framework chiama questo metodo quando vengono [CMFCRibbonProgressBar Class](../../mfc/reference/cmfcribbonprogressbar-class.md).  \(Override [CMFCVisualManager::OnDrawRibbonProgressBar](../Topic/CMFCVisualManager::OnDrawRibbonProgressBar.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonQuickAccessToolBarSeparator](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonQuickAccessToolBarSeparator.md)|Il framework chiama questo metodo quando si estrae un separatore sulla barra di accesso rapido della barra multifunzione.  \(Override `CMFCVisualManagerOfficeXP::OnDrawRibbonQuickAccessToolBarSeparator`\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonSliderChannel](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonSliderChannel.md)|Il framework chiama questo metodo quando si estrae il canale di [CMFCRibbonSlider Class](../../mfc/reference/cmfcribbonslider-class.md).  \(Override [CMFCVisualManager::OnDrawRibbonSliderChannel](../Topic/CMFCVisualManager::OnDrawRibbonSliderChannel.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonSliderThumb](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonSliderThumb.md)|Il framework chiama questo metodo quando si estrae il cursore di un oggetto di [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md).  \(Override [CMFCVisualManager::OnDrawRibbonSliderThumb](../Topic/CMFCVisualManager::OnDrawRibbonSliderThumb.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonSliderZoomButton](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonSliderZoomButton.md)|Il framework chiama questo metodo quando si estrae i pulsanti dello zoom per un oggetto di [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md).  \(Override [CMFCVisualManager::OnDrawRibbonSliderZoomButton](../Topic/CMFCVisualManager::OnDrawRibbonSliderZoomButton.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawRibbonStatusBarPane](../Topic/CMFCVisualManagerOffice2003::OnDrawRibbonStatusBarPane.md)|Il framework chiama questo metodo quando si estrae un riquadro nella barra di stato.  \(Override `CMFCVisualManagerOfficeXP::OnDrawRibbonStatusBarPane`\).|  
|[CMFCVisualManagerOffice2003::OnDrawScrollButtons](../Topic/CMFCVisualManagerOffice2003::OnDrawScrollButtons.md)|Il framework chiama questo metodo quando si estrae i pulsanti di scorrimento.  \(Override `CMFCVisualManagerOfficeXP::OnDrawScrollButtons`\).|  
|[CMFCVisualManagerOffice2003::OnDrawSeparator](../Topic/CMFCVisualManagerOffice2003::OnDrawSeparator.md)|Il framework chiama questo metodo quando si estrae un separatore.  \(Override `CMFCVisualManagerOfficeXP::OnDrawSeparator`\).|  
|[CMFCVisualManagerOffice2003::OnDrawShowAllMenuItems](../Topic/CMFCVisualManagerOffice2003::OnDrawShowAllMenuItems.md)|Il framework chiama questo metodo quando si estrae tutti gli elementi in un menu.  \(Override [CMFCVisualManager::OnDrawShowAllMenuItems](../Topic/CMFCVisualManager::OnDrawShowAllMenuItems.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawStatusBarPaneBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawStatusBarPaneBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di un oggetto di [CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawStatusBarPaneBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawStatusBarProgress](../Topic/CMFCVisualManagerOffice2003::OnDrawStatusBarProgress.md)|Il framework chiama questo metodo quando si estrae l'indicatore di stato sull'oggetto di [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md).  \(Override [CMFCVisualManager::OnDrawStatusBarProgress](../Topic/CMFCVisualManager::OnDrawStatusBarProgress.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawStatusBarSizeBox](../Topic/CMFCVisualManagerOffice2003::OnDrawStatusBarSizeBox.md)|Il framework chiama questo metodo quando si estrae la casella di dimensioni per [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md).  \(Override [CMFCVisualManager::OnDrawStatusBarSizeBox](../Topic/CMFCVisualManager::OnDrawStatusBarSizeBox.md)\).|  
|[CMFCVisualManagerOffice2003::OnDrawTab](../Topic/CMFCVisualManagerOffice2003::OnDrawTab.md)|Il framework chiama questo metodo quando si estrae le schede per un oggetto di [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawTab`\).|  
|[CMFCVisualManagerOffice2003::OnDrawTabsButtonBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawTabsButtonBorder.md)|Il framework chiama questo metodo quando si estrae il bordo di un pulsante della scheda.  \(Override `CMFCVisualManagerOfficeXP::OnDrawTabsButtonBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawTask](../Topic/CMFCVisualManagerOffice2003::OnDrawTask.md)|Il framework chiama questo metodo quando viene disegnato un oggetto di [CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawTask`\).|  
|[CMFCVisualManagerOffice2003::OnDrawTasksGroupAreaBorder](../Topic/CMFCVisualManagerOffice2003::OnDrawTasksGroupAreaBorder.md)|Il framework chiama questo metodo quando viene disegnato un bordo intorno a un gruppo in un oggetto di [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawTasksGroupAreaBorder`\).|  
|[CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption](../Topic/CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption.md)|Il framework chiama questo metodo quando si estrae la didascalia per un oggetto di [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawTasksGroupCaption`\).|  
|[CMFCVisualManagerOffice2003::OnDrawTearOffCaption](../Topic/CMFCVisualManagerOffice2003::OnDrawTearOffCaption.md)|Il framework chiama questo metodo quando si estrae la didascalia per un oggetto di [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnDrawTearOffCaption`\).|  
|[CMFCVisualManagerOffice2003::OnErasePopupWindowButton](../Topic/CMFCVisualManagerOffice2003::OnErasePopupWindowButton.md)|Il framework chiama questo metodo quando si elimina un pulsante in una finestra popup.  \(Override `CMFCVisualManagerOfficeXP::OnErasePopupWindowButton`\).|  
|[CMFCVisualManagerOffice2003::OnEraseTabsArea](../Topic/CMFCVisualManagerOffice2003::OnEraseTabsArea.md)|Il framework chiama questo metodo quando si elimina l'area di una finestra della scheda.  \(Override `CMFCVisualManagerOfficeXP::OnEraseTabsArea`\).|  
|[CMFCVisualManagerOffice2003::OnEraseTabsButton](../Topic/CMFCVisualManagerOffice2003::OnEraseTabsButton.md)|Il framework chiama questo metodo quando cancella il testo e l'icona di un pulsante della scheda.  \(Override `CMFCVisualManagerOfficeXP::OnEraseTabsButton`\).|  
|[CMFCVisualManagerOffice2003::OnEraseTabsFrame](../Topic/CMFCVisualManagerOffice2003::OnEraseTabsFrame.md)|Il framework chiama questo metodo quando si elimina un frame su [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md).  \(Override [CMFCVisualManager::OnEraseTabsFrame](../Topic/CMFCVisualManager::OnEraseTabsFrame.md)\).|  
|[CMFCVisualManagerOffice2003::OnFillAutoHideButtonBackground](../Topic/CMFCVisualManagerOffice2003::OnFillAutoHideButtonBackground.md)|Il framework chiama questo metodo quando si riempie lo sfondo di un pulsante Nascondi automaticamente.  \(Override [CMFCVisualManager::OnFillAutoHideButtonBackground](../Topic/CMFCVisualManager::OnFillAutoHideButtonBackground.md)\).|  
|[CMFCVisualManagerOffice2003::OnFillBarBackground](../Topic/CMFCVisualManagerOffice2003::OnFillBarBackground.md)|Il framework chiama questo metodo quando si riempie lo sfondo di un oggetto di [CBasePane Class](../../mfc/reference/cbasepane-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnFillBarBackground`\).|  
|[CMFCVisualManagerOffice2003::OnFillButtonInterior](../Topic/CMFCVisualManagerOffice2003::OnFillButtonInterior.md)|Il framework chiama questo metodo quando si riempie lo sfondo di un pulsante della barra degli strumenti.  \(Override `CMFCVisualManagerOfficeXP::OnFillButtonInterior`\).|  
|[CMFCVisualManagerOffice2003::OnFillCommandsListBackground](../Topic/CMFCVisualManagerOffice2003::OnFillCommandsListBackground.md)|Il framework chiama questo metodo quando si riempie lo sfondo di un pulsante della barra degli strumenti che appartiene a un elenco di comando.  \(Override `CMFCVisualManagerOfficeXP::OnFillCommandsListBackground`\).|  
|[CMFCVisualManagerOffice2003::OnFillHeaderCtrlBackground](../Topic/CMFCVisualManagerOffice2003::OnFillHeaderCtrlBackground.md)|Il framework chiama questo metodo quando si riempie lo sfondo di un controllo intestazione.  \(Override [CMFCVisualManager::OnFillHeaderCtrlBackground](../Topic/CMFCVisualManager::OnFillHeaderCtrlBackground.md)\).|  
|[CMFCVisualManagerOffice2003::OnFillHighlightedArea](../Topic/CMFCVisualManagerOffice2003::OnFillHighlightedArea.md)|Il framework chiama questo metodo quando si riempie l'area evidenziata di un pulsante della barra degli strumenti.  \(Override `CMFCVisualManagerOfficeXP::OnFillHighlightedArea`\).|  
|[CMFCVisualManagerOffice2003::OnFillOutlookBarCaption](../Topic/CMFCVisualManagerOffice2003::OnFillOutlookBarCaption.md)|Il framework chiama questo metodo quando si riempie lo sfondo della didascalia di Outlook.  \(Override [CMFCVisualManager::OnFillOutlookBarCaption](../Topic/CMFCVisualManager::OnFillOutlookBarCaption.md)\).|  
|[CMFCVisualManagerOffice2003::OnFillOutlookPageButton](../Topic/CMFCVisualManagerOffice2003::OnFillOutlookPageButton.md)|Il framework chiama questo metodo quando si riempie l'interno di un pulsante della pagina di Outlook.  \(Override [CMFCVisualManager::OnFillOutlookPageButton](../Topic/CMFCVisualManager::OnFillOutlookPageButton.md)\).|  
|[CMFCVisualManagerOffice2003::OnFillPopupWindowBackground](../Topic/CMFCVisualManagerOffice2003::OnFillPopupWindowBackground.md)|Il framework chiama questo metodo quando si riempie lo sfondo di una finestra popup.  \(Override `CMFCVisualManagerOfficeXP::OnFillPopupWindowBackground`\).|  
|[CMFCVisualManagerOffice2003::OnFillTab](../Topic/CMFCVisualManagerOffice2003::OnFillTab.md)|Il framework chiama questo metodo quando si riempie lo sfondo di una finestra della scheda.  \(Override `CMFCVisualManagerOfficeXP::OnFillTab`\).|  
|[CMFCVisualManagerOffice2003::OnFillTasksGroupInterior](../Topic/CMFCVisualManagerOffice2003::OnFillTasksGroupInterior.md)|Il framework chiama questo metodo quando si riempie l'interno di un oggetto di [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md).  \(Override `CMFCVisualManagerOfficeXP::OnFillTasksGroupInterior`\).|  
|[CMFCVisualManagerOffice2003::OnFillTasksPaneBackground](../Topic/CMFCVisualManagerOffice2003::OnFillTasksPaneBackground.md)|Il framework chiama questo metodo quando si riempie lo sfondo di un controllo di [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md).  \(Override [CMFCVisualManager::OnFillTasksPaneBackground](../Topic/CMFCVisualManager::OnFillTasksPaneBackground.md)\).|  
|[CMFCVisualManagerOffice2003::OnHighlightQuickCustomizeMenuButton](../Topic/CMFCVisualManagerOffice2003::OnHighlightQuickCustomizeMenuButton.md)|Il framework chiama questo metodo quando viene disegnato un evidenziato presente personalizzare il pulsante del menu.  \(Override `CMFCVisualManagerOfficeXP::OnHighlightQuickCustomizeMenuButton`\).|  
|[CMFCVisualManagerOffice2003::OnHighlightRarelyUsedMenuItems](../Topic/CMFCVisualManagerOffice2003::OnHighlightRarelyUsedMenuItems.md)|Il framework chiama questo metodo quando viene disegnato un comando di menu evidenziato.  \(Override `CMFCVisualManagerOfficeXP::OnHighlightRarelyUsedMenuItems`\).|  
|[CMFCVisualManagerOffice2003::OnUpdateSystemColors](../Topic/CMFCVisualManagerOffice2003::OnUpdateSystemColors.md)|Il framework chiama la funzione quando la modifica di colori di sistema.  \(Override `CMFCVisualManagerOfficeXP::OnUpdateSystemColors`\).|  
|[CMFCVisualManagerOffice2003::SetDefaultWinXPColors](../Topic/CMFCVisualManagerOffice2003::SetDefaultWinXPColors.md)|Specifica se il gestore visualizzazione deve utilizzare nativi temi di Windows XP i colori o colori ottenuti da [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371).|  
|[CMFCVisualManagerOffice2003::SetStatusBarOfficeXPLook](../Topic/CMFCVisualManagerOffice2003::SetStatusBarOfficeXPLook.md)|Specifica che il tema globale di Windows XP deve essere utilizzato.|  
|[CMFCVisualManagerOffice2003::SetUseGlobalTheme](../Topic/CMFCVisualManagerOffice2003::SetUseGlobalTheme.md)|Specifica se il gestore visualizzazione utilizza un tema globale.|  
  
## Note  
 Utilizza la classe di `CMFCVisualManagerOffice2003` per modificare l'aspetto visivo dell'applicazione simile a Microsoft Office 2003.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come impostare il gestore visualizzazione 2003 l'ufficio.  Questo frammento di codice fa parte di [Esempio di demo del desktop](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#6](../../mfc/reference/codesnippet/CPP/cmfcvisualmanageroffice2003-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
 [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)  
  
 [CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)  
  
 [CMFCVisualManagerOffice2003](../../mfc/reference/cmfcvisualmanageroffice2003-class.md)  
  
## Requisiti  
 **Intestazione:** afxvisualmanageroffice2003.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)   
 [CMFCVisualManagerOfficeXP Class](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)   
 [CMFCVisualManagerWindows Class](../../mfc/reference/cmfcvisualmanagerwindows-class.md)   
 [CMFCVisualManager::SetDefaultManager](../Topic/CMFCVisualManager::SetDefaultManager.md)