---
title: Pulsante stili | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- BS_DEFPUSHBUTTON
- BS_NOTIFY
- BS_MULTILINE
- BS_AUTOCHECKBOX
- BS_3STATE
- BS_BITMAP
- BS_TOP
- BS_PUSHBUTTON
- BS_PUSHLIKE
- BS_AUTO3STATE
- BS_CHECKBOX
- BS_AUTORADIOBUTTON
- BS_RADIOBUTTON
- BS_OWNERDRAW
- BS_LEFT
- BS_USERBUTTON
- BS_RIGHTBUTTON
- BS_RIGHT
- BS_LEFTTEXT
- BS_TEXT
- BS_BOTTOM
- BS_GROUPBOX
- BS_FLAT
- BS_VCENTER
- BS_ICON
- BS_CENTER
dev_langs:
- C++
helpviewer_keywords:
- BS_NOTIFY constant
- BS_RIGHTBUTTON constant
- styles, button objects
- BS_USERBUTTON constant
- BS_VCENTER constant
- BS_PUSHLIKE constant
- BS_RADIOBUTTON constant
- BS_PUSHBUTTON constant
- BS_DEFPUSHBUTTON constant
- BS_LEFTTEXT constant
- button objects (CButton), button styles
- BS_AUTO3STATE constant
- BS_3STATE constant
- BS_OWNERDRAW constant
- BS_AUTORADIOBUTTON constant
- BS_GROUPBOX constant
- BS_BITMAP constant
- BS_CENTER constant
- BS_MULTILINE constant
- BS_BOTTOM constant
- BS_FLAT constant
- BS_AUTOCHECKBOX constant
- BS_RIGHT constant
- BS_CHECKBOX constant
- BS_LEFT constant
- BS_ICON constant
- BS_TOP constant
- BS_TEXT constant
ms.assetid: 41206f72-2b92-4250-ae32-31184046402f
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: cdd577cd6915a1f3c1e05fae68f7fed47cc79236
ms.lasthandoff: 02/24/2017

---
# <a name="button-styles"></a>Stili dei pulsanti
In questo argomento vengono descritti gli stili e tipi di pulsanti.  
  
## <a name="button-types"></a>Tipi di pulsanti  
 Nella tabella seguente sono elencati i tipi di pulsanti. È possibile scegliere uno dei valori seguenti. Se non si specifica un tipo di pulsante, il valore predefinito è `BS_PUSHBUTTON`.  
  
|Tipo|Descrizione|  
|----------|-----------------|  
|`BS_3STATE`|Crea un pulsante della casella di controllo con tre stati: `BST_CHECKED`, `BST_INDETERMINATE`, e `BST_UNCHECKED`. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria ma non modifica lo stato del pulsante. Per impostazione predefinita, viene visualizzato il testo associato a destra della casella di controllo. Per visualizzare il testo a sinistra della casella di controllo, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_AUTO3STATE`|Crea un pulsante della casella di controllo con tre stati: `BST_CHECKED`, `BST_INDETERMINATE`, e `BST_UNCHECKED`. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria e modifica lo stato del pulsante. Il pulsante indica ciclo nell'ordine di `BST_CHECKED`, `BST_INDETERMINATE`, e `BST_UNCHECKED`. Per impostazione predefinita, viene visualizzato il testo associato a destra della casella di controllo. Per visualizzare il testo a sinistra della casella di controllo, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_AUTOCHECKBOX`|Crea un pulsante della casella di controllo con due stati: `BST_CHECKED` e `BST_UNCHECKED`. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria e modifica lo stato del pulsante. Per impostazione predefinita, viene visualizzato il testo associato a destra della casella di controllo. Per visualizzare il testo a sinistra della casella di controllo, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_AUTORADIOBUTTON`|Crea un pulsante di opzione con due stati: `BST_CHECKED` e `BST_UNCHECKED`. Pulsanti di opzione vengono in genere utilizzati in gruppi, con ogni gruppo con un massimo di un'opzione selezionata in un momento. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria, imposta lo stato del pulsante di opzione selezionata per `BST_CHECKED`e imposta gli stati di tutti gli altri pulsanti di opzione nel gruppo di pulsanti per `BST_UNCHECKED`. Per impostazione predefinita, viene visualizzato il testo associato a destra del pulsante di opzione. Per visualizzare il testo a sinistra del pulsante di opzione, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_CHECKBOX`|Crea un pulsante della casella di controllo con due stati: `BST_CHECKED` e `BST_UNCHECKED`. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria ma non modifica lo stato del pulsante. Per impostazione predefinita, viene visualizzato il testo associato a destra della casella di controllo. Per visualizzare il testo a sinistra della casella di controllo, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_COMMANDLINK`|Crea un pulsante di collegamento. Un pulsante di collegamento è un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che consente di visualizzare una freccia verde a sinistra del testo principale e una nota sotto il testo principale. È possibile impostare il testo di nota tramite [CButton::SetNote](../../mfc/reference/cbutton-class.md#setnote).|  
|`BS_DEFCOMMANDLINK`|Crea un pulsante di collegamento. Un pulsante di collegamento è un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che consente di visualizzare una freccia verde a sinistra del testo principale e una nota sotto il testo principale. È possibile impostare il testo di nota tramite [CButton::SetNote](../../mfc/reference/cbutton-class.md#setnote). Se il pulsante in una finestra di dialogo, premere INVIO chiave invia un `BN_CLICKED` notifica alla finestra di dialogo anche quando il pulsante ha lo stato attivo.|  
|`BS_DEFPUSHBUTTON`|Crea un pulsante di comando con un bordo nero intenso. Se il pulsante in una finestra di dialogo, premere INVIO chiave invia un `BN_CLICKED` notifica alla finestra di dialogo anche quando il pulsante ha lo stato attivo.|  
|`BS_DEFSPLITBUTTON`|Crea un pulsante di divisione. Si tratta di un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che contiene un pulsante di una freccia a discesa adiacente. Quando si fa clic sul pulsante, viene eseguito il comando predefinito. Quando si fa clic sulla freccia giù, viene visualizzato un menu di comandi aggiuntivi. Se il pulsante di divisione è in una finestra di dialogo, premere INVIO chiave invia un `BN_CLICKED` notifica alla finestra di dialogo anche quando il pulsante ha lo stato attivo|  
|`BS_GROUPBOX`|Creazione di un rettangolo in cui è possono raggruppare gli altri pulsanti. Testo associato a questo stile viene visualizzato nell'angolo superiore sinistro del rettangolo.|  
|`BS_OWNERDRAW`|Crea un pulsante disegnato dal proprietario. Il framework chiama la `DrawItem` metodo quando un aspetto visivo del pulsante è stato modificato. Questo stile deve essere impostato quando si utilizza la `CBitmapButton` classe.|  
|`BS_PUSHBUTTON`|Crea un pulsante di comando che invia un `BN_CLICKED` notifica alla finestra proprietaria quando l'utente fa clic sul pulsante.|  
|`BS_RADIOBUTTON`|Crea un pulsante di opzione con due stati: `BST_CHECKED` e `BST_UNCHECKED`. Pulsanti di opzione vengono in genere utilizzati in gruppi, con ogni gruppo con un massimo di un'opzione selezionata in un momento. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria ma non modifica automaticamente lo stato dei pulsanti nel gruppo. Per impostazione predefinita, viene visualizzato il testo associato a destra del pulsante di opzione. Per visualizzare il testo a sinistra del pulsante di opzione, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_SPLITBUTTON`|Crea un pulsante di divisione. Si tratta di un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che contiene un pulsante di una freccia a discesa adiacente. Quando si fa clic sul pulsante, viene eseguito il comando predefinito. Quando si fa clic sulla freccia giù, viene visualizzato un menu di comandi aggiuntivi.|  
|`BS_USERBUTTON`|Obsoleta, ma fornito per compatibilità con le versioni di Windows a 16 bit. Le applicazioni basate su Win32 devono utilizzare `BS_OWNERDRAW` invece.|  
  
## <a name="radio-button-and-check-box-styles"></a>Stili casella di controllo e pulsante di opzione  
 Nella tabella seguente sono elencati gli stili che sono specifici per i pulsanti di opzione e caselle di controllo. Questi stili vengono ignorati tutti gli altri tipi di pulsante. È possibile scegliere uno o più delle seguenti operazioni.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_LEFTTEXT`|Se combinato con uno stile di casella di controllo o pulsante di opzione, il testo viene visualizzato sul lato sinistro di una casella di controllo o il pulsante di opzione.|  
|`BS_RIGHTBUTTON`|Se combinato con uno stile di casella di controllo o pulsante di opzione, il testo viene visualizzato sul lato sinistro di una casella di controllo o il pulsante di opzione. Questo stile è identico al `BS_LEFTTEXT` stile.|  
|`BS_PUSHLIKE`|Offre una casella di controllo o pulsante di opzione Cerca e comportarsi come un pulsante di comando. Viene visualizzato il pulsante premuto quando lo stato è `BST_CHECKED`, premuto e quando lo stato è attivo `BST_INDETERMINATE`e viene rilasciato quando lo stato è `BST_UNCHECKED`.|  
  
## <a name="text-alignment-styles"></a>Stili di allineamento del testo  
 Nella tabella seguente sono elencate le opzioni di allineamento testo orizzontale e verticale. È possibile scegliere uno dei valori seguenti.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_LEFT`|Il testo nel rettangolo pulsante Allinea a sinistra. Tuttavia, se il pulsante è una casella di controllo o pulsante di opzione che non dispone il `BS_RIGHTBUTTON` stile, il testo viene allineato a destra della casella di controllo o pulsante di opzione.|  
|`BS_RIGHT`|Il testo nel rettangolo pulsante Allinea a destra. Tuttavia, se il pulsante è una casella di controllo o pulsante di opzione che non dispone di `BS_RIGHTBUTTON` di stile, il testo allineato a destra sul lato destro della casella di controllo o pulsante di opzione.|  
|`BS_CENTER`|Allinea al centro il testo orizzontalmente nel rettangolo pulsante.|  
|`BS_TOP`|Inserisce il testo nella parte superiore del rettangolo di pulsante.|  
|`BS_BOTTOM`|Inserisce il testo nella parte inferiore del rettangolo di pulsante.|  
|`BS_VCENTER`|Centra il testo in senso verticale nel rettangolo di pulsante.|  
  
## <a name="button-content-options"></a>Pulsante Opzioni relative al contenuto  
 Nella tabella seguente sono elencate le opzioni che indicano ciò che viene visualizzato nel pulsante. Tipi di pulsanti che consentono di visualizzare solo testo ignorano questi stili. È possibile scegliere uno dei valori seguenti.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_BITMAP`|Specifica che il pulsante viene visualizzata una bitmap.|  
|`BS_ICON`|Specifica che il pulsante viene visualizzata un'icona.|  
|`BS_TEXT`|Specifica che il pulsante Visualizza il testo.|  
  
## <a name="other-options"></a>Altre opzioni  
 Nella tabella seguente sono elencate le opzioni aggiuntive che è possibile utilizzare con qualsiasi tipo di pulsante. È possibile scegliere uno o più delle seguenti operazioni.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_FLAT`|Specifica che il pulsante è bidimensionale e non venga creato con uno sfondo predefinito per creare un'immagine tridimensionale.|  
|`BS_MULTILINE`|Esegue il wrapping del testo del pulsante su più righe se la stringa di testo è troppo lunga per rientrare in una singola riga nel rettangolo di pulsante.|  
|`BS_NOTIFY`|Abilita un pulsante inviare `BN_DBLCLK`, `BN_KILLFOCUS`, e `BN_SETFOCUS` i messaggi di notifica alla finestra padre. Si noti che i pulsanti di trasmissione il `BN_CLICKED` notifica indipendentemente dal fatto che sia specificato o meno questo stile.|  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CButton::Create](../../mfc/reference/cbutton-class.md#create)
 [pulsante stili](http://msdn.microsoft.com/library/windows/desktop/bb775951)   




