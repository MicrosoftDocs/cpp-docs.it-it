---
title: "Stili delle caselle di riepilogo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LBS_STANDARD"
  - "LBS_NODATA"
  - "LBS_OWNERDRAWVARIABLE"
  - "LBS_EXTENDEDSEL"
  - "LBS_USETABSTOPS"
  - "LBS_WANTKEYBOARDINPUT"
  - "LBS_NOTIFY"
  - "LBS_DISABLENOSCROLL"
  - "LBS_HASSTRINGS"
  - "LBS_NOREDRAW"
  - "LBS_NOSEL"
  - "LBS_NOINTEGRALHEIGHT"
  - "LBS_MULTICOLUMN"
  - "LBS_SORT"
  - "LBS_MULTIPLESEL"
  - "LBS_OWNERDRAWFIXED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LBS_DISABLENOSCROLL (costante)"
  - "LBS_EXTENDEDSEL (costante)"
  - "LBS_HASSTRINGS (costante)"
  - "LBS_MULTICOLUMN (costante)"
  - "LBS_MULTIPLESEL (costante)"
  - "LBS_NODATA (costante)"
  - "LBS_NOINTEGRALHEIGHT (costante)"
  - "LBS_NOREDRAW (costante)"
  - "LBS_NOSEL (costante)"
  - "LBS_NOTIFY (costante)"
  - "LBS_OWNERDRAWFIXED (costante)"
  - "LBS_OWNERDRAWVARIABLE (costante)"
  - "LBS_SORT (costante)"
  - "LBS_STANDARD (costante)"
  - "LBS_USETABSTOPS (costante)"
  - "LBS_WANTKEYBOARDINPUT (costante)"
  - "caselle di riepilogo, stili"
ms.assetid: 3f357b8d-9118-4f41-9e28-02ed92d1e88f
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili delle caselle di riepilogo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

-   **LBS\_DISABLENOSCROLL** la casella di riepilogo visualizzata una barra di scorrimento verticale disabled quando la casella di riepilogo non contiene elementi sufficienti per lo scorrimento.  Se questo stile, la barra di scorrimento è nascosta quando la casella di riepilogo non sono sufficienti elementi.  
  
-   **LBS\_EXTENDEDSEL** l'utente può selezionare più elementi utilizzando il tasto MAIUSC e delle combinazioni di tasti speciali o del mouse.  
  
-   **LBS\_HASSTRINGS** specifica una casella di riepilogo per il disegno personalizzato che contiene gli elementi che sono costituite da stringhe.  La casella di riepilogo gestisce la memoria e i puntatori per le stringhe in modo che l'applicazione possa utilizzare la funzione membro di `GetText` per recuperare il testo di un determinato elemento.  
  
-   **LBS\_MULTICOLUMN** specifica una casella di riepilogo a più colonne che si scorre orizzontalmente.  La funzione membro di `SetColumnWidth` impostare la larghezza delle colonne.  
  
-   La selezione della stringa di**LBS\_MULTIPLESEL**viene passata ogni volta che l'utente fa clic su oppure fare doppio clic su stringa.  Qualsiasi numero di stringhe possono essere selezionate.  
  
-   **LBS\_NODATA** specifica una casella di riepilogo privi di dati.  Specificare questo stile quando il conteggio degli elementi della casella di riepilogo supererà mille.  Una casella di riepilogo privi di dati deve contenere anche lo stile di **LBS\_OWNERDRAWFIXED**, ma non deve avere lo stile di **LBS\_HASSTRINGS** o di **LBS\_SORT**.  
  
     Una casella di riepilogo privi di dati è simile a una casella di riepilogo creata dal proprietario con l'eccezione che non contiene dati della bitmap o stringa per un elemento.  I controlli aggiungere, inserire, eliminare o un elemento ignorano sempre tutti i dati specifici dell'elemento; richieste di trovare sempre una stringa in negativo della casella di riepilogo.  Il sistema invia il messaggio di `WM_DRAWITEM` alla finestra proprietaria quando un elemento deve essere disegnato.  Il membro itemID della struttura di `DRAWITEMSTRUCT` passata con il messaggio di `WM_DRAWITEM` specifica il numero di riga dell'elemento da tracciare.  Una casella di riepilogo privi di dati non invia un messaggio di `WM_DELETEITEM`.  
  
-   **LBS\_NOINTEGRALHEIGHT** la dimensione della casella di riepilogo sono equivalenti alla dimensione specificata dall'applicazione quando ha creato la casella di riepilogo.  In genere, le finestre ridimensiona una casella di riepilogo in modo dalla casella di riepilogo non vengono visualizzati gli elementi parziali.  
  
-   La visualizzazione della casella di riepilogo**LBS\_NOREDRAW** non viene aggiornata quando vengono apportate modifiche.  Questo stile può essere modificato in qualsiasi momento inviando un messaggio di **WM\_SETREDRAW**.  
  
-   **LBS\_NOSEL** specifica che la casella di riepilogo contiene gli elementi che possono essere visualizzati ma non essere selezionati.  
  
-   La finestra padre di**LBS\_NOTIFY**riceve un messaggio di input ogni volta che l'utente fa clic oppure fare doppio clic su una stringa.  
  
-   **LBS\_OWNERDRAWFIXED** il proprietario dell'oggetto listbox è responsabile del disegno del contenuto; gli elementi della casella di riepilogo sono la stessa altezza.  
  
-   **LBS\_OWNERDRAWVARIABLE** il proprietario dell'oggetto listbox è responsabile del disegno del contenuto; gli elementi della casella di riepilogo sono variabili di altezza.  
  
-   Le stringhe di**LBS\_SORT**nella casella di riepilogo vengono ordinate alfabeticamente.  
  
-   Le stringhe di**LBS\_STANDARD**nella casella di riepilogo vengono ordinate alfabeticamente e la finestra padre riceve un messaggio di input ogni volta che l'utente fa clic oppure fare doppio clic su una stringa.  La casella di riepilogo contiene i bordi tutti i lati.  
  
-   **LBS\_USETABSTOPS** consente a una casella di riepilogo riconosca ed espandere i caratteri di tabulazione quando si disegna le relative stringhe.  Le posizioni di scheda predefinite sono 32 unità della finestra di dialogo. \(L'unità della finestra di dialogo è orizzontale o una distanza verticale.  Un'unità orizzontale della finestra di dialogo è uguale a un quarto di unità corrente della larghezza di base della finestra di dialogo.  Unità di base della finestra di dialogo vengono calcolate in base all'altezza e larghezza del tipo di carattere di sistema corrente.  La funzione Windows di **GetDialogBaseUnits** restituisce le unità di base correnti della finestra di dialogo in pixel.\) Questo stile non deve essere utilizzato con **LBS\_OWNERDRAWFIXED**.  
  
-   **LBS\_WANTKEYBOARDINPUT** il proprietario della casella di riepilogo riceve `WM_VKEYTOITEM` o messaggi di `WM_CHARTOITEM` quando l'utente preme un tasto nella casella di riepilogo ha lo stato attivo per l'input.  Ciò consente a un'applicazione di eseguire l'elaborazione speciale sull'input della tastiera.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CListBox::Create](../Topic/CListBox::Create.md)   
 [List Box Styles](http://msdn.microsoft.com/library/windows/desktop/bb775149)