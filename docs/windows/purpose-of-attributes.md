---
title: Scopo degli attributi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], about attributes
ms.assetid: 3aff8bfa-a2a3-4fcb-a2c6-1d96a2b4c68d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ed20c29d017527d5c2ce0b0c5ab8053fc75dc6ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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