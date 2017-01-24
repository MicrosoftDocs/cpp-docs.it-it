---
title: "__hook | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__hook_cpp"
  - "__hook"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__hook (parola chiave) [C++]"
  - "gestori eventi, connessione di eventi"
ms.assetid: f4cabb10-d293-4c0e-a1d2-4745ef9cc22c
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __hook
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Associa un metodo del gestore a un evento.  
  
## Sintassi  
  
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
  
#### Parametri  
 **&** *SourceClass* `::` *EventMethod*  
 Puntatore al metodo di eventi cui associare il metodo del gestore eventi:  
  
-   Eventi C\+\+ nativi: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.  
  
-   Eventi COM: *SourceClass* è l'interfaccia dell'origine evento e *EventMethod* è uno dei relativi metodi.  
  
-   Eventi gestiti: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.  
  
 `interface`  
 Il nome dell'interfaccia associato a `receiver` solo per i ricevitori di eventi COM in cui il parametro *layout\_dependent* dell'attributo [event\_receiver](../windows/event-receiver.md) è **true**.  
  
 *source*  
 Puntatore a un'istanza dell'origine evento.  A seconda del codice `type` specificato in **event\_receiver**, *source* può essere uno dei seguenti elementi:  
  
-   Un puntatore a un oggetto di origine dell'evento nativo.  
  
-   Un puntatore basato su **IUnknown** \(origine COM\).  
  
-   Un puntatore a un oggetto gestito \(per gli eventi gestiti\).  
  
 **&** *ReceiverClass* `::` `HandlerMethod`  
 Puntatore al metodo del gestore eventi da associare a un evento.  Il gestore viene specificato come metodo di una classe o come un riferimento alla stessa; se non si specifica il nome della classe, `__hook` presuppone che la classe sia la stessa nella quale viene chiamato.  
  
-   Eventi C\+\+ nativi: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.  
  
-   Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi e `HandlerMethod` è uno dei relativi gestori.  
  
-   Eventi gestiti: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.  
  
 `receiver`\(facoltativo\)  
 Puntatore a un'istanza della classe del ricevitore di eventi.  Se non si specifica un ricevitore, l'impostazione predefinita corrisponde alla classe del ricevitore o alla struttura in cui viene chiamato `__hook`.  
  
## Utilizzo  
 Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.  
  
## Note  
 Utilizzare la funzione intrinseca `__hook` in un ricevitore di eventi per associare o dissociare un metodo del gestore con un metodo dell'evento.  Il gestore specificato viene quindi chiamato quando l'origine genera l'evento specificato.  È possibile associare più gestori a un singolo evento o associare più eventi a un singolo gestore.  
  
 Esistono due tipologie di `__hook`.  È possibile utilizzare la prima tipologia \(a quattro argomenti\) nella maggior parte dei casi, in particolare, per i ricevitori di eventi COM in cui il parametro " *layout\_dependent* dell'attributo [event\_receiver](../windows/event-receiver.md) è **false**.  
  
 In questi casi non è necessario associare tutti i metodi in un'interfaccia prima di generare un evento a uno dei metodi; solo il metodo che gestisce l'evento deve essere associato.  È possibile utilizzare la seconda tipologia \(a due argomenti\) di `__hook` solo per i ricevitori di eventi COM in cui *layout\_dependent***\=true**.  
  
 `__hook` restituisce un valore long.  Un valore restituito diverso da zero indica che si è verificato un errore \(gli eventi gestiti generano un'eccezione\).  
  
 Il compilatore controlla l'esistenza di un evento e che la firma dell'evento coincida con la firma del delegato.  
  
 Ad eccezione degli eventi COM, è possibile chiamare `__hook` e `__unhook` all'esterno del ricevitore di eventi.  
  
 Un'alternativa all'utilizzo di `__hook` consiste nell'utilizzare l'operatore \+\=.  
  
 Per informazioni sulla codifica di eventi gestiti con la nuova sintassi, vedere [event](../windows/event-cpp-component-extensions.md).  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## Esempio  
 Per consultare degli esempi, vedere [Gestione di eventi in C\+\+ nativo](../cpp/event-handling-in-native-cpp.md) e [Gestione di eventi in COM](../cpp/event-handling-in-com.md).  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Gestione di eventi](../cpp/event-handling.md)   
 [event\_source](../windows/event-source.md)   
 [event\_receiver](../windows/event-receiver.md)   
 [\_\_unhook](../cpp/unhook.md)   
 [\_\_raise](../cpp/raise.md)