---
title: "Supporting IDispEventImpl | Microsoft Docs"
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
  - "IDispEventImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, IDispEventImpl support in COM objects"
  - "BEGIN_SINK_MAP macro"
  - "event sink maps, dichiarazione"
  - "IDispEventImpl class, advising and unadvising"
  - "IDispEventImpl class, dichiarazione"
  - "SINK_ENTRY macro"
  - "librerie dei tipi, importazione"
ms.assetid: b957f930-6a5b-4598-8e4d-8027759957e7
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporting IDispEventImpl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello [IDispEventImpl](../atl/reference/idispeventimpl-class.md) può essere utilizzata per fornire il supporto per i sink di punti di connessione nella classe ATL.  Un sink di punti di connessione modo la classe per gestire gli eventi generati da oggetti COM esterni.  Questi sink di punti di connessione sono mappati a una mappa del sink di eventi, indipendentemente dalla classe.  
  
 Per distribuire correttamente un sink del punto di connessione per la classe, i passaggi seguenti devono essere completate:  
  
-   Importare le librerie dei tipi per ogni oggetto esterno  
  
-   Dichiarare le interfacce `IDispEventImpl`  
  
-   Dichiarare una mappa del sink di eventi  
  
-   Consigli e unadvise i punti di connessione  
  
 I passaggi nell'implementare un sink un punto di connessione vengono eseguiti solo modificando il file di intestazione \(h\) della classe.  
  
## Importare le librerie dei tipi  
 Per ogni oggetto esterno dell'evento che si desidera gestire, è necessario importare la libreria dei tipi.  Questo passaggio consente di definire gli eventi che possono essere gestiti e fornisce le informazioni utilizzate quando si dichiara la mappa del sink di eventi.  La direttiva [\#import](../preprocessor/hash-import-directive-cpp.md) può essere utilizzata per tale scopo.  Aggiungere le righe direttive necessarie `#import` per ogni interfaccia dispatch che supporterete al file di intestazione \(h\) della classe.  
  
 Nell'esempio seguente viene importata la libreria dei tipi del server COM esterni \(`MSCAL.Calendar.7`\):  
  
 [!code-cpp[NVC_ATL_Windowing#141](../atl/codesnippet/CPP/supporting-idispeventimpl_1.h)]  
  
> [!NOTE]
>  È necessario avere un'istruzione distinta `#import` per ciascuna libreria dei tipi che esterna supporterete.  
  
## Dichiarazione delle interfacce di IDispEventImpl  
 Dopo avere importato le librerie dei tipi di ogni interfaccia dispatch, è necessario dichiarare le interfacce distinte `IDispEventImpl` per ogni interfaccia dispatch esterna.  Modificare la dichiarazione della classe aggiungendo una dichiarazione di interfaccia `IDispEventImpl` per ogni oggetto esterno.  Per ulteriori informazioni sui parametri, vedere [IDispEventImpl](../atl/reference/idispeventimpl-class.md).  
  
 Il seguente codice dichiara due sink di punti di connessione, per l'interfaccia `DCalendarEvents`, sull'oggetto COM implementato dalla classe `CMyCompositCtrl2`:  
  
 [!code-cpp[NVC_ATL_Windowing#142](../atl/codesnippet/CPP/supporting-idispeventimpl_2.h)]  
  
## Dichiarazione di mappa del sink di eventi  
 Affinché le notifiche di eventi da gestire la funzione appropriata, la classe deve soddisfare ogni evento al gestore corretto.  Questo risultato si ottiene dichiarando una mappa del sink di eventi.  
  
 ATL fornisce diverse macro, [BEGIN\_SINK\_MAP](../Topic/BEGIN_SINK_MAP.md), [END\_SINK\_MAP](../Topic/END_SINK_MAP.md)e [SINK\_ENTRY\_EX](../Topic/SINK_ENTRY.md), rendendo questo mapping più semplice.  Il formato standard è la seguente:  
  
 `BEGIN_SINK_MAP(comClass)`  
  
 `SINK_ENTRY_EX(id, iid, dispid, func)`  
  
 `.  .  .  //additional external event entries`  
  
 `END_SINK_MAP()`  
  
 Nell'esempio seguente viene dichiarata una mappa del sink di eventi con due gestori eventi:  
  
 [!code-cpp[NVC_ATL_Windowing#136](../atl/codesnippet/CPP/supporting-idispeventimpl_3.h)]  
  
 l'implementazione è quasi completa.  L'ultimo passaggio su e consigliare unadvising delle interfacce esterne.  
  
## Consigliare e Unadvising le interfacce di IDispEventImpl  
 Il passaggio finale consiste di implementare un metodo che consiglierà \(o\) unadvise tutti i punti di connessione in momenti appropriati.  Si consiglia che deve essere eseguita prima di comunicazione tra client esterni e l'oggetto può aver luogo.  Prima dell'oggetto diventa visibile, ogni interfaccia dispatch esterna supportate dall'oggetto viene eseguita una query per le interfacce in uscita.  Una connessione viene stabilita e un riferimento all'interfaccia in uscita viene utilizzato per gestire gli eventi generati dall'oggetto.  Questa procedura è denominato "ha".  
  
 Dopo che l'oggetto viene completato con le interfacce esterne, le interfacce in uscita devono essere passate che non sono più utilizzati dalla classe.  Questo processo viene denominato "unadvising".  
  
 A causa della natura univoca di oggetti COM, questa procedura varia, e in esecuzione, tra implementazioni.  Questi dettagli nell'ambito di questo argomento e non vengono risolti.  
  
## Vedere anche  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)