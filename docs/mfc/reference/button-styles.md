---
title: "Stili dei pulsanti | Microsoft Docs"
ms.custom: ""
ms.date: "12/09/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BS_DEFPUSHBUTTON"
  - "BS_NOTIFY"
  - "BS_MULTILINE"
  - "BS_AUTOCHECKBOX"
  - "BS_3STATE"
  - "BS_BITMAP"
  - "BS_TOP"
  - "BS_PUSHBUTTON"
  - "BS_PUSHLIKE"
  - "BS_AUTO3STATE"
  - "BS_CHECKBOX"
  - "BS_AUTORADIOBUTTON"
  - "BS_RADIOBUTTON"
  - "BS_OWNERDRAW"
  - "BS_LEFT"
  - "BS_USERBUTTON"
  - "BS_RIGHTBUTTON"
  - "BS_RIGHT"
  - "BS_LEFTTEXT"
  - "BS_TEXT"
  - "BS_BOTTOM"
  - "BS_GROUPBOX"
  - "BS_FLAT"
  - "BS_VCENTER"
  - "BS_ICON"
  - "BS_CENTER"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BS_3STATE (costante)"
  - "BS_AUTO3STATE (costante)"
  - "BS_AUTOCHECKBOX (costante)"
  - "BS_AUTORADIOBUTTON (costante)"
  - "BS_BITMAP (costante)"
  - "BS_BOTTOM (costante)"
  - "BS_CENTER (costante)"
  - "BS_CHECKBOX (costante)"
  - "BS_DEFPUSHBUTTON (costante)"
  - "BS_FLAT (costante)"
  - "BS_GROUPBOX (costante)"
  - "BS_ICON (costante)"
  - "BS_LEFT (costante)"
  - "BS_LEFTTEXT (costante)"
  - "BS_MULTILINE (costante)"
  - "BS_NOTIFY (costante)"
  - "BS_OWNERDRAW (costante)"
  - "BS_PUSHBUTTON (costante)"
  - "BS_PUSHLIKE (costante)"
  - "BS_RADIOBUTTON (costante)"
  - "BS_RIGHT (costante)"
  - "BS_RIGHTBUTTON (costante)"
  - "BS_TEXT (costante)"
  - "BS_TOP (costante)"
  - "BS_USERBUTTON (costante)"
  - "BS_VCENTER (costante)"
  - "CButton (oggetti pulsante), stili pulsante"
  - "stili, oggetti pulsante"
ms.assetid: 41206f72-2b92-4250-ae32-31184046402f
caps.latest.revision: 20
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili dei pulsanti
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono descritti i tipi e gli stili del pulsante.  
  
## Tipi di pulsante  
 Nella tabella seguente sono elencati i tipi di pulsanti.  È possibile scegliere, facoltativamente, una delle seguenti opzioni:  Se non si specifica un tipo di pulsante, l'impostazione predefinita è  `BS_PUSHBUTTON`.  
  
|Type|Descrizione|  
|----------|-----------------|  
|`BS_3STATE`|Crea un pulsante della casella di controllo con tre stati: `BST_CHECKED`, `BST_INDETERMINATE` e .  Facendo clic sul pulsante viene inviata una notifica `BN_CLICKED` alla finestra del proprietario, tuttavia lo stato del pulsante non viene modificato.  Per impostazione predefinita, il testo associato viene visualizzato a destra della casella di controllo.  Per visualizzare del testo a sinistra della casella di controllo, utilizzare lo stile `BS_LEFTTEXT` o `BS_RIGHTBUTTON`.|  
|`BS_AUTO3STATE`|Crea un pulsante della casella di controllo con tre stati: `BST_CHECKED`, `BST_INDETERMINATE` e .  Facendo clic sul pulsante viene inviata una notifica `BN_CLICKED` alla finestra del proprietario e lo stato del pulsante viene modificato.  Gli stati del pulsante si alternano nell'ordine `BST_CHECKED`, `BST_INDETERMINATE` e `BST_UNCHECKED`.  Per impostazione predefinita, il testo associato viene visualizzato a destra della casella di controllo.  Per visualizzare del testo a sinistra della casella di controllo, utilizzare lo stile `BS_LEFTTEXT` o `BS_RIGHTBUTTON`.|  
|`BS_AUTOCHECKBOX`|Crea una casella di controllo con due stati: `BST_CHECKED` e `BST_UNCHECKED`.  Facendo clic sul pulsante viene inviata una notifica `BN_CLICKED` alla finestra del proprietario e lo stato del pulsante viene modificato.  Per impostazione predefinita, il testo associato viene visualizzato a destra della casella di controllo.  Per visualizzare del testo a sinistra della casella di controllo, utilizzare lo stile `BS_LEFTTEXT` o `BS_RIGHTBUTTON`.|  
|`BS_AUTORADIOBUTTON`|Crea un pulsante di opzione con due stati: `BST_CHECKED` e `BST_UNCHECKED`.  I pulsanti di opzione vengono utilizzati in genere in gruppi. In ciascun gruppo può essere selezionata al massimo un'opzione alla volta.  Facendo clic sul pulsante viene inviata una notifica `BN_CLICKED` alla finestra del proprietario, viene impostato lo stato del pulsante di opzione selezionato su `BST_CHECKED`e vengono impostati gli stati di tutti gli altri pulsanti di opzione presenti nel gruppo di pulsanti su `BST_UNCHECKED`.  Per impostazione predefinita, il testo associato viene visualizzato a destra del pulsante di opzione.  Per visualizzare del testo a sinistra del pulsante di opzione, utilizzare lo stile `BS_LEFTTEXT` o `BS_RIGHTBUTTON`.|  
|`BS_CHECKBOX`|Crea una casella di controllo con due stati: `BST_CHECKED` e `BST_UNCHECKED`.  Facendo clic sul pulsante viene inviata una notifica `BN_CLICKED` alla finestra del proprietario, tuttavia lo stato del pulsante non viene modificato.  Per impostazione predefinita, il testo associato viene visualizzato a destra della casella di controllo.  Per visualizzare del testo a sinistra della casella di controllo, utilizzare lo stile `BS_LEFTTEXT` o `BS_RIGHTBUTTON`.|  
|`BS_COMMANDLINK`|Crea un pulsante di collegamento al comando.  Un pulsante di collegamento al comando è un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che visualizza una freccia verde a sinistra del testo principale e una nota sotto a tale testo.  È possibile impostare il testo della nota utilizzando [CButton::SetNote](../Topic/CButton::SetNote.md).|  
|`BS_DEFCOMMANDLINK`|Crea un pulsante di collegamento al comando.  Un pulsante di collegamento al comando è un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che visualizza una freccia verde a sinistra del testo principale e una nota sotto a tale testo.  È possibile impostare il testo della nota utilizzando [CButton::SetNote](../Topic/CButton::SetNote.md).  Se il pulsante si trova in una finestra di dialogo, premere il tasto INVIO per inviare una notifica `BN_CLICKED` alla finestra di dialogo anche quando il pulsante non ha lo stato attivo per l'input.|  
|`BS_DEFPUSHBUTTON`|Crea un pulsante di comando con un bordo nero scuro.  Se il pulsante si trova in una finestra di dialogo, premere il tasto INVIO per inviare una notifica `BN_CLICKED` alla finestra di dialogo anche quando il pulsante non ha lo stato attivo per l'input.|  
|`BS_DEFSPLITBUTTON`|Crea un pulsante di menu combinato.  Un pulsante di menu combinato è un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] contenente un pulsante adiacente a una freccia a discesa.  Quando si fa clic sul pulsante, viene eseguito il comando predefinito.  Quando si fa clic sulla freccia a discesa, viene visualizzato un menu di comandi aggiuntivi.  Se il pulsante di suddivisione si trova in una finestra di dialogo, premere il tasto INVIO per inviare una notifica `BN_CLICKED` alla finestra di dialogo anche quando il pulsante non ha lo stato attivo per l'input.|  
|`BS_GROUPBOX`|Crea un rettangolo in cui è possibile raggruppare altri pulsanti.  Il testo associato a questo stile viene visualizzato nell'angolo superiore sinistro del rettangolo.|  
|`BS_OWNERDRAW`|Crea un pulsante creato dal proprietario.  Il framework chiama il metodo `DrawItem` dopo che l'aspetto visivo del pulsante è stato modificato.  Questo stile deve essere impostato quando si utilizza la classe `CBitmapButton`.|  
|`BS_PUSHBUTTON`|Crea un pulsante di comando che invia una notifica `BN_CLICKED` alla finestra proprietaria quando l'utente fa clic sul pulsante.|  
|`BS_RADIOBUTTON`|Crea un pulsante di opzione con due stati: `BST_CHECKED` e `BST_UNCHECKED`.  I pulsanti di opzione vengono utilizzati in genere in gruppi. In ciascun gruppo può essere selezionata al massimo un'opzione alla volta.  Facendo clic sul pulsante viene inviata una notifica `BN_CLICKED` alla finestra del proprietario, tuttavia non viene modificato automaticamente lo stato di qualsiasi pulsante del gruppo.  Per impostazione predefinita, il testo associato viene visualizzato a destra del pulsante di opzione.  Per visualizzare del testo a sinistra del pulsante di opzione, utilizzare lo stile `BS_LEFTTEXT` o `BS_RIGHTBUTTON`.|  
|`BS_SPLITBUTTON`|Crea un pulsante di menu combinato.  Un pulsante di menu combinato è un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] contenente un pulsante adiacente a una freccia a discesa.  Quando si fa clic sul pulsante, viene eseguito il comando predefinito.  Quando si fa clic sulla freccia a discesa, viene visualizzato un menu di comandi aggiuntivi.|  
|`BS_USERBUTTON`|Obsoleto, ma fornito per compatibilità con le versioni di Windows a 16 bit.  Le applicazioni basate su Win32 dovrebbero utilizzare invece `BS_OWNERDRAW`.|  
  
## Stili di casella di controllo e di pulsante di opzione  
 Nella tabella seguente sono elencati gli stili specifici dei pulsanti di opzione e delle caselle di controllo.  Questi stili vengono ignorati in tutti gli altri tipi di pulsante.  È possibile scegliere, facoltativamente, una o più delle seguenti opzioni:  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_LEFTTEXT`|Se combinato con uno stile casella di controllo o pulsante di opzione, il testo viene visualizzato a sinistra del pulsante di opzione o della casella di controllo.|  
|`BS_RIGHTBUTTON`|Se combinato con uno stile casella di controllo o pulsante di opzione, il testo viene visualizzato a sinistra del pulsante di opzione o della casella di controllo.  Questo stile è identico allo stile `BS_LEFTTEXT`.|  
|`BS_PUSHLIKE`|Fa in modo che una casella di controllo o un pulsante di opzione si comportino come un pulsante di comando.  Il pulsante appare premuto quando il relativo stato è `BST_CHECKED`, premuto e disattivato quando lo stato è `BST_INDETERMINATE` e rilasciato quando lo stato è `BST_UNCHECKED`.|  
  
## Stili di allineamento del testo  
 Nella tabella seguente sono elencate le opzioni di allineamento del testo orizzontale e verticale.  È possibile scegliere, facoltativamente, una delle seguenti opzioni:  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_LEFT`|Allinea a sinistra il testo nel rettangolo del pulsante.  Tuttavia, se il pulsante è una casella di controllo o un pulsante di opzione che non hanno lo stile `BS_RIGHTBUTTON`, il testo viene allineato a sinistra sul lato destro della casella di controllo o del pulsante di opzione.|  
|`BS_RIGHT`|Allinea a destra il testo nel rettangolo del pulsante.  Tuttavia, se il pulsante è una casella di controllo o un pulsante di opzione che non hanno lo stile `BS_RIGHTBUTTON`, il testo viene allineato a destra sul lato destro della casella di controllo o del pulsante di opzione.|  
|`BS_CENTER`|Centra il testo con orientamento orizzontale nel rettangolo del pulsante.|  
|`BS_TOP`|Colloca il testo nella parte superiore del rettangolo del pulsante.|  
|`BS_BOTTOM`|Colloca il testo nella parte inferiore del rettangolo del pulsante.|  
|`BS_VCENTER`|Centra il testo con orientamento verticale nel rettangolo del pulsante.|  
  
## Opzioni contenuto pulsante  
 Nella tabella seguente sono elencate le opzioni che indicano che cosa è visualizzato nel pulsante.  I tipi di pulsante che visualizzano solo testo ignorano questi stili.  È possibile scegliere, facoltativamente, una delle seguenti opzioni:  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_BITMAP`|Specifica che il pulsante visualizza un'immagine bitmap.|  
|`BS_ICON`|Specifica che il pulsante visualizza un'icona.|  
|`BS_TEXT`|Specifica che il pulsante visualizza del testo.|  
  
## Altre opzioni  
 Nella tabella seguente sono elencate le opzioni aggiuntive che è possibile utilizzare con qualsiasi tipo di pulsante.  È possibile scegliere, facoltativamente, una o più delle seguenti opzioni:  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_FLAT`|Specifica che il pulsante è bidimensionale e non viene disegnato con l'ombreggiatura predefinita per creare un'immagine tridimensionale.|  
|`BS_MULTILINE`|Esegue il wrapping del testo del pulsante su più righe se la stringa di testo è troppo lunga per adattarsi a una singola riga nel rettangolo del pulsante.|  
|`BS_NOTIFY`|Consente a un pulsante di inviare i messaggi di notifica `BN_DBLCLK`, `BN_KILLFOCUS` e `BN_SETFOCUS` alla finestra padre.  Si noti che i pulsanti inviano la notifica `BN_CLICKED` indipendentemente dallo stile specificato.|  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CButton::Create](../Topic/CButton::Create.md)   
 [Stili di pulsante](http://msdn.microsoft.com/library/windows/desktop/bb775951)   
 [BN\_CLICKED Notification](_win32_bn_clicked_notification)