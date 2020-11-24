---
title: parola chiave Event (C++/CLI e C++/CX)
description: Informazioni su come usare la parola chiave delle estensioni dei componenti di Microsoft C++ `event` .
ms.date: 11/20/2020
ms.topic: reference
f1_keywords:
- event
- event_cpp
helpviewer_keywords:
- event keyword [C++]
ms.openlocfilehash: 6a2fa97140f747b4afc380b57f8f7c71f08875db
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483243"
---
# <a name="event-keyword-ccli-and-ccx"></a>`event` parola chiave (C++/CLI e C++/CX)

La **`event`** parola chiave dichiara un *evento*, ovvero una notifica ai sottoscrittori registrati (*gestori eventi*) di cui si è verificato qualcosa di interesse.

## <a name="all-runtimes"></a>Tutti i runtime

C++/CX supporta la dichiarazione di un *membro evento* o di un *blocco eventi*. Un membro evento è una forma abbreviata per la dichiarazione di un blocco eventi. Per impostazione predefinita, un membro evento dichiara le funzioni `add`, `remove` e `raise` che sono dichiarate in modo esplicito in un blocco eventi. Per personalizzare le funzioni in un membro  evento, dichiarare un blocco eventi e quindi eseguire l'override delle funzioni richieste.

### <a name="syntax"></a>Sintassi

```cpp
// event data member
modifier event delegate^ event_name;

// event block
modifier event delegate^ event_name
{
   modifier return_value add(delegate^ name);
   modifier void remove(delegate^ name);
   modifier void raise(parameters);
}
```

### <a name="parameters"></a>Parametri

*modificatore*\
Un modificatore che può essere usato in una dichiarazione di evento o in un metodo della funzione di accesso all'evento.  I valori possibili sono **`static`** e **`virtual`** .

*Delegato*\
[Delegato](delegate-cpp-component-extensions.md), la firma deve corrispondere al gestore dell'evento.

*event_name*\
Nome dell'evento.

*return_value*\
Il valore restituito del metodo della funzione di accesso all'evento.  Per essere verificabile, il tipo restituito deve essere **`void`** .

*parametri*\
(Facoltativo) Parametri per il metodo `raise` che corrispondono alla firma del parametro *delegate*.

### <a name="remarks"></a>Commenti

Un evento è un'associazione tra un delegato e un *gestore eventi*. Un gestore eventi è una funzione membro che risponde quando viene attivato l'evento. Consente ai client di qualsiasi classe di registrare metodi che corrispondono alla firma e al tipo restituito del delegato.

Esistono due tipi di dichiarazioni eventi:

*membro dati evento*\
Il compilatore crea automaticamente spazio di archiviazione per l'evento sotto forma di un membro del tipo delegato e crea le funzioni membro interne `add`, `remove` e `raise`. Un membro dati evento deve essere dichiarato all'interno di una classe. Il tipo restituito del delegato deve corrispondere al tipo restituito del gestore eventi.

*blocco eventi*\
Un blocco eventi consente di dichiarare in modo esplicito e personalizzare il comportamento dei metodi `add`, `remove` e `raise`.

È possibile utilizzare `operator +=` e `operator -=` per aggiungere e rimuovere un gestore eventi oppure chiamare in `add` `remove` modo esplicito i metodi e.

**`event`** è una parola chiave sensibile al contesto. Per altre informazioni, vedere [parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Commenti

Per altre informazioni, vedere [Eventi (C++/CX)](../cppcx/events-c-cx.md).

Per aggiungere e successivamente rimuovere un gestore eventi, salvare la `EventRegistrationToken` struttura restituita dall' `add` operazione. Quindi, nell' `remove` operazione, usare la struttura salvata `EventRegistrationToken` per identificare il gestore eventi da rimuovere.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

La parola chiave **event** permette di dichiarare un evento. Un evento consente a una classe di inviare notifiche quando succede qualcosa di interesse.

### <a name="syntax"></a>Sintassi

```cpp
// event data member
modifier event delegate^ event_name;

// event block
modifier event delegate^ event_name
{
   modifier return_value add(delegate^ name);
   modifier void remove(delegate^ name);
   modifier void raise(parameters);
}
```

### <a name="parameters"></a>Parametri

*modificatore*\
Un modificatore che può essere usato in una dichiarazione di evento o in un metodo della funzione di accesso all'evento.  I valori possibili sono **`static`** e **`virtual`** .

*Delegato*\
[Delegato](delegate-cpp-component-extensions.md), la firma deve corrispondere al gestore dell'evento.

*event_name*\
Nome dell'evento.

*return_value*\
Il valore restituito del metodo della funzione di accesso all'evento.  Per essere verificabile, il tipo restituito deve essere **`void`** .

*parametri*\
(Facoltativo) Parametri per il metodo `raise` che corrispondono alla firma del parametro *delegate*.

### <a name="remarks"></a>Commenti

Un evento è un'associazione tra un delegato e un *gestore eventi*. Un gestore eventi è una funzione membro che risponde quando viene attivato l'evento. Consente ai client di qualsiasi classe di registrare metodi che corrispondono alla firma e al tipo restituito del delegato sottostante.

Il delegato può avere uno o più metodi associati. Questi metodi vengono chiamati quando il codice indica che si è verificato l'evento. Un evento in un programma può essere reso disponibile per altri programmi destinati a Common Language Runtime di .NET Framework.

Esistono due tipi di dichiarazioni di evento:

*membri dati evento*\
Il compilatore crea l'archiviazione per gli eventi del membro dati come membro del tipo delegato. Un membro dati evento deve essere dichiarato all'interno di una classe. È anche noto come un *semplice evento*. Per un esempio, vedere l'esempio di codice.

*blocchi eventi*\
I blocchi eventi consentono di personalizzare il comportamento dei `add` `remove` metodi, e `raise` , implementando i `add` `remove` metodi, e `raise` . La firma dei `add` metodi, `remove` e `raise` deve corrispondere alla firma del delegato. Gli eventi di blocco eventi non sono membri dati. Qualsiasi utilizzo come membro dati genera un errore del compilatore.

Il tipo restituito del gestore eventi deve corrispondere al tipo restituito del delegato.

In .NET Framework, è possibile trattare un membro dati come se fosse un metodo (ovvero, il metodo `Invoke` del delegato corrispondente). A tale scopo, predefinire il tipo delegato per la dichiarazione di un membro dati evento gestito. Al contrario, un metodo di evento gestito definisce in modo implicito il delegato gestito corrispondente se non è già definito. Per un esempio, vedere l'esempio di codice alla fine di questo articolo.

Quando si dichiara un evento gestito, è possibile specificare `add` le `remove` funzioni di accesso e che verranno chiamate quando i gestori eventi vengono aggiunti o rimossi usando gli operatori **`+=`** e **`-=`** . I `add` `remove` metodi, e `raise` possono essere chiamati in modo esplicito.

Per creare e usare eventi in Microsoft C++, è necessario eseguire i passaggi seguenti:

1. Creare o identificare un delegato. Se si definisce un evento personalizzato, è inoltre necessario assicurarsi che esista un delegato da usare con la **`event`** parola chiave. Se l'evento è predefinito, in .NET Framework ad esempio, i consumer dell'evento devono conoscere solo il nome del delegato.

2. Creare una classe che contenga:

   - Un evento creato dal delegato.

   - Opzionale Metodo che verifica che esista un'istanza del delegato dichiarato con la **`event`** parola chiave. In caso contrario, questa logica deve essere inserita nel codice che genera l'evento.

   - Metodi che chiamano l'evento. Questi metodi possono essere override di alcune funzionalità della classe di base.

   Questa classe definisce l'evento.

3. Definire una o più classi che consentano di connettere i metodi all'evento. Ognuna di queste classi verrà associata a uno o più metodi con l'evento nella classe di base.

4. Usare l'evento:

   - Creare un oggetto della classe che contiene la dichiarazione dell'evento.

   - Creare un oggetto della classe che contiene la definizione dell'evento.

Per ulteriori informazioni sugli eventi C++/CLI, vedere [eventi in un'interfaccia](../dotnet/how-to-use-events-in-cpp-cli.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Nell'esempio di codice riportato di seguito viene illustrata la dichiarazione di coppie di delegati, eventi e gestori eventi. Viene illustrato come sottoscrivere (aggiungere), richiamare e quindi annullare la sottoscrizione (rimuovere) i gestori eventi.

```cpp
// mcppv2_events.cpp
// compile with: /clr
using namespace System;

// declare delegates
delegate void ClickEventHandler(int, double);
delegate void DblClickEventHandler(String^);

// class that defines events
ref class EventSource {
public:
   event ClickEventHandler^ OnClick;   // declare the event OnClick
   event DblClickEventHandler^ OnDblClick;   // declare OnDblClick

   void FireEvents() {
      // raises events
      OnClick(7, 3.14159);
      OnDblClick("Hello");
   }
};

// class that defines methods that will called when event occurs
ref class EventReceiver {
public:
   void OnMyClick(int i, double d) {
      Console::WriteLine("OnClick: {0}, {1}", i, d);
   }

   void OnMyDblClick(String^ str) {
      Console::WriteLine("OnDblClick: {0}", str);
   }
};

int main() {
   EventSource ^ MyEventSource = gcnew EventSource();
   EventReceiver^ MyEventReceiver = gcnew EventReceiver();

   // hook handler to event
   MyEventSource->OnClick += gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);
   MyEventSource->OnDblClick += gcnew DblClickEventHandler(MyEventReceiver, &EventReceiver::OnMyDblClick);

   // invoke events
   MyEventSource->FireEvents();

   // unhook handler to event
   MyEventSource->OnClick -= gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);
   MyEventSource->OnDblClick -= gcnew DblClickEventHandler(MyEventReceiver, &EventReceiver::OnMyDblClick);
}
```

```Output
OnClick: 7, 3.14159

OnDblClick: Hello
```

Nell'esempio di codice riportato di seguito viene illustrata la logica utilizzata per generare il `raise` metodo di un evento Trivial. Se l'evento ha uno o più sottoscrittori, la chiamata del metodo `raise` chiama in modo implicito o esplicito il delegato. Se il tipo restituito del delegato non è **`void`** e se sono presenti sottoscrittori di eventi zero, il `raise` metodo restituisce il valore predefinito per il tipo delegato. Se non sono presenti sottoscrittori di eventi, la chiamata al `raise` metodo restituisce immediatamente e non viene generata alcuna eccezione. Se il tipo restituito del delegato non è **`void`** , viene restituito il tipo delegato.

```cpp
// trivial_events.cpp
// compile with: /clr /c
using namespace System;
public delegate int Del();
public ref struct C {
   int i;
   event Del^ MyEvent;

   void FireEvent() {
      i = MyEvent();
   }
};

ref struct EventReceiver {
   int OnMyClick() { return 0; }
};

int main() {
   C c;
   c.i = 687;

   c.FireEvent();
   Console::WriteLine(c.i);
   c.i = 688;

   EventReceiver^ MyEventReceiver = gcnew EventReceiver();
   c.MyEvent += gcnew Del(MyEventReceiver, &EventReceiver::OnMyClick);
   Console::WriteLine(c.i);
}
```

```Output
0

688
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)
