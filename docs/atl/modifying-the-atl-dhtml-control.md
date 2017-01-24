---
title: "Modifying the ATL DHTML Control | Microsoft Docs"
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
  - "DHTML controls"
  - "DHTML controls, modifica"
  - "HTML (controlli), modifica"
ms.assetid: c053f35f-8629-4600-9595-721f5956777a
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifying the ATL DHTML Control
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La procedura guidata controllo ATL fornisce il codice iniziale in modo da poter compilare ed eseguire il controllo e pertanto è possibile vedere che i metodi vengono scritti nei file di progetto e sulle chiamate DHTML nel codice C\+\+ del controllo utilizzando i metodi di invio.  È possibile aggiungere qualsiasi metodo dell'interfaccia dispatch.  Quindi, è possibile chiamare metodi nella risorsa HTML.  
  
#### Per modificare il controllo ATL DHTML  
  
1.  In Visualizzazione classi, espandere il progetto di controllo.  
  
     Si noti che l'interfaccia che termina in "interfaccia" ha un metodo, `OnClick`.  L'interfaccia che non termina per "nell'interfaccia utente" non ha alcun metodo.  
  
2.  Aggiungere un metodo chiamato `MethodInvoked`a un'interfaccia che non termina per "nell'interfaccia utente."  
  
     Questo metodo viene aggiunto all'interfaccia utilizzata nel contenitore di controlli per l'interazione del contenitore, non all'interfaccia utilizzata dal DHTML per interagire con il controllo.  Solo il contenitore può chiamare questo metodo.  
  
3.  Individuare il metodo generato \(first\-in nel file CPP e aggiungere il codice per visualizzare una finestra di messaggio, ad esempio:  
  
     [!code-cpp[NVC_ATL_COM#5](../atl/codesnippet/CPP/modifying-the-atl-dhtml-control_1.cpp)]  
  
4.  Aggiungere un altro metodo chiamato `HelloHTML`, solo questa volta, aggiungerlo all'interfaccia che termina in "interfaccia utente." Individuare il metodo generato al `HelloHTML` nel file CPP e aggiungere il codice per visualizzare una finestra di messaggio, ad esempio:  
  
     [!code-cpp[NVC_ATL_COM#6](../atl/codesnippet/CPP/modifying-the-atl-dhtml-control_2.cpp)]  
  
5.  Aggiungere un terzo metodo, `GoToURL`, a un'interfaccia che non termina per "nell'interfaccia utente." Questo metodo viene implementato chiamando [IWebBrowser2::Navigate](https://msdn.microsoft.com/en-us/library/aa752133.aspx), come segue:  
  
     [!code-cpp[NVC_ATL_COM#7](../atl/codesnippet/CPP/modifying-the-atl-dhtml-control_3.cpp)]  
  
     È possibile utilizzare i metodi **IWebBrowser2** perché ATL fornisce un puntatore a quell'interfaccia automaticamente nel file h.  
  
 Successivamente, modificare la risorsa HTML per richiamare i metodi creato.  Aggiungere tre pulsanti per richiamare questi metodi.  
  
#### Per modificare la risorsa HTML  
  
1.  In Esplora soluzioni, fare doppio clic sul file .htm per visualizzare la risorsa HTML.  
  
     Esaminare il codice HTML, soprattutto le chiamate ai metodi esterni di invio di Windows.  Il codice HTML chiama il metodo `OnClick` del progetto e i parametri indicano il corpo del controllo \(`theBody`\) e il colore per assegnare \("`red`"\).  Il testo dopo la chiamata al metodo è l'etichetta visualizzato sul pulsante.  
  
2.  Aggiungere un altro metodo `OnClick`, solo modifica il colore.  Di seguito è riportato un esempio:  
  
    ```  
    <br>  
    <br>  
    <BUTTON onclick='window.external.OnClick(theBody, "white");'>Refresh</BUTTON>  
    ```  
  
     Questo metodo crea un pulsante, contrassegnati **Aggiorna**, che l'utente può utilizzare per restituire il controllo sullo sfondo di origine e bianche.  
  
3.  Aggiungere la chiamata al metodo `HelloHTML` creato.  Di seguito è riportato un esempio:  
  
    ```  
    <br>  
    <br>  
    <BUTTON onclick='window.external.HelloHTML();'>HelloHTML</BUTTON>  
    ```  
  
     Questo metodo crea un pulsante, contrassegnati **HelloHTML**, che l'utente può fare clic per visualizzare la finestra di messaggio `HelloHTML`.  
  
 È ora possibile compilare e [verificare il controllo modificato DHTML](../atl/testing-the-modified-atl-dhtml-control.md).  
  
## Vedere anche  
 [Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)