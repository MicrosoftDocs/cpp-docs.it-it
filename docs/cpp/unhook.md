---
title: "__unhook | Microsoft Docs"
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
  - "__unhook"
  - "__unhook_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__unhook (parola chiave) [C++]"
  - "gestori eventi, dissociazione di eventi"
ms.assetid: 953a14f3-5199-459d-81e5-fcf015a19878
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __unhook
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dissocia un metodo del gestore da un evento.  
  
## Sintassi  
  
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
  
#### Parametri  
 **&** *SourceClass* `::` *EventMethod*  
 Puntatore al metodo dell'evento da cui eseguire l'unhook del metodo del gestore eventi:  
  
-   Eventi C\+\+ nativi: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.  
  
-   Eventi COM: *SourceClass* è l'interfaccia dell'origine evento e *EventMethod* è uno dei relativi metodi.  
  
-   Eventi gestiti: *SourceClass* è la classe dell'origine evento e *EventMethod* è l'evento.  
  
 `interface`  
 Il nome dell'interfaccia è sottoposto ad unhook da `receiver` solo per i ricevitori di eventi COM in cui il parametro *layout\_dependent* dell'attributo [event\_receiver](../windows/event-receiver.md) è **true**.  
  
 *source*  
 Puntatore a un'istanza dell'origine evento.  A seconda del codice `type` specificato in **event\_receiver**, *source* può essere uno dei seguenti elementi:  
  
-   Un puntatore a un oggetto di origine dell'evento nativo.  
  
-   Un puntatore basato su **IUnknown** \(origine COM\).  
  
-   Un puntatore a un oggetto gestito \(per gli eventi gestiti\).  
  
 **&** *ReceiverClass* `::` `HandlerMethod`  
 Puntatore al metodo del gestore eventi per cui eseguire l'unhook da un evento.  Il gestore viene specificato come metodo di una classe o come un riferimento alla stessa; se non si specifica il nome della classe, `__unhook` presuppone che la classe sia la stessa nella quale viene chiamato.  
  
-   Eventi C\+\+ nativi: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.  
  
-   Eventi COM: *ReceiverClass* è l'interfaccia del ricevitore di eventi e `HandlerMethod` è uno dei relativi gestori.  
  
-   Eventi gestiti: *ReceiverClass* è la classe del ricevitore di eventi e `HandlerMethod` è il gestore.  
  
 `receiver`\(facoltativo\)  
 Puntatore a un'istanza della classe del ricevitore di eventi.  Se non si specifica un ricevitore, l'impostazione predefinita corrisponde alla classe del ricevitore o alla struttura in cui viene chiamato `__unhook`.  
  
## Utilizzo  
 Può essere utilizzato in qualunque ambito della funzione, incluso il principale, all'esterno della classe del ricevitore di eventi.  
  
## Note  
 Utilizzare la funzione intrinseca `__unhook` in un ricevitore di eventi per dissociare o "eseguire l'unhook" di un metodo del gestore da un metodo dell'evento.  
  
 Esistono tre tipologie di `__unhook`.  Nella maggior parte dei casi, è possibile utilizzare la prima tipologia \(a quattro argomenti\).  È possibile utilizzare la seconda tipologia \(a due argomenti\) di `__unhook` solo per i ricevitori di eventi COM; in questo modo si esegue l'unhook dell'intera interfaccia eventi.  È possibile utilizzare la terza tipologia \(a un argomento\) per eseguire l'unhook di tutti i delegati dall'origine specificata.  
  
 Un valore restituito diverso da zero indica che si è verificato un errore \(gli eventi gestiti generano un'eccezione\).  
  
 Se si chiama `__unhook` per un evento e per un gestore eventi non ancora collegati, l'operazione non avrà alcun effetto.  
  
 In fase di compilazione, il compilatore verifica l'esistenza dell'evento ed effettua il controllo del tipo di parametro con il gestore specificato.  
  
 Ad eccezione degli eventi COM, è possibile chiamare `__hook` e `__unhook` all'esterno del ricevitore di eventi.  
  
 Un'alternativa all'utilizzo di `__unhook` consiste nell'utilizzare l'operatore \- \=.  
  
 Per informazioni sulla codifica di eventi gestiti con la nuova sintassi, vedere [event](../windows/event-cpp-component-extensions.md).  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## Esempio  
 Per consultare degli esempi, vedere [Gestione di eventi in C\+\+ nativo](../cpp/event-handling-in-native-cpp.md) e [Gestione di eventi in COM](../cpp/event-handling-in-com.md).  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [event\_source](../windows/event-source.md)   
 [event\_receiver](../windows/event-receiver.md)   
 [\_\_event](../cpp/event.md)   
 [\_\_hook](../cpp/hook.md)   
 [\_\_raise](../cpp/raise.md)