---
title: "Supporto ATL per controlli DHTML | Microsoft Docs"
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
  - "DHTML (controlli)"
  - "DHTML (controlli), supporto ATL"
  - "HTML (controlli), supporto ATL"
ms.assetid: 4ba98098-da5d-4362-96ad-8372f816c307
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Supporto ATL per controlli DHTML
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzando ATL, è possibile creare un controllo con funzionalità di DHTML \(Dynamic HTML\).  Un controllo ATL DHTML:  
  
-   Ospita il controllo WebBrowser.  
  
-   Specifica, utilizzando HTML, l'interfaccia utente \(UI\) del controllo DHTML.  
  
-   Accede all'oggetto di WebBrowser e i relativi metodi tramite la relativa interfaccia, [IWebBrowser2](https://msdn.microsoft.com/en-us/library/aa752127.aspx).  
  
-   Gestisce la comunicazione tra il codice C\+\+ e HTML.  
  
 Un controllo DHTML è simile a qualsiasi altro controllo ATL, a meno che il controllo DHTML includere un'interfaccia dispatch aggiuntiva.  Vedere la figura in [Identificazione degli elementi del progetto di controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md) per una descrizione delle interfacce fornite nell'impostazione predefinita DHTML di un.  
  
 È possibile visualizzare il controllo ATL DHTML nei browser o in un altro contenitore, come il controllo ActiveX control Test Container.  
  
## In questa sezione  
 [Identificazione degli elementi del progetto di controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md)  
 Vengono descritti gli elementi di un progetto di controllo DHTML.  
  
 [Codice C\+\+ chiamante di DHTML](../atl/calling-cpp-code-from-dhtml.md)  
 Viene fornito un esempio di chiamare il codice C\+\+ da un controllo DHTML.  
  
 [Creare un controllo ATL DHTML](../atl/creating-an-atl-dhtml-control.md)  
 Elenca i passaggi per creare un controllo DHTML.  
  
 [Test del controllo ATL DHTML](../atl/testing-the-atl-dhtml-control.md)  
 Viene illustrato come compilare e testare il progetto di controllo iniziale DHTML.  
  
 [Modificare il controllo ATL DHTML](../atl/modifying-the-atl-dhtml-control.md)  
 Viene illustrato come aggiungere alcune funzionalità al controllo.  
  
 [Test del controllo modificato ATL DHTML](../atl/testing-the-modified-atl-dhtml-control.md)  
 Viene illustrato come compilare e testare la funzionalità aggiunta di un controllo.  
  
## Sezioni correlate  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Vengono forniti collegamenti ad argomenti concettuali sulla programmazione mediante Active Template Library.