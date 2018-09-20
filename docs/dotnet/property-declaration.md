---
title: Dichiarazione di proprietà | Microsoft Docs
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
ms.openlocfilehash: 019b8eae17952bfe53fd8fbf14db4bafce1bf463
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438301"
---
# <a name="property-declaration"></a>Dichiarazione di proprietà

Il modo per dichiarare una proprietà in una classe gestita è stato modificato dalle estensioni gestite per C++ in Visual C++.

Nelle estensioni gestite di progettazione, ognuna `set` o `get` della funzione di accesso di proprietà viene specificato come una modalità indipendente. La dichiarazione di ogni metodo ha il prefisso di `__property` (parola chiave). Il nome del metodo inizia con uno `set_` o `get_` seguito dal nome effettivo della proprietà (come visibile all'utente). Di conseguenza, una `Vector` fornendo un `x` coordinare `get` proprietà sarebbe denominarlo `get_x` e l'utente potrebbe richiamarlo come `x`. Questa convenzione di denominazione e specifica distinta dei metodi rappresenta effettivamente l'implementazione di runtime sottostante della proprietà. Ad esempio, ecco la `Vector` con un set di proprietà delle coordinate:

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

Questo permette di diluire le funzionalità associate a una proprietà e richiede all'utente di livello lessicale unificare i get e set associati. Inoltre, è verbose. Nella nuova sintassi, che è più simile a quella del linguaggio c#, la `property` (parola chiave) è seguito dal tipo di proprietà e il relativo nome non decorato. Il `set` e `get` i metodi di accesso vengono posizionati all'interno di un blocco che segue il nome della proprietà. Si noti che, a differenza di c#, viene specificata la firma del metodo di accesso. Ad esempio, ecco l'esempio di codice precedente convertito nella nuova sintassi.

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

Se i metodi di accesso della proprietà riflettono livelli di accesso distinti, ad esempio un `public get` e una `private` o `protected set`, è possibile specificare un'etichetta di accesso esplicita. Per impostazione predefinita, il livello di accesso della proprietà riflette quello del livello di accesso. Ad esempio, nella definizione precedente di `Vector`, sia il `get` e `set` metodi sono `public`. Per rendere il `set` metodo `protected` o `private`, necessario modificare la definizione come indicato di seguito:

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

L'ambito di una parola chiave di accesso all'interno di una proprietà si estende fino alla parentesi di chiusura della proprietà o la specifica di una parola chiave di accesso aggiuntivo. Ma non si estende oltre la definizione della proprietà a livello di accesso all'interno del quale la proprietà è definita. Nella dichiarazione precedente, ad esempio, `Vector::dot()` è un metodo pubblico.

Per scrivere le proprietà get/set per le tre `Vector` coordinate prevede tre passaggi:

1. dichiarare un membro di uno stato privato del tipo appropriato.

1. restituirlo al tentativo di recuperare il valore dell'utente.

1. assegnare il nuovo valore.

Nella nuova sintassi, la sintassi di una proprietà a sintassi abbreviata è disponibile che consente di automatizzare questo modello di utilizzo:

```
public ref class Vector sealed {
public:
   // equivalent shorthand property syntax
   property double x;
   property double y;
   property double z;
};
```

Un interessante effetto collaterale della sintassi della proprietà a sintassi abbreviata è che anche se il membro di stato viene generato dal compilatore, non è accessibile all'interno della classe, ad eccezione tramite le funzioni di accesso set/get.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)<br/>
[proprietà](../windows/property-cpp-component-extensions.md)