---
title: Stili statici | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- SS_SUNKEN
- SS_CENTER
- SS_ENHMETAFILE
- SS_RIGHT
- SS_BLACKRECT
- SS_LEFTNOWORDWRAP
- SS_GRAYFRAME
- SS_USERITEM
- SS_GRAYRECT
- SS_WHITEFRAME
- SS_ETCHEDFRAME
- SS_ETCHEDVERT
- SS_WHITERECT
- SS_PATHELLIPSIS
- SS_WORDELLIPSIS
- SS_NOPREFIX
- SS_BITMAP
- SS_SIMPLE
- SS_CENTERIMAGE
- SS_BLACKFRAME
- SS_OWNERDRAW
- SS_REALSIZEIMAGE
- SS_RIGHTJUST
- SS_ICON
- SS_NOTIFY
- SS_ETCHEDHORZ
- SS_LEFT
- SS_ENDELLIPSIS
dev_langs:
- C++
helpviewer_keywords:
- SS_ICON constant
- SS_WHITEFRAME constant
- SS_BLACKFRAME constant
- SS_ETCHEDHORZ constant
- SS_OWNERDRAW constant
- SS_BITMAP constant
- SS_NOPREFIX constant
- SS_NOTIFY constant
- SS_CENTER constant
- SS_REALSIZEIMAGE constant
- SS_ETCHEDFRAME constant
- SS_CENTERIMAGE constant
- SS_SUNKEN constant
- SS_ENDELLIPSIS constant
- SS_WORDELLIPSIS constant
- SS_WHITERECT constant
- SS_ETCHEDVERT constant
- SS_GRAYFRAME constant
- SS_LEFTNOWORDWRAP constant
- SS_LEFT constant
- SS_SIMPLE constant
- static styles
- SS_ENHMETAFILE constant
- SS_GRAYRECT constant
- SS_USERITEM constant
- SS_PATHELLIPSIS constant
- SS_BLACKRECT constant
- SS_RIGHT constant
- SS_RIGHTJUST constant
ms.assetid: a1114548-fc6d-491d-8c46-21d11b8574f5
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
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: ad34c688fdfd3c2b4c81a0a03fbce53a905162ad
ms.lasthandoff: 02/24/2017

---
# <a name="static-styles"></a>Stili statici
-   **SS_BITMAP** specifica una bitmap da visualizzare nel controllo statico. Il testo specificato è il nome di un'immagine bitmap (non un nome file) definito altrove nel file di risorse. Lo stile ignora i parametri nWidth e nHeight; il controllo viene automaticamente ridimensionato in base alla lunghezza della bitmap.  
  
-   **SS_BLACKFRAME** specifica una casella con un frame viene disegnato con lo stesso colore cornici della finestra. Il colore predefinito è nero.  
  
-   **SS_BLACKRECT** specifica un rettangolo riempito con il colore utilizzato per disegnare le cornici della finestra. Il colore predefinito è nero.  
  
-   **SS_CENTER** designa un semplice rettangolo e viene visualizzato il testo specificato centrato nel rettangolo. Il testo viene formattato prima che venga visualizzato. Le parole che si estendono oltre la fine di una riga vengono eseguito il wrapping all'inizio della riga successiva centrata.  
  
-   **SS_CENTERIMAGE** specifica che, se la bitmap o icona è più piccola dell'area client del controllo statico, il resto dell'area client viene riempito con il colore del pixel nell'angolo superiore sinistro del bitmap o icona. Se il controllo statico contiene una singola riga di testo, il testo viene centrato verticalmente nell'area client del controllo.  
  
-   **SS_ENDELLIPSIS** o **SS_PATHELLIPSIS** sostituisce parte della stringa specificata con i puntini di sospensione, se necessario, in modo che il risultato nel rettangolo specificato.  
  
     È possibile specificare **SS_END_ELLIPSIS** per sostituire i caratteri alla fine della stringa, o **SS_PATHELLIPSIS** per sostituire i caratteri all'interno della stringa. Se la stringa contiene una barra rovesciata (\\) caratteri, **SS_PATHELLIPSIS** mantiene più del testo dopo l'ultima barra rovesciata possibili.  
  
-   **SS_ENHMETAFILE** specifica un enhanced metafile viene visualizzato nel controllo statico. Il testo specificato è il nome di un metafile. Un controllo statico di metafile avanzati ha dimensioni fisse. metafile viene ridimensionato per adattarla all'area client del controllo statico.  
  
-   **SS_ETCHEDFRAME** creato il frame del controllo statico utilizzando la **EDGE_ETCHED** edge stile.  
  
-   **SS_ETCHEDHORZ** consente di disegnare i bordi superiore e inferiore del controllo statico utilizzando la **EDGE_ETCHED** edge stile.  
  
-   **SS_ETCHEDVERT** consente di disegnare i bordi sinistro e destro del controllo statico utilizzando lo stile del bordo EDGE_ETCHED.  
  
-   **SS_GRAYFRAME** specifica una casella con un frame viene disegnato con lo stesso colore dello sfondo (desktop). Il colore predefinito è grigio.  
  
-   **SS_GRAYRECT** specifica un rettangolo riempito con il colore utilizzato per riempire lo sfondo dello schermo. Il colore predefinito è grigio.  
  
-   **SS_ICON** indica un'icona visualizzata nella finestra di dialogo. Il testo specificato è il nome di un'icona (non un nome file) definito altrove nel file di risorse. Il `nWidth` e `nHeight` i parametri vengono ignorati; automaticamente ridimensionato in modo l'icona.  
  
-   **SS_LEFT** designa un semplice rettangolo e viene visualizzato il testo specificato scaricamento superiore sinistro del rettangolo. Il testo viene formattato prima che venga visualizzato. Le parole che si estendono oltre la fine di una riga vengono eseguito il wrapping all'inizio della riga successiva a sinistra di scaricamento.  
  
-   **SS_LEFTNOWORDWRAP** designa un semplice rettangolo e viene visualizzato il testo specificato scaricamento superiore sinistro del rettangolo. Le schede vengono espanse, ma non vengono incapsulate in parole. Testo che si estende oltre la fine di una riga viene troncato.  
  
-   **SS_NOPREFIX** a meno che non viene specificato questo stile, Windows verrà interpretare i caratteri e commerciale (&) nel testo del controllo tasto di scelta rapida prefisso caratteri. In questo caso, la e commerciale viene rimosso e viene sottolineato il carattere successivo nella stringa. Se un controllo statico è di contenere testo in cui questa funzionalità non si desidera, **SS_NOPREFIX** possono essere aggiunti. Questo stile di controllo statico potrebbe essere incluso i controlli statici definiti. È possibile combinare **SS_NOPREFIX** con altri stili utilizzando l'operatore OR bit per bit. Viene spesso utilizzato quando i nomi di file o di altre stringhe che possono contenere una e commerciale devono essere visualizzato in un controllo statico in una finestra di dialogo.  
  
-   **SS_NOTIFY** invia la finestra padre **STN_CLICKED**, **STN_DBLCLK**, **STN_DISABLE**, e **STN_ENABLE** i messaggi di notifica quando l'utente fa clic o fa doppio clic sul controllo.  
  
-   **SS_OWNERDRAW** specifica che il proprietario del controllo statico è responsabile della creazione del controllo. La finestra proprietaria riceve un `WM_DRAWITEM` messaggio ogni volta che il controllo deve essere disegnato.  
  
-   **SS_REALSIZEIMAGE** impedisce a un controllo statico di icona o bitmap (vale a dire controlli statici che presentano il **SS_ICON** o **SS_BITMAP** stile) venga ridimensionata mentre vengono caricato o disegnata. Se l'icona o bitmap è più grande dell'area di destinazione, l'immagine viene tagliata.  
  
-   **SS_RIGHT** designa un semplice rettangolo e viene visualizzato il testo specificato lo scaricamento a destra nel rettangolo. Il testo viene formattato prima che venga visualizzato. Le parole che si estendono oltre la fine di una riga vengono eseguito il wrapping all'inizio della riga successiva lo scaricamento a destra.  
  
-   **SS_RIGHTJUST** specifica che l'angolo inferiore destro di un controllo statico con la **SS_BITMAP** o **SS_ICON** stile deve rimanere fissa quando il controllo viene ridimensionato. Solo i lati superiore e sinistro vengono regolati per supportare una nuova bitmap o icona.  
  
-   **SS_SIMPLE** designa un semplice rettangolo e visualizza una singola riga di testo scaricamento superiore sinistro del rettangolo. La riga di testo non può essere abbreviare o alterata in alcun modo. (Casella di dialogo o finestra padre del controllo non è necessario elaborare il `WM_CTLCOLOR` messaggio.)  
  
-   **SS_SUNKEN** Disegna un bordo incassato intorno a un controllo statico.  
  
-   **SS_USERITEM** specifica un elemento definito dall'utente.  
  
-   **SS_WHITEFRAME** specifica una casella con un frame viene disegnato con lo stesso colore dello sfondo della finestra. Il valore predefinito è bianco.  
  
-   **SS_WHITERECT** specifica un rettangolo riempito con il colore utilizzato per riempire lo sfondo della finestra. Il valore predefinito è bianco.  
  
-   **SS_WORDELLIPSIS** tronca il testo che non rientri e aggiunge i puntini di sospensione.  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CStatic::Create](../../mfc/reference/cstatic-class.md#create)   
 [DrawEdge](http://msdn.microsoft.com/library/windows/desktop/dd162477)   
 [Stili del controllo statico](http://msdn.microsoft.com/library/windows/desktop/bb760773)


