---
title: Stili casella combinata | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CBS_LOWERCASE
- CBS_SORT
- CBS_OWNERDRAWVARIABLE
- CBS_OEMCONVERT
- CBS_AUTOHSCROLL
- CBS_NOINTEGRALHEIGHT
- CBS_SIMPLE
- CBS_DROPDOWNLIST
- CBS_DROPDOWN
- CBS_UPPERCASE
- CBS_HASSTRINGS
- CBS_DISABLENOSCROLL
- CBS_OWNERDRAWFIXED
dev_langs: C++
helpviewer_keywords:
- CBS_OWNERDRAWVARIABLE constant [MFC]
- CBS_NOINTEGRALHEIGHT constant [MFC]
- CBS_SIMPLE constant [MFC]
- CBS_AUTOHSCROLL constant [MFC]
- CBS_OEMCONVERT constant [MFC]
- CBS_DISABLENOSCROLL constant [MFC]
- CBS_HASSTRINGS constant [MFC]
- CBS_LOWERCASE constant [MFC]
- CBS_SORT constant [MFC]
- CBS_DROPDOWN constant [MFC]
- CBS_OWNERDRAWFIXED constant [MFC]
- combo boxes [MFC], styles
- CBS_UPPERCASE constant [MFC]
- CBS_DROPDOWNLIST constant
ms.assetid: d21a5023-e6a2-495b-a6bd-010a515cbc63
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 028a58c443ba45a4b8167a17f73f6f3fa54e4ca7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="combo-box-styles"></a>Stili casella combinata
I seguenti stili casella combinata sono disponibili in MFC.  
  
-   **CBS_AUTOHSCROLL** Attiva lo scorrimento automatico del testo nel controllo di modifica a destra quando l'utente digita un carattere alla fine della riga. Se non si imposta questo stile, è consentito solo il testo che si adatta al limite rettangolare.  
  
-   **CBS_DISABLENOSCROLL** Nella casella di riepilogo è visualizzata una barra di scorrimento verticale disabilitata quando la casella non contiene abbastanza elementi da scorrere. Senza questo stile, la barra di scorrimento viene nascosta quando la casella di riepilogo non contiene sufficienti elementi.  
  
-   **CBS_DROPDOWN** Simile a **CBS_SIMPLE**, ad eccezione del fatto che la casella di riepilogo non viene visualizzata a meno che l'utente non selezioni un'icona accanto al controllo di modifica.  
  
-   **CBS_DROPDOWNLIST** Simile a **CBS_DROPDOWN**, ad eccezione del fatto che il controllo di modifica viene sostituito da un elemento di testo statico che consente di visualizzare la selezione corrente nella casella di riepilogo.  
  
-   **CBS_HASSTRINGS** Casella combinata creata dal proprietario, contenente elementi formati da stringhe. La casella combinata gestisce la memoria e i puntatori per le stringhe in modo che l'applicazione possa usare la funzione membro `GetText` per recuperare il testo di un particolare elemento.  
  
-   **CBS_LOWERCASE** Converte in minuscolo tutto il testo nel campo di selezione e nell'elenco.  
  
-   **CBS_NOINTEGRALHEIGHT** Specifica che la dimensione della casella combinata è esattamente quella specificata dall'applicazione al momento della relativa creazione. In genere, Windows ridimensiona una casella combinata in modo da evitarne la visualizzazione parziale degli elementi.  
  
-   **CBS_OEMCONVERT** Il testo immesso nel controllo di modifica della casella combinata viene convertito dal set di caratteri ANSI al set di caratteri OEM e quindi di nuovo ad ANSI. Ciò assicura la corretta conversione dei caratteri quando l'applicazione chiama la funzione di Windows `AnsiToOem` per convertire una stringa ANSI nella casella combinata in caratteri OEM. Questo stile è più utile per le caselle combinate che contengono i nomi file e si applica solo a caselle combinate create con lo stile **CBS_SIMPLE** o **CBS_DROPDOWN** .  
  
-   **CBS_OWNERDRAWFIXED** Il proprietario della casella di riepilogo è responsabile della creazione del relativo contenuto. Gli elementi nella casella di riepilogo sono tutti della stessa altezza.  
  
-   **CBS_OWNERDRAWVARIABLE** Il proprietario della casella di riepilogo è responsabile della creazione del relativo contenuto. Gli elementi nella casella di riepilogo sono variabili in altezza.  
  
-   **CBS_SIMPLE** La casella di riepilogo viene visualizzata sempre. La selezione corrente nella casella di riepilogo viene visualizzata nel controllo di modifica.  
  
-   **CBS_SORT** Ordina automaticamente le stringhe immesse nella casella di riepilogo.  
  
-   **CBS_UPPERCASE** Converte in maiuscolo tutto il testo nel campo di selezione e nell'elenco.  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CComboBox::Create] (ccombobox__create di # ccombobox class.md   



