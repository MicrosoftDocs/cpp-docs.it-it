---
title: __event
description: Informazioni su come usare la parola chiave dell'estensione Microsoft C++ `__event` per la gestione degli eventi nativi.
ms.date: 11/20/2020
f1_keywords:
- __event_cpp
- __event
helpviewer_keywords:
- __event keyword [C++]
- events [C++], __event
ms.openlocfilehash: 1678699d9b66c1a49dd5ca2bb019a6229c37a031
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483142"
---
# <a name="__event-keyword"></a>`__event` parola chiave

Dichiara un evento.

> [!NOTE]
> Gli attributi degli eventi in C++ nativo non sono compatibili con C++ standard. Non vengono compilati quando si specifica la [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità di conformità.

## <a name="syntax"></a>Sintassi

> **`__event`** *`member-function-declarator`* **`;`**\
> **`__event`** **`__interface`** *`interface-specifier`* **`;`**\
> **`__event`** *`data-member-declarator`* **`;`**

## <a name="remarks"></a>Commenti

La parola chiave specifica **`__event`** di Microsoft può essere applicata a una dichiarazione di funzione membro, a una dichiarazione di interfaccia o a una dichiarazione di membro dati. Tuttavia, non è possibile usare la **`__event`** parola chiave per qualificare un membro di una classe annidata.

A seconda che l'origine evento e il ricevitore siano C++ nativi, COM o gestiti (.NET Framework), è possibile utilizzare i seguenti costrutti come eventi:

| C++ nativo | COM | Gestito (.NET Framework) |
|--|--|--|
| funzione membro | - | method |
| - | interfaccia | - |
| - | - | membro dati |

Utilizzare [`__hook`](../cpp/hook.md) in un ricevitore di eventi per associare una funzione membro del gestore a una funzione membro di evento. Dopo aver creato un evento con la **`__event`** parola chiave, tutti i gestori eventi collegati a tale evento vengono chiamati quando viene chiamato l'evento.

Una **`__event`** dichiarazione di funzione membro non può avere una definizione. una definizione viene generata in modo implicito, quindi la funzione membro di evento può essere chiamata come se fosse una funzione membro ordinaria.

> [!NOTE]
> Una classe o uno struct basato su modelli non può contenere eventi.

## <a name="native-events"></a>Eventi nativi

Gli eventi nativi sono funzioni membro. Il tipo restituito è in genere `HRESULT` o **`void`** , ma può essere qualsiasi tipo integrale, incluso **`enum`** . Quando un evento utilizza un tipo restituito integrale, viene definita una condizione di errore quando un gestore eventi restituisce un valore diverso da zero. In questo caso, l'evento generato chiama gli altri delegati.

```cpp
// Examples of native C++ events:
__event void OnDblClick();
__event HRESULT OnClick(int* b, char* s);
```

Per il codice di esempio, vedere [gestione degli eventi in C++ nativo](../cpp/event-handling-in-native-cpp.md) .

## <a name="com-events"></a>Eventi COM

Gli eventi COM sono interfacce. I parametri di una funzione membro in un'interfaccia di origine evento devono essere *nei* parametri, ma non vengono applicati rigorosamente. Perché un parametro *out* non è utile quando si esegue il multicast. Se si usa un parametro *out* , viene emesso un avviso di livello 1.

Il tipo restituito è in genere `HRESULT` o **`void`** , ma può essere qualsiasi tipo integrale, incluso **`enum`** . Quando un evento utilizza un tipo restituito integrale e un gestore eventi restituisce un valore diverso da zero, si tratta di una condizione di errore. L'evento generato interrompe le chiamate agli altri delegati. Il compilatore contrassegna automaticamente un'interfaccia di origine evento come [`source`](../windows/attributes/source-cpp.md) nell'IDL generato.

La [`__interface`](../cpp/interface.md) parola chiave è sempre obbligatoria dopo **`__event`** per un'origine evento com.

```cpp
// Example of a COM event:
__event __interface IEvent1;
```

Per il codice di esempio, vedere [gestione degli eventi in com](../cpp/event-handling-in-com.md) .

## <a name="managed-events"></a>Eventi gestiti

Per informazioni sulla codifica di eventi nella nuova sintassi, vedere [evento](../extensions/event-cpp-component-extensions.md).

Gli eventi gestiti sono membri dati o funzioni membro. Quando viene usato con un evento, il tipo restituito di un delegato deve essere conforme al [Common Language Specification](/dotnet/standard/language-independence-and-language-independent-components). Il tipo restituito del gestore eventi deve corrispondere al tipo restituito del delegato. Per ulteriori informazioni sui delegati, vedere [delegati ed eventi](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md). Se un evento gestito è un membro dati, il relativo tipo deve essere un puntatore a un delegato.

In .NET Framework, è possibile trattare un membro dati come se fosse un metodo (ovvero, il metodo `Invoke` del delegato corrispondente). A tale scopo, predefinire il tipo delegato per la dichiarazione di un membro dati evento gestito. Al contrario, un metodo di evento gestito definisce in modo implicito il delegato gestito corrispondente se non è già definito. Ad esempio, è possibile dichiarare un valore dell'evento quale `OnClick` come evento seguente:

```cpp
// Examples of managed events:
__event ClickEventHandler* OnClick;  // data member as event
__event void OnClick(String* s);  // method as event
```

Quando si dichiara in modo implicito un evento gestito, è possibile specificare `add` le `remove` funzioni di accesso e che vengono chiamate quando i gestori eventi vengono aggiunti o rimossi. È inoltre possibile definire la funzione membro che chiama (genera) l'evento dall'esterno della classe.

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

[Parole](../cpp/keywords-cpp.md)\
[Gestione degli eventi](../cpp/event-handling.md)\
[`event_source`](../windows/attributes/event-source.md)\
[`event_receiver`](../windows/attributes/event-receiver.md)\
[`__hook`](../cpp/hook.md)\
[`__unhook`](../cpp/unhook.md)\
[`__raise`](../cpp/raise.md)
