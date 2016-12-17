---
title: "CMFCColorButton Class | Microsoft Docs"
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
  - "CMFCColorButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorButton class"
  - "CMFCColorButton::m_bAltColorDlg data member"
  - "CMFCColorButton::m_bAutoSetFocus data member"
  - "CMFCColorButton::m_Color data member"
  - "CMFCColorButton::m_ColorAutomatic data member"
  - "CMFCColorButton::m_lstDocColors data member"
  - "CMFCColorButton::m_nColumns data member"
  - "CMFCColorButton::m_pPalette data member"
  - "CMFCColorButton::m_pPopup data member"
  - "CMFCColorButton::m_strAutoColorText data member"
  - "CMFCColorButton::m_strDocColorsText data member"
  - "CMFCColorButton::m_strOtherText data member"
ms.assetid: 9fdf34ae-4cc5-4c5e-9d89-1c50e8a73699
caps.latest.revision: 34
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCColorButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CMFCColorButton` e le classi [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) vengono utilizzati insieme per implementare un controllo di selezione colori.  
  
## Sintassi  
  
```  
class CMFCColorButton : public CMFCButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorButton::CMFCColorButton](../Topic/CMFCColorButton::CMFCColorButton.md)|Costruisce un nuovo oggetto `CMFCColorButton`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorButton::EnableAutomaticButton](../Topic/CMFCColorButton::EnableAutomaticButton.md)|Abilita e disabilita un pulsante "automatico" collocato sui pulsanti standard di colore.  \(Il pulsante automatico del sistema standard è contrassegnato **Automatico**\).|  
|[CMFCColorButton::EnableOtherButton](../Topic/CMFCColorButton::EnableOtherButton.md)|Abilita e disabilita "un altro" pulsante posto sotto i pulsanti standard di colore.  \(Il sistema standard "l'altro" pulsante è contrassegnato **Altri coloriÉ**\).|  
|[CMFCColorButton::GetAutomaticColor](../Topic/CMFCColorButton::GetAutomaticColor.md)|Recupera il colore automatico corrente.|  
|[CMFCColorButton::GetColor](../Topic/CMFCColorButton::GetColor.md)|Recupera il colore di un pulsante.|  
|[CMFCColorButton::SetColor](../Topic/CMFCColorButton::SetColor.md)|Imposta il colore di un pulsante.|  
|[CMFCColorButton::SetColorName](../Topic/CMFCColorButton::SetColorName.md)|Imposta un nome di colore.|  
|[CMFCColorButton::SetColumnsNumber](../Topic/CMFCColorButton::SetColumnsNumber.md)|Imposta il numero di colonne nella finestra di dialogo di selezione colori.|  
|[CMFCColorButton::SetDocumentColors](../Topic/CMFCColorButton::SetDocumentColors.md)|Specifica un elenco di colori specifici un documento visualizzato nella finestra di dialogo di selezione colori.|  
|[CMFCColorButton::SetPalette](../Topic/CMFCColorButton::SetPalette.md)|Specifica una tavolozza dei colori di visualizzazione standard.|  
|[CMFCColorButton::SizeToContent](../Topic/CMFCColorButton::SizeToContent.md)|Modificare le dimensioni del pulsante, come il testo e le dimensioni delle immagini.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorButton::IsDrawXPTheme](../Topic/CMFCColorButton::IsDrawXPTheme.md)|Indica se il pulsante corrente di colori visualizzati nello stile di visualizzazione di Windows XP.|  
|[CMFCColorButton::OnDraw](../Topic/CMFCColorButton::OnDraw.md)|Chiamato dal framework per visualizzare un'immagine del pulsante.|  
|[CMFCColorButton::OnDrawBorder](../Topic/CMFCColorButton::OnDrawBorder.md)|Chiamato dal framework per visualizzare il bordo del pulsante.|  
|[CMFCColorButton::OnDrawFocusRect](../Topic/CMFCColorButton::OnDrawFocusRect.md)|Chiamato dal framework per visualizzare un rettangolo di attivazione quando il pulsante presenta lo stato attivo.|  
|[CMFCColorButton::OnShowColorPopup](../Topic/CMFCColorButton::OnShowColorPopup.md)|Chiamato dal framework quando la finestra di dialogo di selezione colori sta per visualizzare.|  
|[CMFCColorButton::RebuildPalette](../Topic/CMFCColorButton::RebuildPalette.md)|Inizializzare il membro dati protetto `m_pPalette` la tavolozza specificata o alla tavolozza di sistema predefinito.|  
|[CMFCColorButton::UpdateColor](../Topic/CMFCColorButton::UpdateColor.md)|Chiamato dal framework quando l'utente seleziona un colore dalla tavolozza della finestra di dialogo di selezione colori.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`m_bAltColorDlg`|Un valore Boolean.  Se `TRUE`, il framework di visualizzare la finestra di dialogo colore [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) quando l'altro pulsante, o se `FALSE`, la finestra di dialogo dei colori di sistema.  Il valore predefinito è `TRUE`.  Per ulteriori informazioni, vedere [CMFCColorButton::EnableOtherButton](../Topic/CMFCColorButton::EnableOtherButton.md).|  
|`m_bAutoSetFocus`|Un valore Boolean.  Se `TRUE`, il framework imposta lo stato attivo sul menu di colore quando viene visualizzato il menu, oppure se `FALSE`, non modifica lo stato attivo.  Il valore predefinito è `TRUE`.|  
|[CMFCColorButton::m\_bEnabledInCustomizeMode](../Topic/CMFCColorButton::m_bEnabledInCustomizeMode.md)|Indica se la modalità di personalizzazione è abilitata per il pulsante di colore.|  
|`m_Color`|Un valore [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449).  Contiene il colore selezionato.|  
|`m_ColorAutomatic`|Un valore [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449).  Contiene il colore predefinito attualmente selezionato.|  
|`m_Colors`|[CArray](../../mfc/reference/carray-class.md) dei valori [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449).  Contiene colori disponibili.|  
|`m_lstDocColors`|[CList](../../mfc/reference/clist-class.md) dei valori [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449).  Contiene colori documenti correnti.|  
|`m_nColumns`|Intero.  Contiene il numero di colonne da visualizzare nella griglia dei colori in un menu di selezione di colori.|  
|`m_pPalette`|Un puntatore a [CPalette](../../mfc/reference/cpalette-class.md).  Contiene colori disponibili nel menu corrente di selezione di colori.|  
|`m_pPopup`|Un puntatore a un oggetto [CMFCColorPopupMenu Class](../../mfc/reference/cmfccolorpopupmenu-class.md).  Il menu di selezione di colori visualizzati quando si fa clic sul pulsante di colore.|  
|`m_strAutoColorText`|Stringa.  L'etichetta del pulsante "automatico" in un menu di selezione di colori.|  
|`m_strDocColorsText`|Stringa.  L'etichetta del pulsante in un menu di selezione di colori visualizzati i colori documenti.|  
|`m_strOtherText`|Stringa.  L'etichetta "dell'altra" pulsante in un menu di selezione di colori.|  
  
## Note  
 Per impostazione predefinita, la classe `CMFCColorButton` si comporta come pulsante di comando che apre una finestra di dialogo di selezione colori.  La finestra di dialogo di selezione colori contiene una matrice di piccoli pulsanti di colore e "di un altro pulsante" che visualizza una selezione colori personalizzata.  \(Il sistema standard "l'altro" pulsante è contrassegnato **Altri coloriÉ**\). Quando un utente seleziona un nuovo colore, l'oggetto `CMFCColorButton` riflette la modifica e visualizzare il colore selezionato.  
  
 Creare un pulsante di colore direttamente nel codice, oppure utilizzando lo strumento **ClassWizard** e un modello di finestra di dialogo.  Se si crea direttamente un pulsante di colore, aggiungere una variabile `CMFCColorButton` all'applicazione e quindi chiamare il costruttore e i metodi `Create``CMFCColorButton` oggetto.  Se si utilizza **ClassWizard**, aggiungere una variabile `CButton` all'applicazione e modificare il tipo di variabile da `CButton` a `CMFCColorButton`.  
  
 La finestra di dialogo di selezione colori \([CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)\) visualizzata con il metodo [CMFCColorButton::OnShowColorPopup](../Topic/CMFCColorButton::OnShowColorPopup.md) quando il framework chiama il gestore eventi `OnLButtonDown`.  Il metodo [CMFCColorButton::OnShowColorPopup](../Topic/CMFCColorButton::OnShowColorPopup.md) può essere sottoposto a override per supportare la selezione di colori personalizzata.  
  
 L'oggetto `CMFCColorButton` notifica relativo padre che un colore sta modificando inviandolo una notifica `WM_COMMAND | BN_CLICKED`.  Il padre viene utilizzato il metodo [CMFCColorButton::GetColor](../Topic/CMFCColorButton::GetColor.md) per recuperare il colore corrente.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare un pulsante di colore utilizzando i diversi metodi nella classe `CMFCColorButton`.  I metodi di impostare il colore del pulsante di colore e il relativo numero di colonne e utilizzare i pulsanti automatici e altri.  Questo esempio fa parte [Esempio demo barra di stato](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#10](../../mfc/reference/codesnippet/CPP/cmfccolorbutton-class_1.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#11](../../mfc/reference/codesnippet/CPP/cmfccolorbutton-class_2.cpp)]  
  
## Requisiti  
 **intestazione:** afxcolorbutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md)   
 [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)   
 [CMFCColorButton::OnShowColorPopup](../Topic/CMFCColorButton::OnShowColorPopup.md)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [CPalette Class](../../mfc/reference/cpalette-class.md)   
 [CArray Class](../../mfc/reference/carray-class.md)   
 [CList Class](../../mfc/reference/clist-class.md)   
 [CString](../../atl-mfc-shared/reference/cstringt-class.md)