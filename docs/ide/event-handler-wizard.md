---
title: "Creazione guidata gestore eventi | Microsoft Docs"
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
  - "vc.codewiz.eventhandler.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata gestore eventi [C++]"
ms.assetid: af8e1835-94b1-4d9a-b353-c519e011d3a1
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione guidata gestore eventi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa creazione guidata consente di aggiungere un gestore eventi relativo a un controllo finestra di dialogo alla classe scelta.  Se si aggiunge un gestore eventi dalla [finestra Proprietà](../Topic/Properties%20Window.md), sarà possibile aggiungerlo solo alla classe che implementa la finestra di dialogo.  Per ulteriori informazioni, vedere [Aggiunta di gestori eventi per i controlli finestra di dialogo](../mfc/adding-event-handlers-for-dialog-box-controls.md).  
  
 **Nome comando**  
 Identifica il controllo selezionato, per il quale viene aggiunto il gestore eventi.  Questa casella non è disponibile.  
  
 **Tipo messaggio**  
 Visualizza l'elenco dei possibili gestori messaggi correnti per il controllo selezionato.  
  
 **Nome gestore funzioni**  
 Visualizza il nome della funzione aggiunta per gestire l'evento.  Per impostazione predefinita il nome è basato sul tipo di messaggio e sul comando, preceduto da "On".  Per il pulsante chiamato `IDC_BUTTON1`, ad esempio, il tipo di messaggio `BN_CLICKED` visualizza il nome del gestore funzioni `OnBnClickedButton1`.  
  
 **Elenco classi**  
 Visualizza le classi disponibili cui è possibile aggiungere un gestore eventi.  La classe relativa alla finestra di dialogo selezionata è visualizzata in rosso.  
  
 **Descrizione gestore**  
 Fornisce una descrizione della voce selezionata nella casella **Tipo messaggio**.  Questa casella non è disponibile.  
  
 **Aggiungi e modifica**  
 Aggiunge il gestore messaggi alla classe o all'oggetto selezionato, quindi apre l'editor di testo sulla nuova funzione, in modo che sia possibile aggiungere il codice per la gestione della notifica del controllo.  
  
 **Modifica codice**  
 Apre l'editor di testo sulla funzione esistente selezionata in modo che sia possibile aggiungere o modificare il codice per la gestione della notifica del controllo.  
  
## Vedere anche  
 [Aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md)