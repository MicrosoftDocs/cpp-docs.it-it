---
title: Gestione degli eventi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], event handling
- intrinsic functions [C++], event handling
- event handling [C++], Visual C++
ms.assetid: 82de3f9a-2d88-470c-9527-8a5b54c8ced4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d27ff977bf3e4132f7782c0ffcb85bebefd42d68
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38961441"
---
# <a name="event-handling"></a>Gestione di eventi
Gestione degli eventi viene principalmente supportata per le classi COM (classi C++ che implementano oggetti COM, in genere utilizzando le classi ATL o il [coclasse](../windows/coclass.md) attributo).  Per altre informazioni, vedere [gestione degli eventi in COM](../cpp/event-handling-in-com.md).  
  
 La gestione degli eventi viene inoltre supportata per le classi C++ native (classi C++ che non implementano oggetti COM), tuttavia, tale supporto è deprecato e verrà rimosso nella versione futura.  Per altre informazioni, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md).  
  
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
