---
title: "Stili casella combinata | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CBS_LOWERCASE"
  - "CBS_SORT"
  - "CBS_OWNERDRAWVARIABLE"
  - "CBS_OEMCONVERT"
  - "CBS_AUTOHSCROLL"
  - "CBS_NOINTEGRALHEIGHT"
  - "CBS_SIMPLE"
  - "CBS_DROPDOWNLIST"
  - "CBS_DROPDOWN"
  - "CBS_UPPERCASE"
  - "CBS_HASSTRINGS"
  - "CBS_DISABLENOSCROLL"
  - "CBS_OWNERDRAWFIXED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBS_OWNERDRAWVARIABLE (costante)"
  - "CBS_NOINTEGRALHEIGHT (costante)"
  - "CBS_SIMPLE (costante)"
  - "CBS_AUTOHSCROLL (costante)"
  - "CBS_OEMCONVERT (costante)"
  - "CBS_DISABLENOSCROLL (costante)"
  - "CBS_HASSTRINGS (costante)"
  - "CBS_LOWERCASE (costante)"
  - "CBS_SORT (costante)"
  - "CBS_DROPDOWN (costante)"
  - "CBS_OWNERDRAWFIXED (costante)"
  - "caselle combinate, stili"
  - "CBS_UPPERCASE (costante)"
  - "CBS_DROPDOWNLIST (costante)"
ms.assetid: d21a5023-e6a2-495b-a6bd-010a515cbc63
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Stili casella combinata
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I seguenti stili casella combinata sono disponibili in MFC.  
  
-   **CBS\_AUTOHSCROLL** Attiva lo scorrimento automatico del testo nel controllo di modifica a destra quando l'utente digita un carattere alla fine della riga. Se non si imposta questo stile, è consentito solo il testo che si adatta al limite rettangolare.  
  
-   **CBS\_DISABLENOSCROLL** Nella casella di riepilogo è visualizzata una barra di scorrimento verticale disabilitata quando la casella non contiene abbastanza elementi da scorrere. Senza questo stile, la barra di scorrimento viene nascosta quando la casella di riepilogo non contiene sufficienti elementi.  
  
-   **CBS\_DROPDOWN** Simile a **CBS\_SIMPLE**, ad eccezione del fatto che la casella di riepilogo non viene visualizzata a meno che l'utente non selezioni un'icona accanto al controllo di modifica.  
  
-   **CBS\_DROPDOWNLIST** Simile a **CBS\_DROPDOWN**, ad eccezione del fatto che il controllo di modifica viene sostituito da un elemento di testo statico che consente di visualizzare la selezione corrente nella casella di riepilogo.  
  
-   **CBS\_HASSTRINGS** Casella combinata creata dal proprietario, contenente elementi formati da stringhe. La casella combinata gestisce la memoria e i puntatori per le stringhe in modo che l'applicazione possa usare la funzione membro `GetText` per recuperare il testo di un particolare elemento.  
  
-   **CBS\_LOWERCASE** Converte in minuscolo tutto il testo nel campo di selezione e nell'elenco.  
  
-   **CBS\_NOINTEGRALHEIGHT** Specifica che la dimensione della casella combinata è esattamente quella specificata dall'applicazione al momento della relativa creazione. In genere, Windows ridimensiona una casella combinata in modo da evitarne la visualizzazione parziale degli elementi.  
  
-   **CBS\_OEMCONVERT** Il testo immesso nel controllo di modifica della casella combinata viene convertito dal set di caratteri ANSI al set di caratteri OEM e quindi di nuovo ad ANSI. Ciò assicura la corretta conversione dei caratteri quando l'applicazione chiama la funzione di Windows `AnsiToOem` per convertire una stringa ANSI nella casella combinata in caratteri OEM. Questo stile è più utile per le caselle combinate che contengono i nomi file e si applica solo a caselle combinate create con lo stile **CBS\_SIMPLE** o **CBS\_DROPDOWN**.  
  
-   **CBS\_OWNERDRAWFIXED** Il proprietario della casella di riepilogo è responsabile della creazione del relativo contenuto. Gli elementi nella casella di riepilogo sono tutti della stessa altezza.  
  
-   **CBS\_OWNERDRAWVARIABLE** Il proprietario della casella di riepilogo è responsabile della creazione del relativo contenuto. Gli elementi nella casella di riepilogo sono variabili in altezza.  
  
-   **CBS\_SIMPLE** La casella di riepilogo viene visualizzata sempre. La selezione corrente nella casella di riepilogo viene visualizzata nel controllo di modifica.  
  
-   **CBS\_SORT** Ordina automaticamente le stringhe immesse nella casella di riepilogo.  
  
-   **CBS\_UPPERCASE** Converte in maiuscolo tutto il testo nel campo di selezione e nell'elenco.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CComboBox::Create](../Topic/CComboBox::Create.md)   
 [Combo Box Styles](_win32_combo_box_styles)