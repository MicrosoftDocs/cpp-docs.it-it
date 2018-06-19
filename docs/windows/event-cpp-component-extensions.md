---
title: eventi (estensioni del componente C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event
- event_cpp
dev_langs:
- C++
helpviewer_keywords:
- event keyword [C++]
ms.assetid: c4998e42-883c-4419-bbf4-36cdc979dd27
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7859b8b58bbd8765c38daea46efea5859ba61d67
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33881211"
---
# <a name="event--c-component-extensions"></a>evento (Estensioni del componente C++)
Il `event` parola chiave dichiara un *evento*, ovvero una notifica agli utenti registrati (*gestori eventi*) che si è verificato qualcosa di interesse.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 C + + CX supporta la dichiarazione di un *membro evento* o *blocco eventi*. Un membro evento è una forma abbreviata per la dichiarazione di un blocco eventi. Per impostazione predefinita, un membro evento dichiara le funzioni `add()`, `remove()` e `raise()` che sono dichiarate in modo esplicito in un blocco eventi. Per personalizzare le funzioni in un membro  evento, dichiarare un blocco eventi e quindi eseguire l'override delle funzioni richieste.  
  
 **Sintassi**  
  
```  
  
// event data member  
modifiereventdelegate^ event_name;     
  
// event block  
modifiereventdelegate^ event_name   
{  
   modifierreturn_valueadd(delegate^ name);  
   modifier void remove(delegate^ name);  
   modifier void raise(parameters);  
}  
```  
  
 **Parametri**  
  
 *Modificatore*  
 Un modificatore che può essere usato in una dichiarazione di evento o in un metodo della funzione di accesso all'evento.  I valori possibili sono `static` e `virtual`.  
  
 *delegate*  
 Il [delegato](../windows/delegate-cpp-component-extensions.md), la cui firma deve corrispondere il gestore dell'evento.  
  
 *event_name*  
 Nome dell'evento.  
  
 *return_value*  
 Il valore restituito del metodo della funzione di accesso all'evento.  Per essere verificabile, il tipo restituito deve essere `void`.  
  
 *Parametri*  
 (facoltativo) Parametri per il `raise` che corrisponde alla firma del metodo di *delegato* parametro.  
  
 **Note**  
  
 Un evento è un'associazione tra un delegato e una funzione membro (gestore eventi) che risponde all'attivazione dell'evento e consente ai client da qualsiasi classe di registrare metodi conformi alla firma e al tipo restituito del delegato sottostante.  
  
 Esistono due tipi di dichiarazioni eventi:  
  
 *membro dati evento*  
 Il compilatore crea automaticamente spazio di archiviazione per l'evento sotto forma di un membro del tipo delegato e crea le funzioni membro interne `add()`, `remove()` e `raise()`. Un membro dati evento deve essere dichiarato all'interno di una classe. Il tipo restituito del delegato deve corrispondere al tipo restituito del gestore eventi.  
  
 *blocco eventi*  
 Un blocco eventi consente di dichiarare in modo esplicito e personalizzare il comportamento dei metodi `add()`, `remove()` e `raise()`.  
  
 È possibile usare `operators+=` e `operator-=` per aggiungere e rimuovere un gestore eventi o chiamare i metodi `add()` e `remove()` in modo esplicito.  
  
 `event` è una parola chiave sensibile al contesto. vedere [le parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md) per altre informazioni.  
  
## <a name="windows-runtime"></a>Windows Runtime  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [eventi (C + + CX)](http://msdn.microsoft.com/library/windows/apps/hh755799.aspx).  
  
 Se si desidera aggiungere e rimuovere un gestore eventi, è necessario salvare la struttura EventRegistrationToken restituita dall'operazione di aggiunta. Quindi, nell'operazione di rimozione è necessario usare la struttura EventRegistrationToken salvata per identificare il gestore eventi da rimuovere.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 La parola chiave `event` consente di dichiarare un evento. Un evento consente a una classe di inviare notifiche quando succede qualcosa di interesse.  
  
 **Sintassi**  
  
```  
  
// event data member  
modifiereventdelegate^ event_name;   
  
// event block  
modifiereventdelegate^ event_name   
{  
   modifierreturn_valueadd(delegate^ name);  
   modifier void remove(delegate^ name);  
   modifier void raise(parameters);  
}  
```  
  
 **Parametri**  
  
 *Modificatore*  
 Un modificatore che può essere usato in una dichiarazione di evento o in un metodo della funzione di accesso all'evento.  I valori possibili sono `static` e `virtual`.  
  
 *delegate*  
 Il [delegato](../windows/delegate-cpp-component-extensions.md), la cui firma deve corrispondere il gestore dell'evento.  
  
 *event_name*  
 Nome dell'evento.  
  
 *return_value*  
 Il valore restituito del metodo della funzione di accesso all'evento.  Per essere verificabile, il tipo restituito deve essere `void`.  
  
 *Parametri*  
 (facoltativo) Parametri per il `raise` che corrisponde alla firma del metodo di *delegato* parametro.  
  
 **Note**  
  
 Un evento è un'associazione tra un delegato e una funzione membro (gestore eventi) che risponde all'attivazione dell'evento e consente ai client da qualsiasi classe di registrare metodi conformi alla firma e al tipo restituito del delegato sottostante.  
  
 Il delegato può avere uno o più metodi associati che verranno chiamati quando il codice indica che si è verificato l'evento. Un evento in un programma può essere reso disponibile per altri programmi destinati a Common Language Runtime di .NET Framework.  
  
 Esistono due tipi di dichiarazioni eventi:  
  
 *membri dati dell'evento*  
 L'archiviazione per l'evento, sotto forma di un membro del tipo delegato, viene creata dal compilatore per gli eventi del membro dati.  Un membro dati evento deve essere dichiarato all'interno di una classe. È anche noto come un evento semplice (vedere l'esempio di codice riportato di seguito).  
  
 *blocchi evento*  
 I blocchi evento consentono di personalizzare il comportamento dei metodi add, remove e raise mediante l'implementazione dei metodi add, remove e raise. La firma dei metodi add, remove e raise deve corrispondere alla firma del delegato.  Gli eventi di blocchi eventi non sono membri di dati e qualsiasi uso di un membro dati genererà un errore del compilatore. 
  
 Il tipo restituito del gestore eventi deve corrispondere al tipo restituito del delegato.  
  
 In .NET Framework, è possibile trattare un membro dati come se fosse un metodo (ovvero, il metodo `Invoke` del delegato corrispondente). È necessario predefinire il tipo delegato per la dichiarazione di un membro dati di eventi gestiti. In contrasto, un metodo dell'evento gestito definisce in modo implicito il delegato gestito corrispondente se questo non è già stato definito.  Vedere l'esempio di codice alla fine di questo argomento.  
  
 Quando si dichiara un evento gestito, si possono specificare le funzioni di accesso add e remove che verranno chiamate quando i gestori eventi vengono aggiunti o rimossi tramite gli operatori += e -=. I metodi add, remove e raise possono essere chiamati in modo esplicito.  
  
 Per creare e usare gli eventi in Visual C++, è necessario eseguire i passaggi seguenti:  
  
1.  Creare o identificare un delegato. Se si definisce un evento personalizzato, è inoltre necessario verificare che vi sia un delegato da usare con la parola chiave `event`. Se l'evento è predefinito, in .NET Framework ad esempio, i consumer dell'evento devono conoscere solo il nome del delegato.  
  
2.  Creare una classe che contenga:  
  
    -   Un evento creato dal delegato.  
  
    -   (facoltativo) Un metodo che verifichi che sia presente un'istanza del delegato dichiarata con la parola chiave `event`. In caso contrario, questa logica deve essere inserita nel codice che genera l'evento.  
  
    -   Metodi che chiamano l'evento. Questi metodi possono essere override di alcune funzionalità della classe di base.  
  
     Questa classe definisce l'evento.  
  
3.  Definire una o più classi che consentano di connettere i metodi all'evento. Ognuna di queste classi verrà associata a uno o più metodi con l'evento nella classe di base.  
  
4.  Usare l'evento:  
  
    -   Creare un oggetto della classe che contiene la dichiarazione dell'evento.  
  
    -   Creare un oggetto della classe che contiene la definizione dell'evento.  
  
 Per ulteriori informazioni su C + + eventi CLI, vedere  
  
-   [Eventi in un'interfaccia](../dotnet/how-to-use-events-in-cpp-cli.md)  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrato come dichiarare coppie di delegati, eventi e gestori eventi; come sottoscrivere (aggiungere) i gestori eventi; come richiamare i gestori eventi; e quindi annullare (rimuovere) i gestori eventi.  
  
```  
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
  
 **Output**  
  
```Output  
OnClick: 7, 3.14159  
  
OnDblClick: Hello  
```  
  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrata la logica usata per generare il metodo `raise` di un evento semplice: se l'evento ha uno o più sottoscrittori, quando si chiama il metodo `raise` in modo implicito o esplicito, viene chiamato il delegato. Se il tipo restituito del delegato non è `void` e se non sono presenti sottoscrittori dell'evento, il metodo `raise` restituisce il valore predefinito per il tipo delegato. Se non sono presenti sottoscrittori dell'evento, la chiamata del metodo `raise` restituisce il controllo e non viene generata alcuna eccezione. Se il tipo restituito del delegato non è `void`, viene restituito il tipo delegato.  
  
```  
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
  
 **Output**  
  
```Output  
0  
  
688  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)