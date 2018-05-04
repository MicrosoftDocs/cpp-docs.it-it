---
title: Event | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __event_cpp
- __event
dev_langs:
- C++
helpviewer_keywords:
- __event keyword [C++]
- events [C++], __event
ms.assetid: d3019b3e-722e-48df-8536-c05878461f9e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 921ab0d8a18e8bb50f7ca5ea02002aa16244abcd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="event"></a>__event
Dichiara un evento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      __event   
      method-declarator  
      ;  
__event __interface interface-specifier;  
__event member-declarator;  
```  
  
## <a name="remarks"></a>Note  
 La parola chiave `__event` può essere applicata a una dichiarazione di metodo, a una dichiarazione di interfaccia o una dichiarazione di un membro dati. Non è tuttavia possibile utilizzare la parola chiave `__event` per qualificare un membro di una classe annidata.  
  
 A seconda che l'origine evento e il ricevitore siano C++ nativi, COM o gestiti (.NET Framework), è possibile utilizzare i seguenti costrutti come eventi:  
  
|C++ nativo|COM|Gestito (.NET Framework)|  
|------------------|---------|--------------------------------|  
|Metodo|—|metodo|  
|—|interfaccia|—|  
|—|—|membro dati|  
  
 Utilizzare [hook](../cpp/hook.md) in un ricevitore di eventi per associare un metodo del gestore con un metodo dell'evento. Si noti che dopo aver creato un evento con la parola chiave `__event`, tutti i gestori eventi successivamente collegati a tale evento verranno chiamati quando l'evento viene chiamato.  
  
 Una dichiarazione di metodo `__event` non può avere una definizione; una definizione viene generata in modo implicito, pertanto il metodo di evento può essere chiamato come se fosse un metodo ordinario qualsiasi.  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## <a name="native-events"></a>Eventi nativi  
 Gli eventi nativi sono metodi. Il tipo restituito è in genere `HRESULT` o `void`, ma può essere qualsiasi tipo integrale, incluso `enum`. Quando un evento utilizza un tipo restituito integrale, viene definita una condizione di errore quando un gestore eventi restituisce un valore diverso da zero, nel qual caso l'evento generato chiamerà gli altri delegati.  
  
```  
// Examples of native C++ events:  
__event void OnDblClick();  
__event HRESULT OnClick(int* b, char* s);  
```  
  
 Vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) per il codice di esempio.  
  
## <a name="com-events"></a>Eventi COM  
 Gli eventi COM sono interfacce. I parametri di un metodo in un'interfaccia di origine evento devono essere **in** parametri (ma questo non è applicato rigorosamente), poiché un **out** parametro non è utile quando il multicasting. Verrà generato un avviso di livello 1 se si utilizza un **out** parametro.  
  
 Il tipo restituito è in genere `HRESULT` o `void`, ma può essere qualsiasi tipo integrale, incluso `enum`. Quando un evento utilizza un tipo restituito integrale e un gestore eventi restituisce un valore diverso da zero, si tratta di una condizione di errore nel qual caso l'evento generato interromperà le chiamate agli altri delegati. Si noti che il compilatore contrassegnerà automaticamente un'interfaccia di origine evento come un [origine](../windows/source-cpp.md) nel file IDL generato.  
  
 Il [Interface](../cpp/interface.md) è sempre richiesta dopo la parola chiave `__event` per un'origine evento COM.  
  
```  
// Example of a COM event:  
__event __interface IEvent1;  
```  
  
 Vedere [gestione degli eventi in COM](../cpp/event-handling-in-com.md) per il codice di esempio.  
  
## <a name="managed-events"></a>Eventi gestiti  
 Per informazioni sulla codifica di eventi nella nuova sintassi, vedere [evento](../windows/event-cpp-component-extensions.md).  
  
 Gli eventi gestiti sono membri dati o metodi. Se usato con un evento, il tipo restituito di un delegato deve essere conforme con la [Common Language Specification](/dotnet/standard/language-independence-and-language-independent-components). Il tipo restituito del gestore eventi deve corrispondere al tipo restituito del delegato. Per ulteriori informazioni sui delegati, vedere [delegati ed eventi](../dotnet/delegates-and-events.md). Se un evento gestito è un membro dati, il relativo tipo deve essere un puntatore a un delegato.  
  
 In .NET Framework, è possibile trattare un membro dati come se fosse un metodo (ovvero, il metodo `Invoke` del delegato corrispondente). È necessario predefinire il tipo delegato per la dichiarazione di un membro dati di eventi gestiti. In contrasto, un metodo dell'evento gestito definisce in modo implicito il delegato gestito corrispondente se questo non è già stato definito. Ad esempio, è possibile dichiarare un valore dell'evento quale `OnClick` come evento seguente:  
  
```  
// Examples of managed events:  
__event ClickEventHandler* OnClick;  // data member as event  
__event void OnClick(String* s);  // method as event  
```  
  
 Quando si dichiara un evento gestito in modo implicito, si possono specificare le funzioni di accesso add e remove che verranno chiamate quando i gestori eventi vengono aggiunti o rimossi. È inoltre possibile definire il metodo che chiama (genera) l'evento dall'esterno della classe.  
  
## <a name="example-native-events"></a>Esempio: eventi nativi  
  
```  
// EventHandling_Native_Event.cpp  
// compile with: /c  
[event_source(native)]  
class CSource {  
public:  
   __event void MyEvent(int nValue);  
};  
```  
  
## <a name="example-com-events"></a>Esempio: eventi COM  
  
```  
// EventHandling_COM_Event.cpp  
// compile with: /c  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
  
[ module(dll, name="EventSource", uuid="6E46B59E-89C3-4c15-A6D8-B8A1CEC98830") ];  
  
[ dual, uuid("00000000-0000-0000-0000-000000000002") ]  
__interface IEventSource {  
   [id(1)] HRESULT MyEvent();  
};  
 [ coclass, uuid("00000000-0000-0000-0000-000000000003"),  event_source(com) ]  
class CSource : public IEventSource {  
public:  
   __event __interface IEventSource;  
   HRESULT FireEvent() {  
      __raise MyEvent();  
      return S_OK;  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Gestione degli eventi](../cpp/event-handling.md)   
 [event_source](../windows/event-source.md)   
 [event_receiver](../windows/event-receiver.md)   
 [hook](../cpp/hook.md)   
 [unhook](../cpp/unhook.md)   
 [__raise](../cpp/raise.md)