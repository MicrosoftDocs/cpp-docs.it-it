---
title: Gestione delle notifiche di personalizzazione
ms.date: 11/04/2016
f1_keywords:
- TBN_CUSTHELP
- TBN_QUERYINSERT
- TBNOTIFY
- NMHDR
- TBN_TOOLBARCHANGE
- TBN_ENDDRAG
- NM_SETFOCUS
- TBN_RESET
- NM_RETURN
- NM_ENDWAIT
- NM_STARTWAIT
- TBN_BEGINDRAG
- NM_OUTOFMEMORY
- TBN_QUERYDELETE
- NM_DBLCLK
- TBN_ENDADJUST
- NM_KILLFOCUS
- NM_RCLICK
- TBN_BEGINADJUST
- NM_CLICK
helpviewer_keywords:
- TBN_ENDADJUST notification [MFC]
- TBNOTIFY notification [MFC]
- TBN_BEGINDRAG notification [MFC]
- TBN_TOOLBARCHANGE notification [MFC]
- NM_CLICK notification [MFC]
- NM_RETURN notification [MFC]
- NM_RCLICK notification [MFC]
- TBN_ENDDRAG notification [MFC]
- TBN_BEGINADJUST notification [MFC]
- NM_ENDWAIT notification [MFC]
- NM_KILLFOCUS notification [MFC]
- NM_SETFOCUS notification [MFC]
- NM_OUTOFMEMORY notification [MFC]
- TBN_QUERYINSERT notification [MFC]
- NMHDR [MFC]
- NM_STARTWAIT notification [MFC]
- CToolBarCtrl class [MFC], handling notifications
- TBN_CUSTHELP notification [MFC]
- TBN_RESET notification [MFC]
- NM_DBLCLK notification [MFC]
- TBN_QUERYDELETE notification [MFC]
- NM_RDBLCLK notification [MFC]
- TBN_GETBUTTONINFO notification [MFC]
ms.assetid: 219ea08e-7515-4b98-85cb-47120f08c0a2
ms.openlocfilehash: 67f40d0dc50a853a39cb9b60a938d8eafe8293c4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370480"
---
# <a name="handling-customization-notifications"></a>Gestione delle notifiche di personalizzazione

In una comune barra degli strumenti Windows sono incorporate funzionalità di personalizzazione, inclusa una finestra di dialogo di personalizzazione definita dal sistema, che consentono all'utente di inserire, eliminare o riordinare i pulsanti della barra degli strumenti. L'applicazione determina se le funzionalità di personalizzazione sono disponibili e controlla l'ambito in cui l'utente può personalizzare la barra degli strumenti.

È possibile rendere disponibili all'utente queste funzionalità di personalizzazione assegnando alla barra degli strumenti lo stile **CCS_ADJUSTABLE.** Le funzionalità di personalizzazione consentono all'utente di trascinare un pulsante in una nuova posizione o di rimuovere un pulsante trascinandolo dalla barra degli strumenti. L'utente può anche fare doppio clic sulla barra degli strumenti per visualizzare la finestra di dialogo **Personalizza barra degli strumenti** , che consente di aggiungere, eliminare e riordinare i pulsanti della barra degli strumenti. L'applicazione può visualizzare la finestra di dialogo con la funzione membro [Personalizza](../mfc/reference/ctoolbarctrl-class.md#customize) .

La barra degli strumenti invia messaggi di notifica alla finestra padre in ogni fase del processo di personalizzazione. Se l'utente tiene premuto il tasto MAIUSC e inizia a trascinare un pulsante, la barra degli strumenti gestisce automaticamente l'operazione di trascinamento. La barra degli strumenti invia il messaggio di notifica **TBN_QUERYDELETE** alla finestra padre per determinare se il pulsante può essere eliminato. L'operazione di trascinamento termina se la finestra padre restituisce **FALSE**. In caso contrario, la barra degli strumenti acquisisce gli input del mouse e attende che l'utente rilasci il pulsante del mouse.

Quando l'utente rilascia il pulsante del mouse, la barra degli strumenti determina la posizione del cursore del mouse. Se il cursore si trova all'esterno della barra degli strumenti, il pulsante viene eliminato. Se il cursore si trova in su altro pulsante della barra degli strumenti, la barra degli strumenti invia il messaggio di notifica **TBN_QUERYINSERT** alla finestra padre per determinare se un pulsante può essere inserito a sinistra del pulsante specificato. Il pulsante viene inserito se la finestra padre restituisce **TRUE**; in caso contrario, non viene inserito. La barra degli strumenti invia il messaggio di notifica **TBN_TOOLBARCHANGE** per segnalare la fine dell'operazione di trascinamento.

Se l'utente inizia un'operazione di trascinamento senza tenere premuto il tasto MAIUSC, la barra degli strumenti invia il messaggio di notifica **TBN_BEGINDRAG** alla finestra proprietaria. Un'applicazione che implementa il proprio codice di trascinamento pulsante può usare questo messaggio come un segnale per iniziare un'operazione di trascinamento. La barra degli strumenti invia il messaggio di notifica **TBN_ENDDRAG** per segnalare la fine dell'operazione di trascinamento.

Una barra degli strumenti invia messaggi di notifica quando l'utente personalizza una barra degli strumenti usando la finestra di dialogo **Personalizza barra degli strumenti** . La barra degli strumenti invia il messaggio di notifica **TBN_BEGINADJUST** dopo che l'utente ha fatto doppio clic sulla barra degli strumenti, ma prima la finestra di dialogo venga creato. Successivamente, la barra degli strumenti inizia a inviare una serie di messaggi di notifica **TBN_QUERYINSERT** per determinare se la barra degli strumenti consente di inserire i pulsanti. Quando la finestra padre restituisce **TRUE**, la barra degli strumenti interrompe l'invio dei messaggi di notifica **TBN_QUERYINSERT** . Se la finestra padre non restituisce **TRUE** per nessun pulsante, la barra degli strumenti elimina la finestra di dialogo.

Successivamente, la barra degli strumenti determina se è possibile eliminare dei pulsanti dalla barra degli strumenti inviando un messaggio di notifica **TBN_QUERYDELETE** per ciascuno di essi. La finestra padre restituisce **TRUE** per indicare che un pulsante può essere eliminato; in caso contrario, restituisce **FALSE**. La barra degli strumenti aggiunge tutti i relativi pulsanti alla finestra di dialogo e disattiva quelli che non è possibile eliminare.

Ogni volta che la barra degli strumenti necessita di informazioni su un pulsante nella finestra di dialogo Personalizza barra degli strumenti, invia il messaggio di notifica **TBN_GETBUTTONINFO** , specificando l'indice del pulsante su cui si richiedono informazioni e l'indirizzo di una struttura **TBNOTIFY** . La finestra padre deve compilare la struttura con le informazioni pertinenti.

La finestra di dialogo **Personalizza barra degli strumenti** include un pulsante della Guida in linea e un pulsante Reimposta. Quando l'utente sceglie il pulsante della Guida in linea, la barra degli strumenti invia il messaggio di notifica **TBN_CUSTHELP** . La finestra padre risponderà visualizzando le informazioni della Guida. La finestra di dialogo invia il messaggio di notifica **TBN_RESET** quando l'utente seleziona il pulsante Reimposta. Questo messaggio segnala che la barra degli strumenti sta per reinizializzare la finestra di dialogo.

Questi sono tutti messaggi **WM_NOTIFY** che possono essere gestiti nella finestra proprietaria aggiungendo le voci della mappa messaggi del form seguente alla mappa messaggi della finestra proprietaria:

```cpp
ON_NOTIFY( wNotifyCode, idControl, memberFxn )
```

- **wNotifyCode (codice wNotifyCode)**

   Codice identificatore del messaggio di notifica, ad esempio **TBN_BEGINADJUST**.

- **idControl (controllo)**

   Identificatore del controllo che invia la notifica.

- **memberFxn (parte utente)**

   Funzione membro da chiamare quando si riceve la notifica.

La funzione membro sarebbe dichiarata con il prototipo seguente:

```cpp
afx_msg void memberFxn( NMHDR * pNotifyStruct, LRESULT * result );
```

Se il gestore dei messaggi di notifica restituisce un valore, è necessario inserirlo in **LRESULT** a cui puntava *result*.

Per ogni messaggio, `pNotifyStruct` punta a una delle due strutture **NMHDR** o **TBNOTIFY** . Queste strutture sono descritte di seguito:

La struttura **NMHDR** contiene i membri seguenti:

```cpp
typedef struct tagNMHDR {
    HWND hwndFrom;  // handle of control sending message
    UINT idFrom;// identifier of control sending message
    UINT code;  // notification code; see below
} NMHDR;
```

- **hwndFrom**

   Handle della finestra del controllo che invia la notifica. Per convertire questo handle in un puntatore `CWnd` , usare [CWnd::FromHandle](../mfc/reference/cwnd-class.md#fromhandle).

- **idFrom**

   Identificatore del controllo che invia la notifica.

- **Codice**

   Codice di notifica. Questo membro può essere un valore specifico di un tipo di controllo, ad esempio **TBN_BEGINADJUST** o **TTN_NEEDTEXT**, oppure può essere uno dei valori di notifica comuni elencati di seguito:

  - **NM_CLICK** L'utente ha fatto clic con il pulsante sinistro del mouse sul controllo.

  - **NM_DBLCLK** L'utente ha fatto doppio clic con il pulsante sinistro del mouse sul controllo.

  - **NM_KILLFOCUS** Il controllo ha perso lo stato attivo per l'input.

  - **NM_OUTOFMEMORY** Il controllo non ha completato un'operazione perché la memoria non è sufficiente.

  - **NM_RCLICK** L'utente ha fatto clic con il pulsante destro del mouse sul controllo.

  - **NM_RDBLCLK** L'utente ha fatto doppio clic con il pulsante destro del mouse sul controllo.

  - **NM_RETURN** Lo stato attivo per l'input si trova sul controllo e l'utente ha premuto il tasto INVIO.

  - **NM_SETFOCUS** Il controllo ha ricevuto lo stato attivo per l'input.

La struttura **TBNOTIFY** contiene i membri seguenti:

```cpp
typedef struct {
    NMHDR hdr; // information common to all WM_NOTIFY messages
    int iItem; // index of button associated with notification
    TBBUTTON tbButton; // info about button associated withnotification
    int cchText;   // count of characters in button text
    LPSTR lpszText;// address of button text
} TBNOTIFY, FAR* LPTBNOTIFY;
```

- **hdr**

   Informazioni comuni a tutti i messaggi **WM_NOTIFY** .

- **iItem**

   Indice del pulsante associato alla notifica.

- **tbButton**

   **Struttura TBBUTTON** che contiene informazioni sul pulsante della barra degli strumenti associato alla notifica.

- **cchText**

   Numero di caratteri nel testo dei pulsanti.

- **lpszText**

   Puntatore al testo del pulsante.

Le notifiche che la barra degli strumenti invia sono i seguenti:

- **TBN_BEGINADJUST**

   Inviato quando l'utente inizia a personalizzare un controllo barra degli strumenti. Il puntatore punta a una struttura **NMHDR** contenente informazioni sulla notifica. Il gestore non deve necessariamente restituire un valore specifico.

- **TBN_BEGINDRAG**

   Inviato quando l'utente inizia a trascinare un pulsante in un controllo barra degli strumenti. Il puntatore punta a una struttura **TBNOTIFY** . Il membro **iItem** contiene l'indice in base zero del pulsante trascinato. Il gestore non deve necessariamente restituire un valore specifico.

- **TBN_CUSTHELP**

   Inviato quando l'utente sceglie il pulsante ?, nella finestra di dialogo Personalizza barra degli strumenti. Nessun valore restituito. Il puntatore punta a una struttura **NMHDR** contenente informazioni sul messaggio di notifica. Il gestore non deve necessariamente restituire un valore specifico.

- **TBN_ENDADJUST**

   Inviato quando l'utente interrompe la personalizzazione di un controllo barra degli strumenti. Il puntatore punta a una struttura **NMHDR** contenente informazioni sul messaggio di notifica. Il gestore non deve necessariamente restituire un valore specifico.

- **TBN_ENDDRAG**

   Inviato quando l'utente interrompe il trascinamento di un pulsante in un controllo barra degli strumenti. Il puntatore punta a una struttura **TBNOTIFY** . Il membro **iItem** contiene l'indice in base zero del pulsante trascinato. Il gestore non deve necessariamente restituire un valore specifico.

- **TBN_GETBUTTONINFO**

   Inviato quando l'utente personalizza un controllo barra degli strumenti. La barra degli strumenti usa questo messaggio di notifica per recuperare le informazioni necessarie per la finestra di dialogo Personalizza barra degli strumenti. Il puntatore punta a una struttura **TBNOTIFY** . Il membro **iItem** specifica l'indice in base zero di un pulsante. I membri **pszText** e **cchText** specificano l'indirizzo e la lunghezza, in caratteri, del testo del pulsante corrente. Un'applicazione dovrebbe popolare la struttura con le informazioni relative al pulsante. Restituisce **TRUE** se le informazioni sul pulsante sono state copiate nella struttura; in caso contrario, restituisce **FALSE** .

- **TBN_QUERYDELETE**

   Inviato mentre l'utente personalizza una barra degli strumenti per determinare se un pulsante può essere eliminato da un controllo barra degli strumenti. Il puntatore punta a una struttura **TBNOTIFY** . Il membro **iItem** contiene l'indice in base zero del pulsante da eliminare. Restituisce **TRUE** per consentire l'eliminazione del pulsante o **FALSE** per impedirne l'eliminazione.

- **TBN_QUERYINSERT**

   Inviato mentre l'utente personalizza un controllo barra degli strumenti per determinare se un pulsante può essere inserito a sinistra del pulsante specificato. Il puntatore punta a una struttura **TBNOTIFY** . Il membro **iItem** contiene l'indice in base zero del pulsante da inserire. Restituisce **TRUE** per consentire l'inserimento del pulsante davanti al pulsante specificato o **FALSE** per impedirne l'inserimento.

- **TBN_RESET**

   Inviato quando l'utente reimposta il contenuto della finestra di dialogo Personalizza barra degli strumenti. Il puntatore punta a una struttura **NMHDR** contenente informazioni sul messaggio di notifica. Il gestore non deve necessariamente restituire un valore specifico.

- **TBN_TOOLBARCHANGE**

   Inviato dopo che l'utente ha personalizzato un controllo barra degli strumenti. Il puntatore punta a una struttura **NMHDR** contenente informazioni sul messaggio di notifica. Il gestore non deve necessariamente restituire un valore specifico.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
