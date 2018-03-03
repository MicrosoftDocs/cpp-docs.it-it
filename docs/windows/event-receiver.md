---
title: event_receiver | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.event_receiver
dev_langs:
- C++
helpviewer_keywords:
- event_receiver attribute
- event receivers
- events [C++], event receivers (sinks)
- event handling [C++], attributes
- event handling [C++], creating receiver
- event sinks, creating
- event sinks
ms.assetid: bf8fe770-3ea2-4128-b46b-166222ee4097
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 50ea26172e2f5112e760aa02d9247d07afbead2b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="eventreceiver"></a>event_receiver
Crea un ricevitore di eventi (sink).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ event_receiver(  
   type   
   [, layout_dependent=false]   
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `type`  
 Un'enumerazione di uno dei valori seguenti:  
  
-   `native`per il codice C/C++ non gestito (impostazione predefinita per le classi native).  
  
-   `com` per il codice COM. Questo valore richiedere che si includano i file di intestazione seguente:  
  
    ```  
    #define _ATL_ATTRIBUTES  
    #include <atlbase.h>  
    #include <atlcom.h>  
    ```  
  
 **layout_dependent**  
 Specificare *layout_dependent* solo se `type` = **com**. *layout_dependent* è un valore booleano:  
  
-   **true** significa che la firma dei delegati nel ricevitore deve corrispondere esattamente a quelli a cui sono associati nell'evento origine eventi. I nomi dei gestori di ricevitore di eventi deve corrispondere ai nomi specificati nell'interfaccia di origine eventi rilevanti. È necessario utilizzare **coclasse** quando *layout_dependent* è **true**. È leggermente più efficiente specificare **true**.  
  
-   **false** (predefinito) indica che la convenzione di chiamata o una classe archiviazione (virtuale, statici e altri) non devono corrispondere il metodo di evento e i gestori; né richiedono i nomi dei gestori corrispondano ai nomi di metodo di interfaccia di origine evento.  
  
## <a name="remarks"></a>Note  
 Il **event_receiver** attributo C++ specifica che la classe o struttura in cui viene applicato sarà un ricevitore di eventi, utilizzando il modello di eventi unificato di Visual C++.  
  
 **event_receiver** viene utilizzato con il [event_source](../windows/event-source.md) attributo e [hook](../cpp/hook.md) e [unhook](../cpp/unhook.md) parole chiave. Utilizzare **event_source** per creare le origini eventi. Utilizzare `__hook` all'interno di metodi del ricevitore di eventi per associare i metodi di ricevitore di eventi ("hook") per gli eventi di un'origine evento. Utilizzare `__unhook` annullare l'associazione di essi.  
  
 *layout_dependent* viene specificato solo per i ricevitori di eventi COM (`type`=**com**). Il valore predefinito per *layout_dependent* è **false**.  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**Coclasse** quando *layout_dependent*=**true**|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [event_source](../windows/event-source.md)   
 [Event](../cpp/event.md)   
 [hook](../cpp/hook.md)   
 [unhook](../cpp/unhook.md)   
 [Attributi di classe](../windows/class-attributes.md)   
