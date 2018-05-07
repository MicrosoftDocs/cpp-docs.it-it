---
title: Stili casella di riepilogo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- LBS_STANDARD
- LBS_NODATA
- LBS_OWNERDRAWVARIABLE
- LBS_EXTENDEDSEL
- LBS_USETABSTOPS
- LBS_WANTKEYBOARDINPUT
- LBS_NOTIFY
- LBS_DISABLENOSCROLL
- LBS_HASSTRINGS
- LBS_NOREDRAW
- LBS_NOSEL
- LBS_NOINTEGRALHEIGHT
- LBS_MULTICOLUMN
- LBS_SORT
- LBS_MULTIPLESEL
- LBS_OWNERDRAWFIXED
dev_langs:
- C++
helpviewer_keywords:
- LBS_NOSEL constant [MFC]
- LBS_NOREDRAW constant [MFC]
- LBS_HASSTRINGS constant [MFC]
- LBS_OWNERDRAWFIXED constant [MFC]
- LBS_WANTKEYBOARDINPUT constant [MFC]
- LBS_STANDARD constant [MFC]
- LBS_MULTIPLESEL constant [MFC]
- LBS_OWNERDRAWVARIABLE constant [MFC]
- LBS_DISABLENOSCROLL constant [MFC]
- LBS_NODATA constant [MFC]
- list boxes [MFC], styles
- LBS_EXTENDEDSEL constant [MFC]
- LBS_MULTICOLUMN constant [MFC]
- LBS_NOTIFY constant [MFC]
- LBS_USETABSTOPS constant [MFC]
- LBS_NOINTEGRALHEIGHT constant [MFC]
- LBS_SORT constant
ms.assetid: 3f357b8d-9118-4f41-9e28-02ed92d1e88f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 90441984aa8212212c3a9d4ea99cfb5b36127a03
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="list-box-styles"></a>Stili delle caselle di riepilogo
-   **LBS_DISABLENOSCROLL** la casella di riepilogo Mostra un disabilitato barra di scorrimento verticale quando la casella di riepilogo non contiene abbastanza elementi da scorrere. Senza questo stile, la barra di scorrimento viene nascosta quando la casella di riepilogo non contiene sufficienti elementi.  
  
-   **LBS_EXTENDEDSEL** l'utente può selezionare più elementi tramite il tasto MAIUSC e il mouse o combinazioni di tasti speciali.  
  
-   **LBS_HASSTRINGS** specifica una casella di riepilogo di disegno che contiene elementi costituito da stringhe. La casella di riepilogo gestisce la memoria e i puntatori per le stringhe in modo l'applicazione può utilizzare il `GetText` funzione membro per recuperare il testo per un particolare elemento.  
  
-   **LBS_MULTICOLUMN** specifica una casella di riepilogo a più colonne che è necessario scorrere orizzontalmente. Il `SetColumnWidth` funzione membro imposta la larghezza delle colonne.  
  
-   **LBS_MULTIPLESEL** selezione stringa viene attivato/disattivato ogni volta che l'utente fa clic o doppio clic la stringa. È possibile selezionare qualsiasi numero di stringhe.  
  
-   **LBS_NODATA** specifica una casella di riepilogo senza dati. Quando un millesimo supera il numero di elementi nella casella di riepilogo, specificare questo stile. Una casella di riepilogo non sono presenti dati deve inoltre disporre di **LBS_OWNERDRAWFIXED** di stile, ma non deve avere il **LBS_SORT** o **LBS_HASSTRINGS** stile.  
  
     Una casella di riepilogo senza dati è simile a una casella di riepilogo di proprietario, ad eccezione del fatto che non contiene alcun dato di stringa o bitmap per un elemento. I comandi per aggiungere, inserire o eliminare un elemento ignorano sempre un dato elemento dati. le richieste per trovare una stringa nella casella di riepilogo sempre esito negativo. Il sistema invia il `WM_DRAWITEM` messaggio alla finestra proprietaria quando è necessario disegnare un elemento. Il membro itemID del `DRAWITEMSTRUCT` struttura passata con la `WM_DRAWITEM` messaggio specifica il numero di riga dell'elemento da disegnare. Una casella di riepilogo non sono presenti dati non invia un `WM_DELETEITEM` messaggio.  
  
-   **LBS_NOINTEGRALHEIGHT** la dimensione della casella di riepilogo è esattamente quella specificata dall'applicazione quando creata la casella di riepilogo. In genere, Windows ridimensiona una casella di riepilogo in modo che la casella di riepilogo non visualizzare elementi parziali.  
  
-   **LBS_NOREDRAW** visualizzazione casella di riepilogo non viene aggiornata quando vengono apportate modifiche. Questo stile può essere modificato in qualsiasi momento mediante l'invio di un **WM_SETREDRAW** messaggio.  
  
-   **LBS_NOSEL** specifica che la casella di riepilogo contiene elementi che possono essere visualizzati, ma non è selezionati.  
  
-   **LBS_NOTIFY** finestra padre riceve un messaggio di input ogni volta che l'utente fa clic o doppio clic su una stringa.  
  
-   **LBS_OWNERDRAWFIXED** il proprietario della casella di riepilogo è responsabile della creazione del relativo contenuto, gli elementi nella casella di riepilogo sono della stessa altezza.  
  
-   **LBS_OWNERDRAWVARIABLE** il proprietario della casella di riepilogo è responsabile della creazione del relativo contenuto, gli elementi nella casella di riepilogo sono variabili in altezza.  
  
-   **LBS_SORT** stringhe nella casella di riepilogo vengono ordinate in ordine alfabetico.  
  
-   **LBS_STANDARD** stringhe nella casella di riepilogo vengono ordinate in ordine alfabetico e la finestra padre riceve un messaggio di input ogni volta che l'utente fa clic o doppio clic su una stringa. La casella di riepilogo contiene tutti i bordi.  
  
-   **LBS_USETABSTOPS** consente a una casella di riepilogo riconoscere ed espandere i caratteri di tabulazione quando si disegnano le stringhe. Le posizioni di scheda predefinita sono 32 unità finestra di dialogo. (Un'unità di finestra di dialogo è una distanza orizzontale o verticale. Una DLU orizzontale è uguale a un quarto dell'unità di base di larghezza di finestra di dialogo corrente. Le unità di base di finestra di dialogo vengono calcolate in base l'altezza e larghezza del carattere di sistema corrente. Di **GetDialogBaseUnits** funzione Windows restituisce la finestra di dialogo corrente unità di base in pixel.) Questo stile non deve essere utilizzato con **LBS_OWNERDRAWFIXED**.  
  
-   **LBS_WANTKEYBOARDINPUT** riceve il proprietario della casella di riepilogo `WM_VKEYTOITEM` o `WM_CHARTOITEM` messaggi ogni volta che l'utente preme un tasto mentre la casella di riepilogo ha lo stato attivo di input. In questo modo un'applicazione per eseguire un'elaborazione speciale della tastiera di input.  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CListBox::Create](../../mfc/reference/clistbox-class.md#create)   
 [Stili casella di riepilogo](http://msdn.microsoft.com/library/windows/desktop/bb775149)

