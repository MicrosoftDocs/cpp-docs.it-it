---
title: "CMFCColorBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCColorBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorBar class"
  - "CMFCColorBar::m_bInternal data member"
  - "CMFCColorBar::m_bIsEnabled data member"
  - "CMFCColorBar::m_bIsTearOff data member"
  - "CMFCColorBar::m_BoxSize data member"
  - "CMFCColorBar::m_bShowDocColorsWhenDocked data member"
  - "CMFCColorBar::m_bStdColorDlg data member"
  - "CMFCColorBar::m_ColorAutomatic data member"
  - "CMFCColorBar::m_ColorNames data member"
  - "CMFCColorBar::m_colors data member"
  - "CMFCColorBar::m_ColorSelected data member"
  - "CMFCColorBar::m_lstDocColors data member"
  - "CMFCColorBar::m_nCommandID data member"
  - "CMFCColorBar::m_nHorzMargin data member"
  - "CMFCColorBar::m_nHorzOffset data member"
  - "CMFCColorBar::m_nNumColumns data member"
  - "CMFCColorBar::m_nNumColumnsVert data member"
  - "CMFCColorBar::m_nNumRowsHorz data member"
  - "CMFCColorBar::m_nRowHeight data member"
  - "CMFCColorBar::m_nVertMargin data member"
  - "CMFCColorBar::m_nVertOffset data member"
  - "CMFCColorBar::m_Palette data member"
  - "CMFCColorBar::m_pParentBtn data member"
  - "CMFCColorBar::m_pParentRibbonBtn data member"
  - "CMFCColorBar::m_pWndPropList data member"
  - "CMFCColorBar::m_strAutoColor data member"
  - "CMFCColorBar::m_strDocColors data member"
  - "CMFCColorBar::m_strOtherColor data member"
ms.assetid: 4756ee40-25a5-4cee-af7f-acab7993d1c7
caps.latest.revision: 35
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 37
---
# CMFCColorBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCColorBar` rappresenta una barra di controllo di ancoraggio che può selezionare i colori in un documento o in un'applicazione.  
  
## Sintassi  
  
```  
class CMFCColorBar : public CMFCPopupMenuBar  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorBar::CMFCColorBar](../Topic/CMFCColorBar::CMFCColorBar.md)|Costruisce un oggetto `CMFCColorBar`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorBar::ContextToSize](../Topic/CMFCColorBar::ContextToSize.md)|Calcola i margini verticali e orizzontali necessari per contenere i pulsanti del controllo barra dei colori quindi modificare la posizione dei pulsanti.|  
|[CMFCColorBar::CreateControl](../Topic/CMFCColorBar::CreateControl.md)|Crea una finestra di controllo barra dei colori, la aggiunge all'oggetto `CMFCColorBar` e ridimensiona il controllo per contenere la tavolozza dei colori specificata.|  
|[CMFCColorBar::Create](../Topic/CMFCColorBar::Create.md)|Crea una finestra di controllo barra dei colori e allegarlo all'oggetto `CMFCColorBar`.|  
|[CMFCColorBar::EnableAutomaticButton](../Topic/CMFCColorBar::EnableAutomaticButton.md)|Mostra o nasconde il pulsante automatico.|  
|[CMFCColorBar::EnableOtherButton](../Topic/CMFCColorBar::EnableOtherButton.md)|Abilita o disabilita la visualizzazione di una finestra di dialogo che consente di selezionare più colori.|  
|[CMFCColorBar::GetColor](../Topic/CMFCColorBar::GetColor.md)|Recupera il colore selezionato.|  
|[CMFCColorBar::GetCommandID](../Topic/CMFCColorBar::GetCommandID.md)|Recupera l'id di comando del controllo corrente della barra dei colori.|  
|[CMFCColorBar::GetHighlightedColor](../Topic/CMFCColorBar::GetHighlightedColor.md)|Recupera il colore che indica un pulsante di colore ha lo stato attivo; ovvero il pulsante è *necessario*.|  
|[CMFCColorBar::GetHorzMargin](../Topic/CMFCColorBar::GetHorzMargin.md)|Recupera il margine orizzontale, che rappresenta lo spazio tra la cella sinistra o a destra di colore e il limite di area client.|  
|[CMFCColorBar::GetVertMargin](../Topic/CMFCColorBar::GetVertMargin.md)|Recupera il margine verticale, che rappresenta lo spazio tra la parte superiore o la cella colore del bordo inferiore e il limite di area client.|  
|[CMFCColorBar::IsTearOff](../Topic/CMFCColorBar::IsTearOff.md)|Indica se la barra di colore corrente è ancorabile.|  
|[CMFCColorBar::SetColor](../Topic/CMFCColorBar::SetColor.md)|Imposta il colore attualmente selezionato.|  
|[CMFCColorBar::SetColorName](../Topic/CMFCColorBar::SetColorName.md)|Imposta un nuovo nome per un colore specificato.|  
|[CMFCColorBar::SetCommandID](../Topic/CMFCColorBar::SetCommandID.md)|Imposta un nuovo ID di comando per un controllo barra dei colori.|  
|[CMFCColorBar::SetDocumentColors](../Topic/CMFCColorBar::SetDocumentColors.md)|Imposta l'elenco dei colori utilizzati nel documento corrente.|  
|[CMFCColorBar::SetHorzMargin](../Topic/CMFCColorBar::SetHorzMargin.md)|Imposta il margine orizzontale, che rappresenta lo spazio tra la cella sinistra o a destra di colore e il limite di area client.|  
|[CMFCColorBar::SetVertMargin](../Topic/CMFCColorBar::SetVertMargin.md)|Imposta il margine verticale, che rappresenta lo spazio tra la parte superiore o la cella colore del bordo inferiore e il limite di area client.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorBar::AdjustLocations](../Topic/CMFCColorBar::AdjustLocations.md)|Regola le posizioni dei pulsanti di colore sul controllo barra dei colori.|  
|[CMFCColorBar::AllowChangeTextLabels](../Topic/CMFCColorBar::AllowChangeTextLabels.md)|Indica se l'etichetta di testo i pulsanti di colore può cambiare.|  
|[CMFCColorBar::AllowShowOnList](../Topic/CMFCColorBar::AllowShowOnList.md)|Indica se l'oggetto controllo barra dei colori può essere visualizzate in un elenco della barra degli strumenti durante il processo di personalizzazione.|  
|[CMFCColorBar::CalcSize](../Topic/CMFCColorBar::CalcSize.md)|Chiamato dal framework durante il processo di calcolo del layout.|  
|[CMFCColorBar::CreatePalette](../Topic/CMFCColorBar::CreatePalette.md)|Initalizes una tavolozza dei colori in una matrice specificata dei colori.|  
|[CMFCColorBar::GetColorGridSize](../Topic/CMFCColorBar::GetColorGridSize.md)|Calcola il numero di righe e colonne nella griglia di un controllo barra dei colori.|  
|[CMFCColorBar::GetExtraHeight](../Topic/CMFCColorBar::GetExtraHeight.md)|Calcola l'altezza aggiuntiva che la barra di colore corrente richiede per visualizzare i vari elementi dell'interfaccia utente come pulsante **Altri** colori, documenti, e così via.|  
|[CMFCColorBar::InitColors](../Topic/CMFCColorBar::InitColors.md)|Inizializza una matrice di colori con colori in una tavolozza specificata o nella tavolozza predefinito di sistema.|  
|[CMFCColorBar::OnKey](../Topic/CMFCColorBar::OnKey.md)|Chiamato dal framework quando un utente preme un pulsante della tastiera.|  
|[CMFCColorBar::OnSendCommand](../Topic/CMFCColorBar::OnSendCommand.md)|Chiamato dal framework per chiudere una gerarchia di controlli popup.|  
|[CMFCColorBar::OnUpdateCmdUI](../Topic/CMFCColorBar::OnUpdateCmdUI.md)|Chiamato dal framework per abilitare o disabilitare un elemento dell'interfaccia utente di un controllo barra dei colori prima dell'elemento visualizzato.|  
|[CMFCColorBar::OpenColorDialog](../Topic/CMFCColorBar::OpenColorDialog.md)|Aprire una finestra di dialogo dei colori.|  
|[CMFCColorBar::Rebuild](../Topic/CMFCColorBar::Rebuild.md)|Completamente ridisegna il controllo barra dei colori.|  
|[CMFCColorBar::SelectPalette](../Topic/CMFCColorBar::SelectPalette.md)|Imposta la tavolozza logica del contesto di dispositivo specificato alla tavolozza del pulsante padre del controllo corrente della barra dei colori.|  
|[CMFCColorBar::SetPropList](../Topic/CMFCColorBar::SetPropList.md)|Imposta il membro dati protetto `m_pWndPropList` al puntatore specificato in un controllo griglia delle proprietà.|  
|[CMFCColorBar::ShowCommandMessageString](../Topic/CMFCColorBar::ShowCommandMessageString.md)|Richiede la finestra cornice proprietario del controllo barra dei colori per aggiornare la riga del messaggio nella barra di stato.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`m_bInternal`|Un campo booleano che determina se gli eventi vengono elaborati.  In genere, gli eventi vengono elaborati quando questo campo è `TRUE` e modalità di personalizzazione è `FALSE`.|  
|`m_bIsEnabled`|Un valore booleano che indica se un controllo è abilitato.|  
|`m_bIsTearOff`|Un valore booleano che indica se il controllo barra dei colori supporta l'ancoraggio.|  
|`m_BoxSize`|Un oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica la dimensione di una cella in una griglia della barra dei colori.|  
|`m_bShowDocColorsWhenDocked`|Un valore booleano che indica se visualizzare i colori documenti quando la barra di colore è ancorata.  Per ulteriori informazioni, vedere [CMFCColorBar::SetDocumentColors](../Topic/CMFCColorBar::SetDocumentColors.md).|  
|`m_bStdColorDlg`|Un valore booleano che indica se visualizzare la finestra di dialogo standard di colore di sistema o la finestra di dialogo [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md).  Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](../Topic/CMFCColorBar::EnableOtherButton.md).|  
|`m_ColorAutomatic`|[COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) che memorizza il colore automatico corrente.  Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](../Topic/CMFCColorBar::EnableOtherButton.md).|  
|`m_ColorNames`|Un oggetto [CMap](../../mfc/reference/cmap-class.md) che associa un set di colori RGB con i nomi.|  
|`m_colors`|[CArray](../../mfc/reference/carray-class.md) dei valori [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) che contiene colori visualizzati nel controllo barra dei colori.|  
|`m_ColorSelected`|Un valore [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) che è il colore che l'utente ha attualmente selezionato dal controllo barra dei colori.|  
|`m_lstDocColors`|[CList](../../mfc/reference/clist-class.md) dei valori [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) che contiene colori correntemente in uso in un documento.|  
|`m_nCommandID`|Intero senza segno che rappresenta l'id di comando di un pulsante di colore.|  
|`m_nHorzMargin`|Intero che rappresenta il margine orizzontale tra il colore i pulsanti in una griglia di colori.|  
|`m_nHorzOffset`|Intero che rappresenta l'offset orizzontale al centro del pulsante di colore.  Questo valore è significativo nelle visualizzazioni del pulsante testo o di un'immagine oltre al colore.|  
|`m_nNumColumns`|Intero che rappresenta il numero di colonne in una griglia di controllo barra dei colori dei colori.|  
|`m_nNumColumnsVert`|Intero che rappresenta il numero di colonne in una griglia verticalmente orientata dei colori.|  
|`m_nNumRowsHorz`|Intero che rappresenta il numero di colonne in una griglia orientata orizzontalmente dei colori.|  
|`m_nRowHeight`|Intero che corrisponde all'altezza di una riga di colore i pulsanti in una griglia di colori.|  
|`m_nVertMargin`|Intero che rappresenta il margine verticale tra il colore i pulsanti in una griglia di colori.|  
|`m_nVertOffset`|Intero che rappresenta l'offset verticale al centro del pulsante di colore.  Questo valore è significativo nelle visualizzazioni del pulsante testo o di un'immagine oltre al colore.|  
|`m_Palette`|[CPalette](../../mfc/reference/cpalette-class.md) dei colori utilizzati nel controllo barra dei colori.|  
|`m_pParentBtn`|Un puntatore a un oggetto [CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md) che è il padre del pulsante corrente.  Questo valore è significativo se il pulsante di colore è in una gerarchia di controlli della barra degli strumenti o in un controllo griglia delle proprietà di colore.|  
|`m_pParentRibbonBtn`|Un puntatore a un oggetto [CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md) che si trova sulla barra multifunzione e è il pulsante padre del pulsante corrente.  Questo valore è significativo se il pulsante di colore è in una gerarchia di controlli della barra degli strumenti o in un controllo griglia delle proprietà di colore.|  
|`m_pWndPropList`|Un puntatore a un oggetto [CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md).|  
|`m_strAutoColor`|[CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo visualizzato sul pulsante **Automatico**.  Per ulteriori informazioni, vedere [CMFCColorBar::EnableAutomaticButton](../Topic/CMFCColorBar::EnableAutomaticButton.md).|  
|`m_strDocColors`|[CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo visualizzato sul pulsante di colori documenti.  Per ulteriori informazioni, vedere [CMFCColorBar::SetDocumentColors](../Topic/CMFCColorBar::SetDocumentColors.md).|  
|`m_strOtherColor`|[CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo visualizzato *nell'altro* pulsante.  Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](../Topic/CMFCColorBar::EnableOtherButton.md).|  
  
## Note  
 In genere, creare direttamente un oggetto `CMFCColorBar`.  Invece, [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md) \(utilizzato nei menu e barre degli strumenti\) o [CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md) crea l'oggetto `CMFCColorBar`.  
  
 La classe `CMFCColorBar` fornisce le funzionalità seguenti:  
  
-   Regola automaticamente l'elenco dei documenti.  
  
-   Salva e ripristina lo stato, insieme al documento.  
  
-   Gestisce il pulsante "automatico".  
  
-   Utilizza il controllo [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md) per selezionare un colore personalizzato.  
  
-   Supporta "sradicano" lo stato \(se viene creato utilizzando [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md)\).  
  
 Per includere funzionalità `CMFCColorBar` nell'applicazione:  
  
1.  Creare un pulsante standard di menu e assegnarle un ID, ad esempio ID\_CHAR\_COLOR.  
  
2.  Nella classe della finestra cornice, eseguire l'override del metodo [CFrameWndEx::OnShowPopupMenu](../Topic/CFrameWndEx::OnShowPopupMenu.md) e sostituire il pulsante standard di menu a un oggetto [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md) chiamando [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md)\).  
  
3.  Impostare gli stili e abilitare o disabilitare le funzionalità dell'oggetto `CMFCColorBar` durante la creazione [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md).  l'oggetto `CMFCColorMenuButton` crea dinamicamente l'oggetto `CMFCColorBar` dopo che il framework chiama il metodo `CreatePopupMenu`.  
  
 Quando l'utente fa clic su un pulsante del controllo barra dei colori, il framework utilizza la macro `ON_COMMAND` per notificare al padre del controllo barra dei colori.  Nella macro, il parametro di ID di comando è il valore che è stato assegnato il pulsante del controllo barra dei colori nel passaggio 1 \(ID\_CHAR\_COLOR in questo esempio\).  Per ulteriori informazioni, vedere le classi [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md), [CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md), [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md), [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md)e [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare una barra dei colori utilizzando i diversi metodi nella classe `CMFCColorBar`.  I metodi specifici in orizzontale e i margini verticali, consentono all'altro pulsante, viene creata una finestra di controllo barra dei colori e imposta il colore selezionato.  Questo esempio fa parte [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#1](../../mfc/reference/codesnippet/CPP/cmfccolorbar-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#2](../../mfc/reference/codesnippet/CPP/cmfccolorbar-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)  
  
 [CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)  
  
## Requisiti  
 **intestazione:** afxcolorbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)