---
title: "Gestione delle notifiche delle descrizioni comandi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolBarCtrl (classe), gestione delle notifiche"
  - "notifiche, descrizioni comandi"
  - "descrizioni comandi [C++], notifiche"
  - "TOOLTIPTEXT (struttura)"
ms.assetid: ddb93b5f-2e4f-4537-8053-3453c86e2bbb
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Gestione delle notifiche delle descrizioni comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si specifica lo stile di `TBSTYLE_TOOLTIPS`, la barra degli strumenti crea e gestisce un controllo tooltip.  Descrizione comandi è una piccola finestra popup che contiene una riga di testo che descrive un pulsante della barra degli strumenti.  La descrizione comandi è nascosta, e solo quando l'utente invia il cursore sul pulsante della barra degli strumenti e lo possibile che per sulla metà di secondo.  La descrizione comandi visualizzati accanto al cursore.  
  
 Prima della descrizione comandi visualizzati, il messaggio di notifica di **TTN\_NEEDTEXT** viene inviato alla finestra proprietaria della barra degli strumenti per recuperare il testo descrittivo per il pulsante.  Se la finestra proprietaria della barra degli strumenti è una finestra di `CFrameWnd`, descrizioni comandi visualizzati senza alcuno sforzo aggiuntivo, perché `CFrameWnd` dispone di un gestore predefinito per la notifica di **TTN\_NEEDTEXT**.  Se la finestra proprietaria della barra degli strumenti non è derivata da `CFrameWnd`, ad esempio una finestra di dialogo o una visualizzazione form, è necessario aggiungere una voce alla mappa messaggi della finestra proprietaria e fornire un gestore di notifica della mappa messaggi.  La voce della mappa messaggi della finestra proprietaria è la seguente:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#40](../mfc/codesnippet/CPP/handling-tool-tip-notifications_1.cpp)]  
  
## Note  
 `memberFxn`  
 La funzione membro da chiamare quando il testo è necessario per questo pulsante.  
  
 Si noti che l'id di descrizione comandi è sempre 0.  
  
 Oltre alla notifica di **TTN\_NEEDTEXT**, un controllo tooltip può inviare le notifiche a un controllo toolbar:  
  
|Notification|Significato|  
|------------------|-----------------|  
|**TTN\_NEEDTEXTA**|Il controllo di descrizione comandi richiede il testo ASCII \(Windows 95 solo\)|  
|**TTN\_NEEDTEXTW**|Il controllo di descrizione comandi richiede il testo Unicode \(Windows NT solo\)|  
|**TBN\_HOTITEMCHANGE**|Indica che l'elemento \(evidenziato a caldo\) è stato modificato.|  
|**NM\_RCLICK**|Indica che l'utente ha fatto clic con il pulsante destro del mouse su un pulsante.|  
|**TBN\_DRAGOUT**|Indica che l'utente ha fatto clic sul pulsante e ha trascinato il puntatore dal pulsante.  Consente a un'applicazione di implementare il trascinamento della selezione da un pulsante della barra degli strumenti.  In ricevere la notifica, l'applicazione verrà avviata l'operazione di trascinamento.|  
|**TBN\_DROPDOWN**|Indica che l'utente ha fatto clic su un pulsante che utilizza lo stile di **TBSTYLE\_DROPDOWN**.|  
|**TBN\_GETOBJECT**|Indica che l'utente ha spostato il puntatore su un pulsante che utilizza lo stile di **TBSTYLE\_DROPPABLE**.|  
  
 Per un esempio la funzione di gestione e ulteriori informazioni su abilitare le descrizioni comandi, vedere [Descrizioni comandi](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).  
  
## Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)