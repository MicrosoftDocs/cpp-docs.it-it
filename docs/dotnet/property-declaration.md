---
title: Dichiarazione di proprietà | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- __property keyword
- declaring properties, C++
- property keyword [C++]
ms.assetid: de169378-a8b8-49f4-a586-76bffc9b5c9f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: bc2cf76384078e579756abe653fb45fd1e97707f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="property-declaration"></a>Dichiarazione di proprietà
Il modo per dichiarare una proprietà in una classe gestita è cambiato da estensioni gestite per C++ a Visual C++.  
  
 Nelle estensioni gestite di progettazione, ogni `set` o `get` accesso alla proprietà viene specificato come metodo indipendente. La dichiarazione di ogni metodo è provvisto di `__property` (parola chiave). Il nome del metodo inizia con `set_` o `get_` seguito dal nome effettivo della proprietà (come visibile all'utente). Di conseguenza, un `Vector` fornendo un `x` coordinare `get` il nome proprietà `get_x` e l'utente potrebbe richiamarla come `x`. Questa convenzione di denominazione e specifica distinta dei metodi riflette l'implementazione di runtime sottostante della proprietà. Ad esempio, ecco il nostro `Vector` con un set di proprietà coordinate:  
  
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
  
 Questo si estende la funzionalità associata a una proprietà e richiede all'utente di livello lessicale unificare Ottiene e set associati. Inoltre, è dettagliato. Nella nuova sintassi, che è più simile a quella di c#, la `property` parola chiave sia seguita dal tipo di proprietà e il relativo nome non decorato. Il `set` e `get` metodi di accesso vengono posizionati all'interno di un blocco che segue il nome della proprietà. Si noti che, diversamente da c#, viene specificata la firma del metodo di accesso. Ad esempio, ecco l'esempio di codice precedente convertito nella nuova sintassi.  
  
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
  
 Se i metodi di accesso della proprietà riflettono livelli di accesso distinti, ad esempio un `public get` e `private` o `protected set`, è possibile specificare un'etichetta di accesso esplicita. Per impostazione predefinita, il livello di accesso della proprietà corrisponde a quello del livello di accesso. Ad esempio, nella definizione precedente di `Vector`, entrambi i `get` e `set` metodi sono `public`. Per rendere il `set` metodo `protected` o `private`, la definizione è necessario modificare come indicato di seguito:  
  
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
  
   } // note: extent of private culminates here  
  
// note: dot is a public method of Vector  
double dot( const Vector^ wv );  
  
// etc.  
};  
```  
  
 L'ambito di una parola chiave di accesso all'interno di una proprietà si estende fino alla parentesi di chiusura della proprietà o la specifica di una parola chiave di accesso aggiuntivo. Non si estende oltre la definizione della proprietà a livello di accesso all'interno del quale la proprietà è definita. Nella dichiarazione precedente, ad esempio, `Vector::dot()` è un metodo pubblico.  
  
 Per scrivere le proprietà del set/get per le tre `Vector` coordinate comporta tre passaggi:  
  
1.  dichiarare un membro di uno stato privato del tipo appropriato.  
  
2.  restituirlo quando l'utente desidera ottenere il relativo valore.  
  
3.  assegnare il nuovo valore.  
  
 Nella nuova sintassi, una sintassi di proprietà a sintassi abbreviata è disponibile che consente di automatizzare questo modello di utilizzo:  
  
```  
public ref class Vector sealed {   
public:  
   // equivalent shorthand property syntax  
   property double x;   
   property double y;  
   property double z;  
};  
```  
  
 L'effetto collaterale interessante della sintassi della proprietà a sintassi abbreviata è che sebbene il membro di stato viene generato dal compilatore, non è accessibile all'interno della classe, ad eccezione tramite le funzioni di accesso set/get.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di membro all'interno di una classe o interfaccia (C + c++ /CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [proprietà](../windows/property-cpp-component-extensions.md)