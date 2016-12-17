---
title: "Specifying Property Pages | Microsoft Docs"
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
  - "ISpecifyPropertyPages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISpecifyPropertyPages method"
  - "proprietà (pagine), specifica"
ms.assetid: ee8678cf-c708-49ab-b0ad-fc2db31f1ac3
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Specifying Property Pages
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea un controllo ActiveX, è spesso necessario associarla alle pagine delle proprietà che possono essere utilizzate per impostare le proprietà del controllo.  I contenitori di controlli utilizzano l'interfaccia **ISpecifyPropertyPages** per verificare che le pagine delle proprietà possono essere utilizzate per impostare le proprietà del controllo.  Sarà necessario implementare questa interfaccia nel controllo.  
  
 Per implementare **ISpecifyPropertyPages** utilizzando ATL, effettuare le operazioni seguenti:  
  
1.  Derivare la classe da [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md).  
  
2.  Aggiungere una voce per **ISpecifyPropertyPages** alla mappa COM della classe.  
  
3.  Aggiungere una voce [PROP\_PAGE](../Topic/PROP_PAGE.md) il mapping di proprietà per ogni pagina associata al controllo.  
  
> [!NOTE]
>  Nel generare un controllo standard utilizzando [La creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md), sarà sufficiente aggiungere le voci `PROP_PAGE` il mapping di proprietà.  La procedura guidata genera il codice necessario per gli altri passaggi.  
  
 I contenitori ben progettati visualizzare le pagine delle proprietà specificate nello stesso ordine delle voci `PROP_PAGE` il mapping di proprietà.  In genere, è necessario inserire le voci standard della pagina delle proprietà dopo le voci per le pagine personalizzate nel mapping di proprietà, in modo che gli utenti visualizzano le pagine specifiche del controllo prima.  
  
## Esempio  
 La classe seguente per un controllo calendar utilizza l'interfaccia **ISpecifyPropertyPages** per indicare a contenitori che le proprietà possono essere impostate utilizzando una pagina di oggetto personalizzato e della pagina predefinita di colore.  
  
 [!code-cpp[NVC_ATL_Windowing#72](../atl/codesnippet/CPP/specifying-property-pages_1.h)]  
  
## Vedere anche  
 [Pagine delle proprietà](../atl/atl-com-property-pages.md)   
 [Esempio ATLPages](../top/visual-cpp-samples.md)