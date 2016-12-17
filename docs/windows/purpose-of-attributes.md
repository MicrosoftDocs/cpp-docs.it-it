---
title: "Purpose of Attributes | Microsoft Docs"
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
  - "attributes [C++], about attributes"
ms.assetid: 3aff8bfa-a2a3-4fcb-a2c6-1d96a2b4c68d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Purpose of Attributes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli attributi estendono non attualmente C\+\+ in direzioni possibili senza interrompere la struttura classica del linguaggio.  Gli attributi consentono ai provider separati \(DLL\) estendono dinamicamente la funzionalità del linguaggio.  L'obiettivo primario degli attributi è quello di semplificare la creazione di componenti COM, oltre ad aumentare il livello di produttività degli sviluppatori di componenti.  Gli attributi possono essere applicati a qualsiasi costrutto C\+\+, come le classi, i membri dati, o funzioni membro.  Ecco evidenziazione dei vantaggi forniti da questa nuova tecnologia:  
  
-   espone una convenzione di chiamata comune e semplice.  
  
-   Gli utilizzi di inserimento del codice, che, a differenza delle macro, è riconosciuto dal debugger.  
  
-   Consente la derivazione delle classi di base senza dettagli di implementazione un'operazione gravosa.  
  
-   Sostituisce una grande quantità di codice IDL necessario da un componente COM con alcuni attributi concisa.  
  
 Ad esempio, per implementare un sink di evento semplice per una classe generica ATL, è possibile applicare [event\_receiver](../windows/event-receiver.md) attributo a una classe specifica come  `CMyReceiver`.  **event\_receiver** l'attributo viene quindi compilato dal compilatore di Visual C\+\+, che inserisce il codice appropriato nel file oggetto.  
  
```  
[event_receiver(com)]  
class CMyReceiver   
{  
   void handler1(int i) { ... }  
   void handler2(int i, float j) { ... }  
}  
```  
  
 È quindi possibile impostare **CMyReceiver** metodi  `handler1` e  `handler2` per gestire gli eventi utilizzando la funzione intrinseca  [\_\_hook](../cpp/hook.md)\) da un'origine evento, di cui è possibile creare utilizzando  [un event\_source](../windows/event-source.md).  
  
## Vedere anche  
 [Concepts](../windows/attributed-programming-concepts.md)