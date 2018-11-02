---
title: Gestione di eventi
ms.date: 11/04/2016
helpviewer_keywords:
- attributes [C++], event handling
- intrinsic functions [C++], event handling
- event handling [C++], Visual C++
ms.assetid: 82de3f9a-2d88-470c-9527-8a5b54c8ced4
ms.openlocfilehash: d1a89d5afce2e3715b5a61c0815d88ed2fbae8b5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523247"
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

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)