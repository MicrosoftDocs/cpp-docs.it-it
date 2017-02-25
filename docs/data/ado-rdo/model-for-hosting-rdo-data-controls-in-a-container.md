---
title: "Modello per l&#39;inserimento di controlli dati RDO in un contenitore | Microsoft Docs"
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
  - "RDO RemoteData (controllo), modello hosting"
  - "RemoteData (controllo), modello hosting"
ms.assetid: ca598bac-9fef-40e6-b6cd-03d817e16b2e
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Modello per l&#39;inserimento di controlli dati RDO in un contenitore
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'inserimento di un controllo dati RDO in un contenitore avviene con le seguenti modalità:  
  
-   Il contenitore ottiene un'interfaccia IVBDSC dal controllo dati.  Se non è possibile trovare IVBDSC, non si tratta di un controllo dati.  
  
-   Il contenitore ottiene le interfacce **ICursor** dal controllo dati.  Queste interfacce forniscono un oggetto cursore che può essere manipolato da un client.  
  
-   Il contenitore esegue l'associazione all'interfaccia **INotifyDBEvents** del controllo dati.  Questa interfaccia consente al contenitore di ricevere notifiche dal controllo dati.  A questo scopo è opportuno che il contenitore supporti l'interfaccia **INotifyDBEventsSink**.  
  
 L'inserimento di un controllo RDO associato a dati in un contenitore avviene con le seguenti modalità:  
  
-   Il controllo supporta l'interfaccia **IBoundObject** e il contenitore supporta l'interfaccia **IBoundObjectSite**.  Il controllo ottiene l'interfaccia **IBoundObjectSite** del contenitore e il contenitore ottiene l'interfaccia **IBoundObject** dal controllo.  
  
-   Il controllo supporta l'interfaccia **IPropNotifySink** ed esegue l'associazione al contenitore.  In questo modo il contenitore è in grado di ricevere notifiche dal controllo.  
  
-   Se il controllo supporta **INotifyDBEventsSink**, potrà ricevere notifiche da un controllo dati RDO dopo la connessione all'interfaccia **INotifyDBEvents** del controllo dati.  
  
-   Il controllo potrà quindi ricevere oggetti cursore dal controllo dati, direttamente o tramite il contenitore.  Sarà quindi possibile manipolare e scorrere i cursori.  L'associazione del controllo RDO associato a dati a questo punto è completa.  
  
## Vedere anche  
 [Associazione dati RDO](../../data/ado-rdo/rdo-databinding.md)   
 [Utilizzo dell'associazione dati RDO in Visual C\+\+](../../data/ado-rdo/using-rdo-databinding-in-visual-cpp.md)