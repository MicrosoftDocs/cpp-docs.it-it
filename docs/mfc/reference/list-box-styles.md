---
title: Stili casella di riepilogo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
- LBS_NOSEL constant
- LBS_NOREDRAW constant
- LBS_HASSTRINGS constant
- LBS_OWNERDRAWFIXED constant
- LBS_WANTKEYBOARDINPUT constant
- LBS_STANDARD constant
- LBS_MULTIPLESEL constant
- LBS_OWNERDRAWVARIABLE constant
- LBS_DISABLENOSCROLL constant
- LBS_NODATA constant
- list boxes, styles
- LBS_EXTENDEDSEL constant
- LBS_MULTICOLUMN constant
- LBS_NOTIFY constant
- LBS_USETABSTOPS constant
- LBS_NOINTEGRALHEIGHT constant
- LBS_SORT constant
ms.assetid: 3f357b8d-9118-4f41-9e28-02ed92d1e88f
caps.latest.revision: 12
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 8e038e5cef50bd15df85c9d7f8b213b54ed03825
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="list-box-styles"></a>Stili delle caselle di riepilogo
-   **LBS_DISABLENOSCROLL** la casella di riepilogo Mostra un disabilitato barra di scorrimento verticale quando la casella di riepilogo non contiene sufficienti elementi da scorrere. Senza questo stile, la barra di scorrimento viene nascosta quando la casella di riepilogo non contiene sufficienti elementi.  
  
-   **LBS_EXTENDEDSEL** l'utente può selezionare più elementi utilizzando il tasto MAIUSC e il mouse o le combinazioni di tasti speciali.  
  
-   **LBS_HASSTRINGS** specifica una casella di riepilogo di disegno personalizzato che contiene elementi costituite da stringhe. La casella di riepilogo mantiene la memoria e i puntatori per le stringhe, pertanto l'applicazione può utilizzare il `GetText` funzione membro per recuperare il testo per un particolare elemento.  
  
-   **LBS_MULTICOLUMN** specifica una casella di riepilogo a più colonne che è necessario scorrere orizzontalmente. Il `SetColumnWidth` funzione membro imposta la larghezza delle colonne.  
  
-   **LBS_MULTIPLESEL** selezione stringa viene attivata ogni volta che l'utente fa clic o fa doppio clic su stringa. È possibile selezionare qualsiasi numero di stringhe.  
  
-   **LBS_NODATA** specifica una casella di riepilogo senza dati. Specificare questo stile quando il conteggio degli elementi nella casella di riepilogo supererà mille. Una casella di riepilogo senza dati deve inoltre disporre di **LBS_OWNERDRAWFIXED** di stile, ma non deve avere il **LBS_SORT** o **LBS_HASSTRINGS** stile.  
  
     Una casella di riepilogo senza dati è simile a una casella di riepilogo disegnato dal proprietario, ad eccezione del fatto che non contiene alcun dato di stringa o una bitmap per un elemento. Comandi per aggiungere, inserire o eliminare un elemento ignorano sempre un dato elemento dati. richieste per trovare una stringa nella casella di riepilogo sempre esito negativo. Il sistema invia il `WM_DRAWITEM` messaggio alla finestra proprietaria quando è necessario disegnare un elemento. Il membro itemID del `DRAWITEMSTRUCT` struttura passata con la `WM_DRAWITEM` messaggio specifica il numero di riga dell'elemento da disegnare. Una casella di riepilogo senza dati non invia un `WM_DELETEITEM` messaggio.  
  
-   **LBS_NOINTEGRALHEIGHT** le dimensioni della casella di riepilogo sono esattamente le dimensioni specificate dall'applicazione quando creata la casella di riepilogo. In genere, Windows viene ridimensionata una casella di riepilogo in modo che la casella di riepilogo non visualizzare elementi parziali.  
  
-   **LBS_NOREDRAW** visualizzazione elenco non viene aggiornato quando vengono apportate modifiche. Questo stile può essere modificato in qualsiasi momento mediante l'invio di un **WM_SETREDRAW** messaggio.  
  
-   **LBS_NOSEL** specifica che la casella di riepilogo contiene gli elementi che possono essere visualizzati ma non è selezionati.  
  
-   **LBS_NOTIFY** finestra padre riceve un messaggio di input ogni volta che l'utente fa clic o fa doppio clic su una stringa.  
  
-   **LBS_OWNERDRAWFIXED** il proprietario della casella di riepilogo è responsabile della creazione del relativo contenuto, gli elementi nella casella di riepilogo sono la stessa altezza.  
  
-   **LBS_OWNERDRAWVARIABLE** il proprietario della casella di riepilogo è responsabile della creazione del relativo contenuto, gli elementi nella casella di riepilogo sono variabile in altezza.  
  
-   **LBS_SORT** stringhe nella casella di riepilogo vengono ordinate in ordine alfabetico.  
  
-   **LBS_STANDARD** stringhe nella casella di riepilogo vengono ordinate alfabeticamente e la finestra padre riceve un messaggio di input ogni volta che l'utente fa clic o fa doppio clic su una stringa. La casella di riepilogo contiene tutti i bordi.  
  
-   **LBS_USETABSTOPS** consente una casella di riepilogo riconoscere ed estendere i caratteri di tabulazione quando crea le proprie stringhe. Le posizioni di scheda predefinita sono 32 DLU. (Un'unità di finestra di dialogo è una distanza orizzontale o verticale. Una DLU orizzontale è uguale a un quarto dell'unità di base larghezza della finestra corrente. Le unità di base di finestra di dialogo vengono calcolate in base l'altezza e la larghezza del tipo di carattere di sistema corrente. Il **GetDialogBaseUnits** funzione Windows restituisce la finestra di dialogo corrente unità di base in pixel.) Questo stile non deve essere utilizzato con **LBS_OWNERDRAWFIXED**.  
  
-   **LBS_WANTKEYBOARDINPUT** il proprietario della casella di riepilogo riceve `WM_VKEYTOITEM` o `WM_CHARTOITEM` messaggi ogni volta che l'utente preme un tasto mentre la casella di riepilogo ha lo stato attivo. In questo modo un'applicazione di eseguire un'elaborazione speciale della tastiera di input.  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CListBox::Create](../../mfc/reference/clistbox-class.md#create)   
 [Stili casella di riepilogo](http://msdn.microsoft.com/library/windows/desktop/bb775149)


