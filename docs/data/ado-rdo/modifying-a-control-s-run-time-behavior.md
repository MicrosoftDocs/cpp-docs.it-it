---
title: "Modifica del comportamento di un controllo in fase di esecuzione | Microsoft Docs"
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
  - "ActiveX (controlli) [C++], comportamento di runtime"
ms.assetid: 78b44b0f-0d5a-4da0-8aa2-595f5789c634
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifica del comportamento di un controllo in fase di esecuzione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Dopo aver [inserito un controllo](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md) e generato una o più [classi wrapper](../../data/ado-rdo/wrapper-classes.md), è possibile richiamare i metodi di controllo e programmare i gestori eventi del controllo.  
  
 Le [classi wrapper](../../data/ado-rdo/wrapper-classes.md) del controllo specificano le funzioni usate per modificare il comportamento di runtime del controllo. Includere il file di intestazione della classe wrapper appropriata e usare i metodi. Per impostare una proprietà, cercare un metodo della funzione di accesso con il nome della proprietà preceduto dal prefisso Set. Per richiamare una proprietà, cercare un metodo della funzione di accesso con il nome della proprietà preceduto dal prefisso Get. È possibile scrivere i gestori eventi in un momento successivo.  
  
 I controlli vengono implementati con l'automazione, i tipi passati possono essere solo tipi con supporto dell'automazione, quali BSTR e VARIANT. Nonostante sia possibile usare chiamate di sistema per allocare e impostare tipi BSTR e VARIANT, talvolta è opportuno usare le classi wrapper ATL \([CComBSTR](../../atl/reference/ccombstr-class.md), [CComVariant](../../atl/reference/ccomvariant-class.md)\), le classi wrapper con supporto del compilatore COM di Visual C\+\+ \([\_bstr\_t](../../cpp/bstr-t-class.md), [\_variant\_t](../../cpp/variant-t-class.md)\) o la classe wrapper MFC \([COleVariant](../../mfc/reference/colevariant-class.md)\).  
  
 Se si aggiunge un controllo dati, l'inserimento guidato controllo ActiveX genererà le classi wrapper per le coclassi che gestiscono gli oggetti dati interni del controllo dati. Queste classi non includono tutte le caratteristiche di RDO o ADO, ma rappresentano oggetti interni dichiarati nella libreria dei tipi.  
  
 Se si vogliono usare direttamente ADO e RDO, eseguire una connessione diretta alle DLL di ADO o RDO \(Msado15.dll o Msrdo20.dll\), con le [classi per il supporto COM fornite dal compilatore](../../cpp/compiler-com-support-classes.md), con la [direttiva \#import](../../preprocessor/preprocessor-directives.md) o con il rispettivo SDK.  
  
## Per impostare le proprietà dei controlli in fase di esecuzione  
 Si noti che alcune proprietà di un controllo ActiveX possono essere di sola lettura in fase di esecuzione e rendere quindi difficile la creazione dinamica. È possibile simulare temporaneamente la modalità progettazione per l'inizializzazione della proprietà eseguendo l'override del gestore [OnAmbientPropertyChange](../Topic/COleControl::OnAmbientPropertyChange.md)del contenitore del controllo, come vedere l'articolo della Knowledge Base "Procedura: Impostazione delle proprietà della fase di progettazione del controllo ActiveX in fase di esecuzione \(Q260744\)". Gli articoli della Knowledge Base sono disponibili all'indirizzo [http:\/\/support.microsoft.com\/](http://support.microsoft.com/).  
  
## Vedere anche  
 [Utilizzo dei controlli ActiveX](../../data/ado-rdo/using-activex-controls.md)