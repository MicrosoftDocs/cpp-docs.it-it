---
title: "Implementazione di un&#39;interfaccia (Visual C++) | Microsoft Docs"
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
  - "interfacce, implementazione"
ms.assetid: 72f8731b-7e36-45db-8b10-7ef211a773cd
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementazione di un&#39;interfaccia (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per implementare un'interfaccia, è necessario che il progetto sia stato creato come applicazione COM ATL o come applicazione MFC con supporto ATL.  È possibile utilizzare la [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL.  
  
 Per implementare un'interfaccia dopo aver creato il progetto, è innanzitutto necessario aggiungere un oggetto ATL.  Per un elenco delle procedure guidate per l'aggiunta di oggetti al progetto ATL, vedere [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).  
  
> [!NOTE]
>  Il supporto di finestre di dialogo ATL, servizi Web XLM che utilizzano ATL, oggetti prestazioni e contatori delle prestazioni non è disponibile.  
  
 Se si [aggiunge un controllo ATL](../atl/reference/adding-an-atl-control.md), è possibile specificare se implementare le interfacce predefinite, elencate nella schermata [Interfacce](../atl/reference/interfaces-atl-control-wizard.md) della procedura guidata e definite in atlcom.h.  
  
 Dopo aver aggiunto l'oggetto o il controllo, utilizzare l'Implementazione guidata interfaccia per implementare altre interfacce, che si trovano in qualsiasi libreria dei tipi disponibile.  
  
 Se aggiunge una nuova interfaccia, è necessario aggiungerla manualmente al file IDL del progetto.  Per ulteriori informazioni, vedere [Aggiunta di una nuova interfaccia a un progetto ATL](../atl/reference/adding-a-new-interface-in-an-atl-project.md).  
  
### Per implementare un'interfaccia  
  
1.  In Visualizzazione classi fare clic con il pulsante destro del mouse sul nome della classe per l'oggetto ATL.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Implementa interfaccia** per visualizzare l'[Implementazione guidata interfaccia](../ide/implement-interface-wizard.md).  
  
3.  Selezionare le interfacce da implementare dalle librerie dei tipi appropriate, quindi scegliere **Fine**.  
  
4.  In Visualizzazione classi espandere il nodo Basi e interfacce dell'oggetto per visualizzare l'interfaccia implementata, quindi espandere il nodo dell'interfaccia per vederne i metodi, le proprietà e gli eventi disponibili.  
  
    > [!NOTE]
    >  È anche possibile utilizzare il [Visualizzatore oggetti](http://msdn.microsoft.com/it-it/f89acfc5-1152-413d-9f56-3dc16e3f0470) per esaminare i membri dell'interfaccia.  
  
## Vedere anche  
 [Creazione di un'interfaccia COM](../ide/creating-a-com-interface-visual-cpp.md)   
 [Modifica di un'interfaccia COM](../ide/editing-a-com-interface.md)