---
title: "Implementing a Dual Interface | Microsoft Docs"
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
  - "interfacce duali, implementazione"
  - "IDispatchImpl (classe), implementing dual interfaces"
ms.assetid: d1da3633-b445-4dcd-8a0a-3efdafada3ea
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Implementing a Dual Interface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile implementare un'interfaccia duale utilizzando la classe [IDispatchImpl](../atl/reference/idispatchimpl-class.md), che fornisce un'implementazione predefinita dei metodi `IDispatch` in un'interfaccia duale.  Per ulteriori informazioni, vedere [Implementing the IDispatch Interface](http://msdn.microsoft.com/it-it/0e171f7f-0022-4e9b-ac8e-98192828e945).  
  
 Per utilizzare questa classe:  
  
-   Definire l'interfaccia duale in una libreria dei tipi.  
  
-   Derivare la classe da una specializzazione `IDispatchImpl` \(informazioni sulla sessione sull'interfaccia e la libreria dei tipi come argomenti di modello\).  
  
-   Aggiungere una voce o le voci\) alla mappa COM per esporre l'interfaccia duale con `QueryInterface`.  
  
-   Implementare la parte vtable dell'interfaccia della classe.  
  
-   Assicurarsi che la libreria dei tipi contenente la definizione di interfaccia è disponibile agli oggetti in fase di esecuzione.  
  
## Creazione guidata oggetto semplice ATL  
 Per creare una nuova interfaccia e una nuova classe per distribuirlo, è possibile utilizzare [ATL aggiunge la finestra di dialogo della classe](../ide/add-class-dialog-box.md)quindi [Procedura guidata semplice ATL](../atl/reference/atl-simple-object-wizard.md).  
  
## Procedura guidata di interfaccia di utilizzo  
 Se si dispone di un'interfaccia esistente, è possibile utilizzare [Procedura guidata di interfaccia di utilizzo](../atl/reference/adding-a-new-interface-in-an-atl-project.md) per aggiungere la classe di base necessarie, le voci della mappa COM e le implementazioni di base di un metodo in una classe esistente.  
  
> [!NOTE]
>  Potrebbe essere necessario modificare la classe di base generata in modo da passare ai numeri di versione principale e secondaria della libreria dei tipi come argomenti di modello alla classe di base `IDispatchImpl`.  La procedura guidata di interfaccia di utilizzo non controlla il numero di versione della libreria dei tipi automaticamente.  
  
## Implementare IDispatch  
 È possibile utilizzare una classe base `IDispatchImpl` per fornire un'implementazione di un'interfaccia solo dispatch specificando la voce appropriata nella mappa COM utilizzando la macro [COM\_INTERFACE\_ENTRY\_IID](../Topic/COM_INTERFACE_ENTRY_IID.md) o [COM\_INTERFACE\_ENTRY2](../Topic/COM_INTERFACE_ENTRY2.md) \) purché una libreria dei tipi che descrive un'interfaccia duale corrispondente.  È piuttosto comune da implementare l'interfaccia `IDispatch` questa modalità, ad esempio.  La procedura guidata e il centro semplice ATL collegano la procedura guidata che entrambe si presuppone che si intende distribuire `IDispatch` in questo modo, pertanto aggiunti la voce appropriata al mapping.  
  
> [!NOTE]
>  ATL fornisce le classi [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) e [IDispEventImpl](../atl/reference/idispeventimpl-class.md) per implementare interfacce dispatch senza richiedere una libreria dei tipi contenente la definizione di un'interfaccia duale compatibile.  
  
## Vedere anche  
 [Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)