---
title: Supporto ATL per controlli DHTML | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- HTML controls, ATL support
- DHTML controls, ATL support
- DHTML controls
ms.assetid: 4ba98098-da5d-4362-96ad-8372f816c307
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ab796752cef10c48036966c2947d711a0e385032
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atl-support-for-dhtml-controls"></a>Supporto ATL per controlli DHTML
Utilizza ATL, è possibile creare un controllo con la funzionalità HTML dinamico (DHTML). Un controllo DHTML ATL:  
  
-   Ospita il controllo WebBrowser.  
  
-   Specifica, in formato HTML, l'interfaccia utente (UI) del controllo DHTML.  
  
-   Accede a oggetto WebBrowser e i relativi metodi tramite l'interfaccia, [IWebBrowser2](https://msdn.microsoft.com/library/aa752127.aspx).  
  
-   Gestisce la comunicazione tra il codice C++ e HTML.  
  
 Un controllo DHTML è simile a qualsiasi altro controllo ATL, ma il controllo DHTML include un'interfaccia dispatch aggiuntiva. Vedere la figura in [identificazione degli elementi del progetto controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md) per un'illustrazione delle interfacce fornite nel progetto DHTML predefinito.  
  
 È possibile visualizzare il controllo DHTML ATL in un browser Web o di altri contenitori, ad esempio ActiveX Control Test Container.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Identificazione degli elementi del progetto dei controlli DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md)  
 Vengono descritti gli elementi di un progetto controllo DHTML.  
  
 [Chiamata al codice C++ da DHTML](../atl/calling-cpp-code-from-dhtml.md)  
 Fornisce un esempio di chiamata di codice C++ da un controllo DHTML.  
  
 [Creazione di un controllo DHTML ATL](../atl/creating-an-atl-dhtml-control.md)  
 Elenca i passaggi per la creazione di un controllo DHTML.  
  
 [Test del controllo DHTML di ATL](../atl/testing-the-atl-dhtml-control.md)  
 Viene illustrato come compilare e testare il progetto controllo DHTML iniziale.  
  
 [Modifica del un controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md)  
 Viene illustrato come aggiungere alcune funzionalità al controllo.  
  
 [Test del controllo DHTML ATL modificato](../atl/testing-the-modified-atl-dhtml-control.md)  
 Viene illustrato come compilare e testare la funzionalità aggiunta al controllo.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

