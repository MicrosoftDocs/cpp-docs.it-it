---
title: "Calling C++ Code from DHTML | Microsoft Docs"
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
  - "DHTML, calling C++ code from"
ms.assetid: 37329acd-4c22-40ca-a85a-b7480748f75f
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Calling C++ Code from DHTML
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo DHTML può essere inserito in un contenitore, ad esempio Test Container o Internet Explorer.  Vedere [Proprietà ed eventi di test con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere a Test Container.  
  
 Il contenitore che ospita il controllo passa al controllo tramite le interfacce di controllo standard.  Il DHTML utilizza l'interfaccia dispatch che termina con "l'interfaccia utente" per comunicare con il codice C\+\+ e la risorsa HTML.  In [Modificare il controllo ATL DHTML](../atl/modifying-the-atl-dhtml-control.md), è possibile acquisire dimestichezza aggiungere i metodi da chiamare da queste interfacce differenti.  
  
 Per un esempio di chiamare codice C\+\+ dal DHTML, da [creare un controllo DHTML](../atl/creating-an-atl-dhtml-control.md) utilizzando la creazione guidata controllo ATL ed esaminare il codice nel file di intestazione e il file HTML.  
  
## Dichiarazione dei metodi di WebBrowser nel file di intestazione  
 Per richiamare i metodi di C\+\+ dall'interfaccia utente DHTML, è necessario aggiungere metodi all'interfaccia utente del controllo.  Ad esempio, il file di intestazione creato dalla procedura guidata controllo ATL contiene il metodo `OnClick`C\+\+, che è un membro di interfaccia dell'interfaccia utente del controllo generato dalla procedura guidata.  
  
 Esaminare `OnClick` nel file con estensione h del controllo:  
  
 [!code-cpp[NVC_ATL_COM#4](../atl/codesnippet/CPP/calling-cpp-code-from-dhtml_1.h)]  
  
 Il primo parametro, `pdispBody`, è un puntatore a interfaccia dispatch dell'oggetto del corpo.  Il secondo parametro, `varColor`, identifica il colore da applicare al controllo.  
  
## Codice C\+\+ chiamante nel file HTML  
 Dopo aver dichiarato i metodi di WebBrowser nel file di intestazione, è possibile richiamare i metodi da file HTML.  Avviso nel file HTML che inserisce la procedura guidata controllo ATL tre metodi di invio di Windows: tre metodi `OnClick` che inviano messaggi per modificare il colore di sfondo del controllo.  
  
 Esaminare uno dei metodi nel file HTML:  
  
 `<BUTTON onclick='window.external.OnClick(theBody, "red");'>Red</BUTTON>`  
  
 Nel codice HTML precedente, il metodo esterno della finestra, `OnClick`, viene chiamato come parte del tag del pulsante.  Il metodo dispone di due parametri: `theBody`, che fa riferimento al corpo del documento HTML e `"red"`, che indica che il colore di sfondo del controllo viene impostata sul rosso quando si fa clic sul pulsante.  `Red` dopo il tag è l'etichetta del pulsante.  
  
 Vedere [Modificare il controllo ATL DHTML](../atl/modifying-the-atl-dhtml-control.md) per ulteriori informazioni sulla creazione di metodi personalizzati.  Vedere [Identificazione degli elementi del progetto di controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md) per ulteriori informazioni sul file HTML.  
  
## Vedere anche  
 [Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)