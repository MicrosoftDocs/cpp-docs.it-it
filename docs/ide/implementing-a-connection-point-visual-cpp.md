---
title: "Implementazione di un punto di connessione (Visual C++) | Microsoft Docs"
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
  - "punti di connessione [C++], implementazione"
  - "Implementazione guidata punto di connessione [C++]"
ms.assetid: 5b37e4f9-73c9-4bef-b26d-365bc0662260
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementazione di un punto di connessione (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per implementare un punto di connessione mediante l'Implementazione guidata punto di connessione, è necessario che il progetto sia stato creato come applicazione COM ATL o come applicazione MFC con supporto ATL.  È possibile utilizzare la [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL.  
  
> [!NOTE]
>  Per informazioni sull'implementazione dei punti di connessione per un progetto MFC, vedere [Punti di connessione](../mfc/connection-points.md).  
  
 Per implementare un punto di connessione dopo aver creato il progetto, è innanzitutto necessario aggiungere un oggetto ATL.  Per un elenco delle procedure guidate per l'aggiunta di oggetti al progetto ATL, vedere [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).  
  
> [!NOTE]
>  Il supporto di finestre di dialogo ATL, servizi Web server XML creato da ATL Server, oggetti prestazioni e contatori delle prestazioni non è disponibile.  
  
 Un oggetto collegabile, ovvero un'origine, può esporre un punto di connessione per ognuna delle interfacce in uscita.  Ciascuna interfaccia può essere implementata da un client in un oggetto, ovvero un sink.  Per ulteriori informazioni, vedere [Punti di connessione ATL](../atl/atl-connection-points.md).  
  
### Per implementare un punto di connessione  
  
1.  In Visualizzazione classi fare clic con il pulsante destro del mouse sul nome della classe per l'oggetto ATL.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi punto di connessione** per visualizzare l'[Implementazione guidata punto di connessione](../ide/implement-connection-point-wizard.md).  
  
3.  Selezionare le interfacce dei punti di connessione da implementare dalle librerie dei tipi appropriate, quindi scegliere **Fine**.  
  
4.  In Visualizzazione classi esaminare le classi proxy create per ciascun punto di connessione.  Le classi vengono visualizzate come CProxy*NomeInterfaccia*\<T\> e derivano da [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md).  
  
5.  Fare doppio clic sulla classe del punto di connessione per visualizzarne la definizione.  
  
    -   Se si implementa un punto di connessione per l'interfaccia del progetto, viene visualizzata la seguente definizione:  
  
        ```  
        template< class T >  
        class CProxyInterfaceName :  
           public IConnectionPointImpl< T, &IID_InterfaceName >  
        {  
        public:  
        };  
        ```  
  
         Se si implementa un'interfaccia locale, le proprietà e i metodi vengono visualizzati nel codice della classe.  
  
    -   Se si implementa un punto di connessione per un'altra interfaccia, la definizione include i metodi dell'interfaccia, ciascuno preceduto da `Fire_`.  
  
## Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Adding Connection Points to an Object](../atl/adding-connection-points-to-an-object.md)