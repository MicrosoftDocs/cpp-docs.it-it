---
title: "Delegati ed eventi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__delegate (parola chiave)"
  - "__event (parola chiave) [C++]"
  - "delegate (parola chiave) [C++]"
  - "delegati [C++], aggiornamento dalle estensioni gestite per C++"
  - "event (parola chiave) [C++]"
  - "eventi (C++), aggiornamento dalle estensioni gestite per C++"
ms.assetid: 3505c626-7e5f-4492-a947-0e2248f7b84a
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Delegati ed eventi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il modo in cui vengono dichiarati delegati ed eventi è stato modificato in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Il doppio carattere di sottolineatura non è più necessario, come illustrato nell'esempio seguente.  Di seguito è riportato un codice di esempio nelle estensioni gestite:  
  
```  
__delegate void ClickEventHandler(int, double);  
__delegate void DblClickEventHandler(String*);  
  
__gc class EventSource {  
   __event ClickEventHandler* OnClick;    
   __event DblClickEventHandler* OnDblClick;    
};  
```  
  
 Lo stesso codice nella nuova sintassi ha l'aspetto seguente:  
  
```  
delegate void ClickEventHandler( int, double );  
delegate void DblClickEventHandler( String^ );  
  
ref class EventSource {  
   event ClickEventHandler^ OnClick;   
   event DblClickEventHandler^ OnDblClick;   
};  
```  
  
 Eventi e delegati sono tipi di riferimento, come risulta chiaro nella nuova sintassi grazie all'utilizzo dell'accento circonflesso \(`^`\).  Gli eventi supportano una sintassi di dichiarazione esplicita e il formato semplice nel codice precedente.  Nella forma esplicita, l'utente specifica i metodi `add`, `raise` e `remove` associati all'evento. Sono obbligatori soltanto i metodi `add` e `remove`. Il metodo `raise` è facoltativo.  
  
 Nelle estensioni gestite, se si forniscono questi metodi, non è necessario fornire una dichiarazione di evento esplicita, ma è tuttavia necessario decidere un nome per l'evento che non è presente.  Ogni metodo viene specificato nel formato `add_EventName`, `raise_EventName` e `remove_EventName`, come nell'esempio riportato di seguito tratto dalla specifica delle estensioni gestite:  
  
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
  
 Nella nuova sintassi la dichiarazione risulta semplificata, come illustrato nella conversione riportata di seguito.  Un evento specifica i due o tre metodi tra parentesi graffe immediatamente dopo la dichiarazione dell'evento e il tipo delegato associato, come illustrato di seguito:  
  
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
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [delegato](../windows/delegate-cpp-component-extensions.md)   
 [event](../windows/event-cpp-component-extensions.md)