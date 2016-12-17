---
title: "Pagine delle propriet&#224; COM ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "ATL COM (oggetti)"
  - "pagine delle proprietà (ATL)"
  - "oggetti COM, ATL"
  - "pagine delle proprietà (COM)"
  - "proprietà (pagine), ATL"
  - "proprietà (pagine), COM"
ms.assetid: 663c7caa-2e5e-4b5c-b8ea-fd434ceb1654
caps.latest.revision: 13
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Pagine delle propriet&#224; COM ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le pagine delle proprietà COM fornisce un'interfaccia utente per impostare le proprietà \(o chiamare metodi\) di uno o più oggetti COM.  Le pagine delle proprietà vengono utilizzati ampiamente da controlli ActiveX per fornire interfacce utente avanzate che consentono le proprietà del controllo da impostare in fase di progettazione.  
  
 Le pagine delle proprietà sono oggetti COM che implementano l'interfaccia [IPropertyPage2](http://msdn.microsoft.com/library/windows/desktop/ms683996) o [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246).  Queste interfacce forniscono metodi che consentono la pagina da associare a `site` \(un oggetto COM che rappresenta il contenitore della pagina\) e una serie *oggetti* \(COM di cui metodi verranno chiamati in risposta alle modifiche apportate dall'utente della pagina delle proprietà.  Il contenitore della pagina delle proprietà è responsabile dei metodi dell'interfaccia della pagina delle proprietà nella pagina per visualizzare o nascondere la relativa interfaccia utente e per applicare le modifiche apportate dall'utente agli oggetti sottostanti.  
  
 Ogni pagina delle proprietà può essere compilata completamente indipendentemente dagli oggetti di cui è possibile impostare le proprietà.  Qualsiasi di una pagina delle proprietà richiedono è di comprendere una particolare interfaccia \(o set di interfacce\) e di fornire un'interfaccia utente per chiamare metodi dell'interfaccia.  
  
 Per ulteriori informazioni, vedere [Finestre e le pagine delle proprietà](http://msdn.microsoft.com/library/windows/desktop/ms686577) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Argomenti della sezione  
 [Specificare le pagine delle proprietà](../atl/specifying-property-pages.md)  
 Elenca le operazioni necessarie per specificare le pagine delle proprietà per il controllo e viene illustrata una classe di esempio.  
  
 [Implementare le pagine delle proprietà](../atl/implementing-property-pages.md)  
 Elenca i passaggi per implementare le pagine delle proprietà, compresi i metodi per eseguire l'override di.  Vengono fornite con un esempio completo basato sul programma di esempio ATLPages.  
  
## Sezioni correlate  
 [Esempio ATLPages](../top/visual-cpp-samples.md)  
 La separazione di esempio peresempio ATLPages, che implementa una pagina delle proprietà mediante `IPropertyPageImpl`.  
  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Vengono forniti collegamenti ad argomenti concettuali sulla programmazione mediante Active Template Library.  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)