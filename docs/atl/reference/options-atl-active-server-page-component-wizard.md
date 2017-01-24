---
title: "Opzioni, Creazione guidata componente ASP ATL | Microsoft Docs"
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
  - "vc.codewiz.class.atl.asp.options"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata componente ASP ATL, opzioni"
ms.assetid: 54f34e26-53c7-4456-9675-cb86e356bde0
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Opzioni, Creazione guidata componente ASP ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa schermata della Creazione guidata componente ASP ATL per incrementare il livello di efficienza e di supporto in caso di errore dell'oggetto.  
  
 Per ulteriori informazioni sui progetti ATL e sulle classi COM ATL, vedere [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).  
  
 **Modello di threading**  
 Consente di specificare il metodo per la gestione dei thread.  Per impostazione predefinita, il progetto utilizza il threading **Apartment**.  
  
 Per ulteriori informazioni, vedere [Specifica del modello di threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md).  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|`Single`|Utilizzare questa opzione per specificare che l'oggetto utilizza il modello di threading singolo,  in cui un oggetto viene sempre eseguito nel thread COM principale.  Per ulteriori informazioni, vedere [Apartment a thread singolo](http://msdn.microsoft.com/library/windows/desktop/ms680112) e [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390).|  
|**Apartment**|Utilizzare questa opzione per specificare che l'oggetto utilizza il modello di threading Apartment,  equivalente a un apartment a thread singolo.  A ciascun oggetto di un componente con threading Apartment viene assegnato un apartment per il relativo thread per il ciclo di vita dell'oggetto. È tuttavia possibile utilizzare più thread per più oggetti.  Ciascun apartment è associato a uno specifico thread e dispone di un message pump di Windows \(predefinito\).<br /><br /> Per ulteriori informazioni, vedere [Apartment a thread singolo](http://msdn.microsoft.com/library/windows/desktop/ms680112).|  
|**Entrambe le dimensioni**|Utilizzare questa opzione per specificare che l'oggetto può utilizzare il modello di threading Apartment o Free, a seconda del tipo di thread da cui viene creato.|  
|**Free**|Utilizzare questa opzione per specificare che l'oggetto utilizza il modello di threading Free,  equivalente a un modello di apartment con multithreading.  Per ulteriori informazioni, vedere [Apartment con multithreading](http://msdn.microsoft.com/library/windows/desktop/ms693421).|  
|**Neutro** \(solo Windows 2000\).|Utilizzare questa opzione per specificare che l'oggetto esegue le operazioni previste per gli apartment con multithreading, ma può essere eseguito su qualsiasi tipo di thread.|  
  
 **Aggregazione**  
 Consente di specificare se l'oggetto utilizza l'[aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558).  Le interfacce da esporre ai client vengono scelte dall'oggetto e vengono esposte come se fossero state implementate da tale oggetto.  I client dell'oggetto di aggregazione comunicano solo con l'oggetto stesso.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Sì**|Utilizzare questa opzione per specificare che l'oggetto può essere aggregato.  Valore predefinito.|  
|**No**|Utilizzare questa opzione per specificare che l'oggetto non è aggregato.|  
|**Solo**|Utilizzare questa opzione per specificare che l'oggetto deve essere aggregato.|  
  
 **Supporto**  
 Descrizione dell'elemento da aggiungere.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**ISupportErrorInfo**|Utilizzare questa opzione per creare il supporto per l'interfaccia [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) in modo che l'oggetto possa restituire le informazioni sugli errori al client.|  
|**Punti di connessione**|Utilizzare questa opzione per attivare i punti di connessione per l'oggetto mediante la derivazione della classe dell'oggetto da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|  
|**Gestore del marshalling con modello di threading Free**|Utilizzare questa opzione per creare un gestore del marshalling con modello di threading Free in grado di effettuare il marshalling dei puntatori a interfaccia in modo efficiente tra i thread dello stesso processo.  È disponibile per gli oggetti con modello di threading **Both** o **Free**.|  
  
## Vedere anche  
 [Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)   
 [ATL Active Server Page Component](../../atl/reference/adding-an-atl-active-server-page-component.md)