---
title: "Gestione di eventi | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributi [C++], gestione eventi"
  - "gestione eventi, Visual C++"
  - "funzioni intrinseche, gestione eventi"
ms.assetid: 82de3f9a-2d88-470c-9527-8a5b54c8ced4
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione di eventi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La gestione degli eventi viene principalmente supportata per le classi COM \(classi C\+\+ che implementano oggetti COM, utilizzando in genere le classi ATL o l'attributo [coclass](../windows/coclass.md)\).  Per ulteriori informazioni, vedere [Gestione degli eventi in COM](../cpp/event-handling-in-com.md).  
  
 La gestione degli eventi viene inoltre supportata per le classi C\+\+ native \(classi C\+\+ che non implementano oggetti COM\), tuttavia, tale supporto è deprecato e verrà rimosso nella versione futura.  Per ulteriori informazioni, vedere [Gestione degli eventi in C\+\+ nativo](../cpp/event-handling-in-native-cpp.md).  
  
 La gestione degli eventi supporta l'utilizzo singolo e multithreading e protegge i dati dall'accesso multithreading simultaneo.  Consente inoltre di derivare le sottoclassi da classi ricevitore o di origine eventi e di supportare l'origine\/la ricezione dell'evento esteso nella classe derivata.  
  
 Visual C\+\+ include gli attributi e le parole chiave per dichiarare gli eventi e i gestori di eventi.  Gli attributi e le parole chiave dell'evento possono essere utilizzati nei programmi CLR e nei programmi C\+\+ nativi.  
  
|Argomento|Descrizione|  
|---------------|-----------------|  
|[event\_source](../windows/event-source.md)|Crea un'origine evento.|  
|[event\_receiver](../windows/event-receiver.md)|Crea un ricevitore di eventi \(sink\).|  
|[\_\_event](../cpp/event.md)|Dichiara un evento.|  
|[\_\_raise](../cpp/raise.md)|Evidenzia il sito di chiamata di un evento.|  
|[\_\_hook](../cpp/hook.md)|Associa un metodo del gestore a un evento.|  
|[\_\_unhook](../cpp/unhook.md)|Dissocia un metodo del gestore da un evento.|  
  
## Vedere anche  
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Event Handling Samples](http://msdn.microsoft.com/it-it/cc0287d4-f92b-4da5-85fc-a0f186e16424)