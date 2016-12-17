---
title: "Stili statici | Microsoft Docs"
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
  - "SS_SUNKEN"
  - "SS_CENTER"
  - "SS_ENHMETAFILE"
  - "SS_RIGHT"
  - "SS_BLACKRECT"
  - "SS_LEFTNOWORDWRAP"
  - "SS_GRAYFRAME"
  - "SS_USERITEM"
  - "SS_GRAYRECT"
  - "SS_WHITEFRAME"
  - "SS_ETCHEDFRAME"
  - "SS_ETCHEDVERT"
  - "SS_WHITERECT"
  - "SS_PATHELLIPSIS"
  - "SS_WORDELLIPSIS"
  - "SS_NOPREFIX"
  - "SS_BITMAP"
  - "SS_SIMPLE"
  - "SS_CENTERIMAGE"
  - "SS_BLACKFRAME"
  - "SS_OWNERDRAW"
  - "SS_REALSIZEIMAGE"
  - "SS_RIGHTJUST"
  - "SS_ICON"
  - "SS_NOTIFY"
  - "SS_ETCHEDHORZ"
  - "SS_LEFT"
  - "SS_ENDELLIPSIS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SS_BITMAP (costante)"
  - "SS_BLACKFRAME (costante)"
  - "SS_BLACKRECT (costante)"
  - "SS_CENTER (costante)"
  - "SS_CENTERIMAGE (costante)"
  - "SS_ENDELLIPSIS (costante)"
  - "SS_ENHMETAFILE (costante)"
  - "SS_ETCHEDFRAME (costante)"
  - "SS_ETCHEDHORZ (costante)"
  - "SS_ETCHEDVERT (costante)"
  - "SS_GRAYFRAME (costante)"
  - "SS_GRAYRECT (costante)"
  - "SS_ICON (costante)"
  - "SS_LEFT (costante)"
  - "SS_LEFTNOWORDWRAP (costante)"
  - "SS_NOPREFIX (costante)"
  - "SS_NOTIFY (costante)"
  - "SS_OWNERDRAW (costante)"
  - "SS_PATHELLIPSIS (costante)"
  - "SS_REALSIZEIMAGE (costante)"
  - "SS_RIGHT (costante)"
  - "SS_RIGHTJUST (costante)"
  - "SS_SIMPLE (costante)"
  - "SS_SUNKEN (costante)"
  - "SS_USERITEM (costante)"
  - "SS_WHITEFRAME (costante)"
  - "SS_WHITERECT (costante)"
  - "SS_WORDELLIPSIS (costante)"
  - "stili statici"
ms.assetid: a1114548-fc6d-491d-8c46-21d11b8574f5
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili statici
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

-   **SS\_BITMAP** specifica una bitmap deve essere visualizzato nel controllo statico.  Il testo specificato è il nome di una bitmap \(non un nome di file\) definita altrove nel file di risorse.  Lo stile ignora i parametri del nHeight e di nWidth; il controllo verrà ridimensionato automaticamente in modo da contenere una bitmap.  
  
-   **SS\_BLACKFRAME** specifica una casella con un frame disegnato con lo stesso colore delle strutture della finestra.  Il colore predefinito è nero.  
  
-   **SS\_BLACKRECT** specifica un rettangolo riempito con un colore utilizzato per estrarre le strutture della finestra.  Il colore predefinito è nero.  
  
-   **SS\_CENTER** definisce un rettangolo semplice e visualizzare il testo specificato al rettangolo.  Il testo viene formattato prima di visualizzare.  Le parole che estenderebbero oltre la fine di una riga automaticamente viene eseguito il wrapping all'inizio della riga centrata seguente.  
  
-   **SS\_CENTERIMAGE** specifica che, se la bitmap o l'icona è minore dell'area client del controllo statico, il resto dell'area client viene riempito con i colori dei pixel nell'angolo superiore sinistro della bitmap o icona.  Se il controllo statico contiene una singola riga di testo, il testo viene centrato in verticale nell'area client del controllo.  
  
-   **SS\_ENDELLIPSIS** o **SS\_PATHELLIPSIS** sostituisce la parte della stringa specificata con i puntini di sospensione se necessario, in modo che il risultato ha lasciato al rettangolo specificato.  
  
     È possibile specificare **SS\_END\_ELLIPSIS** per sostituire i caratteri alla fine della stringa, o **SS\_PATHELLIPSIS** per sostituire i caratteri a metà della stringa.  Se la stringa contiene caratteri barra rovesciata \(\\\), conserva di **SS\_PATHELLIPSIS** da parte del testo dopo l'ultima barra rovesciata quando possibile.  
  
-   Specifica un**SS\_ENHMETAFILE** Enhanced Metafile deve essere visualizzato nel controllo statico.  Il testo specificato è il nome di un metafile.  Un controllo statico di Enhanced Metafile ha una dimensione fissa; i metafile vengano ridimensionate in base all'area client del controllo statico.  
  
-   **SS\_ETCHEDFRAME** estrae il frame del controllo statico utilizzando lo stile del bordo di **EDGE\_ETCHED**.  
  
-   **SS\_ETCHEDHORZ** disegnare il bordo superiore e inferiore del controllo statico utilizzando **EDGE\_ETCHED** orlano lo stile.  
  
-   **SS\_ETCHEDVERT** estrae i bordi sinistro e destro del controllo statico utilizzando lo stile del bordo di EDGE\_ETCHED.  
  
-   **SS\_GRAYFRAME** specifica una casella con un frame disegnato con lo stesso colore dello sfondo dello schermo \(desktop\).  Il colore predefinito è grigio.  
  
-   **SS\_GRAYRECT** specifica un rettangolo riempito con un colore utilizzato per riempire lo sfondo dello schermo.  Il colore predefinito è grigio.  
  
-   **SS\_ICON** definisce un'icona viene visualizzata nella finestra di dialogo.  Il testo specificato è il nome dell'icona \(non un nome di file\) definita altrove nel file di risorse.  I parametri di `nHeight` e di `nWidth` vengono ignorati; l'icona viene ridimensionato automaticamente.  
  
-   **SS\_LEFT** definisce un rettangolo semplice e verrà visualizzata la vampata\- specificata sinistra del testo nel rettangolo.  Il testo viene formattato prima di visualizzare.  Le parole che estenderebbero oltre la fine di una riga automaticamente viene eseguito il wrapping all'inizio della riga successiva di vampata\- sinistra.  
  
-   **SS\_LEFTNOWORDWRAP** definisce un rettangolo semplice e verrà visualizzata la vampata\- specificata sinistra del testo nel rettangolo.  Le schede sono espanse, ma le parole non viene eseguito il wrapping.  Testo che si estende oltre che alla fine di una linea viene tagliata.  
  
-   **SS\_NOPREFIX** a meno che lo stile sia specificato, windows interpreterà tutti i caratteri e commerciale \(&\) nel testo del controllo sia caratteri del prefisso del tasto di scelta rapida.  In questo caso, la e commerciale viene rimosso e il carattere successivo nella stringa viene sottolineato.  Se un controllo statico è di contenere testo in cui questa funzionalità non è **SS\_NOPREFIX** desiderata, è possibile aggiungere.  Questo stile del controllo statico può essere incluso nei controlli statici definiti.  È possibile combinare **SS\_NOPREFIX** con altri stili utilizzando l'operatore OR bit.  Ciò è più spesso utilizzata quando nomi di file o altre stringhe che possono contenere una necessità e commerciale di essere visualizzati in un controllo statico in una finestra di dialogo.  
  
-   **SS\_NOTIFY** invia la finestra padre **STN\_CLICKED**, i messaggi di notifica di **STN\_DBLCLK**, di **STN\_DISABLE** e di **STN\_ENABLE** quando l'utente fa clic o fare doppio clic sul controllo.  
  
-   **SS\_OWNERDRAW** specifica che il proprietario del controllo statico è responsabile della creazione del controllo.  La finestra proprietaria riceve un messaggio di `WM_DRAWITEM` ogni volta che il controllo deve di essere disegnato.  
  
-   **SS\_REALSIZEIMAGE** di un controllo statico o della bitmap di icona \(ovvero controlli statici che presenta lo stile di **SS\_BITMAP** o di **SS\_ICON** \) venga ridimensionato mentre viene caricato o disegnato.  Se l'icona o la bitmap è più grande dell'area di destinazione, l'immagine viene tagliata.  
  
-   **SS\_RIGHT** definisce un rettangolo semplice e visualizzare il vampata\- destra del testo specificato nel rettangolo.  Il testo viene formattato prima di visualizzare.  Le parole che estenderebbero oltre la fine di una riga automaticamente viene eseguito il wrapping all'inizio della riga successiva di vampata\- destra.  
  
-   **SS\_RIGHTJUST** specifica che l'angolo inferiore destro di un controllo statico con lo stile di **SS\_ICON** o di **SS\_BITMAP** è di rimanere fisse quando il controllo viene ridimensionato.  Solo i bordi superiore e sinistro di vengono modificate per adattare una nuova bitmap o icona.  
  
-   **SS\_SIMPLE** definisce un rettangolo semplice e visualizza una sola riga di vampata\- sinistra del testo nel rettangolo.  La riga di testo non può essere abbreviata o stata modificata. \(La finestra padre o la finestra di dialogo controllo non deve elaborare il messaggio di `WM_CTLCOLOR` \).  
  
-   **SS\_SUNKEN** viene disegnato un bordo sovraccaricato a metà circa a un controllo statico.  
  
-   **SS\_USERITEM** specifica un elemento definito dall'utente.  
  
-   **SS\_WHITEFRAME** specifica una casella con un frame disegnato con lo stesso colore dello sfondo della finestra.  Il valore predefinito è bianco.  
  
-   **SS\_WHITERECT** specifica un rettangolo riempito con un colore utilizzato per riempire lo sfondo della finestra.  Il valore predefinito è bianco.  
  
-   **SS\_WORDELLIPSIS** tronca il testo che non si adatta e aggiunge i puntini di sospensione.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CStatic::Create](../Topic/CStatic::Create.md)   
 [DrawEdge](http://msdn.microsoft.com/library/windows/desktop/dd162477)   
 [Static Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760773)