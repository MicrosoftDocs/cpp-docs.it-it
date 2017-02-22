---
title: "DDX (Dialog Data Exchange) | Microsoft Docs"
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
  - "annullamento dello scambio di dati"
  - "acquisizione dell'input dell'utente"
  - "CDataExchange (classe), mediante DDX"
  - "DDX (Dialog Data Exchange), annullamento"
  - "DDX (Dialog Data Exchange), meccanismo di scambio di dati"
  - "dati della finestra di dialogo"
  - "dati della finestra di dialogo, recupero"
  - "finestre di dialogo, scambio di dati"
  - "finestre di dialogo, inizializzazione"
  - "finestre di dialogo, recupero dell'input utente tramite DDX"
  - "DoDataExchange (metodo)"
  - "inizializzazione di finestre di dialogo"
  - "recupero dati della finestra dialogo"
  - "trasferimento dati della finestra di dialogo"
  - "UpdateData (metodo)"
  - "input utente, recupero da finestre dialogo MFC"
ms.assetid: 4675f63b-41d2-45ed-b6c3-235ad8ab924b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# DDX (Dialog Data Exchange)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si utilizza il meccanismo DDX, impostare i valori iniziali delle variabili membro dell'oggetto finestra di dialogo, in genere nel gestore di `OnInitDialog` o nel costruttore della finestra di dialogo.  Immediatamente prima della finestra di dialogo viene visualizzato, il meccanismo DDX del framework trasferisce i valori delle variabili membro i controlli nella finestra di dialogo, in cui vengono visualizzati quando la finestra di dialogo stessa viene visualizzato in risposta a `DoModal` o a **Crea**.  L'implementazione predefinita di `OnInitDialog` in `CDialog` chiama la funzione membro di `UpdateData` di classe `CWnd` per inizializzare i controlli nella finestra di dialogo.  
  
 Lo stesso meccanismo trasferisce i valori dei controlli a variabili membro quando l'utente fa clic sul pulsante OK o ogni volta che si chiama la funzione membro di `UpdateData` con l'argomento **TRUE**\).  Il meccanismo di convalida dati della finestra di dialogo convalida tutti gli elementi di dati per il quale è stato specificato le regole di convalida.  
  
 Nella figura seguente viene illustrato lo scambio di dati della finestra di dialogo.  
  
 ![DDX &#40;Dialog Data Exchange&#41;](../mfc/media/vc379d1.png "vc379D1")  
Dialog Data Exchange \(DDX\)  
  
 funzionamento di`UpdateData` in entrambe le direzioni, come specificato dal parametro di **BOOL** sono stati superati.  Per effettuare lo scambio, `UpdateData` installa un oggetto di `CDataExchange` e chiama un override della classe della finestra di dialogo aggiungi funzione membro di `CDialog``DoDataExchange`.  `DoDataExchange` accetta un argomento di tipo `CDataExchange`.  L'oggetto di `CDataExchange` passato a `UpdateData` rappresenta il contesto dello scambio, definendo informazioni quali la direzione dello scambio.  
  
 Quando si \(o una creazione guidata codice\) esegue l'override `DoDataExchange`, specificare una chiamata a una funzione DDX per membro dati \(controllo.  Ogni funzione DDX sapere come per scambiare dati in entrambe le direzioni in base al contesto fornito dall'argomento di `CDataExchange` passato al `DoDataExchange` da `UpdateData`.  
  
 MFC offre molte funzioni DDX per tipi diversi di scambio.  Nell'esempio seguente viene illustrato un override di `DoDataExchange` in cui due funzioni DDX e una funzione di DDV vengono chiamate:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#49](../mfc/codesnippet/CPP/dialog-data-exchange_1.cpp)]  
  
 Le righe di `DDV_` e di `DDX_` sono una mappa di dati.  L'esempio DDX e le funzioni di DDV vengono visualizzate per un controllo checkbox e un controllo casella di modifica, rispettivamente.  
  
 Se l'utente annulla una finestra di dialogo modale, la funzione membro di `OnCancel` termina la finestra di dialogo e `DoModal` restituisce il valore **IDCANCEL**.  In tal caso, non vengono scambiato tra la finestra di dialogo e l'oggetto della finestra di dialogo.  
  
## Vedere anche  
 [Convalida e DDX \(Dialog Data Exchange\)](../mfc/dialog-data-exchange-and-validation.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Convalida dei dati delle finestre di dialogo](../mfc/dialog-data-validation.md)