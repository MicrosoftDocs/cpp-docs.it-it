---
title: "event_source | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.event_source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione di eventi, attributi"
  - "log eventi, origine evento"
  - "origini eventi, creazione"
  - "event_source (attributo)"
  - "origini evento"
  - "gestione di eventi, creazione di origini di eventi"
ms.assetid: 0983e36a-6127-4fbb-8a22-8dfec6564c16
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# event_source
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un'origine evento.  
  
## Sintassi  
  
```  
  
       [ event_source(  
       type,  
optimize=[speed | size],  
decorate=[true | false]) ]  
```  
  
#### Parametri  
 `type`  
 Un'enumerazione di uno dei valori seguenti:  
  
-   `native` per codice C\/C\+\+ non gestito \(impostazione predefinita per le classi non gestite\).  
  
-   `com` per il codice COM. È necessario usare `coclass` quando `type`\=`com`. Questo valore richiedere che si includano i file di intestazione seguente:  
  
    ```  
    #define _ATL_ATTRIBUTES  
    #include <atlbase.h>  
    #include <atlcom.h>  
    ```  
  
 **optimize**  
 Quando `type` è **native**, è possibile specificare **optimize\=size** per indicare che ci sono 4 byte di spazio di archiviazione \(minimo\) per tutti gli eventi di una classe o **optimize\=speed** \(impostazione predefinita\) per indicare che ci sono 4 \* \(numero di eventi\) byte di spazio di archiviazione.  
  
 **decorate**  
 Quando `type` è **native**, è possibile specificare **decorate\=false** per indicare che il nome espanso nel file unito \(.mrg\) non deve includere il nome della classe contenitore.[\/Fx](../build/reference/fx-merge-injected-code.md) consente di generare file .mrg.**decorare \= false**, che è l'impostazione predefinita, genera nomi di tipo completi nel file unito.  
  
## Note  
 L'attributo **event\_source** di C\+\+ specifica che la classe o struttura a cui viene applicato sarà un'origine evento.  
  
 **event\_source** si usa in combinazione con l'attributo [event\_receiver](../windows/event-receiver.md) e la parola chiave [\_\_event](../cpp/event.md). Usare **event\_receiver** per creare i ricevitori di eventi. Usare `__event` sui metodi all'interno dell'origine evento per specificare tali metodi come eventi.  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## Requisiti  
  
### Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass** quando `type`\=**com**|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [event\_receiver](../windows/event-receiver.md)   
 [\_\_event](../cpp/event.md)   
 [\_\_hook](../cpp/hook.md)   
 [\_\_unhook](../cpp/unhook.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)