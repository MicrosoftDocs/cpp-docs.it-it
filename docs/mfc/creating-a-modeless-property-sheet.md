---
title: "Creazione di una finestra delle propriet&#224; non modale | Microsoft Docs"
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
  - "Create (metodo) [C++], finestre delle proprietà"
  - "finestre delle proprietà non modali"
  - "finestre delle proprietà, non modali"
ms.assetid: eafd8a92-cc67-4a69-a5fb-742c920d1ae8
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Creazione di una finestra delle propriet&#224; non modale
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In genere, le finestre delle proprietà che verranno create modali.  Nell'utilizzo di una finestra delle proprietà modale, è necessario chiudere la finestra delle proprietà prima di utilizzare qualsiasi altra parte dell'applicazione.  Questo articolo descrive i metodi è possibile utilizzare per creare una finestra delle proprietà non modale che consente all'utente di mantenere la finestra delle proprietà aperta quando si utilizza altre parti dell'applicazione.  
  
 Per visualizzare una finestra delle proprietà come finestra di dialogo non modale anziché come finestra di dialogo modale, chiamare [CPropertySheet::Create](../Topic/CPropertySheet::Create.md) anziché [DoModal](../Topic/CPropertySheet::DoModal.md).  È necessario implementare anche alcune attività aggiuntive supportare una finestra delle proprietà non modale.  
  
 Una delle attività aggiuntive è lo scambio di dati tra la finestra delle proprietà e l'oggetto esterno che viene modificato quando la finestra delle proprietà è aperta.  Generalmente corrisponde di attività per le finestre di dialogo non modale standard.  La parte di questa attività si sta implementando un canale di comunicazione tra la finestra delle proprietà non modale e l'oggetto esterno e le impostazioni delle proprietà vengono applicati.  Questa implementazione è molto più semplice se si deriva una classe da [CPropertySheet](../mfc/reference/cpropertysheet-class.md) per la finestra delle proprietà non modale.  Questo articolo si presume che sia necessario.  
  
 Un metodo per la comunicazione tra la finestra delle proprietà non modale e l'oggetto esterno \(la selezione corrente di una visualizzazione, ad esempio è possibile definire un puntatore dalla finestra delle proprietà all'oggetto esterno.  Definire una funzione denominata chostforwinform simile a `SetMyExternalObject`\) in `CPropertySheet`\- classe derivata per modificare il puntatore ogni modifica dello stato attivo da un oggetto esterno a un altro.  Le necessità di funzione di `SetMyExternalObject` di reimpostare le impostazioni per ciascuna pagina delle proprietà riflettano l'oggetto esterno appena selezionato.  A tale scopo, la funzione di `SetMyExternalObject` possa accedere agli oggetti di [CPropertyPage](../mfc/reference/cpropertypage-class.md) appartenenti alla classe di `CPropertySheet`.  
  
 Il modo più pratico per fornire l'accesso alle pagine delle proprietà all'interno di una finestra delle proprietà è di importare oggetti in `CPropertySheet`\- oggetto derivato di `CPropertyPage`.  Incorporando `CPropertyPage` oggetti in `CPropertySheet`l'oggetto derivato differisce dalla progettazione tipica per le finestre di dialogo modali, in cui il proprietario della finestra delle proprietà vengono creati oggetti di `CPropertyPage` e li passa alla finestra delle proprietà mediante [CPropertySheet::AddPage](../Topic/CPropertySheet::AddPage.md).  
  
 Esistono diverse alternative dell'interfaccia utente per determinare quando le impostazioni delle proprietà non modale devono essere applicate a un oggetto esterno.  Un'alternativa consiste di applicare le impostazioni della pagina delle proprietà current ogni volta che l'utente modifica il valore.  Un'altra alternativa consiste nella creazione di un pulsante di applicare, che consente all'utente accumulate le modifiche nelle pagine delle proprietà prima di salvarle nell'oggetto esterno.  Per informazioni sulle modalità per gestire il pulsante apply, vedere l'articolo [Gestire il pulsante apply](../mfc/handling-the-apply-button.md).  
  
## Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)   
 [Scambio di dati](../mfc/exchanging-data.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)