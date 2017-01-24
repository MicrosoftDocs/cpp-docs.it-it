---
title: "CMFCButton Class | Microsoft Docs"
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
  - "CMFCButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCButton class"
  - "CMFCButton constructor"
  - "CMFCButton::CreateObject method"
  - "CMFCButton::DrawItem method"
  - "CMFCButton::OnDrawParentBackground method"
  - "CMFCButton::PreTranslateMessage method"
ms.assetid: 4b32f57c-7a53-4734-afb9-d47e3359f62e
caps.latest.revision: 35
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCButton` aggiunge funzionalità alla classe [CButton](../../mfc/reference/cbutton-class.md) come allineare il testo del pulsante, la combinazione il testo del pulsante e image, selezionare un cursore e specificare una descrizione comandi.  
  
## Sintassi  
  
```  
class CMFCButton : public CButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCButton::CMFCButton`|Costruttore predefinito.|  
|`CMFCButton::~CMFCButton`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCButton::CleanUp](../Topic/CMFCButton::CleanUp.md)|Reimposta le variabili interne e libera le risorse allocate ad esempio immagini, bitmap e icone.|  
|`CMFCButton::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|`CMFCButton::DrawItem`|Chiamato dal framework quando un aspetto visivo di un pulsante creato dal proprietario è stato modificato.  \(Override [CButton::DrawItem](../Topic/CButton::DrawItem.md)\).|  
|[CMFCButton::EnableFullTextTooltip](../Topic/CMFCButton::EnableFullTextTooltip.md)|Specifica se visualizzare il testo completo di una descrizione comandi in una grande descrizione comandi o una versione tronca di testo in una breve descrizione comandi.|  
|[CMFCButton::EnableMenuFont](../Topic/CMFCButton::EnableMenuFont.md)|Specifica se il tipo di carattere del testo del pulsante è la stessa di carattere del menu di un'applicazione.|  
|[CMFCButton::EnableWindowsTheming](../Topic/CMFCButton::EnableWindowsTheming.md)|Specifica se lo stile del bordo del pulsante corrisponde al tema corrente di Windows.|  
|`CMFCButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCButton::GetToolTipCtrl](../Topic/CMFCButton::GetToolTipCtrl.md)|Restituisce un riferimento al controllo sottostante di descrizione comandi.|  
|[CMFCButton::IsAutoCheck](../Topic/CMFCButton::IsAutoCheck.md)|Indica se una casella di controllo o un pulsante di opzione è un pulsante automatico.|  
|[CMFCButton::IsAutorepeatCommandMode](../Topic/CMFCButton::IsAutorepeatCommandMode.md)|Indica se un pulsante viene impostato sulla modalità automatica di ripetizione.|  
|[CMFCButton::IsCheckBox](../Topic/CMFCButton::IsCheckBox.md)|Indica se un pulsante è un pulsante della casella di controllo.|  
|[CMFCButton::IsChecked](../Topic/CMFCButton::IsChecked.md)|Indica se il pulsante corrente viene controllato.|  
|[CMFCButton::IsHighlighted](../Topic/CMFCButton::IsHighlighted.md)|Indica se un pulsante è evidenziato.|  
|[CMFCButton::IsPressed](../Topic/CMFCButton::IsPressed.md)|Indica se un pulsante viene premuto e evidenziato.|  
|[CMFCButton::IsPushed](../Topic/CMFCButton::IsPushed.md)|Indica se un pulsante viene premuto.|  
|[CMFCButton::IsRadioButton](../Topic/CMFCButton::IsRadioButton.md)|Indica se un pulsante è un pulsante di opzione.|  
|[CMFCButton::IsWindowsThemingEnabled](../Topic/CMFCButton::IsWindowsThemingEnabled.md)|Indica se lo stile del bordo del pulsante corrisponde al tema corrente di Windows.|  
|`CMFCButton::OnDrawParentBackground`|Consente di disegnare lo sfondo del padre di un pulsante nell'area specificata.  \(Override [AFX\_GLOBAL\_DATA::DrawParentBackground](../Topic/AFX_GLOBAL_DATA::DrawParentBackground.md)\).|  
|`CMFCButton::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  \(Override [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md)\).|  
|[CMFCButton::SetAutorepeatMode](../Topic/CMFCButton::SetAutorepeatMode.md)|Imposta un pulsante in modalità automatica di ripetizione.|  
|[CMFCButton::SetCheckedImage](../Topic/CMFCButton::SetCheckedImage.md)|L'immagine di un pulsante selezionato.|  
|[CMFCButton::SetFaceColor](../Topic/CMFCButton::SetFaceColor.md)|Imposta il colore di sfondo del testo del pulsante.|  
|[CMFCButton::SetImage](../Topic/CMFCButton::SetImage.md)|L'immagine di un pulsante.|  
|[CMFCButton::SetMouseCursor](../Topic/CMFCButton::SetMouseCursor.md)|L'immagine del cursore.|  
|[CMFCButton::SetMouseCursorHand](../Topic/CMFCButton::SetMouseCursorHand.md)|Imposta il cursore all'immagine di una mano.|  
|[CMFCButton::SetStdImage](../Topic/CMFCButton::SetStdImage.md)|Utilizza un oggetto `CMenuImages` per impostare l'immagine del pulsante.|  
|[CMFCButton::SetTextColor](../Topic/CMFCButton::SetTextColor.md)|Imposta il colore del testo del pulsante per un pulsante non selezionato.|  
|[CMFCButton::SetTextHotColor](../Topic/CMFCButton::SetTextHotColor.md)|Imposta il colore del testo del pulsante per un pulsante selezionato.|  
|[CMFCButton::SetTooltip](../Topic/CMFCButton::SetTooltip.md)|Associa una descrizione comando con un pulsante.|  
|[CMFCButton::SizeToContent](../Topic/CMFCButton::SizeToContent.md)|Viene ridimensionato un pulsante per contenere il testo del pulsante e immagine.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCButton::OnDraw](../Topic/CMFCButton::OnDraw.md)|Chiamato dal framework per disegnare un pulsante.|  
|[CMFCButton::OnDrawBorder](../Topic/CMFCButton::OnDrawBorder.md)|Chiamato dal framework per disegnare il bordo di un pulsante.|  
|[CMFCButton::OnDrawFocusRect](../Topic/CMFCButton::OnDrawFocusRect.md)|Chiamato dal framework per disegnare un rettangolo di attivazione per un pulsante.|  
|[CMFCButton::OnDrawText](../Topic/CMFCButton::OnDrawText.md)|Chiamato dal framework per creare il testo del pulsante.|  
|[CMFCButton::OnFillBackground](../Topic/CMFCButton::OnFillBackground.md)|Chiamato dal framework per disegnare lo sfondo del testo del pulsante.|  
|[CMFCButton::SelectFont](../Topic/CMFCButton::SelectFont.md)|Recupera il carattere associata al contesto di dispositivo specificato.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCButton::m\_bDrawFocus](../Topic/CMFCButton::m_bDrawFocus.md)|Indica se disegnare un rettangolo di attivazione intorno al pulsante.|  
|[CMFCButton::m\_bHighlightChecked](../Topic/CMFCButton::m_bHighlightChecked.md)|Indica se evidenziare un BS\_CHECKBOX\-style il pulsante quando il cursore si sposta su.|  
|[CMFCButton::m\_bRightImage](../Topic/CMFCButton::m_bRightImage.md)|Indica se visualizzare un'immagine a destra del pulsante.|  
|[CMFCButton::m\_bTransparent](../Topic/CMFCButton::m_bTransparent.md)|Indica se il pulsante è transparent.|  
|[CMFCButton::m\_nAlignStyle](../Topic/CMFCButton::m_nAlignStyle.md)|Specifica l'allineamento del testo del pulsante.|  
|[CMFCButton::m\_nFlatStyle](../Topic/CMFCButton::m_nFlatStyle.md)|Specifica lo stile del pulsante, come senza frontiere, piano, semi\- piano, o tridimensionale.|  
  
## Note  
 Altri tipi di pulsanti sono derivati dalla classe `CMFCButton`, come la classe [CMFCURLLinkButton](../../mfc/reference/cmfclinkctrl-class.md), che supporta i collegamenti ipertestuali e la classe `CMFCColorButton`, che supporta una finestra di dialogo di selezione colori.  
  
 Lo stile di un oggetto `CMFCButton` può essere *tridimensionale*, *piano*, *semi\- piano* o *nessun bordo*.  Il testo del pulsante può essere allineato il sinistro, superiore, o al centro di un pulsante.  In fase di esecuzione, è possibile determinare se le visualizzazioni del pulsante l'utente immette un testo, un'immagine, o testo e un'immagine.  È anche possibile specificare che una particolare immagine del cursore visualizzato quando il cursore si sposta su un pulsante.  
  
 Creare un pulsante direttamente nel codice, oppure utilizzando lo strumento **Creazione guidata classe MFC** e un modello di finestra di dialogo.  Se si crea direttamente un pulsante, aggiungere una variabile `CMFCButton` all'applicazione e quindi chiamare il costruttore e i metodi `Create``CMFCButton` oggetto.  Se si utilizza **Creazione guidata classe MFC**, aggiungere una variabile `CButton` all'applicazione e modificare il tipo di variabile da `CButton` a `CMFCButton`.  
  
 Per gestire i messaggi di notifica in un'applicazione della finestra di dialogo, aggiungere una voce della mappa messaggi e un gestore eventi per ogni notifica.  Le notifiche inviate da un oggetto `CMFCButton` sono uguali a quelle inviate da un oggetto `CButton`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare le proprietà del pulsante utilizzando i diversi metodi nella classe `CMFCButton`.  l'esempio fa parte [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/CPP/cmfcbutton-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#31](../../mfc/reference/codesnippet/CPP/cmfcbutton-class_2.cpp)]  
[!code-cpp[NVC_MFC_NewControls#32](../../mfc/reference/codesnippet/CPP/cmfcbutton-class_3.cpp)]  
[!code-cpp[NVC_MFC_NewControls#33](../../mfc/reference/codesnippet/CPP/cmfcbutton-class_4.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
## Requisiti  
 **intestazione:** afxbutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCLinkCtrl Class](../../mfc/reference/cmfclinkctrl-class.md)   
 [CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md)   
 [Classe CMFCMenuButton](../../mfc/reference/cmfcmenubutton-class.md)