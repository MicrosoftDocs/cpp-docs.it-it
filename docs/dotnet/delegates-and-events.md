---
title: Delegati ed eventi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- __event keyword [C++]
- delegate keyword [C++]
- delegates [C++], upgrading from Managed Extensions for C++
- __delegate keyword
- events [C++], upgrading from Managed Extensions for C++
- event keyword [C++]
ms.assetid: 3505c626-7e5f-4492-a947-0e2248f7b84a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e332c24d30d0439705b6be5e0748518f6537478d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="delegates-and-events"></a>Delegati ed eventi
La modalità per dichiarare i delegati ed eventi è cambiato da estensioni gestite per C++ a Visual C++.  
  
 Doppio carattere di sottolineatura non è più necessario, come illustrato nell'esempio seguente. Ecco un codice di esempio nelle estensioni gestite:  
  
```  
__delegate void ClickEventHandler(int, double);  
__delegate void DblClickEventHandler(String*);  
  
__gc class EventSource {  
   __event ClickEventHandler* OnClick;    
   __event DblClickEventHandler* OnDblClick;    
};  
```  
  
 Lo stesso codice nella nuova sintassi è simile al seguente:  
  
```  
delegate void ClickEventHandler( int, double );  
delegate void DblClickEventHandler( String^ );  
  
ref class EventSource {  
   event ClickEventHandler^ OnClick;   
   event DblClickEventHandler^ OnDblClick;   
};  
```  
  
 Gli eventi e delegati sono tipi di riferimento, risulta chiaro nella nuova sintassi grazie all'uso di una forma di accento circonflesso (`^`).  Gli eventi supportano una sintassi di dichiarazione esplicita sia il formato semplice nel codice precedente. Nella forma esplicita, l'utente specifica il `add`, `raise`, e `remove` metodi associati all'evento. (Solo il `add` e `remove` sono obbligatori metodi; `raise` è facoltativo.)  
  
 Nelle estensioni gestite, se si forniscono questi metodi, non si forniscono anche una dichiarazione di evento esplicita, ma è necessario scegliere un nome per l'evento che non è presente. Ogni metodo viene specificato nel formato `add_EventName`, `raise_EventName`, e `remove_EventName`, come nell'esempio seguente, tratto dalla specifica delle estensioni gestite:  
  
```  
// explicit implementations of add, remove, raise  
public __delegate void f(int);  
public __gc struct E {  
   f* _E;  
public:  
   E() { _E = 0; }  
  
   __event void add_E1(f* d) { _E += d; }  
  
   static void Go() {  
      E* pE = new E;  
      pE->E1 += new f(pE, &E::handler);  
      pE->E1(17);   
      pE->E1 -= new f(pE, &E::handler);  
      pE->E1(17);   
   }  
  
private:  
   __event void raise_E1(int i) {  
      if (_E)  
         _E(i);  
   }  
  
protected:  
   __event void remove_E1(f* d) {  
      _E -= d;  
   }  
};  
```  
  
 La nuova sintassi semplifica la dichiarazione, come illustrato di seguito la conversione seguente. Un evento specifica due o tre metodi racchiuso tra parentesi graffe e posizionato immediatamente dopo la dichiarazione dell'evento e il tipo di delegato associato, come illustrato di seguito:  
  
```  
public delegate void f( int );  
public ref struct E {  
private:  
   f^ _E; // delegates are also reference types  
  
public:  
   E() {  // note the replacement of 0 with nullptr!  
      _E = nullptr;   
   }  
  
   // the new aggregate syntax of an explicit event declaration  
   event f^ E1 {  
   public:  
      void add( f^ d ) {  
         _E += d;  
      }  
  
   protected:  
      void remove( f^ d ) {  
         _E -= d;  
      }  
  
   private:  
      void raise( int i ) {  
         if ( _E )  
            _E( i );  
      }  
   }  
  
   static void Go() {  
      E^ pE = gcnew E;  
      pE->E1 += gcnew f( pE, &E::handler );  
      pE->E1( 17 );   
      pE->E1 -= gcnew f( pE, &E::handler );  
      pE->E1( 17 );   
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di membro all'interno di una classe o interfaccia (C + c++ /CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [delegato (estensioni del componente C++)](../windows/delegate-cpp-component-extensions.md)   
 [event](../windows/event-cpp-component-extensions.md)