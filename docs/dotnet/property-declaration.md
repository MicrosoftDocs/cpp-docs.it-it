---
title: "Dichiarazione di propriet&#224; | Microsoft Docs"
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
  - "__property (parola chiave)"
  - "dichiarazione di proprietà, C++"
  - "property (parola chiave) [C++]"
ms.assetid: de169378-a8b8-49f4-a586-76bffc9b5c9f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Dichiarazione di propriet&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il modo di dichiarare una proprietà nelle classi gestite è stato modificato in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nella progettazione delle estensioni gestite, ciascuna funzione di accesso alle proprietà `set` o `get` è specificata come metodo indipendente.  La dichiarazione di ciascun metodo è preceduta dalla parola chiave `__property`.  Il nome del metodo inizia con `set_` oppure `get_` seguito dal nome effettivo della proprietà così come viene visualizzata all'utente.  Pertanto, una classe `Vector` che fornisce una proprietà `get` della coordinata `x` assegnerebbe alla proprietà il nome `get_x` e l'utente potrebbe richiamarla come `x`.  Questa convenzione di denominazione e la specifica separata dei metodi riflette l'implementazione in fase di esecuzione sottostante della proprietà.  Di seguito è riportato un esempio di classe `Vector` con un set di proprietà coordinate:  
  
```  
public __gc __sealed class Vector {  
public:  
   __property double get_x(){ return _x; }  
   __property double get_y(){ return _y; }  
   __property double get_z(){ return _z; }  
  
   __property void set_x( double newx ){ _x = newx; }  
   __property void set_y( double newy ){ _y = newy; }  
   __property void set_z( double newz ){ _z = newz; }  
};  
```  
  
 Tale codice disloca le funzionalità associate a una proprietà e richiede all'utente di unificare dal punto di vista lessicale i metodi get e set associati  e risulta inoltre troppo dettagliato.  Nella nuova sintassi, più simile alla sintassi di C\#, la parola chiave `property` è seguita dal tipo e dal solo nome della proprietà.  I metodi di accesso `set` e `get` sono collocati all'interno di un blocco che segue il nome della proprietà.  Tenere presente che, diversamente da C\#, è specificata la firma del metodo di accesso.  Di seguito è riportato l'esempio di codice precedente convertito nella nuova sintassi.  
  
```  
public ref class Vector sealed {   
public:  
   property double x {  
      double get() {  
         return _x;  
      }  
  
      void set( double newx ) {  
         _x = newx;  
      }  
   } // Note: no semi-colon  
};  
```  
  
 Se i metodi di accesso della proprietà riflettono livelli di accesso distinti, ad esempio `public` `get` e `private` oppure `protected` `set`, è possibile specificare un'etichetta di accesso esplicito.  Per impostazione predefinita, il livello di accesso della proprietà riflette quello del livello di accesso che lo contiene.  Nella definizione precedente di `Vector`, ad esempio, i metodi `get` e `set` sono entrambi `public`.  Per rendere il metodo `set` `protected` o `private`, è necessario modificare la definizione come segue:  
  
```  
public ref class Vector sealed {   
public:  
   property double x {  
      double get() {  
         return _x;  
      }  
  
   private:  
      void set( double newx ) {  
         _x = newx;  
      }  
  
   } // note: extent of private culminates here …  
  
// note: dot is a public method of Vector  
double dot( const Vector^ wv );  
  
// etc.  
};  
```  
  
 L'ambito di una parola chiave di accesso all'interno di una proprietà si estende fino alla parentesi graffa di chiusura della proprietà o alla specifica di una parola chiave di accesso aggiuntiva,  ma non si estende oltre la definizione della proprietà al livello di accesso all'interno del quale è definita la proprietà.  Nella dichiarazione precedente, ad esempio, `Vector::dot()` è un metodo pubblico.  
  
 Per scrivere le proprietà set\/get per le tre coordinate `Vector` è necessario eseguire le tre operazioni seguenti:  
  
1.  dichiarare un membro di stato privato del tipo appropriato.  
  
2.  restituirlo quando l'utente desidera ottenerne il valore.  
  
3.  assegnargli il nuovo valore.  
  
 Nella nuova sintassi, è disponibile una sintassi della proprietà abbreviata che automatizza il criterio di utilizzo:  
  
```  
public ref class Vector sealed {   
public:  
   // equivalent shorthand property syntax  
   property double x;   
   property double y;  
   property double z;  
};  
```  
  
 Un interessante effetto collaterale della sintassi della proprietà abbreviata è che mentre il membro di stato viene generato dal compilatore, non è accessibile all'interno della classe se non mediante le funzioni di accesso set\/get.  
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [property](../windows/property-cpp-component-extensions.md)