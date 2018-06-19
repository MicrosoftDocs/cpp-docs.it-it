---
title: Scopo degli attributi | Documenti Microsoft
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
ms.openlocfilehash: 0ea3b731cc22d144e2e20dc70f14e6b0b76b1479
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877836"
---
# <a name="purpose-of-attributes"></a>Scopo degli attributi
Gli attributi estendere C++ in direzioni non è attualmente possibile senza la classica struttura del linguaggio. Gli attributi i provider (DLL distinte) per estendere le funzionalità di linguaggio in modo dinamico. L'obiettivo principale degli attributi è per semplificare la creazione di componenti COM, oltre ad aumentare il livello di produttività dello sviluppatore. Gli attributi possono essere applicati a quasi qualsiasi costrutto C++, ad esempio classi, membri dati o le funzioni membro. Di seguito è riportato un'evidenziazione dei vantaggi offerti da questa nuova tecnologia:  
  
-   Espone una convenzione di chiamata semplice e familiare.  
  
-   Il codice inserito, che, a differenza delle macro, viene riconosciuta dal debugger.  
  
-   Consente una derivazione semplice dalle classi di base senza i dettagli di implementazione gravoso.  
  
-   Sostituisce la grande quantità di codice IDL richiesto da un componente COM con alcuni attributi concisi.  
  
 Ad esempio, per implementare un sink di evento semplice per una classe generica di ATL, è possibile applicare il [event_receiver](../windows/event-receiver.md) attributo in una classe specifica, ad esempio `CMyReceiver`. Il **event_receiver** attributo viene quindi compilato dal compilatore Visual C++ che inserisce il codice appropriato nel file oggetto.  
  
```  
[event_receiver(com)]  
class CMyReceiver   
{  
   void handler1(int i) { ... }  
   void handler2(int i, float j) { ... }  
}  
```  
  
 È quindi possibile impostare il **CMyReceiver** metodi `handler1` e `handler2` per gestire gli eventi (mediante la funzione intrinseca [hook](../cpp/hook.md)) da un'origine evento, che è possibile creare utilizzando [event_source](../windows/event-source.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../windows/attributed-programming-concepts.md)