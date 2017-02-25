---
title: "Implementazione guidata punto di connessione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.impl.cp.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Implementazione guidata punto di connessione [C++]"
ms.assetid: c117f6c6-30f0-4adb-82b4-b1f34e0f0fa8
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Implementazione guidata punto di connessione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per implementare un punto di connessione per un oggetto COM.  Un oggetto collegabile, ovvero un'origine, può esporre un punto di connessione per le proprie interfacce o per qualsiasi interfaccia in uscita.  Visual C\+\+ e Windows forniscono librerie dei tipi con interfacce in uscita.  Ciascuna interfaccia può essere implementata da un client in un oggetto, ovvero un sink.  
  
 Per ulteriori informazioni, vedere [Punti di connessione ATL](../atl/atl-connection-points.md).  
  
 **Librerie dei tipi disponibili**  
 Consente di visualizzare le librerie dei tipi disponibili contenenti le definizioni delle interfacce per le quali è possibile implementare punti di connessione.  Fare clic sul pulsante con i puntini di sospensione per individuare un file contenente la libreria dei tipi da utilizzare.  
  
 **Location**  
 Visualizza il percorso della libreria dei tipi attualmente selezionata nell'elenco **Librerie dei tipi disponibili**.  
  
 **Interfacce**  
 Consente di visualizzare le interfacce le cui definizioni sono contenute nella libreria dei tipi attualmente selezionata nell'elenco **Librerie dei tipi disponibili**.  
  
|Pulsante di trasferimento|Descrizione|  
|-------------------------------|-----------------|  
|**\>**|Consente di aggiungere all'elenco **Implementa punti di connessione** il nome dell'interfaccia attualmente selezionata nell'elenco **Interfacce di origine**.|  
|**\>\>**|Consente di aggiungere all'elenco **Implementa punti di connessione** i nomi di tutte le interfacce disponibili nell'elenco **Interfacce di origine**.|  
|**\<**|Consente di rimuovere il nome dell'interfaccia attualmente selezionata nell'elenco **Implementa punti di connessione**.|  
|**\<\<**|Consente di rimuovere i nomi di tutte le interfacce attualmente elencate nell'elenco **Implementa punti di connessione**.|  
  
 **Implementa punti di connessione**  
 Consente di visualizzare i nomi delle interfacce per le quali vengono implementati i punti di connessione quando si sceglie **Fine**.  
  
## Vedere anche  
 [Implementazione di un punto di connessione](../ide/implementing-a-connection-point-visual-cpp.md)