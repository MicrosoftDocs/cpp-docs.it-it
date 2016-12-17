---
title: "Identifying the Elements of the DHTML Control Project | Microsoft Docs"
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
  - "DHTML controls, ATL support"
  - "HTML (controlli), ATL support"
ms.assetid: b627547a-3768-4346-9900-4b7a21fb8e27
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Identifying the Elements of the DHTML Control Project
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La maggior parte del codice del controllo DHTML è esattamente come quello creato per qualsiasi controllo ATL.  Per una conoscenza di base di codice generico, di lavoro con [L'esercitazione ATL](../atl/active-template-library-atl-tutorial.md)e leggere le sezioni [Creare un progetto ATL](../atl/reference/creating-an-atl-project.md) e [Principi fondamentali di oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md).  
  
 Un controllo DHTML è simile a qualsiasi controllo ATL, tranne:  
  
-   Oltre alle interfacce normali un controllo implementa, implementa un'interfaccia aggiuntiva utilizzata per comunicare tra il codice C\+\+ e l'interfaccia utente \(UI\) HTML.  Le chiamate di interfaccia utente HTML nel codice C\+\+ utilizzando questa interfaccia.  
  
-   Crea una risorsa HTML per l'interfaccia utente del controllo.  
  
-   Consente di accedere al modello a oggetti DHTML dalla variabile membro `m_spBrowser`, che è un puntatore intelligente di tipo [IWebBrowser2](https://msdn.microsoft.com/en-us/library/aa752127.aspx).  Utilizzare questo puntatore per accedere a qualsiasi parte del modello a oggetti DHTML.  
  
 Nell'immagine viene illustrata la relazione tra la DLL, il controllo DHTML, il browser e la risorsa HTML.  
  
 ![Elementi di un progetto controllo DHTML](../atl/media/vc52en1.png "vc52EN1")  
  
> [!NOTE]
>  I nomi nel grafico sono segnaposto.  I nomi della risorsa HTML e le interfacce esposte nel controllo sono basati sui nomi che li assegna la procedura guidata controllo ATL.  
  
 In questo grafico, gli elementi sono:  
  
-   **My DLL** La DLL creato utilizzando la creazione guidata progetto ATL.  
  
-   **Controllo DHTML** \(`m_spBrowser`\) il controllo DHTML, creato utilizzando la procedura guidata ATL.  Questo controllo accede all'oggetto del browser e i relativi metodi tramite l'interfaccia dell'oggetto del browser, **IWebBrowser2**.  Il controllo stesso espone le due interfacce, oltre alle altre interfacce richieste standard per un controllo.  
  
    -   **IDHCTL1** l'interfaccia esposta dal controllo utilizzati solo da contenitore.  
  
    -   **IDHCTLUI1** l'interfaccia dispatch per la comunicazione tra il codice C\+\+ e l'interfaccia utente HTML.  Il browser Web utilizza l'interfaccia dispatch del controllo per visualizzare il controllo.  È possibile chiamare i vari metodi di questa interfaccia dispatch dall'interfaccia utente del controllo mediante l'utilizzo `window.external`, seguiti dal nome del metodo in questa interfaccia dispatch che si desidera richiamare.  Accedreste `window.external` da un tag script nel codice HTML che costituisce l'interfaccia utente per il controllo.  Per ulteriori informazioni sui metodi esterni nel file di risorse, vedere [Codice C\+\+ chiamante di DHTML](../atl/calling-cpp-code-from-dhtml.md).  
  
-   **IDR\_CTL1** ID di risorsa della risorsa HTML.  Il nome file, in questo caso, è DHCTL1UI.htm.  Il controllo DHTML utilizza una risorsa HTML contenente i tag HTML standard e l'invio esterna della finestra ordina che è possibile modificare tramite l'editor di testo.  
  
-   **Web Browser** il browser viene visualizzata l'interfaccia utente del controllo, in base a HTML nella risorsa HTML.  Un puntatore a un'interfaccia **IWebBrowser2** browser è disponibile nel controllo DHTML per consentire l'accesso al modello a oggetti DHTML.  
  
 La procedura guidata controllo ATL genera un controllo con codice predefinito sia nella risorsa HTML che nel file CPP.  È possibile compilare ed eseguire il controllo come generato dalla procedura guidata e quindi visualizzare il controllo nel browser o in ActiveX control Test Container.  Nell'immagine seguente viene mostrato il controllo di impostazione predefinita ATL DHTML con tre pulsanti visualizzati in Test Container:  
  
 ![Controllo DHTML ATL](../atl/media/vc52en2.png "vc52EN2")  
  
 Vedere [Creare un controllo ATL DHTML](../atl/creating-an-atl-dhtml-control.md) per iniziare compilare un controllo DHTML.  Vedere [Proprietà ed eventi di test con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere a Test Container.  
  
## Vedere anche  
 [Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)