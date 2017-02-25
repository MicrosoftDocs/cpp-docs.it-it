---
title: "CMFCRibbonBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonBar class"
ms.assetid: a65d06fa-1a28-4cc0-8971-bc9d7c9198fe
caps.latest.revision: 41
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 43
---
# CMFCRibbonBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCRibbonBar` implementa una barra multifunzione analoga a quella usata in Office 2007.  
  
## Sintassi  
  
```  
class CMFCRibbonBar : public CPane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonBar::CMFCRibbonBar`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonBar::ActivateContextCategory](../Topic/CMFCRibbonBar::ActivateContextCategory.md)|Attiva una categoria contesto già visibile.|  
|[CMFCRibbonBar::AddCategory](../Topic/CMFCRibbonBar::AddCategory.md)|Aggiunge una nuova categoria della barra multifunzione alla barra multifunzione.|  
|[CMFCRibbonBar::AddContextCategory](../Topic/CMFCRibbonBar::AddContextCategory.md)|Aggiunge una categoria contesto.|  
|[CMFCRibbonBar::AddMainCategory](../Topic/CMFCRibbonBar::AddMainCategory.md)|Aggiunge una nuova categoria principale della barra multifunzione.|  
|[CMFCRibbonBar::AddPrintPreviewCategory](../Topic/CMFCRibbonBar::AddPrintPreviewCategory.md)||  
|[CMFCRibbonBar::AddQATOnlyCategory](../Topic/CMFCRibbonBar::AddQATOnlyCategory.md)||  
|[CMFCRibbonBar::AddToTabs](../Topic/CMFCRibbonBar::AddToTabs.md)|Aggiunge un elemento della barra multifunzione al lato destro di una barra multifunzione.|  
|[CMFCRibbonBar::CreateEx](../Topic/CMFCRibbonBar::CreateEx.md)|Crea una barra di controllo e la collega all'oggetto [CPane](../../mfc/reference/cpane-class.md).  Esegue l'override di [CPane::CreateEx](../Topic/CPane::CreateEx.md).|  
|[CMFCRibbonBar::Create](../Topic/CMFCRibbonBar::Create.md)|Crea un controllo della barra multifunzione e lo collega a una barra multifunzione.|  
|[CMFCRibbonBar::DeactivateKeyboardFocus](../Topic/CMFCRibbonBar::DeactivateKeyboardFocus.md)||  
|[CMFCRibbonBar::DrawMenuImage](../Topic/CMFCRibbonBar::DrawMenuImage.md)||  
|[CMFCRibbonBar::DWMCompositionChanged](../Topic/CMFCRibbonBar::DWMCompositionChanged.md)||  
|[CMFCRibbonBar::EnableKeyTips](../Topic/CMFCRibbonBar::EnableKeyTips.md)|Abilita o disabilita i suggerimenti tasto di scelta per il controllo della barra multifunzione.|  
|[CMFCRibbonBar::EnablePrintPreview](../Topic/CMFCRibbonBar::EnablePrintPreview.md)|Abilita la scheda **Anteprima di stampa**.|  
|[CMFCRibbonBar::EnableToolTips](../Topic/CMFCRibbonBar::EnableToolTips.md)|Abilita o disabilita le descrizioni comando sulla barra multifunzione.|  
|[CMFCRibbonBar::FindByData](../Topic/CMFCRibbonBar::FindByData.md)|Trova un elemento della barra multifunzione usando i dati specificati da un utente.|  
|[CMFCRibbonBar::FindByID](../Topic/CMFCRibbonBar::FindByID.md)|Trova un elemento della barra multifunzione con l'ID di comando specificato.|  
|[CMFCRibbonBar::FindCategoryIndexByData](../Topic/CMFCRibbonBar::FindCategoryIndexByData.md)|Trova l'indice della categoria della barra multifunzione che contiene i dati definiti dall'utente.|  
|[CMFCRibbonBar::ForceRecalcLayout](../Topic/CMFCRibbonBar::ForceRecalcLayout.md)||  
|[CMFCRibbonBar::GetActiveCategory](../Topic/CMFCRibbonBar::GetActiveCategory.md)|Ottiene un puntatore per una categoria attiva.|  
|[CMFCRibbonBar::GetCaptionHeight](../Topic/CMFCRibbonBar::GetCaptionHeight.md)|Restituisce l'altezza della didascalia.  Esegue l'override di [CBasePane::GetCaptionHeight](../Topic/CBasePane::GetCaptionHeight.md).|  
|[CMFCRibbonBar::GetCategory](../Topic/CMFCRibbonBar::GetCategory.md)|Ottiene il puntatore a una categoria che si trova in corrispondenza dell'indice specificato.|  
|[CMFCRibbonBar::GetCategoryCount](../Topic/CMFCRibbonBar::GetCategoryCount.md)|Ottiene il numero delle categorie della barra multifunzione nella barra multifunzione.|  
|[CMFCRibbonBar::GetCategoryHeight](../Topic/CMFCRibbonBar::GetCategoryHeight.md)||  
|[CMFCRibbonBar::GetCategoryIndex](../Topic/CMFCRibbonBar::GetCategoryIndex.md)|Restituisce l'indice di una categoria della barra multifunzione.|  
|[CMFCRibbonBar::GetContextName](../Topic/CMFCRibbonBar::GetContextName.md)|Recupera il nome della didascalia della categoria contesto specificata mediante un ID.|  
|[CMFCRibbonBar::GetDroppedDown](../Topic/CMFCRibbonBar::GetDroppedDown.md)||  
|[CMFCRibbonBar::GetElementsByID](../Topic/CMFCRibbonBar::GetElementsByID.md)|Ottiene una matrice che contiene i puntatori a tutti gli elementi della barra multifunzione con l'ID specificato.|  
|[CMFCRibbonBar::GetApplicationButton](../Topic/CMFCRibbonBar::GetApplicationButton.md)|Ottiene un puntatore a un pulsante della barra multifunzione.|  
|[CMFCRibbonBar::GetFocused](../Topic/CMFCRibbonBar::GetFocused.md)|Restituisce un elemento con stato attivo.|  
|[CMFCRibbonBar::GetHideFlags](../Topic/CMFCRibbonBar::GetHideFlags.md)||  
|[CMFCRibbonBar::GetItemIDsList](../Topic/CMFCRibbonBar::GetItemIDsList.md)||  
|[CMFCRibbonBar::GetKeyboardNavigationLevel](../Topic/CMFCRibbonBar::GetKeyboardNavigationLevel.md)||  
|[CMFCRibbonBar::GetKeyboardNavLevelCurrent](../Topic/CMFCRibbonBar::GetKeyboardNavLevelCurrent.md)||  
|[CMFCRibbonBar::GetKeyboardNavLevelParent](../Topic/CMFCRibbonBar::GetKeyboardNavLevelParent.md)||  
|[CMFCRibbonBar::GetMainCategory](../Topic/CMFCRibbonBar::GetMainCategory.md)|Restituisce un puntatore alla categoria della barra multifunzione attualmente selezionata.|  
|[CMFCRibbonBar::GetQATCommandsLocation](../Topic/CMFCRibbonBar::GetQATCommandsLocation.md)||  
|[CMFCRibbonBar::GetQATDroppedDown](../Topic/CMFCRibbonBar::GetQATDroppedDown.md)||  
|[CMFCRibbonBar::GetQuickAccessCommands](../Topic/CMFCRibbonBar::GetQuickAccessCommands.md)|Compila un elenco che include gli ID di comando di tutti gli elementi visualizzati sulla barra di accesso rapido.|  
|[CMFCRibbonBar::GetQuickAccessToolbarLocation](../Topic/CMFCRibbonBar::GetQuickAccessToolbarLocation.md)||  
|[CMFCRibbonBar::GetTabTrancateRatio](../Topic/CMFCRibbonBar::GetTabTrancateRatio.md)||  
|[CMFCRibbonBar::GetTooltipFixedWidthLargeImage](../Topic/CMFCRibbonBar::GetTooltipFixedWidthLargeImage.md)||  
|[CMFCRibbonBar::GetTooltipFixedWidthRegular](../Topic/CMFCRibbonBar::GetTooltipFixedWidthRegular.md)||  
|[CMFCRibbonBar::GetVisibleCategoryCount](../Topic/CMFCRibbonBar::GetVisibleCategoryCount.md)||  
|[CMFCRibbonBar::HideAllContextCategories](../Topic/CMFCRibbonBar::HideAllContextCategories.md)|Nasconde tutte le categorie attive e visibili.|  
|[CMFCRibbonBar::HideKeyTips](../Topic/CMFCRibbonBar::HideKeyTips.md)||  
|[CMFCRibbonBar::HitTest](../Topic/CMFCRibbonBar::HitTest.md)|Trova un puntatore all'elemento della barra multifunzione che si trova nel punto specificato nelle coordinate client della barra multifunzione.|  
|[CMFCRibbonBar::IsKeyTipEnabled](../Topic/CMFCRibbonBar::IsKeyTipEnabled.md)|Determina se i suggerimenti tasto di scelta sono abilitati.|  
|[CMFCRibbonBar::IsMainRibbonBar](../Topic/CMFCRibbonBar::IsMainRibbonBar.md)||  
|[CMFCRibbonBar::IsPrintPreviewEnabled](../Topic/CMFCRibbonBar::IsPrintPreviewEnabled.md)|Determina se è abilitata la scheda **Anteprima di stampa**.|  
|[CMFCRibbonBar::IsQATEmpty](../Topic/CMFCRibbonBar::IsQATEmpty.md)||  
|[CMFCRibbonBar::IsQuickAccessToolbarOnTop](../Topic/CMFCRibbonBar::IsQuickAccessToolbarOnTop.md)|Specifica se la barra di accesso rapido è posizionata sopra la barra multifunzione.|  
|[CMFCRibbonBar::IsReplaceFrameCaption](../Topic/CMFCRibbonBar::IsReplaceFrameCaption.md)|Determina se la barra multifunzione sostituisce la didascalia del frame principale o viene aggiunta sotto la didascalia del frame.|  
|[CMFCRibbonBar::IsShowGroupBorder](../Topic/CMFCRibbonBar::IsShowGroupBorder.md)||  
|[CMFCRibbonBar::IsToolTipDescrEnabled](../Topic/CMFCRibbonBar::IsToolTipDescrEnabled.md)|Determina se le descrizioni dei comandi sono abilitate.|  
|[CMFCRibbonBar::IsToolTipEnabled](../Topic/CMFCRibbonBar::IsToolTipEnabled.md)|Determina se le descrizioni dei comandi per la barra multifunzione sono abilitate.|  
|[CMFCRibbonBar::IsTransparentCaption](../Topic/CMFCRibbonBar::IsTransparentCaption.md)||  
|[CMFCRibbonBar::IsWindows7Look](../Topic/CMFCRibbonBar::IsWindows7Look.md)|Indica se la barra multifunzione ha un aspetto in stile Windows 7 \(piccolo pulsante di applicazione rettangolare\).|  
|[CMFCRibbonBar::LoadFromResource](../Topic/CMFCRibbonBar::LoadFromResource.md)|Di overload.  Carica una barra multifunzione dalle risorse dell'applicazione.|  
|[CMFCRibbonBar::OnClickButton](../Topic/CMFCRibbonBar::OnClickButton.md)||  
|[CMFCRibbonBar::OnEditContextMenu](../Topic/CMFCRibbonBar::OnEditContextMenu.md)||  
|[CMFCRibbonBar::OnRTLChanged](../Topic/CMFCRibbonBar::OnRTLChanged.md)|Esegue l'override di `CPane::OnRTLChanged`.|  
|[CMFCRibbonBar::OnSetAccData](../Topic/CMFCRibbonBar::OnSetAccData.md)|Esegue l'override di[CBasePane::OnSetAccData](../Topic/CBasePane::OnSetAccData.md).|  
|[CMFCRibbonBar::OnShowRibbonContextMenu](../Topic/CMFCRibbonBar::OnShowRibbonContextMenu.md)||  
|[CMFCRibbonBar::OnShowRibbonQATMenu](../Topic/CMFCRibbonBar::OnShowRibbonQATMenu.md)||  
|[CMFCRibbonBar::OnSysKeyDown](../Topic/CMFCRibbonBar::OnSysKeyDown.md)||  
|[CMFCRibbonBar::OnSysKeyUp](../Topic/CMFCRibbonBar::OnSysKeyUp.md)||  
|[CMFCRibbonBar::PopTooltip](../Topic/CMFCRibbonBar::PopTooltip.md)||  
|[CMFCRibbonBar::PreTranslateMessage](../Topic/CMFCRibbonBar::PreTranslateMessage.md)|Esegue l'override di `CBasePane::PreTranslateMessage`.|  
|[CMFCRibbonBar::RecalcLayout](../Topic/CMFCRibbonBar::RecalcLayout.md)|Esegue l'override di [CPane::RecalcLayout](../Topic/CPane::RecalcLayout.md).|  
|[CMFCRibbonBar::RemoveAllCategories](../Topic/CMFCRibbonBar::RemoveAllCategories.md)|Rimuove tutte le categorie della barra multifunzione dalla barra multifunzione.|  
|[CMFCRibbonBar::RemoveAllFromTabs](../Topic/CMFCRibbonBar::RemoveAllFromTabs.md)|Rimuove tutti gli elementi della barra multifunzione dall'area della scheda.|  
|[CMFCRibbonBar::RemoveCategory](../Topic/CMFCRibbonBar::RemoveCategory.md)|Rimuove la categoria della barra multifunzione che si trova in corrispondenza dell'indice specificato.|  
|[CMFCRibbonBar::SaveToXMLBuffer](../Topic/CMFCRibbonBar::SaveToXMLBuffer.md)|Salva la barra multifunzione in un buffer.|  
|[CMFCRibbonBar::SaveToXMLFile](../Topic/CMFCRibbonBar::SaveToXMLFile.md)|Salva la barra multifunzione in un file XML.|  
|[CMFCRibbonBar::SetActiveCategory](../Topic/CMFCRibbonBar::SetActiveCategory.md)|Imposta una categoria specificata della barra multifunzione su attiva.|  
|[CMFCRibbonBar::SetActiveMDIChild](../Topic/CMFCRibbonBar::SetActiveMDIChild.md)||  
|[CMFCRibbonBar::SetElementKeys](../Topic/CMFCRibbonBar::SetElementKeys.md)|Imposta i suggerimenti tasto di scelta specificati per tutti gli elementi della barra multifunzione con ID di comando specificato.|  
|[CMFCRibbonBar::SetApplicationButton](../Topic/CMFCRibbonBar::SetApplicationButton.md)|Assegna un pulsante della barra multifunzione dell'applicazione alla barra multifunzione.|  
|[CMFCRibbonBar::SetKeyboardNavigationLevel](../Topic/CMFCRibbonBar::SetKeyboardNavigationLevel.md)||  
|[CMFCRibbonBar::SetMaximizeMode](../Topic/CMFCRibbonBar::SetMaximizeMode.md)||  
|[CMFCRibbonBar::SetQuickAccessCommands](../Topic/CMFCRibbonBar::SetQuickAccessCommands.md)|Aggiunge uno o più elementi della barra multifunzione alla barra di accesso rapido.|  
|[CMFCRibbonBar::SetQuickAccessDefaultState](../Topic/CMFCRibbonBar::SetQuickAccessDefaultState.md)|Specifica lo stato predefinito per la barra di accesso rapido.|  
|[CMFCRibbonBar::SetQuickAccessToolbarOnTop](../Topic/CMFCRibbonBar::SetQuickAccessToolbarOnTop.md)|Posiziona la barra di accesso rapido sopra o sotto la barra multifunzione.|  
|[CMFCRibbonBar::SetTooltipFixedWidth](../Topic/CMFCRibbonBar::SetTooltipFixedWidth.md)||  
|[CMFCRibbonBar::SetWindows7Look](../Topic/CMFCRibbonBar::SetWindows7Look.md)|Abilita\/Disabilita l'aspetto in stile Windows 7 della barra multifunzione \(piccolo pulsante di applicazione rettangolare\).|  
|[CMFCRibbonBar::ShowCategory](../Topic/CMFCRibbonBar::ShowCategory.md)|Mostra o nasconde la categoria specificata della barra multifunzione.|  
|[CMFCRibbonBar::ShowContextCategories](../Topic/CMFCRibbonBar::ShowContextCategories.md)|Mostra o nasconde le categorie contesto con l'ID specificato.|  
|[CMFCRibbonBar::ShowKeyTips](../Topic/CMFCRibbonBar::ShowKeyTips.md)||  
|[CMFCRibbonBar::ToggleMimimizeState](../Topic/CMFCRibbonBar::ToggleMimimizeState.md)|Visualizza la barra multifunzione ridotta a icona e ingrandita e viceversa.|  
|[CMFCRibbonBar::TranslateChar](../Topic/CMFCRibbonBar::TranslateChar.md)||  
  
## Note  
 Microsoft ha presentato la barra multifunzione di Office Fluent contemporaneamente al rilascio di Microsoft Office 2007.  La barra multifunzione non è semplicemente un nuovo controllo.  Rappresenta un nuovo paradigma dell'interfaccia utente.  La barra multifunzione è in riquadro che include una serie di schede definite categorie.  Ogni categoria è suddivisa logicamente in pannelli della barra multifunzione e ogni pannello può contenere diversi controlli e pulsanti di comando.  
  
 Gli elementi visualizzati sulla barra multifunzione si espandono e comprimono per usare al meglio lo spazio disponibile.  Ad esempio, se lo spazio disponibile per la visualizzazione degli elementi di un pannello della barra multifunzione non è sufficiente, diventerà un pulsante di menu che visualizza elementi secondari in un menu a comparsa.  La barra multifunzione si comporta come una barra di controllo statica \(non mobile\) e può essere ancorata nella parte superiore di un frame.  
  
 È possibile usare la classe `CMFCRibbonStatusBar` per implementare una barra di stato analoga a quella usata in Office 2007.  Una categoria della barra multifunzione contiene \(e visualizza\) un gruppo di [pannelli della barra multifunzione](../../mfc/reference/cmfcribbonpanel-class.md).  Ogni pannello della barra multifunzione contiene uno o più elementi della barra multifunzione, derivati da [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md).  
  
 Per informazioni su come aggiungere una barra multifunzione all'applicazione MFC esistente, vedere [Procedura dettagliata: Aggiornamento dell'applicazione MFC Scribble](../../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)  
  
## Requisiti  
 **Intestazione:** afxribbonbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)   
 [CMFCRibbonCategory Class](../../mfc/reference/cmfcribboncategory-class.md)   
 [CMFCRibbonPanel Class](../../mfc/reference/cmfcribbonpanel-class.md)   
 [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)   
 [Procedura dettagliata: Aggiornamento dell'applicazione MFC Scribble](../../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)