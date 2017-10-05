---
title: unhook | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __unhook
- __unhook_cpp
dev_langs:
- C++
helpviewer_keywords:
- event handlers, dissociating events
- __unhook keyword [C++]
ms.assetid: 953a14f3-5199-459d-81e5-fcf015a19878
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 2b1909cf5d7bde440d434bb44ff2276e68679e78
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="unhook"></a>__unhook
Dissocia un metodo del gestore da un evento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      long  __unhook(  
   &SourceClass::EventMethod,  
   source,  
   &ReceiverClass::HandlerMethod  
   [, receiver = this]   
);  
long  __unhook(   
   interface,  
   source  
);  
long  __unhook(  
   source   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 **&***SourceClass* `::` *EventMethod*  
 Puntatore al metodo dell'evento da cui eseguire l'unhook del metodo del gestore eventi:  
  
-   Eventi C++ nativi: *SourceClass* è la classe di origine evento e *EventMethod* è l'evento.  
  
-   Eventi COM: *SourceClass* è l'interfaccia di origine evento e *EventMethod* è uno dei relativi metodi.  
  
-   Eventi gestiti: *SourceClass* è la classe di origine evento e *EventMethod* è l'evento.  
  
 `interface`  
 Il nome dell'interfaccia è sottoposto ad unhook da `receiver`, solo per i ricevitori di eventi COM in cui il *layout_dependent* parametro del [event_receiver](../windows/event-receiver.md) attributo **true**.  
  
 *origine*  
 Puntatore a un'istanza dell'origine evento. A seconda del codice `type` specificato in **event_receiver**, *origine* può essere uno dei seguenti:  
  
-   Un puntatore a un oggetto di origine dell'evento nativo.  
  
-   Un **IUnknown**-in base a puntatore (origine COM).  
  
-   Un puntatore a un oggetto gestito (per gli eventi gestiti).  
  
 **&***ReceiverClass* `::``HandlerMethod`  
 Puntatore al metodo del gestore eventi per cui eseguire l'unhook da un evento. Il gestore viene specificato come metodo di una classe o come un riferimento alla stessa; se non si specifica il nome della classe, `__unhook` presuppone che la classe sia la stessa nella quale viene chiamato.  
  
-   Eventi C++ nativi: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.  
  
-   Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi e `HandlerMethod` è uno dei relativi gestori.  
  
-   Eventi gestiti: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.  
  
 `receiver`(facoltativo)  
 Puntatore a un'istanza della classe del ricevitore di eventi. Se non si specifica un ricevitore, l'impostazione predefinita corrisponde alla classe del ricevitore o alla struttura in cui viene chiamato `__unhook`.  
  
## <a name="usage"></a>Utilizzo  
 Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.  
  
## <a name="remarks"></a>Note  
 Utilizzare la funzione intrinseca `__unhook` in un ricevitore di eventi per dissociare o "eseguire l'unhook" di un metodo del gestore da un metodo dell'evento.  
  
 Esistono tre tipologie di `__unhook`. Nella maggior parte dei casi, è possibile utilizzare la prima tipologia (a quattro argomenti). È possibile utilizzare la seconda tipologia (a due argomenti) di `__unhook` solo per i ricevitori di eventi COM; in questo modo si esegue l'unhook dell'intera interfaccia eventi. È possibile utilizzare la terza tipologia (a un argomento) per eseguire l'unhook di tutti i delegati dall'origine specificata.  
  
 Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).  
  
 Se si chiama `__unhook` per un evento e per un gestore eventi non ancora collegati, l'operazione non avrà alcun effetto.  
  
 In fase di compilazione, il compilatore verifica l'esistenza dell'evento ed effettua il controllo del tipo di parametro con il gestore specificato.  
  
 Ad eccezione degli eventi COM, è possibile chiamare `__hook` e `__unhook` all'esterno del ricevitore di eventi.  
  
 Un'alternativa all'utilizzo di `__unhook` consiste nell'utilizzare l'operatore - =.  
  
 Per informazioni sulla codifica di eventi gestiti nella nuova sintassi, vedere [evento](../windows/event-cpp-component-extensions.md).  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## <a name="example"></a>Esempio  
 Vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) e [gestione degli eventi in COM](../cpp/event-handling-in-com.md) per gli esempi.  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [event_source](../windows/event-source.md)   
 [event_receiver](../windows/event-receiver.md)   
 [Event](../cpp/event.md)   
 [hook](../cpp/hook.md)   
 [__raise](../cpp/raise.md)
