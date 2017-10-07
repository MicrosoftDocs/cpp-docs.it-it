---
title: hook | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __hook_cpp
dev_langs:
- C++
helpviewer_keywords:
- __hook keyword [C++]
- event handlers [C++], connecting events to
ms.assetid: f4cabb10-d293-4c0e-a1d2-4745ef9cc22c
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 21bb75853d8664ad46bc48fc907946ae5a147f9a
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="hook"></a>__hook
Associa un metodo del gestore a un evento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      long __hook(  
   &SourceClass::EventMethod,  
   source,  
   &ReceiverClass::HandlerMethod  
   [, receiver = this]  
);  
long __hook(  
   interface,  
   source  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 **&***SourceClass* `::` *EventMethod*  
 Puntatore al metodo di eventi cui associare il metodo del gestore eventi:  
  
-   Eventi C++ nativi: *SourceClass* è la classe di origine evento e *EventMethod* è l'evento.  
  
-   Eventi COM: *SourceClass* è l'interfaccia di origine evento e *EventMethod* è uno dei relativi metodi.  
  
-   Eventi gestiti: *SourceClass* è la classe di origine evento e *EventMethod* è l'evento.  
  
 `interface`  
 Il nome dell'interfaccia associato a `receiver`, solo per i ricevitori di eventi COM in cui il *layout_dependent* parametro del [event_receiver](../windows/event-receiver.md) attributo **true**.  
  
 *origine*  
 Puntatore a un'istanza dell'origine evento. A seconda del codice `type` specificato in **event_receiver**, *origine* può essere uno dei seguenti:  
  
-   Un puntatore a un oggetto di origine dell'evento nativo.  
  
-   Un **IUnknown**-in base a puntatore (origine COM).  
  
-   Un puntatore a un oggetto gestito (per gli eventi gestiti).  
  
 **&***ReceiverClass* `::``HandlerMethod`  
 Puntatore al metodo del gestore eventi da associare a un evento. Il gestore viene specificato come metodo di una classe o come un riferimento alla stessa; se non si specifica il nome della classe, `__hook` presuppone che la classe sia la stessa nella quale viene chiamato.  
  
-   Eventi C++ nativi: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.  
  
-   Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi e `HandlerMethod` è uno dei relativi gestori.  
  
-   Eventi gestiti: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.  
  
 `receiver`(facoltativo)  
 Puntatore a un'istanza della classe del ricevitore di eventi. Se non si specifica un ricevitore, l'impostazione predefinita corrisponde alla classe del ricevitore o alla struttura in cui viene chiamato `__hook`.  
  
## <a name="usage"></a>Utilizzo  
 Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.  
  
## <a name="remarks"></a>Note  
 Utilizzare la funzione intrinseca `__hook` in un ricevitore di eventi per associare o dissociare un metodo del gestore con un metodo dell'evento. Il gestore specificato viene quindi chiamato quando l'origine genera l'evento specificato. È possibile associare più gestori a un singolo evento o associare più eventi a un singolo gestore.  
  
 Esistono due tipologie di `__hook`. È possibile utilizzare la prima tipologia (a quattro argomenti) nella maggior parte dei casi, in particolare, per i ricevitori di eventi COM in cui il *layout_dependent* parametro il [event_receiver](../windows/event-receiver.md) attributo **false **.  
  
 In questi casi non è necessario associare tutti i metodi in un'interfaccia prima di generare un evento a uno dei metodi; solo il metodo che gestisce l'evento deve essere associato. È possibile utilizzare la seconda forma (a due argomenti) di `__hook` solo per i ricevitori di eventi COM in cui *layout_dependent***= true**.  
  
 `__hook` restituisce un valore long. Un valore restituito diverso da zero indica che si è verificato un errore (gli eventi gestiti generano un'eccezione).  
  
 Il compilatore controlla l'esistenza di un evento e che la firma dell'evento coincida con la firma del delegato.  
  
 Ad eccezione degli eventi COM, è possibile chiamare `__hook` e `__unhook` all'esterno del ricevitore di eventi.  
  
 Un'alternativa all'utilizzo di `__hook` consiste nell'utilizzare l'operatore +=.  
  
 Per informazioni sulla codifica di eventi gestiti nella nuova sintassi, vedere [evento](../windows/event-cpp-component-extensions.md).  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## <a name="example"></a>Esempio  
 Vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) e [gestione degli eventi in COM](../cpp/event-handling-in-com.md) per gli esempi.  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Gestione degli eventi](../cpp/event-handling.md)   
 [event_source](../windows/event-source.md)   
 [event_receiver](../windows/event-receiver.md)   
 [unhook](../cpp/unhook.md)   
 [__raise](../cpp/raise.md)
