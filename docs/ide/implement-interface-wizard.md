---
title: "Implementazione guidata interfaccia | Microsoft Docs"
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
  - "vc.codewiz.impl.interface.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Implementazione guidata interfaccia [C++]"
ms.assetid: 947c329e-0815-4ca7-835e-c41dfeb75f9e
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementazione guidata interfaccia
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per implementare un'interfaccia per un oggetto COM.  Nelle librerie COM disponibili con Visual Studio e Windows sono incluse le implementazioni di molte interfacce.  L'implementazione di un'interfaccia viene associata a un oggetto quando si crea un'istanza di quest'ultimo e fornisce i servizi offerti dall'oggetto.  
  
 Per informazioni su interfacce e implementazioni, vedere [Interfaces and Interface Implementations](http://msdn.microsoft.com/library/windows/desktop/ms694356) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)] \(informazioni in lingua inglese\).  
  
 **Implementa interfaccia da**  
 Consente di specificare il percorso della libreria dei tipi, da cui viene creata l'interfaccia.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Project**|La libreria dei tipi fa parte del progetto.|  
|**Registro di sistema**|La libreria dei tipi è registrata nel sistema.  Le librerie dei tipi registrate sono elencate in **Librerie dei tipi disponibili**.|  
|**File**|La libreria dei tipi non è necessariamente registrata nel sistema, ma è contenuta in un file.  È necessario indicare il percorso del file nella casella **Percorso**.|  
  
 **Librerie dei tipi disponibili**  
 Consente di visualizzare le librerie dei tipi disponibili contenenti le definizioni delle interfacce che è possibile implementare.  Se si fa clic su **File** nella casella **Implementa interfaccia da**, la casella non potrà essere utilizzata per modifiche.  
  
 **Location**  
 Visualizza il percorso della libreria dei tipi attualmente selezionata nell'elenco **Librerie dei tipi disponibili**.  Se si è selezionato **File** in **Implementa interfaccia da**, fare clic sul pulsante con i puntini di sospensione per individuare un file contenente la libreria dei tipi da utilizzare.  
  
 **Interfacce**  
 Consente di visualizzare le interfacce le cui definizioni sono contenute nella libreria dei tipi attualmente selezionata nell'elenco **Librerie dei tipi disponibili**.  
  
> [!NOTE]
>  Le interfacce il cui nome corrisponde a quello delle interfacce già implementate dall'oggetto selezionato non vengono visualizzate nella casella **Interfacce**.  
  
|Pulsante di trasferimento|Descrizione|  
|-------------------------------|-----------------|  
|**\>**|Utilizzare questa opzione per aggiungere all'elenco **Implementa interfacce** il nome dell'interfaccia attualmente selezionata nell'elenco **Interfacce**.|  
|**\>\>**|Utilizzare questa opzione per aggiungere all'elenco **Implementa interfacce** i nomi di tutte le interfacce disponibili nell'elenco **Interfacce**.|  
|**\<**|Utilizzare questa opzione per rimuovere il nome dell'interfaccia attualmente selezionata nell'elenco **Implementa interfacce**.|  
|**\<\<**|Utilizzare questa opzione per rimuovere i nomi di tutte le interfacce attualmente elencate nell'elenco **Implementa interfacce**.|  
  
 **Implementa interfacce**  
 Consente di visualizzare i nomi delle interfacce selezionate per essere implementate nell'oggetto.  
  
> [!NOTE]
>  Se si includono più interfacce derivate da `IDispatch` o se si tenta di implementare un'interfaccia derivata da un'altra interfaccia già presente nella classe, è necessario evitare ambiguità nelle voci COM\_MAP.  Per ulteriori informazioni, vedere [COM\_INTERFACE\_ENTRY2](../Topic/COM_INTERFACE_ENTRY2.md).  
  
## Vedere anche  
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)