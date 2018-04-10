---
title: La gestione degli eventi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], event handling
- intrinsic functions [C++], event handling
- event handling [C++], Visual C++
ms.assetid: 82de3f9a-2d88-470c-9527-8a5b54c8ced4
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4167a76d3e301f76ebba09f78abcd7e64fc7f108
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="event-handling"></a>Gestione di eventi
La gestione degli eventi viene principalmente supportata per le classi COM (classi C++ che implementano oggetti COM, in genere utilizzando le classi ATL o [coclasse](../windows/coclass.md) attributo).  Per ulteriori informazioni, vedere [gestione degli eventi in COM](../cpp/event-handling-in-com.md).  
  
 La gestione degli eventi viene inoltre supportata per le classi C++ native (classi C++ che non implementano oggetti COM), tuttavia, tale supporto è deprecato e verrà rimosso nella versione futura.  Per ulteriori informazioni, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md).  
  
 La gestione degli eventi supporta l'utilizzo singolo e multithreading e protegge i dati dall'accesso multithreading simultaneo. Consente inoltre di derivare le sottoclassi da classi ricevitore o di origine eventi e di supportare l'origine/la ricezione dell'evento esteso nella classe derivata.  
  
 Visual C++ include gli attributi e le parole chiave per dichiarare gli eventi e i gestori di eventi. Gli attributi e le parole chiave dell'evento possono essere utilizzati nei programmi CLR e nei programmi C++ nativi.  
  
|Argomento|Descrizione|  
|-----------|-----------------|  
|[event_source](../windows/event-source.md)|Crea un'origine evento.|  
|[event_receiver](../windows/event-receiver.md)|Crea un ricevitore di eventi (sink).|  
|[__event](../cpp/event.md)|Dichiara un evento.|  
|[__raise](../cpp/raise.md)|Evidenzia il sito di chiamata di un evento.|  
|[__hook](../cpp/hook.md)|Associa un metodo del gestore a un evento.|  
|[__unhook](../cpp/unhook.md)|Dissocia un metodo del gestore da un evento.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Esempi di gestione eventi](http://msdn.microsoft.com/en-us/cc0287d4-f92b-4da5-85fc-a0f186e16424)