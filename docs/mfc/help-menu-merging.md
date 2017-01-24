---
title: "Unione di menu della Guida | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "menu, unione"
  - "unione di menu della Guida"
  - "Guida, per contenitori documenti attivi"
ms.assetid: 9d615999-79ba-471a-9288-718f0c903d49
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Unione di menu della Guida
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un oggetto è attivo in un contenitore, il protocollo di unione dei menu dei documenti OLE fornisce il controllo completo dell'oggetto del menu **?**.  Di conseguenza, gli argomenti della Guida del contenitore non sono disponibili a meno che l'utente disattivare l'oggetto.  L'architettura di contenimento di documenti attivi vengono illustrate le regole per l'unione di menu sul posto attivare sia il contenitore che un documento attivo che è attivo condividere il menu.  Nuove regole rappresentano convenzioni semplicemente aggiuntive sul componente proprietario della parte del menu e il menu condiviso viene costruito.  
  
 La nuova convenzione è semplice.  Nei documenti attivi, il menu **?** dispone di due voci di menu di primo livello organizzate come segue:  
  
 `Help`  
  
 `Container Help >`  
  
 `Object Help    >`  
  
 Ad esempio, quando una sezione di Word è attiva nel Raccoglitore microsoft Office, il menu **?** verrebbe come segue:  
  
 `Help`  
  
 `Binder Help >`  
  
 `Word Help   >`  
  
 Entrambe le voci di menu vengono menu a cascata in cui tutte le voci di menu aggiuntive specifiche del contenitore e all'oggetto vengono fornite all'utente.  Gli elementi vengono visualizzati qui varierà con il contenitore e gli oggetti in questione.  
  
 Per costruire questo menu fuso **?**, l'architettura di contenimento del documento attivo modifica la routine documenti OLE normale.  Come i documenti OLE, la barra dei menu unita può avere sei gruppi di menu, ovvero a indicare **File**, **Modifica**, **Contenitore**, `Object`, **Finestra**, **?**, in questo ordine.  In ogni gruppo, potrebbe contenere zero o più menu.  I gruppi **File**, **Contenitore** e **Finestra** appartengono al contenitore e gruppi **Modifica**, **Oggetto** e **?** appartengono all'oggetto.  Quando l'oggetto desidera eseguire l'unione dei menu, viene creata una barra dei menu vuota e li passa al contenitore.  Il contenitore quindi incollare i relativi menu, chiamando **IOleInPlaceFrame::InsertMenus**.  L'oggetto passa anche una struttura che è una matrice di sei valori LUNGHI \(**OLEMENUGROUPWIDTHS**\).  Dopo l'inserimento dei menu, la casella contrassegna il numero di menu ha aggiunto in ognuno dei relativi gruppi e quindi restituisce.  L'oggetto inserisce il proprio menu, prestanti attenzione al conteggio dei menu in ogni gruppo del contenitore.  Infine, l'oggetto passa la barra dei menu unita e la matrice \(che contiene il numero di menu in ogni gruppo OLE\), che restituisce "un handle opaco di descrittore di menu".  Successivamente le sessioni dell'oggetto che gestiscono e la barra dei menu unita al contenitore, tramite **IOleInPlaceFrame::SetMenu**.  Attualmente, il contenitore visualizzare la barra dei menu unita e si passa l'handle per OLE, in modo da OLE può inviare appropriato di messaggi del menu.  
  
 Nella routine modificata del documento attivo, è innanzitutto necessario inizializzare gli elementi **OLEMENUGROUPWIDTHS** su zero prima di passarli al contenitore.  Il contenitore consente di eseguire un inserimento normale di menu con un'eccezione: Il contenitore consente di inserire un menu di **?** come ultimo elemento e memorizza un valore 1 nell'ultima \(sesta\) voce della matrice di **OLEMENUGROUPWIDTHS** ovvero larghezza \[5\], che appartiene al gruppo della guida dell'oggetto\).  Questo menu **?** avrà un solo elemento che è un sottomenu, il menu della sovrapposizione \>di "**Guida contenitore** " come descritto in precedenza.  
  
 L'oggetto viene quindi eseguito il codice normale di inserimento del menu, ma prima incolla del menu **?** , controlla la sesta voce della matrice di **OLEMENUGROUPWIDTHS**.  Se il valore è 1 e il nome dell'ultimo menu è **?** \(o la stringa localizzata appropriata\), l'oggetto inserisce il relativo menu **?** come sottomenu di menu **?** del contenitore.  
  
 L'oggetto impostare il sesto elemento di **OLEMENUGROUPWIDTHS** su zero e incrementa il quinto elemento da uno.  In questo modo OLE conoscere il menu **?** appartiene al contenitore e i messaggi di menu che corrispondono al menu \(e ai sottomenu\) devono essere indirizzati al contenitore.  Viene quindi responsabilità del contenitore di inoltrare `WM_INITMENUPOPUP`, **WM\_SELECT**, **WM\_COMMAND** e altri messaggi menu\- correlati che appartengono alla parte dell'oggetto del menu **?** .  Questa operazione viene eseguita tramite `WM_INITMENU` per rimuovere un flag che indica al contenitore se l'utente ha spostato in **?** dell'oggetto nel menu.  Il contenitore quindi controlla `WM_MENUSELECT` per la voce in oppure si esce da qualsiasi elemento dal menu **?** che il contenitore non ha aggiunto stesso.  La voce, significa che l'utente ha spostato in un menu oggetto, pertanto il contenitore "imposta il flag il menu? di oggetto" e utilizza lo stato del flag per inoltrare qualsiasi `WM_MENUSELECT`, `WM_INITMENUPOPUP` e messaggi di **WM\_COMMAND**, come minimo, nella finestra dell'oggetto. \(All'uscita, il contenitore rimuove il flag quindi elabora questi stessi messaggi stesso.\) Il contenitore deve utilizzare la finestra restituita dalla funzione di **IOleInPlaceActiveObejct::GetWindow** dell'oggetto come destinazione per questi messaggi.  
  
 Se l'oggetto viene rilevato uno zero nel sesto elemento di **OLEMENUGROUPWIDTHS**, continua in base alle regole OLE standard dei documenti.  Questa procedura riguarda i contenitori che partecipano all'unione dei menu **?** nonché quelli che non fanno.  
  
 Quando l'oggetto chiama **IOleInPlaceFrame::SetMenu**, prima di visualizzare la barra dei menu unita, il contenitore viene verificato se il menu **?** disponga di un sottomenu aggiuntivo, oltre a cui il contenitore ha inserito.  In tal caso, il contenitore consente al relativo menu **?** la barra dei menu unita.  Se il menu **?** non è presente alcun sottomenu aggiuntivo, il contenitore viene rimosso il relativo menu **?** la barra dei menu unita.  Questa procedura riguarda oggetti che fanno parte di unione dei menu di **?** nonché quelli che non fanno.  
  
 Infine, al momento di disassemblare il menu, l'oggetto viene inserito il menu di **?** oltre a rimuovere gli altri menu immessi.  Quando il contenitore rimuove i relativi menu, verrà rimosso il relativo menu **?** oltre agli altri menu che ha inserito.  
  
## Vedere anche  
 [Contenitore documenti attivi](../mfc/active-document-containers.md)