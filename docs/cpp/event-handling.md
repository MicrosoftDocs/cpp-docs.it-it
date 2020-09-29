---
title: Gestione di eventi
ms.date: 05/07/2019
helpviewer_keywords:
- event handling [C++]
ms.assetid: 82de3f9a-2d88-470c-9527-8a5b54c8ced4
ms.openlocfilehash: 4ed2dd2140176fe302d2b6800a3aa7768d17eedd
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91498892"
---
# <a name="event-handling"></a>Gestione di eventi

La gestione degli eventi è supportata principalmente per le classi COM (classi C++ che implementano oggetti COM, in genere usando le classi ATL o l'attributo [coclass](../windows/attributes/coclass.md) ). Per ulteriori informazioni, vedere [gestione degli eventi in com](../cpp/event-handling-in-com.md).

La gestione degli eventi viene inoltre supportata per le classi C++ native (classi C++ che non implementano oggetti COM), tuttavia, tale supporto è deprecato e verrà rimosso nella versione futura.  Per ulteriori informazioni, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md).

La gestione degli eventi supporta l'utilizzo singolo e multithreading e protegge i dati dall'accesso multithreading simultaneo. Consente inoltre di derivare le sottoclassi da classi ricevitore o di origine eventi e di supportare l'origine/la ricezione dell'evento esteso nella classe derivata.

Il compilatore Microsoft C++ include gli attributi e le parole chiave per la dichiarazione di eventi e gestori eventi. Gli attributi e le parole chiave dell'evento possono essere utilizzati nei programmi CLR e nei programmi C++ nativi.

|Argomento|Descrizione|
|-----------|-----------------|
|[event_source](../windows/attributes/event-source.md)|Crea un'origine evento.|
|[event_receiver](../windows/attributes/event-receiver.md)|Crea un ricevitore di eventi (sink).|
|[__event](../cpp/event.md)|Dichiara un evento.|
|[__raise](../cpp/raise.md)|Evidenzia il sito di chiamata di un evento.|
|[__hook](../cpp/hook.md)|Associa un metodo del gestore a un evento.|
|[__unhook](../cpp/unhook.md)|Dissocia un metodo del gestore da un evento.|

## <a name="see-also"></a>Vedere anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
