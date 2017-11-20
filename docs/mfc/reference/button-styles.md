---
title: Stili pulsante | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
helpviewer_keywords:
- BS_NOTIFY constant [MFC]
- BS_RIGHTBUTTON constant [MFC]
- styles [MFC], button objects
- BS_USERBUTTON constant [MFC]
- BS_VCENTER constant [MFC]
- BS_PUSHLIKE constant [MFC]
- BS_RADIOBUTTON constant [MFC]
- BS_PUSHBUTTON constant [MFC]
- BS_DEFPUSHBUTTON constant [MFC]
- BS_LEFTTEXT constant [MFC]
- button objects (CButton), button styles
- BS_AUTO3STATE constant [MFC]
- BS_3STATE constant [MFC]
- BS_OWNERDRAW constant [MFC]
- BS_AUTORADIOBUTTON constant [MFC]
- BS_GROUPBOX constant [MFC]
- BS_BITMAP constant [MFC]
- BS_CENTER constant [MFC]
- BS_MULTILINE constant [MFC]
- BS_BOTTOM constant [MFC]
- BS_FLAT constant [MFC]
- BS_AUTOCHECKBOX constant [MFC]
- BS_RIGHT constant [MFC]
- BS_CHECKBOX constant [MFC]
- BS_LEFT constant [MFC]
- BS_ICON constant [MFC]
- BS_TOP constant [MFC]
- BS_TEXT constant
ms.assetid: 41206f72-2b92-4250-ae32-31184046402f
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 18ad3454ddf4d1286d0ba608c3a25d05959de14d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="button-styles"></a>Stili dei pulsanti
Questo argomento descrive gli stili e i tipi di pulsanti.  
  
## <a name="button-types"></a>Tipi di pulsanti  
 Nella tabella seguente sono elencati i tipi di pulsanti. È possibile scegliere uno dei valori seguenti. Se non si specifica un tipo di pulsante, il valore predefinito è `BS_PUSHBUTTON`.  
  
|Tipo|Descrizione|  
|----------|-----------------|  
|`BS_3STATE`|Crea un pulsante della casella di controllo con tre stati: `BST_CHECKED`, `BST_INDETERMINATE`, e `BST_UNCHECKED`. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria ma non modifica lo stato del pulsante. Per impostazione predefinita, viene visualizzato il testo associato a destra della casella di controllo. Per visualizzare testo a sinistra della casella di controllo, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_AUTO3STATE`|Crea un pulsante della casella di controllo con tre stati: `BST_CHECKED`, `BST_INDETERMINATE`, e `BST_UNCHECKED`. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria e modifica lo stato del pulsante. Il pulsante indica ciclo nell'ordine di `BST_CHECKED`, `BST_INDETERMINATE`, e `BST_UNCHECKED`. Per impostazione predefinita, viene visualizzato il testo associato a destra della casella di controllo. Per visualizzare testo a sinistra della casella di controllo, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_AUTOCHECKBOX`|Crea un pulsante della casella di controllo con due stati: `BST_CHECKED` e `BST_UNCHECKED`. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria e modifica lo stato del pulsante. Per impostazione predefinita, viene visualizzato il testo associato a destra della casella di controllo. Per visualizzare testo a sinistra della casella di controllo, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_AUTORADIOBUTTON`|Crea un pulsante di opzione con due stati: `BST_CHECKED` e `BST_UNCHECKED`. Pulsanti di opzione vengono in genere utilizzati nei gruppi, con ogni gruppo con un massimo di un'opzione selezionata in una fase. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria, imposta lo stato del pulsante di opzione selezionato a `BST_CHECKED`e imposta gli stati di tutti gli altri pulsanti di opzione nel gruppo di pulsanti per `BST_UNCHECKED`. Per impostazione predefinita, viene visualizzato il testo associato a destra del pulsante di opzione. Per visualizzare il testo a sinistra del pulsante di opzione, usare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_CHECKBOX`|Crea un pulsante della casella di controllo con due stati: `BST_CHECKED` e `BST_UNCHECKED`. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria ma non modifica lo stato del pulsante. Per impostazione predefinita, viene visualizzato il testo associato a destra della casella di controllo. Per visualizzare testo a sinistra della casella di controllo, utilizzare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_COMMANDLINK`|Crea un pulsante di comando di collegamento. Un pulsante di comando di collegamento è un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che consente di visualizzare una freccia verde a sinistra del testo principale e una nota sotto il testo principale. È possibile impostare il testo della nota tramite [CButton::SetNote](../../mfc/reference/cbutton-class.md#setnote).|  
|`BS_DEFCOMMANDLINK`|Crea un pulsante di comando di collegamento. Un pulsante di comando di collegamento è un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che consente di visualizzare una freccia verde a sinistra del testo principale e una nota sotto il testo principale. È possibile impostare il testo della nota tramite [CButton::SetNote](../../mfc/reference/cbutton-class.md#setnote). Se il pulsante in una finestra di dialogo, premendo INVIO chiave invia un `BN_CLICKED` notifica alla finestra di dialogo anche quando il pulsante ha lo stato attivo.|  
|`BS_DEFPUSHBUTTON`|Crea un pulsante di comando che ha un bordo nero intenso. Se il pulsante in una finestra di dialogo, premendo INVIO chiave invia un `BN_CLICKED` notifica alla finestra di dialogo anche quando il pulsante ha lo stato attivo.|  
|`BS_DEFSPLITBUTTON`|Crea un pulsante di menu combinato. Si tratta di un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che contiene un pulsante adiacente a una freccia a discesa. Quando si fa clic sul pulsante, viene eseguito il comando predefinito. Quando si fa clic sulla freccia a discesa, viene visualizzato un menu di comandi aggiuntivi. Se il pulsante di menu combinato è in una finestra di dialogo, premendo INVIO chiave invia un `BN_CLICKED` notifica alla finestra di dialogo anche quando il pulsante ha lo stato attivo|  
|`BS_GROUPBOX`|Creazione di un rettangolo in cui è possono raggruppare altri pulsanti. Testo associato a questo stile viene visualizzato nell'angolo superiore sinistro del rettangolo.|  
|`BS_OWNERDRAW`|Crea un pulsante disegnato dal proprietario. Il framework chiama la `DrawItem` metodo quando un aspetto visivo del pulsante è stato modificato. Questo stile deve essere impostato quando si utilizza la `CBitmapButton` classe.|  
|`BS_PUSHBUTTON`|Crea un pulsante di comando che invia un `BN_CLICKED` notifica alla finestra proprietaria quando l'utente fa clic sul pulsante.|  
|`BS_RADIOBUTTON`|Crea un pulsante di opzione con due stati: `BST_CHECKED` e `BST_UNCHECKED`. Pulsanti di opzione vengono in genere utilizzati nei gruppi, con ogni gruppo con un massimo di un'opzione selezionata in una fase. Fare clic sul pulsante Invia un `BN_CLICKED` notifica alla finestra proprietaria ma non modifica automaticamente lo stato di qualsiasi pulsante del gruppo. Per impostazione predefinita, viene visualizzato il testo associato a destra del pulsante di opzione. Per visualizzare il testo a sinistra del pulsante di opzione, usare il `BS_LEFTTEXT` o `BS_RIGHTBUTTON` stile.|  
|`BS_SPLITBUTTON`|Crea un pulsante di menu combinato. Si tratta di un pulsante di comando specifico di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] che contiene un pulsante adiacente a una freccia a discesa. Quando si fa clic sul pulsante, viene eseguito il comando predefinito. Quando si fa clic sulla freccia a discesa, viene visualizzato un menu di comandi aggiuntivi.|  
|`BS_USERBUTTON`|Obsoleta, ma fornito per compatibilità con le versioni di Windows a 16 bit. Le applicazioni basate su Win32 devono utilizzare `BS_OWNERDRAW` invece.|  
  
## <a name="radio-button-and-check-box-styles"></a>Pulsante di opzione e gli stili di casella di controllo  
 Nella tabella seguente sono elencati gli stili che sono specifici di pulsanti di opzione e caselle di controllo. Questi stili vengono ignorati tutti gli altri tipi di pulsante. È possibile scegliere uno o più delle operazioni seguenti.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_LEFTTEXT`|Quando combinato con uno stile di casella di controllo o pulsante di opzione, il testo viene visualizzato sul lato sinistro di una casella di controllo o il pulsante di opzione.|  
|`BS_RIGHTBUTTON`|Quando combinato con uno stile di casella di controllo o pulsante di opzione, il testo viene visualizzato sul lato sinistro di una casella di controllo o il pulsante di opzione. Questo stile è identico al `BS_LEFTTEXT` stile.|  
|`BS_PUSHLIKE`|Consente di una casella di controllo o pulsante di opzione aspetto e il comportamento di un pulsante di comando. Viene visualizzato il pulsante premuto quando il relativo stato è `BST_CHECKED`, premuto e quando lo stato è attivo `BST_INDETERMINATE`e vengono rilasciati quando lo stato è `BST_UNCHECKED`.|  
  
## <a name="text-alignment-styles"></a>Stili di allineamento del testo  
 La tabella seguente elenca le opzioni di allineamento testo orizzontale e verticale. È possibile scegliere uno dei valori seguenti.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_LEFT`|Il testo nel rettangolo pulsante Allinea a sinistra. Tuttavia, se il pulsante è una casella di controllo o pulsante di opzione che non dispone di `BS_RIGHTBUTTON` stile, il testo viene lasciato allineato a destra della casella di controllo o pulsante di opzione.|  
|`BS_RIGHT`|Il testo nel rettangolo pulsante Allinea a destra. Tuttavia, se il pulsante è una casella di controllo o pulsante di opzione che non dispone di `BS_RIGHTBUTTON` di stile, il testo allineato a destra sul lato destro della casella di controllo o pulsante di opzione.|  
|`BS_CENTER`|Allinea al centro il testo orizzontalmente nel rettangolo pulsante.|  
|`BS_TOP`|Inserisce il testo nella parte superiore del rettangolo di pulsante.|  
|`BS_BOTTOM`|Inserisce il testo nella parte inferiore del rettangolo di pulsante.|  
|`BS_VCENTER`|Allinea al centro il testo verticale nel rettangolo pulsante.|  
  
## <a name="button-content-options"></a>Pulsante Opzioni di contenuto  
 La tabella seguente elenca le opzioni che indicano ciò che viene visualizzato nel pulsante. Tipi di pulsanti che consentono di visualizzare solo testo ignorano gli stili. È possibile scegliere uno dei valori seguenti.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_BITMAP`|Specifica che il pulsante Visualizza un'immagine bitmap.|  
|`BS_ICON`|Specifica che il pulsante Visualizza un'icona.|  
|`BS_TEXT`|Specifica che il pulsante Visualizza il testo.|  
  
## <a name="other-options"></a>Altre opzioni  
 La tabella seguente elenca le opzioni aggiuntive che è possibile usare con qualsiasi tipo di pulsante. È possibile scegliere uno o più delle operazioni seguenti.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|`BS_FLAT`|Specifica che il pulsante è bidimensionale e non viene disegnato con l'ombreggiatura di valore predefinito per creare un'immagine tridimensionale.|  
|`BS_MULTILINE`|Esegue il wrapping del testo del pulsante su più righe se la stringa di testo è troppo lunga per rientrare in una singola riga nel rettangolo pulsante.|  
|`BS_NOTIFY`|Abilita un pulsante inviare `BN_DBLCLK`, `BN_KILLFOCUS`, e `BN_SETFOCUS` i messaggi di notifica alla finestra padre. Si noti che i pulsanti di invio di `BN_CLICKED` notifica indipendentemente dal fatto se viene specificato questo stile.|  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CButton::Create](../../mfc/reference/cbutton-class.md#create) [stili pulsante](http://msdn.microsoft.com/library/windows/desktop/bb775951)   



