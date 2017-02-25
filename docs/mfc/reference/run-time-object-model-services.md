---
title: "Servizi modelli a oggetti runtime | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro servizi modelli a oggetti in fase di esecuzione"
ms.assetid: 4a3e79df-2ee3-43a4-8193-20298828de85
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Servizi modelli a oggetti runtime
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le classi [CObject](../../mfc/reference/cobject-class.md) e [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) incapsulano molti servizi dell'oggetto, incluso l'accesso alle informazioni sulla classe di runtime, per la serializzazione e la creazione di un oggetto dinamica.  Tutte le classi derivate da `CObject` ereditano questa funzionalità.  
  
 Per accedere alle informazioni sulla classe di runtime consente di individuare informazioni su una classe dell'oggetto in fase di esecuzione.  La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando è necessario controllare di tipo aggiuntivo argomenti della funzione e quando è necessario scrivere codice specifico in base alla classe di oggetto.  Le informazioni sulla classe di runtime non è supportato direttamente dal linguaggio C\+\+.  
  
 La serializzazione è il processo di scrittura o lettura del contenuto di un oggetto o da un file.  È possibile utilizzare la serializzazione per archiviare il contenuto di un oggetto anche al termine dell'applicazione.  L'oggetto può essere letto dal file quando l'applicazione viene riavviata.  Tali oggetti dati sarà "persistenti."  
  
 La creazione di un oggetto dinamico consente di creare un oggetto di una classe specificata in fase di esecuzione.  Ad esempio, il documento, la visualizzazione e oggetti di frame devono supportare la creazione dinamica in quanto il framework necessario crearle dinamicamente.  
  
 Nella tabella seguente sono elencate le macro MFC che supportano le informazioni sulla classe di runtime, la serializzazione e la creazione dinamica.  
  
 Per ulteriori informazioni su questi servizi di runtime e la serializzazione di oggetti, vedere l'articolo [Classe da CObject: Accedere a informazioni sulla classe di runtime](../../mfc/accessing-run-time-class-information.md).  
  
### Il modello a oggetti di runtime elabora le macro  
  
|||  
|-|-|  
|[DECLARE\_DYNAMIC](../Topic/DECLARE_DYNAMIC.md)|Consente l'accesso alle informazioni sulla classe di runtime \(deve essere utilizzato nella dichiarazione di classe\).|  
|[DECLARE\_DYNCREATE](../Topic/DECLARE_DYNCREATE.md)|Consente la creazione e l'accesso dinamici alle informazioni sulla classe di runtime \(deve essere utilizzato nella dichiarazione di classe\).|  
|[DECLARE\_SERIAL](../Topic/DECLARE_SERIAL.md)|Abilita la serializzazione e l'accesso alle informazioni sulla classe di runtime \(deve essere utilizzato nella dichiarazione di classe\).|  
|[IMPLEMENT\_DYNAMIC](../Topic/IMPLEMENT_DYNAMIC.md)|Consente l'accesso alle informazioni sulla classe di runtime \(che sarà utilizzato nell'implementazione della classe.|  
|[IMPLEMENT\_DYNCREATE](../Topic/IMPLEMENT_DYNCREATE.md)|Consente la creazione e l'accesso dinamici a informazioni di runtime \(che sarà utilizzato nell'implementazione della classe.|  
|[IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md)|Consentiti serializzazione e accedere alle informazioni sulla classe di runtime \(che sarà utilizzato nell'implementazione della classe.|  
|[RUNTIME\_CLASS](../Topic/RUNTIME_CLASS.md)|Restituisce la struttura di `CRuntimeClass` corrispondente alla classe denominata.|  
  
 OLE richiede spesso la creazione dinamica di oggetti in fase di esecuzione.  Ad esempio, un'applicazione server OLE deve essere in grado di creare dinamicamente gli elementi OLE in risposta a una richiesta da un client.  Analogamente, un server di automazione deve essere in grado di creare elementi in risposta alle richieste dei client di automazione.  
  
 La libreria MFC fornisce due macro specifiche OLE.  
  
### Creazione dinamica di oggetti OLE  
  
|||  
|-|-|  
|[DECLARE\_OLECREATE](../Topic/DECLARE_OLECREATE.md)|Abilita gli oggetti da creare con automazione OLE.|  
|[IMPLEMENT\_OLECREATE](../Topic/IMPLEMENT_OLECREATE.md)|Abilita gli oggetti da creare dal sistema OLE.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)