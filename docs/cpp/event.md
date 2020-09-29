---
title: __event
ms.date: 11/04/2016
f1_keywords:
- __event_cpp
- __event
helpviewer_keywords:
- __event keyword [C++]
- events [C++], __event
ms.assetid: d3019b3e-722e-48df-8536-c05878461f9e
ms.openlocfilehash: c1c9fa5a6df4cbb1c18e5d5406bdde0197d155b2
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91498828"
---
# <a name="__event"></a>__event

Dichiara un evento.

## <a name="syntax"></a>Sintassi

```
__event method-declarator;
__event __interface interface-specifier;
__event member-declarator;
```

## <a name="remarks"></a>Osservazioni

La parola chiave **`__event`** può essere applicata a una dichiarazione di metodo, a una dichiarazione di interfaccia o a una dichiarazione di un membro dati. Tuttavia, non è possibile usare la **`__event`** parola chiave per qualificare un membro di una classe annidata.

A seconda che l'origine evento e il ricevitore siano C++ nativi, COM o gestiti (.NET Framework), è possibile utilizzare i seguenti costrutti come eventi:

|C++ nativo|COM|Gestito (.NET Framework)|
|------------------|---------|--------------------------------|
|Metodo|—|method|
|—|interfaccia|—|
|—|—|membro dati|

Utilizzare [__hook](../cpp/hook.md) in un ricevitore di eventi per associare un metodo del gestore a un metodo di evento. Si noti che dopo aver creato un evento con la **`__event`** parola chiave, tutti i gestori eventi collegati successivamente a tale evento verranno chiamati quando viene chiamato l'evento.

Una **`__event`** dichiarazione di metodo non può avere una definizione. una definizione viene generata in modo implicito, quindi il metodo di evento può essere chiamato come se fosse un metodo ordinario.

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="native-events"></a>Eventi nativi

Gli eventi nativi sono metodi. Il tipo restituito è in genere HRESULT o **`void`** , ma può essere qualsiasi tipo integrale, incluso **`enum`** . Quando un evento utilizza un tipo restituito integrale, viene definita una condizione di errore quando un gestore eventi restituisce un valore diverso da zero, nel qual caso l'evento generato chiamerà gli altri delegati.

```cpp
// Examples of native C++ events:
__event void OnDblClick();
__event HRESULT OnClick(int* b, char* s);
```

Per il codice di esempio, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) .

## <a name="com-events"></a>Eventi COM

Gli eventi COM sono interfacce. I parametri di un metodo in un'interfaccia di origine evento devono essere *nei* parametri, ma questo non viene applicato rigorosamente, perché un parametro *out* non è utile durante il multicast. Se si usa un parametro *out* , verrà generato un avviso di livello 1.

Il tipo restituito è in genere HRESULT o **`void`** , ma può essere qualsiasi tipo integrale, incluso **`enum`** . Quando un evento utilizza un tipo restituito integrale e un gestore eventi restituisce un valore diverso da zero, si tratta di una condizione di errore nel qual caso l'evento generato interromperà le chiamate agli altri delegati. Si noti che il compilatore contrassegna automaticamente un'interfaccia di origine eventi come [origine](../windows/attributes/source-cpp.md) nell'IDL generato.

La parola chiave [__interface](../cpp/interface.md) è sempre obbligatoria dopo **`__event`** per un'origine evento com.

```cpp
// Example of a COM event:
__event __interface IEvent1;
```

Per il codice di esempio, vedere [gestione degli eventi in com](../cpp/event-handling-in-com.md) .

## <a name="managed-events"></a>Eventi gestiti

Per informazioni sulla codifica di eventi nella nuova sintassi, vedere [evento](../extensions/event-cpp-component-extensions.md).

Gli eventi gestiti sono membri dati o metodi. Quando viene usato con un evento, il tipo restituito di un delegato deve essere conforme al [Common Language Specification](/dotnet/standard/language-independence-and-language-independent-components). Il tipo restituito del gestore eventi deve corrispondere al tipo restituito del delegato. Per ulteriori informazioni sui delegati, vedere [delegati ed eventi](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md). Se un evento gestito è un membro dati, il relativo tipo deve essere un puntatore a un delegato.

In .NET Framework, è possibile trattare un membro dati come se fosse un metodo (ovvero, il metodo `Invoke` del delegato corrispondente). È necessario predefinire il tipo delegato per la dichiarazione di un membro dati di eventi gestiti. In contrasto, un metodo dell'evento gestito definisce in modo implicito il delegato gestito corrispondente se questo non è già stato definito. Ad esempio, è possibile dichiarare un valore dell'evento quale `OnClick` come evento seguente:

```cpp
// Examples of managed events:
__event ClickEventHandler* OnClick;  // data member as event
__event void OnClick(String* s);  // method as event
```

Quando si dichiara un evento gestito in modo implicito, si possono specificare le funzioni di accesso add e remove che verranno chiamate quando i gestori eventi vengono aggiunti o rimossi. È inoltre possibile definire il metodo che chiama (genera) l'evento dall'esterno della classe.

## <a name="example-native-events"></a>Esempio: eventi nativi

```cpp
// EventHandling_Native_Event.cpp
// compile with: /c
[event_source(native)]
class CSource {
public:
   __event void MyEvent(int nValue);
};
```

## <a name="example-com-events"></a>Esempio: eventi COM

```cpp
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

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Gestione degli eventi](../cpp/event-handling.md)<br/>
[event_source](../windows/attributes/event-source.md)<br/>
[event_receiver](../windows/attributes/event-receiver.md)<br/>
[__hook](../cpp/hook.md)<br/>
[__unhook](../cpp/unhook.md)<br/>
[__raise](../cpp/raise.md)
