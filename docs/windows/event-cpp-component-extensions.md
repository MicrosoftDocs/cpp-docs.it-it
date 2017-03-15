---
title: "event  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "event"
  - "event_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event keyword [C++]"
ms.assetid: c4998e42-883c-4419-bbf4-36cdc979dd27
caps.latest.revision: 34
caps.handback.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# event  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `event` dichiara un *evento*, ovvero una notifica agli utenti registrati \(*gestori eventi*\) che si è verificato qualcosa di interesse.  
  
## Tutti i runtime  
 C\+\+\/CX supporta la dichiarazione di un *membro evento* o di un *blocco eventi*.  Un membro evento è una forma abbreviata per la dichiarazione di un blocco eventi.  Per impostazione predefinita, un membro evento dichiara le funzioni `add()`, `remove()` e `raise()` che sono dichiarate in modo esplicito in un blocco eventi.  Per personalizzare le funzioni in un membro  evento, dichiarare un blocco eventi e quindi eseguire l'override delle funzioni richieste.  
  
 **Sintassi**  
  
```  
  
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
  
 **Parametri**  
  
 *modifier*  
 Un modificatore che può essere usato in una dichiarazione di evento o in un metodo della funzione di accesso all'evento.  I valori possibili sono `static` e `virtual`.  
  
 *delegate*  
 Il [delegato](../windows/delegate-cpp-component-extensions.md), la cui firma deve corrispondere al gestore dell'evento.  
  
 *event\_name*  
 Nome dell'evento.  
  
 *return\_value*  
 Il valore restituito del metodo della funzione di accesso all'evento.  Per essere verificabile, il tipo restituito deve essere `void`.  
  
 *parameters*  
 \(facoltativo\) Parametri per il metodo `raise` che corrisponde alla firma del parametro *delegate*.  
  
 **Note**  
  
 Un evento è un'associazione tra un delegato e una funzione membro \(gestore eventi\) che risponde all'attivazione dell'evento e consente ai client da qualsiasi classe di registrare metodi conformi alla firma e al tipo restituito del delegato sottostante.  
  
 Esistono due tipi di dichiarazioni eventi:  
  
 *membro dati evento*  
 Il compilatore crea automaticamente spazio di archiviazione per l'evento sotto forma di un membro del tipo delegato e crea le funzioni membro interne `add()`, `remove()` e `raise()`.  Un membro dati evento deve essere dichiarato all'interno di una classe.  Il tipo restituito del delegato deve corrispondere al tipo restituito del gestore eventi.  
  
 *blocco eventi*  
 Un blocco eventi consente di dichiarare in modo esplicito e personalizzare il comportamento dei metodi `add()`, `remove()` e `raise()`.  
  
 È possibile usare `operators+=` e `operator-=` per aggiungere e rimuovere un gestore eventi o chiamare i metodi `add()` e `remove()` in modo esplicito.  
  
 `event` è una parola chiave sensibile al contesto. Per altre informazioni, vedere [Parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
  
### Note  
 Per altre informazioni, vedere [Eventi \(C\+\+\/CX\)](http://msdn.microsoft.com/library/windows/apps/hh755799.aspx).  
  
 Se si desidera aggiungere e rimuovere un gestore eventi, è necessario salvare la struttura EventRegistrationToken restituita dall'operazione di aggiunta.  Quindi, nell'operazione di rimozione è necessario usare la struttura EventRegistrationToken salvata per identificare il gestore eventi da rimuovere.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 La parola chiave `event` consente di dichiarare un evento.  Un evento consente a una classe di inviare notifiche quando succede qualcosa di interesse.  
  
 **Sintassi**  
  
```  
  
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
  
 **Parametri**  
  
 *modifier*  
 Un modificatore che può essere usato in una dichiarazione di evento o in un metodo della funzione di accesso all'evento.  I valori possibili sono `static` e `virtual`.  
  
 *delegate*  
 Il [delegato](../windows/delegate-cpp-component-extensions.md), la cui firma deve corrispondere al gestore dell'evento.  
  
 *event\_name*  
 Nome dell'evento.  
  
 *return\_value*  
 Il valore restituito del metodo della funzione di accesso all'evento.  Per essere verificabile, il tipo restituito deve essere `void`.  
  
 *parameters*  
 \(facoltativo\) Parametri per il metodo `raise` che corrisponde alla firma del parametro *delegate*.  
  
 **Note**  
  
 Un evento è un'associazione tra un delegato e una funzione membro \(gestore eventi\) che risponde all'attivazione dell'evento e consente ai client da qualsiasi classe di registrare metodi conformi alla firma e al tipo restituito del delegato sottostante.  
  
 Il delegato può avere uno o più metodi associati che verranno chiamati quando il codice indica che si è verificato l'evento.  Un evento in un programma può essere reso disponibile per altri programmi destinati a Common Language Runtime di .NET Framework.  Per un esempio, vedere [Generare un evento definito in un assembly diverso](../misc/how-to-raise-events-defined-in-a-different-assembly.md).  
  
 Esistono due tipi di dichiarazioni eventi:  
  
 *membri dati evento*  
 L'archiviazione per l'evento, sotto forma di un membro del tipo delegato, viene creata dal compilatore per gli eventi del membro dati.  Un membro dati evento deve essere dichiarato all'interno di una classe.  È anche noto come un evento semplice \(vedere l'esempio di codice riportato di seguito\).  
  
 *blocchi evento*  
 I blocchi evento consentono di personalizzare il comportamento dei metodi add, remove e raise mediante l'implementazione dei metodi add, remove e raise.  La firma dei metodi add, remove e raise deve corrispondere alla firma del delegato.  Gli eventi di blocchi eventi non sono membri di dati e qualsiasi uso di un membro dati genererà un errore del compilatore.  Per un esempio, vedere [Definizione dei metodi della funzione di accesso agli eventi](../misc/how-to-define-event-accessor-methods.md).  
  
 Il tipo restituito del gestore eventi deve corrispondere al tipo restituito del delegato.  
  
 In .NET Framework, è possibile trattare un membro dati come se fosse un metodo \(ovvero, il metodo `Invoke` del delegato corrispondente\).  È necessario predefinire il tipo delegato per la dichiarazione di un membro dati di eventi gestiti.  In contrasto, un metodo dell'evento gestito definisce in modo implicito il delegato gestito corrispondente se questo non è già stato definito.  Vedere l'esempio di codice alla fine di questo argomento.  
  
 Quando si dichiara un evento gestito, si possono specificare le funzioni di accesso add e remove che verranno chiamate quando i gestori eventi vengono aggiunti o rimossi tramite gli operatori \+\= e \-\=.  I metodi add, remove e raise possono essere chiamati in modo esplicito.  
  
 Per creare e usare gli eventi in Visual C\+\+, è necessario eseguire i passaggi seguenti:  
  
1.  Creare o identificare un delegato.  Se si definisce un evento personalizzato, è inoltre necessario verificare che vi sia un delegato da usare con la parola chiave `event`.  Se l'evento è predefinito, in .NET Framework ad esempio, i consumer dell'evento devono conoscere solo il nome del delegato.  
  
2.  Creare una classe che contenga:  
  
    -   Un evento creato dal delegato.  
  
    -   \(facoltativo\) Un metodo che verifichi che sia presente un'istanza del delegato dichiarata con la parola chiave `event`.  In caso contrario, questa logica deve essere inserita nel codice che genera l'evento.  
  
    -   Metodi che chiamano l'evento.  Questi metodi possono essere override di alcune funzionalità della classe di base.  
  
     Questa classe definisce l'evento.  
  
3.  Definire una o più classi che consentano di connettere i metodi all'evento.  Ognuna di queste classi verrà associata a uno o più metodi con l'evento nella classe di base.  
  
4.  Usare l'evento:  
  
    -   Creare un oggetto della classe che contiene la dichiarazione dell'evento.  
  
    -   Creare un oggetto della classe che contiene la definizione dell'evento.  
  
 Per altre informazioni sugli eventi [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)], vedere  
  
-   [Eventi in un'interfaccia](../dotnet/how-to-use-events-in-cpp-cli.md)  
  
-   [Eseguire l'override dell'accesso predefinito dei metodi add, rekove e raise](../misc/how-to-override-default-access-of-add-remove-and-raise-methods.md)  
  
-   [Più gestori per un evento](../misc/how-to-add-multiple-handlers-to-events.md)  
  
-   [Eventi virtuali gestiti](../misc/how-to-implement-managed-virtual-events.md)  
  
-   [Metodi della funzione di accesso agli eventi](../misc/how-to-define-event-accessor-methods.md)  
  
-   [Eventi statici](../misc/how-to-define-and-use-static-events.md)  
  
-   [Generazione di un evento definito in un assembly diverso](../misc/how-to-raise-events-defined-in-a-different-assembly.md)  
  
-   [Eventi astratti](../misc/how-to-implement-abstract-events.md)  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrato come dichiarare coppie di delegati, eventi e gestori eventi; come sottoscrivere \(aggiungere\) i gestori eventi; come richiamare i gestori eventi; e quindi annullare \(rimuovere\) i gestori eventi.  
  
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
  
  **OnClick: 7, 3.14159**  
 **OnDblClick: Hello** **Esempio**  
  
 Nell'esempio di codice seguente viene illustrata la logica usata per generare il metodo `raise` di un evento semplice: se l'evento ha uno o più sottoscrittori, quando si chiama il metodo `raise` in modo implicito o esplicito, viene chiamato il delegato.  Se il tipo restituito del delegato non è `void` e se non sono presenti sottoscrittori dell'evento, il metodo `raise` restituisce il valore predefinito per il tipo delegato.  Se non sono presenti sottoscrittori dell'evento, la chiamata del metodo `raise` restituisce il controllo e non viene generata alcuna eccezione.  Se il tipo restituito del delegato non è `void`, viene restituito il tipo delegato.  
  
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
  
  **0**  
 **688**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)