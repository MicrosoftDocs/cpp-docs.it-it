---
title: "Understanding Window Traits | Microsoft Docs"
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
  - "window traits"
ms.assetid: c90cf850-9e91-49da-9cf3-ad4efb30347d
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Understanding Window Traits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi di tratti della finestra forniscono un metodo semplice per la standardizzazione degli stili utilizzati per la creazione di un oggetto window ATL.  I tratti la finestra sono accettati come parametri di modello [CWindowImpl](../atl/reference/cwindowimpl-class.md) e altre classi di finestre ATL come modalità di creazione di stili predefiniti della finestra a livello di classe.  
  
 Se l'autore di un'istanza della finestra non fornisce gli stili in modo esplicito nella chiamata a [Crea](../Topic/CWindowImpl::Create.md), è possibile utilizzare una classe di tratti per assicurarsi che la finestra verrà creata con gli stili corretti.  È inoltre necessario assicurarsi che alcuni stili impostati per tutte le istanze della classe della finestra mentre altri stili consentono di essere impostato su una base di per istanza.  
  
## Modelli di tratti della finestra ATL  
 ATL fornisce due modelli di tratti della finestra che consentono agli stili di impostazione predefinita del set in fase di compilazione mediante i relativi parametri di modello.  
  
|Classe|Descrizione|  
|------------|-----------------|  
|[CWinTraits](../atl/reference/cwintraits-class.md)|Utilizzare questo modello quando si desidera fornire stili predefiniti della finestra che verranno utilizzati solo quando nessuno altro stile è specificato nella chiamata a **Crea**.  Gli stili specificati in fase di esecuzione hanno la precedenza sugli stili impostati in fase di compilazione.|  
|[CWinTraitsOR](../atl/reference/cwintraitsor-class.md)|Utilizzare la classe quando si desidera specificare gli stili che devono essere sempre impostati per la classe della finestra.  Gli stili specificati in fase di esecuzione vengono combinati con gli stili impostati in fase di compilazione utilizzando l'operatore OR bit.|  
  
 Oltre a questi modelli, ATL fornisce una serie di specializzazioni predefinite del modello `CWinTraits` per le combinazioni di uso comune degli stili di finestra.  Vedere la documentazione di riferimento [CWinTraits](../atl/reference/cwintraits-class.md) per informazioni dettagliate su.  
  
## Tratti personalizzati della finestra  
 Nella situazione improbabile che specializzare uno dei modelli forniti da ATL non è sufficiente ed è necessario creare i propri tratti classe, è sufficiente creare una classe che implementa due funzioni statiche: `GetWndStyle` e **GetWndStyleEx**:  
  
 [!code-cpp[NVC_ATL_Windowing#68](../atl/codesnippet/CPP/understanding-window-traits_1.h)]  
  
 Ognuna di queste funzioni verrà passato un valore di stile in fase di esecuzione che può essere utilizzato per produrre un valore di stile.  Se la classe di tratti della finestra viene utilizzata come argomento di modello alla classe della finestra ATL, i valori dello stile vengono passati a queste funzioni statiche saranno cui è stato passato come argomenti dello stile a [Crea](../Topic/CWindowImpl::Create.md).  
  
## Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)