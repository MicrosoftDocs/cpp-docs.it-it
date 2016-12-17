---
title: "Aggiunta di una nuova interfaccia in un progetto ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.interface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), aggiunta di interfacce"
  - "controlli [ATL], interfacce"
  - "Implementazione guidata interfaccia ATL"
  - "interfacce, aggiunta a oggetti ATL"
ms.assetid: 7d34b023-2c6b-4155-aca3-d47a40968063
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di una nuova interfaccia in un progetto ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si aggiunge un'interfaccia a un oggetto o a un controllo, si creano funzioni generate automaticamente per ciascun metodo dell'interfaccia.  In un oggetto o in un controllo, è possibile aggiungere solo le interfacce attualmente presenti in una libreria dei tipi esistente.  La classe in cui viene aggiunta l'interfaccia deve inoltre implementare la macro [BEGIN\_COM\_MAP](../Topic/BEGIN_COM_MAP.md) oppure, in caso di progetto con attributi, deve essere dotata dell'attributo `coclass`.  
  
 È possibile aggiungere una nuova interfaccia a un controllo in due diversi modi: manualmente o mediante una creazione guidata codice in Visualizzazione classi.  
  
### Per aggiungere un'interfaccia a un oggetto o controllo esistente mediante una creazione guidata codice in Visualizzazione classi  
  
1.  In [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nome di classe di un controllo.  Questo può corrispondere, ad esempio, a un controllo completo o composto oppure a qualsiasi classe di controlli che implementi una macro BEGIN\_COM\_MAP nel relativo file di intestazione.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida e quindi **Implementa interfaccia**.  
  
3.  Selezionare le interfacce da implementare nell'[Implementazione guidata interfaccia](../../ide/implement-interface-wizard.md).  Se l'interfaccia non è presente in una delle librerie dei tipi disponibili, effettuarne l'aggiunta manuale nel file IDL.  
  
### Per aggiungere manualmente una nuova interfaccia  
  
1.  Aggiungere la definizione della nuova interfaccia nel file IDL.  
  
2.  Derivare l'oggetto o il controllo dall'interfaccia.  
  
3.  Creare una nuova [COM\_INTERFACE\_ENTRY](../Topic/COM_INTERFACE_ENTRY%20\(ATL\).md) per l'interfaccia oppure, in caso di progetto con attributi, aggiungere l'attributo `coclass`.  
  
4.  Implementare i metodi nell'interfaccia.  
  
## Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto Visual C\+\+](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Configurazioni predefinite di progetti ATL](../../atl/reference/default-atl-project-configurations.md)