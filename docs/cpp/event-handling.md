---
title: Gestione degli eventi
description: Informazioni sulle estensioni di Microsoft C++ che supportano la gestione di eventi COM e native.
ms.date: 11/20/2020
helpviewer_keywords:
- event handling [C++]
ms.openlocfilehash: de8cd6dfac2b83e850ec62ff88e192d1c60e427e
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483128"
---
# <a name="event-handling"></a>Gestione degli eventi

La gestione degli eventi è supportata principalmente per le classi COM (classi C++ che implementano oggetti COM, in genere usando le classi ATL o l'attributo [coclass](../windows/attributes/coclass.md) ). Per ulteriori informazioni, vedere [gestione degli eventi in com](../cpp/event-handling-in-com.md).

La gestione degli eventi è supportata anche per le classi C++ native (classi C++ che non implementano oggetti COM). Il supporto per la gestione degli eventi C++ nativo è deprecato e verrà rimosso in una versione futura. Per ulteriori informazioni, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md).

> [!NOTE]
> Gli attributi degli eventi in C++ nativo non sono compatibili con C++ standard. Non vengono compilati quando si specifica la [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità di conformità.

La gestione degli eventi supporta l'utilizzo sia a thread singolo che multithreading. Protegge i dati dall'accesso multithread simultaneo. È possibile derivare le sottoclassi dall'origine evento o dalle classi Receiver. Queste sottoclassi supportano il sourcing e la ricezione di eventi estesi.

Il compilatore Microsoft C++ include gli attributi e le parole chiave per la dichiarazione di eventi e gestori eventi. Gli attributi e le parole chiave dell'evento possono essere utilizzati nei programmi CLR e nei programmi C++ nativi.

| Articolo | Descrizione |
|--|--|
| [`event_source`](../windows/attributes/event-source.md) | Crea un'origine evento. |
| [`event_receiver`](../windows/attributes/event-receiver.md) | Crea un ricevitore di eventi (sink). |
| [`__event`](../cpp/event.md) | Dichiara un evento. |
| [`__raise`](../cpp/raise.md) | Evidenzia il sito di chiamata di un evento. |
| [`__hook`](../cpp/hook.md) | Associa un metodo del gestore a un evento. |
| [`__unhook`](../cpp/unhook.md) | Annulla l'associazione di un metodo del gestore da un evento. |

## <a name="see-also"></a>Vedere anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)\
[Parole chiave](../cpp/keywords-cpp.md)
