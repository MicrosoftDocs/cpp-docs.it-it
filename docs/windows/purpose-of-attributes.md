---
title: Scopo degli attributi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], about attributes
ms.assetid: 3aff8bfa-a2a3-4fcb-a2c6-1d96a2b4c68d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4f44d6e4db7e09033e9c3f05d94cbf5294b306a3
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018282"
---
# <a name="purpose-of-attributes"></a>Scopo degli attributi
Gli attributi estendono C++ in direzioni non è attualmente possibile senza la classica struttura del linguaggio. Gli attributi consentono provider (DLL distinte) per estendere le funzionalità del linguaggio in modo dinamico. L'obiettivo principale degli attributi è per semplificare la creazione di componenti COM, oltre ad aumentare il livello di produttività di sviluppatore di componenti. Gli attributi possono essere applicati a quasi qualsiasi costrutto C++, ad esempio classi, membri dati o le funzioni membro. Di seguito è riportata un'evidenziazione dei vantaggi offerti da questa nuova tecnologia:  
  
-   Espone una convenzione di chiamata semplice e familiare.  
  
-   Il codice inserito, che, a differenza delle macro, viene riconosciuta dal debugger.  
  
-   Consente facile derivazione dalle classi di base senza i dettagli di implementazione onerose.  
  
-   Sostituisce la grande quantità di codice IDL richiesti da un componente COM con alcuni attributi concisi.  
  
 Ad esempio, per implementare un sink di evento semplice per una classe generica di ATL, è possibile applicare il [event_receiver](../windows/event-receiver.md) attributo in una classe specifica, ad esempio `CMyReceiver`. Il `event_receiver` attributo viene quindi compilato dal compilatore Visual C++, che inserisce il codice appropriato nel file di oggetto.  
  
```cpp  
[event_receiver(com)]  
class CMyReceiver   
{  
   void handler1(int i) { ... }  
   void handler2(int i, float j) { ... }  
}  
```  
  
 È quindi possibile configurare il `CMyReceiver` metodi `handler1` e `handler2` per gestire gli eventi (usando la funzione intrinseca [hook](../cpp/hook.md)) da un'origine evento, che è possibile creare usando [event_source](../windows/event-source.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../windows/attributed-programming-concepts.md)