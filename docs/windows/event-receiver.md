---
title: "event_receiver | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.event_receiver"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event_receiver attribute"
  - "event receivers"
  - "events [C++], event receivers (sinks)"
  - "event handling [C++], attributes"
  - "event handling [C++], creating receiver"
  - "event sinks, creating"
  - "event sinks"
ms.assetid: bf8fe770-3ea2-4128-b46b-166222ee4097
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# event_receiver
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

crea un ricevitore di eventi \(sink\).  
  
## Sintassi  
  
```  
  
      [ event_receiver(  
   type   
   [, layout_dependent=false]   
) ]  
```  
  
#### Parametri  
 `type`  
 Un'enumerazione di uno dei seguenti valori:  
  
-   `native` per il codice non gestito C\/C\+\+ \(impostazione predefinita per le classi native\).  
  
-   `com` per il codice COM.  Questo valore è necessario includere i seguenti file di intestazione:  
  
    ```  
    #define _ATL_ATTRIBUTES  
    #include <atlbase.h>  
    #include <atlcom.h>  
    ```  
  
 **layout\_dependent**  
 specificare layout\_dependent solo se `type`\=**COM**.  *layout\_dependent* è un valore booleano:  
  
-   **true** indica che la firma del ricevitore dei delegati nel caso deve corrispondere esattamente a quelle a cui sono contenuti nell'origine agganciato.  I nomi dei gestori del ricevitore di eventi devono corrispondere ai nomi specificati nell'interfaccia rilevante di origine evento.  È necessario utilizzare **coclasse** quando layout\_dependent viene  **true**.  È leggermente più efficiente specificare **true**.  
  
-   **false** \(impostazione predefinita\) significa che la convenzione di chiamata e la classe di archiviazione \(virtuale, statico e altre\) non devono corrispondere al metodo dell'evento e gestori; né il gestore che i nomi devono corrispondere ai nomi dei metodi di interfaccia di origine evento.  
  
## Note  
 **event\_receiver** L'attributo C\+\+ specifica che la classe o la struttura a cui viene applicata sarà un ricevitore di eventi, utilizzando il modello di eventi unificato Visual C\+\+.  
  
 **event\_receiver** viene utilizzato con  [un event\_source](../windows/event-source.md) attributo e  [\_\_hook](../cpp/hook.md) e  [\_\_unhook](../cpp/unhook.md) parole chiave.  utilizzo **un event\_source** per creare le origini evento.  utilizzo `__hook` nei metodi di un ricevitore di eventi per associare \(“funzione„\) i metodi del ricevitore di eventi agli eventi di origine eventi.  utilizzo `__unhook` per dissociarli.  
  
 layout\_dependent viene specificato solo per i ricevitori di eventi COM \(`type`\=**COM**\).  l'impostazione predefinita per layout\_dependent viene **false**.  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|**coclasse** quando layout\_dependent\=**true**|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [event\_source](../windows/event-source.md)   
 [\_\_event](../cpp/event.md)   
 [\_\_hook](../cpp/hook.md)   
 [\_\_unhook](../cpp/unhook.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)