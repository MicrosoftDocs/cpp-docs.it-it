---
title: "Procedura: visualizzare informazioni sui comandi nella barra di stato | Microsoft Docs"
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
  - "visualizzazione dello stato del comando"
  - "prompt [C++]"
  - "barre di stato, visualizzazione di informazioni su comandi"
  - "barre di stato, area messaggio"
ms.assetid: de895cbe-61ee-46bf-9787-76b247527d6d
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Procedura: visualizzare informazioni sui comandi nella barra di stato
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si esegue la creazione guidata applicazione MFC per creare la struttura dell'applicazione, è possibile supportare una barra degli strumenti e una barra di stato.  Solo un'opzione nella creazione guidata supporta entrambi.  Quando una barra di stato è presente, l'applicazione automaticamente fornisce feedback utile quando l'utente sposta il puntatore sugli elementi nei menu.  L'applicazione viene visualizzato automaticamente una stringa di richiesta la barra di stato quando la voce di menu viene evidenziata.  Ad esempio, quando l'utente sposta il puntatore sul comando di **Taglia** dal menu di **Modifica**, la barra di stato non venga visualizzato "di ridurre la selezione e la inserisce negli Appunti" e l'area messaggi della barra di stato.  La richiesta guida all'utente di capire lo scopo della voce di menu.  Questa possibilità vale anche quando l'utente fa clic su un pulsante della barra degli strumenti.  
  
 È possibile aggiungere a questa guida della barra di stato definendo le stringhe di richiesta per le voci di menu che si aggiunge al programma.  A tale scopo, immettere stringhe di richiesta quando si modificano le proprietà della voce di menu nell'editor menu.  Le stringhe definite vengono memorizzate nel file di risorse dell'applicazione; gli ID dei controlli che spiegano.  
  
 Per impostazione predefinita, la creazione guidata applicazione aggiunge `AFX_IDS_IDLEMESSAGE`, l'id di un messaggio standard di " pronto ", che viene visualizzato quando il programma è in attesa dei nuovi messaggi.  Se si specifica l'opzione guida sensibile al contesto nella procedura guidata, il messaggio viene impostata su "per la guida, premere F1."  
  
## Vedere anche  
 [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)