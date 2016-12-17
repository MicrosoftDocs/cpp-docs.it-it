---
title: "Trascinamento (OLE) | Microsoft Docs"
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
  - "trascinamento della selezione [C++]"
  - "trascinamento della selezione [C++], informazioni sul trascinamento della selezione OLE"
  - "supporto del trascinamento della selezione in File Manager"
  - "OLE (applicazioni), trascinamento della selezione"
  - "trascinamento della selezione OLE"
  - "applicazioni server OLE, trascinamento della selezione"
ms.assetid: a4595350-ca06-4400-88a1-f0175c76b77b
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trascinamento (OLE)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La funzionalità di trascinamento della selezione OLE è principalmente un collegamento per la copia e incolla dei dati.  Quando si utilizzano gli Appunti per copiare i dati o incolla, una serie di passaggi richiesti.  Si selezionano i dati, fare clic su **Taglia** o **Copia** dal menu di **Modifica**, da passare al file di destinazione, dalla finestra o dall'applicazione, posizionare il cursore nella posizione desiderata e scegliere **Incolla** dal menu di **Modifica**.  
  
 Il trascinamento della selezione OLE è differente dal meccanismo di trascinamento della selezione del File Manager, che può gestire solo i nomi di file ed è specificamente progettato per passare i nomi di file a un'applicazione.  Il trascinamento della selezione OLE è molto più generali.  Consente di trascinare e si rilasciano tutti i dati che possono essere inseriti negli Appunti.  
  
 Quando si utilizza il trascinamento e il calo OLE, rimuovere due passaggi dal processo.  Si selezionano i dati dalla finestra di origine \("l'origine di trascinamento"\), trascinarlo nella destinazione desiderata \("la destinazione di rilascio"\) e rilasciando la si rilascia il pulsante del mouse.  L'operazione elimina la necessità dei menu e risulta più rapida della sequenza copia e incolla.  L'unico requisito è che sia l'origine di trascinamento che la destinazione di rilascio è necessario aprire e almeno parzialmente visibili sullo schermo.  
  
 Mediante trascinamento della selezione OLE, i dati possono essere spostati da un percorso a un altro all'interno di un documento, tra i documenti diverso, o tra le applicazioni.  Può essere implementato in un contenitore o in un'applicazione server e ciascuna applicazione può essere un'origine di trascinamento, una destinazione di rilascio, oppure entrambe.  Se un'applicazione non sia l'origine di trascinamento che supporto della destinazione di rilascio implementati, trascinare e il calo è abilitato tra le finestre figlio, o in una finestra.  Questa funzionalità può rendere l'applicazione più facile da utilizzare.  
  
 Se si desidera unicamente utilizzare le funzionalità di trascinamento della selezione OLE, vedere [Trascinamento della selezione: Personalizzazione](../mfc/drag-and-drop-customizing.md).  È possibile utilizzare le tecniche descritte nell'articolo per definire le origini di rilascio di applicazioni non OLE.  L'articolo [Trascinamento della selezione: Implementare una destinazione di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md) viene descritto come implementare il supporto della destinazione di trascinamento sia alle applicazioni di non OLE che OLE.  Verrà inoltre utile esaminare gli esempi [OCLIENT](../top/visual-cpp-samples.md) e [HIERSVR](../top/visual-cpp-samples.md) oLE MFC.  
  
 Se non vengono letti la famiglia di [Oggetti dati e origini dati \(OLE\)](../mfc/data-objects-and-data-sources-ole.md) di notizie, è possibile farlo ora.  Questi articoli illustrati i concetti fondamentali di trasferimento dei dati e di implementarla nelle applicazioni.  
  
 Per ulteriori informazioni su trascinamento e su elimina, vedere:  
  
-   [Trascinamento della selezione: Implementazione di origine di trascinamento](../mfc/drag-and-drop-implementing-a-drop-source.md)  
  
-   [Trascinamento della selezione: Implementare una destinazione di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md)  
  
-   [Trascinamento della selezione: Personalizzazione](../mfc/drag-and-drop-customizing.md)  
  
## Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Oggetti dati e origini dati \(OLE\)](../mfc/data-objects-and-data-sources-ole.md)