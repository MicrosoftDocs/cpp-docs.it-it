---
title: "CButton Class | Microsoft Docs"
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
  - "CButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "button control [MFC]"
  - "button objects (CButton)"
  - "CButton class"
  - "caselle di controllo, button controls"
  - "checkbox buttons"
  - "pushbuttons"
  - "pulsanti di opzione, CButton class"
ms.assetid: cdc76d5b-31da-43c5-bc43-fde4cb39de5b
caps.latest.revision: 19
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce funzionalità dei pulsanti di Windows.  
  
## Sintassi  
  
```  
class CButton : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CButton::CButton](../Topic/CButton::CButton.md)|Costruisce un oggetto `CButton`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CButton::Create](../Topic/CButton::Create.md)|Crea il pulsante di Windows e lo aggiunge all'oggetto `CButton`.|  
|[CButton::DrawItem](../Topic/CButton::DrawItem.md)|Override per disegnare un oggetto creato dal proprietario `CButton`.|  
|[CButton::GetBitmap](../Topic/CButton::GetBitmap.md)|Recupera l'handle della bitmap precedentemente impostata con [SetBitmap](../Topic/CButton::SetBitmap.md).|  
|[CButton::GetButtonStyle](../Topic/CButton::GetButtonStyle.md)|Recupera le informazioni sullo stile del pulsante.|  
|[CButton::GetCheck](../Topic/CButton::GetCheck.md)|Recupera lo stato di selezione di un pulsante.|  
|[CButton::GetCursor](../Topic/CButton::GetCursor.md)|Recupera l'handle di un'immagine del cursore già impostata con [SetCursor](../Topic/CButton::SetCursor.md).|  
|[CButton::GetIcon](../Topic/CButton::GetIcon.md)|Recupera l'handle icona precedentemente impostata con [SetIcon](../Topic/CButton::SetIcon.md).|  
|[CButton::GetIdealSize](../Topic/CButton::GetIdealSize.md)|Recupera la dimensione ideale del pulsante.|  
|[CButton::GetImageList](../Topic/CButton::GetImageList.md)|Recupera l'elenco delle immagini del pulsante.|  
|[CButton::GetNote](../Topic/CButton::GetNote.md)|Recupera il componente della nota del controllo di collegamento corrente del comando.|  
|[CButton::GetNoteLength](../Topic/CButton::GetNoteLength.md)|Recupera la lunghezza del testo della nota per il controllo di collegamento corrente del comando.|  
|[CButton::GetSplitGlyph](../Topic/CButton::GetSplitGlyph.md)|Recupera il glifo associato al controllo corrente pulsante di menu combinato.|  
|[CButton::GetSplitImageList](../Topic/CButton::GetSplitImageList.md)|Recupera l'elenco di immagini per il controllo corrente pulsante di menu combinato.|  
|[CButton::GetSplitInfo](../Topic/CButton::GetSplitInfo.md)|Recupera le informazioni che definiscono il controllo corrente pulsante di menu combinato.|  
|[CButton::GetSplitSize](../Topic/CButton::GetSplitSize.md)|Recupera il rettangolo di delimitazione della parte a discesa del controllo corrente pulsante di menu combinato.|  
|[CButton::GetSplitStyle](../Topic/CButton::GetSplitStyle.md)|Recupera gli stili pulsante di menu combinato che definiscono il controllo corrente pulsante di menu combinato.|  
|[CButton::GetState](../Topic/CButton::GetState.md)|Recupera lo stato di selezione, lo stato di evidenziazione e lo stato attivo di un pulsante.|  
|[CButton::GetTextMargin](../Topic/CButton::GetTextMargin.md)|Recupera il margine del testo del pulsante.|  
|[CButton::SetBitmap](../Topic/CButton::SetBitmap.md)|Specifica una bitmap da visualizzare sul pulsante.|  
|[CButton::SetButtonStyle](../Topic/CButton::SetButtonStyle.md)|Modificare lo stile di un pulsante.|  
|[CButton::SetCheck](../Topic/CButton::SetCheck.md)|Imposta lo stato di selezione di un pulsante.|  
|[CButton::SetCursor](../Topic/CButton::SetCursor.md)|Specifica un'immagine del cursore da visualizzare sul pulsante.|  
|[CButton::SetDropDownState](../Topic/CButton::SetDropDownState.md)|Imposta lo stato a discesa del controllo corrente pulsante di menu combinato.|  
|[CButton::SetIcon](../Topic/CButton::SetIcon.md)|Specificare l'icona da visualizzare sul pulsante.|  
|[CButton::SetImageList](../Topic/CButton::SetImageList.md)|Imposta l'elenco delle immagini del pulsante.|  
|[CButton::SetNote](../Topic/CButton::SetNote.md)|Imposta la nota sul controllo di collegamento corrente del comando.|  
|[CButton::SetSplitGlyph](../Topic/CButton::SetSplitGlyph.md)|Associa un glifo specificato con il controllo corrente pulsante di menu combinato.|  
|[CButton::SetSplitImageList](../Topic/CButton::SetSplitImageList.md)|Associa un elenco immagini con il controllo corrente pulsante di menu combinato.|  
|[CButton::SetSplitInfo](../Topic/CButton::SetSplitInfo.md)|Specifica le informazioni che definiscono il controllo corrente pulsante di menu combinato.|  
|[CButton::SetSplitSize](../Topic/CButton::SetSplitSize.md)|Imposta il rettangolo di delimitazione della parte a discesa del controllo corrente pulsante di menu combinato.|  
|[CButton::SetSplitStyle](../Topic/CButton::SetSplitStyle.md)|Imposta lo stile del controllo corrente pulsante di menu combinato.|  
|[CButton::SetState](../Topic/CButton::SetState.md)|Imposta lo stato dell'evidenziazione di un pulsante.|  
|[CButton::SetTextMargin](../Topic/CButton::SetTextMargin.md)|Imposta il margine del testo del pulsante.|  
  
## Note  
 Un pulsante è una piccola, finestra figlio rettangolare che può essere selezionato e chiuderlo.  I pulsanti possono essere utilizzati da solo o in gruppi e possono essere contrassegnati o senza visualizzare testo.  Un pulsante in genere modifica l'aspetto quando l'utente fa clic su.  
  
 I tipici pulsanti sono la casella di controllo, il pulsante di opzione e il pulsante.  Un oggetto `CButton` può rappresentare uno di questi, come specificato nella [stile del pulsante](../../mfc/reference/button-styles.md) inizializzazione dalla funzione membro [Crea](../Topic/CButton::Create.md).  
  
 Inoltre, la classe [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md) derivata da `CButton` supporta la creazione di pulsanti contrassegnati con immagini bitmap anziché testo.  `CBitmapButton` può avere bitmap separate per un pulsante su, il basso, con gli stati e disabilitati.  
  
 È possibile creare un pulsante da un modello di finestra di dialogo o direttamente nel codice.  In entrambi i casi, chiamare prima il costruttore `CButton` per costruire l'oggetto `CButton` ; chiamare la funzione membro **Crea** per creare il pulsante di Windows e per associarlo all'oggetto `CButton`.  
  
 La costruzione può essere un processo una fase in una classe derivata da `CButton`.  Scrivere un costruttore per la classe derivata e chiamare **Crea** dal costruttore.  
  
 Se si desidera gestire i messaggi di notifica di Windows inviati da un pulsante al controllo padre \(in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)\), aggiungere una voce della mappa messaggi e una funzione membro per la gestione dei messaggi nella classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi accetta il formato seguente:  
  
 Notifica**\(**`id`, `memberFxn`**\)**di**ON\_**  
  
 dove specifica `id` la finestra figlio ID del controllo che invia una notifica e `memberFxn` è il nome della funzione membro che padre è stato scritto per gestire la notifica.  
  
 Il prototipo del padre è la seguente:  
  
 **afx\_msg** `void` `memberFxn` **\( \);**  
  
 Le voci della mappa messaggi possibili sono:  
  
|Voce di mapping|Inviato al padre quando…|  
|---------------------|------------------------------|  
|**ON\_BN\_CLICKED**|L'utente fa clic su un pulsante.|  
|**ON\_BN\_DOUBLECLICKED**|L'utente fa doppio clic su un pulsante.|  
  
 Se si crea un oggetto `CButton` da una risorsa finestra di dialogo, l'oggetto `CButton` automaticamente eliminato quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un oggetto `CButton` interno di una finestra, potrebbe essere necessario distruggerla.  Se si crea l'oggetto `CButton` nell'heap mediante la funzione **new**, è necessario chiamare **delete** sull'oggetto per distruggerlo quando l'utente chiude il pulsante di Windows.  Se si crea l'oggetto `CButton` nello stack, o è incorporato nell'oggetto finestra di dialogo padre, verrà automaticamente eliminato.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CButton`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [CScrollBar Class](../../mfc/reference/cscrollbar-class.md)   
 [CStatic Class](../../mfc/reference/cstatic-class.md)   
 [CBitmapButton Class](../../mfc/reference/cbitmapbutton-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)