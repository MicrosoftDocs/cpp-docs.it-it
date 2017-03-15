---
title: "Descrizioni comandi barra degli strumenti | Microsoft Docs"
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
  - "CBRS_FLYBY (costante)"
  - "CBRS_TOOLTIPS (costante)"
  - "aggiornamenti rapidi della barra di stato"
  - "barre di stato, descrizioni comandi"
  - "descrizioni comandi [C++]"
  - "descrizioni comandi [C++], attivazione"
  - "descrizioni comandi [C++], aggiunta di testo"
  - "aggiornamenti"
  - "aggiornamenti, messaggi della barra di stato"
  - "aggiornamento dei messaggi della barra di stato"
ms.assetid: d1696305-b604-4fad-9f09-638878371412
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Descrizioni comandi barra degli strumenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le descrizioni comandi sono le finestre popup minuscole che presentano una breve descrizione dello scopo di un pulsante della barra degli strumenti quando si posiziona il mouse su un pulsante per un punto.  Quando si crea un'applicazione con la creazione guidata applicazioni con una barra degli strumenti, il supporto della descrizione comandi viene fornito automaticamente.  In questo articolo viene sia il supporto della descrizione comandi creato dalla procedura guidata applicazione e come aggiungere il supporto della descrizione comandi all'applicazione.  
  
 Questo articolo riguarda:  
  
-   [Descrizioni comandi attivazione](#_core_activating_tool_tips)  
  
-   [Aggiornamenti della barra di stato di parata aerea](#_core_fly_by_status_bar_updates)  
  
##  <a name="_core_activating_tool_tips"></a> Descrizioni comandi attivazione  
 Per attivare le descrizioni comandi nell'applicazione, è necessario eseguire due operazioni:  
  
-   Aggiungere lo stile di `CBRS_TOOLTIPS` agli altri stili \(come **WS\_CHILD**, **WS\_VISIBLE** e altri stili di **CBRS\_** \) passati come parametro di `dwStyle` alla funzione di [CToolBar::Create](../Topic/CToolBar::Create.md) o in [SetBarStyle](../Topic/CControlBar::SetBarStyle.md).  
  
-   Come descritto nella procedura riportata di seguito, aggiungere il testo del suggerimento della barra degli strumenti, separato da un carattere di nuova riga \(" \\ n "\), alla risorsa di tipo stringa contenente la richiesta della riga di comando della barra degli strumenti.  La risorsa di tipo stringa condivide l'id del pulsante della barra degli strumenti.  
  
#### Per aggiungere il testo di descrizione comando  
  
1.  Mentre si modifica la barra degli strumenti nell'editor barra degli strumenti, aprire la finestra di **Proprietà pulsante barra degli strumenti** per un pulsante specificato.  
  
2.  Nella casella di **Messaggio di richiesta** , specificare il testo che si desidera visualizzare nella descrizione comandi per tale pulsante.  
  
> [!NOTE]
>  Impostare il testo come proprietà del pulsante nell'editor barra degli strumenti sostituisce la precedente procedura, in cui era necessario aprire e modificare la risorsa di tipo stringa.  
  
 Se una barra di controllo con descrizioni comandi sono abilitate controlli figlio, posizionati sulla barra di controllo viene visualizzata una descrizione comandi per ogni controllo figlio nella barra di controllo finché soddisfa i criteri seguenti:  
  
-   L'id del controllo non è a 1.  
  
-   La voce della tabella di stringhe con lo stesso ID del controllo figlio nel file di risorse è una stringa di descrizione comandi.  
  
##  <a name="_core_fly_by_status_bar_updates"></a> Aggiornamenti della barra di stato di parata aerea  
 Una funzionalità correlate alle descrizioni comandi è l'aggiornamento della barra di stato "di parata aerea".  Per impostazione predefinita, il messaggio nella barra di stato vengono descritte solo un pulsante della barra degli strumenti particolare quando il pulsante viene attivato.  Importazione `CBRS_FLYBY` nell'elenco di stili passati a `CToolBar::Create`, è possibile aggiornare questi messaggi quando il cursore del mouse passa la barra degli strumenti senza effettivamente attivare il pulsante.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Implementazione della barra degli strumenti MFC \(informazioni generali sulle barre degli strumenti\)](../mfc/mfc-toolbar-implementation.md)  
  
-   [Barre degli strumenti mobili e ancorate](../mfc/docking-and-floating-toolbars.md)  
  
-   Le classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)  
  
-   [Utilizzo del controllo toolbar](../mfc/working-with-the-toolbar-control.md)  
  
-   [Utilizzando le barre degli strumenti obsolete](../mfc/using-your-old-toolbars.md)  
  
## Vedere anche  
 [Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)