---
title: event_source | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.event_source
dev_langs:
- C++
helpviewer_keywords:
- event handling, attributes
- event logs, event source
- event sources, creating
- event_source attribute
- event sources
- event handling, creating event source
ms.assetid: 0983e36a-6127-4fbb-8a22-8dfec6564c16
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b7e7e287d68bac0fe69417fe21df27ed3231cce6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879383"
---
# <a name="eventsource"></a>event_source
Crea un'origine evento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ event_source(  
   type,  
   optimize=[speed | size],  
   decorate=[true | false]  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `type`  
 Un'enumerazione di uno dei valori seguenti:  
  
-   `native` per codice C/C++ non gestito (impostazione predefinita per le classi non gestite).  
  
-   `com` per il codice COM. È necessario usare `coclass` quando `type`=`com`. Questo valore richiedere che si includano i file di intestazione seguente:  
  
    ```  
    #define _ATL_ATTRIBUTES  
    #include <atlbase.h>  
    #include <atlcom.h>  
    ```  
  
 **optimize**  
 Quando `type` è **native**, è possibile specificare **optimize=size**per indicare che ci sono 4 byte di spazio di archiviazione (minimo) per tutti gli eventi di una classe o **optimize=speed** (impostazione predefinita) per indicare che ci sono 4 * (numero di eventi) byte di spazio di archiviazione.  
  
 **decorate**  
 Quando `type` è **native**, è possibile specificare **decorate=false**per indicare che il nome espanso nel file unito (.mrg) non deve includere il nome della classe contenitore. [/Fx](../build/reference/fx-merge-injected-code.md) consente di generare file .mrg. **decorare = false**, che è l'impostazione predefinita, genera nomi di tipo completi nel file unito.  
  
## <a name="remarks"></a>Note  
 L'attributo **event_source** di C++ specifica che la classe o struttura a cui viene applicato sarà un'origine evento.  
  
 **event_source** si usa in combinazione con l'attributo [event_receiver](../windows/event-receiver.md) e la parola chiave [__event](../cpp/event.md) . Usare **event_receiver** per creare i ricevitori di eventi. Usare `__event` sui metodi all'interno dell'origine evento per specificare tali metodi come eventi.  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass** quando `type`=**com**|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [event_receiver](../windows/event-receiver.md)   
 [Event](../cpp/event.md)   
 [hook](../cpp/hook.md)   
 [unhook](../cpp/unhook.md)   
 [Attributi di classe](../windows/class-attributes.md)   
