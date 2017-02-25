---
title: "Gestione delle notifiche di personalizzazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TBN_CUSTHELP"
  - "TBN_QUERYINSERT"
  - "TBNOTIFY"
  - "NMHDR"
  - "TBN_TOOLBARCHANGE"
  - "TBN_ENDDRAG"
  - "NM_SETFOCUS"
  - "TBN_RESET"
  - "NM_RETURN"
  - "NM_ENDWAIT"
  - "NM_STARTWAIT"
  - "TBN_BEGINDRAG"
  - "NM_OUTOFMEMORY"
  - "TBN_QUERYDELETE"
  - "NM_DBLCLK"
  - "TBN_ENDADJUST"
  - "NM_KILLFOCUS"
  - "NM_RCLICK"
  - "TBN_BEGINADJUST"
  - "NM_CLICK"
  - "NM_RDBLCLK::"
  - "TBN_GETBUTTONINFO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TBN_ENDADJUST (notifica)"
  - "TBNOTIFY (notifica)"
  - "TBN_BEGINDRAG (notifica)"
  - "TBN_TOOLBARCHANGE (notifica)"
  - "NM_CLICK (notifica)"
  - "NM_RETURN (notifica)"
  - "NM_RCLICK (notifica)"
  - "TBN_ENDDRAG (notifica)"
  - "TBN_BEGINADJUST (notifica)"
  - "NM_ENDWAIT (notifica)"
  - "NM_KILLFOCUS (notifica)"
  - "NM_SETFOCUS (notifica)"
  - "NM_OUTOFMEMORY (notifica)"
  - "TBN_QUERYINSERT (notifica)"
  - "NMHDR"
  - "NM_STARTWAIT (notifica)"
  - "CToolBarCtrl (classe), gestione delle notifiche"
  - "TBN_CUSTHELP (notifica)"
  - "TBN_RESET (notifica)"
  - "NM_DBLCLK (notifica)"
  - "TBN_QUERYDELETE (notifica)"
  - "NM_RDBLCLK (notifica)"
  - "TBN_GETBUTTONINFO (notifica)"
ms.assetid: 219ea08e-7515-4b98-85cb-47120f08c0a2
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Gestione delle notifiche di personalizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In una comune barra degli strumenti Windows sono incorporate funzionalità di personalizzazione, inclusa una finestra di dialogo di personalizzazione definita dal sistema, che consentono all'utente di inserire, eliminare o riordinare i pulsanti della barra degli strumenti. L'applicazione determina se le funzionalità di personalizzazione sono disponibili e controlla l'ambito in cui l'utente può personalizzare la barra degli strumenti.  
  
 È possibile rendere queste funzionalità di personalizzazione disponibili all'utente assegnando alla barra degli strumenti lo stile `CCS_ADJUSTABLE`. Le funzionalità di personalizzazione consentono all'utente di trascinare un pulsante in una nuova posizione o di rimuovere un pulsante trascinandolo dalla barra degli strumenti. L'utente può anche fare doppio clic sulla barra degli strumenti per visualizzare la finestra di dialogo **Personalizza barra degli strumenti**, che consente di aggiungere, eliminare e riordinare i pulsanti della barra degli strumenti. L'applicazione può visualizzare la finestra di dialogo con la funzione membro [Personalizza](../Topic/CToolBarCtrl::Customize.md).  
  
 La barra degli strumenti invia messaggi di notifica alla finestra padre in ogni fase del processo di personalizzazione. Se l'utente tiene premuto il tasto MAIUSC e inizia a trascinare un pulsante, la barra degli strumenti gestisce automaticamente l'operazione di trascinamento. La barra degli strumenti invia il messaggio di notifica **TBN\_QUERYDELETE** alla finestra padre per determinare se il pulsante può essere eliminato. L'operazione di trascinamento termina se la finestra padre restituisce **FALSE**. In caso contrario, la barra degli strumenti acquisisce gli input del mouse e attende che l'utente rilasci il pulsante del mouse.  
  
 Quando l'utente rilascia il pulsante del mouse, la barra degli strumenti determina la posizione del cursore del mouse. Se il cursore si trova all'esterno della barra degli strumenti, il pulsante viene eliminato. Se il cursore si trova in su altro pulsante della barra degli strumenti, la barra degli strumenti invia il messaggio di notifica **TBN\_QUERYINSERT** alla finestra padre per determinare se un pulsante può essere inserito a sinistra del pulsante specificato. Il pulsante viene inserito se la finestra padre restituisce **TRUE**; in caso contrario, non viene inserito. La barra degli strumenti invia il messaggio di notifica **TBN\_TOOLBARCHANGE** per segnalare la fine dell'operazione di trascinamento.  
  
 Se l'utente inizia un'operazione di trascinamento senza tenere premuto il tasto MAIUSC, la barra degli strumenti invia il messaggio di notifica **TBN\_BEGINDRAG** alla finestra proprietaria. Un'applicazione che implementa il proprio codice di trascinamento pulsante può usare questo messaggio come un segnale per iniziare un'operazione di trascinamento. La barra degli strumenti invia il messaggio di notifica **TBN\_ENDDRAG** per segnalare la fine dell'operazione di trascinamento.  
  
 Una barra degli strumenti invia messaggi di notifica quando l'utente personalizza una barra degli strumenti usando la finestra di dialogo **Personalizza barra degli strumenti**. La barra degli strumenti invia il messaggio di notifica **TBN\_BEGINADJUST** dopo che l'utente ha fatto doppio clic sulla barra degli strumenti, ma prima la finestra di dialogo venga creato. Successivamente, la barra degli strumenti inizia a inviare una serie di messaggi di notifica **TBN\_QUERYINSERT** per determinare se la barra degli strumenti consente di inserire i pulsanti. Quando la finestra padre restituisce **TRUE**, la barra degli strumenti interrompe l'invio dei messaggi di notifica **TBN\_QUERYINSERT**. Se la finestra padre non restituisce **TRUE** per nessun pulsante, la barra degli strumenti elimina la finestra di dialogo.  
  
 Successivamente, la barra degli strumenti determina se è possibile eliminare dei pulsanti dalla barra degli strumenti inviando un messaggio di notifica **TBN\_QUERYDELETE** per ciascuno di essi. La finestra padre restituisce **TRUE** per indicare che un pulsante può essere eliminato; in caso contrario, restituisce **FALSE**. La barra degli strumenti aggiunge tutti i relativi pulsanti alla finestra di dialogo e disattiva quelli che non è possibile eliminare.  
  
 Ogni volta che la barra degli strumenti necessita di informazioni su un pulsante nella finestra di dialogo Personalizza barra degli strumenti, invia il messaggio di notifica **TBN\_GETBUTTONINFO**, specificando l'indice del pulsante su cui si richiedono informazioni e l'indirizzo di una struttura **TBNOTIFY**. La finestra padre deve compilare la struttura con le informazioni pertinenti.  
  
 La finestra di dialogo **Personalizza barra degli strumenti** include un pulsante della Guida in linea e un pulsante Reimposta. Quando l'utente sceglie il pulsante della Guida in linea, la barra degli strumenti invia il messaggio di notifica **TBN\_CUSTHELP**. La finestra padre risponderà visualizzando le informazioni della Guida. La finestra di dialogo invia il messaggio di notifica **TBN\_RESET** quando l'utente seleziona il pulsante Reimposta. Questo messaggio segnala che la barra degli strumenti sta per reinizializzare la finestra di dialogo.  
  
 Questi sono tutti messaggi **WM\_NOTIFY** che possono essere gestiti nella finestra proprietaria aggiungendo le voci della mappa messaggi del form seguente alla mappa messaggi della finestra proprietaria:  
  
 `ON_NOTIFY( wNotifyCode, idControl, memberFxn )`  
  
 `wNotifyCode`  
 Codice identificatore del messaggio di notifica, ad esempio **TBN\_BEGINADJUST**.  
  
 `idControl`  
 Identificatore del controllo che invia la notifica.  
  
 `memberFxn`  
 Funzione membro da chiamare quando si riceve la notifica.  
  
 La funzione membro sarebbe dichiarata con il prototipo seguente:  
  
 `afx_msg void memberFxn( NMHDR * pNotifyStruct, LRESULT * result );`  
  
 Se il gestore dei messaggi di notifica restituisce un valore, è necessario inserirlo in **LRESULT** a cui puntava *result*.  
  
 Per ogni messaggio, `pNotifyStruct` punta a una delle due strutture **NMHDR** o **TBNOTIFY**. Queste strutture sono descritte di seguito:  
  
 La struttura **NMHDR** contiene i membri seguenti:  
  
 `typedef struct tagNMHDR {`  
  
 `HWND hwndFrom;  // handle of control sending message`  
  
 `UINT idFrom;// identifier of control sending message`  
  
 `UINT code;  // notification code; see below`  
  
 `} NMHDR;`  
  
 **hwndFrom**  
 Handle della finestra del controllo che invia la notifica. Per convertire questo handle in un puntatore `CWnd`, usare [CWnd::FromHandle](../Topic/CWnd::FromHandle.md).  
  
 **idFrom**  
 Identificatore del controllo che invia la notifica.  
  
 **codice**  
 Codice di notifica. Questo membro può essere un valore specifico di un tipo di controllo, ad esempio **TBN\_BEGINADJUST** o **TTN\_NEEDTEXT**, oppure può essere uno dei valori di notifica comuni elencati di seguito:  
  
-   **NM\_CLICK** L'utente ha fatto clic con il pulsante sinistro del mouse sul controllo.  
  
-   **NM\_DBLCLK** L'utente ha fatto doppio clic con il pulsante sinistro del mouse sul controllo.  
  
-   **NM\_KILLFOCUS** Il controllo ha perso lo stato attivo per l'input.  
  
-   **NM\_OUTOFMEMORY** Il controllo non ha completato un'operazione perché la memoria non è sufficiente.  
  
-   **NM\_RCLICK** L'utente ha fatto clic con il pulsante destro del mouse sul controllo.  
  
-   **NM\_RDBLCLK** L'utente ha fatto doppio clic con il pulsante destro del mouse sul controllo.  
  
-   **NM\_RETURN** Lo stato attivo per l'input si trova sul controllo e l'utente ha premuto il tasto INVIO.  
  
-   **NM\_SETFOCUS** Il controllo ha ricevuto lo stato attivo per l'input.  
  
 La struttura **TBNOTIFY** contiene i membri seguenti:  
  
 `typedef struct {`  
  
 `NMHDR hdr; // information common to all WM_NOTIFY messages`  
  
 `int iItem; // index of button associated with notification`  
  
 `TBBUTTON tbButton; // info about button associated withnotification`  
  
 `int cchText;   // count of characters in button text`  
  
 `LPSTR lpszText;// address of button text`  
  
 `} TBNOTIFY, FAR* LPTBNOTIFY;`  
  
## Note  
 **hdr**  
 Informazioni comuni a tutti i messaggi **WM\_NOTIFY**.  
  
 **iItem**  
 Indice del pulsante associato alla notifica.  
  
 **tbButton**  
 Struttura `TBBUTTON` contenente informazioni sul pulsante della barra degli strumenti associato alla notifica.  
  
 **cchText**  
 Numero di caratteri nel testo dei pulsanti.  
  
 **lpszText**  
 Puntatore al testo del pulsante.  
  
 Le notifiche che la barra degli strumenti invia sono i seguenti:  
  
-   **TBN\_BEGINADJUST** Inviato quando l'utente inizia a personalizzare una barra degli strumenti. Il puntatore punta a una struttura **NMHDR** contenente informazioni sulla notifica. Il gestore non deve necessariamente restituire un valore specifico.  
  
-   **TBN\_BEGINDRAG** Inviato quando l'utente inizia a trascinare un pulsante su una barra degli strumenti. Il puntatore punta a una struttura **TBNOTIFY**. Il membro **iItem** contiene l'indice in base zero del pulsante trascinato. Il gestore non deve necessariamente restituire un valore specifico.  
  
-   **TBN\_CUSTHELP** Inviato quando l'utente sceglie il pulsante ? nella finestra di dialogo Personalizza barra degli strumenti. Nessun valore restituito. Il puntatore punta a una struttura **NMHDR** contenente informazioni sul messaggio di notifica. Il gestore non deve necessariamente restituire un valore specifico.  
  
-   **TBN\_ENDADJUST** Inviato quando l'utente termina di personalizzare una barra degli strumenti. Il puntatore punta a una struttura **NMHDR** contenente informazioni sul messaggio di notifica. Il gestore non deve necessariamente restituire un valore specifico.  
  
-   **TBN\_ENDDRAG** Inviato quando l'utente termina di trascinare un pulsante su una barra degli strumenti. Il puntatore punta a una struttura **TBNOTIFY**. Il membro **iItem** contiene l'indice in base zero del pulsante trascinato. Il gestore non deve necessariamente restituire un valore specifico.  
  
-   **TBN\_GETBUTTONINFO** Inviato quando l'utente sta personalizzando una barra degli strumenti. La barra degli strumenti usa questo messaggio di notifica per recuperare le informazioni necessarie per la finestra di dialogo Personalizza barra degli strumenti. Il puntatore punta a una struttura **TBNOTIFY**. Il membro **iItem** specifica l'indice in base zero di un pulsante. I membri **pszText** e **cchText** specificano l'indirizzo e la lunghezza, in caratteri, del testo del pulsante corrente. Un'applicazione dovrebbe popolare la struttura con le informazioni relative al pulsante. Restituisce **TRUE** se le informazioni sul pulsante sono state copiate nella struttura; in caso contrario, restituisce **FALSE**.  
  
-   **TBN\_QUERYDELETE** Inviato quando l'utente sta personalizzando una barra degli strumenti per determinare se è possibile eliminare un pulsante dalla stessa. Il puntatore punta a una struttura **TBNOTIFY**. Il membro **iItem** contiene l'indice in base zero del pulsante da eliminare. Restituisce **TRUE** per consentire l'eliminazione del pulsante o **FALSE** per impedirne l'eliminazione.  
  
-   **TBN\_QUERYINSERT** Inviato quando l'utente personalizza la barra degli strumenti per determinare se un pulsante può essere inserito a sinistra del pulsante specificato. Il puntatore punta a una struttura **TBNOTIFY**. Il membro **iItem** contiene l'indice in base zero del pulsante da inserire. Restituisce **TRUE** per consentire l'inserimento del pulsante davanti al pulsante specificato o **FALSE** per impedirne l'inserimento.  
  
-   **TBN\_RESET** Inviato quando l'utente reimposta il contenuto della finestra di dialogo Personalizza barra degli strumenti. Il puntatore punta a una struttura **NMHDR** contenente informazioni sul messaggio di notifica. Il gestore non deve necessariamente restituire un valore specifico.  
  
-   **TBN\_TOOLBARCHANGE** Inviato dopo che l'utente ha personalizzato una barra degli strumenti. Il puntatore punta a una struttura **NMHDR** contenente informazioni sul messaggio di notifica. Il gestore non deve necessariamente restituire un valore specifico.  
  
## Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)