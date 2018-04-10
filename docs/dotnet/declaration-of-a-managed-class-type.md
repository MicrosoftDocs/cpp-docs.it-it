---
title: Dichiarazione di un tipo di classe gestita | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- __gc types
- classes [C++], managed
- class keyword [C++], CLR
- __value keyword
- value types, declaring
- value keyword [C++]
- managed classes
- interface class keyword
- ref keyword [C++]
ms.assetid: 16de9c94-91d7-492f-8ac7-f0729cc627e9
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c9e9aba6d2a0485a94385be5b8712d7552261ff1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="declaration-of-a-managed-class-type"></a>Dichiarazione di un tipo classe gestito
Il modo per dichiarare un tipo di classe di riferimento modificato dalle estensioni gestite per C++ in Visual C++.  
  
 Nelle estensioni gestite, è preceduto da un tipo di classe di riferimento di `__gc` (parola chiave). Nella nuova sintassi, il `__gc` (parola chiave) viene sostituito da uno dei due parole chiave con spaziatura: `ref class` o `ref struct`. La scelta di `struct` o `class` indica al pubblico (per `struct`) o privata (per `class`) il livello di accesso predefinito dei relativi membri dichiarati in una sezione senza etichetta iniziale del corpo del tipo.  
  
 Analogamente, nelle estensioni gestite, un tipo di classe di valore è preceduto il `__value` (parola chiave). Nella nuova sintassi, il `__value` (parola chiave) viene sostituito da uno dei due parole chiave con spaziatura: `value class` o `value struct`.  
  
 Un tipo di interfaccia, nelle estensioni gestite, indicato con la parola chiave `__interface`. Nella nuova sintassi, è stato sostituito da `interface class`.  
  
 Ad esempio, le seguenti dichiarazioni di classe nelle estensioni gestite:  
  
```  
public __gc class Block {};     // reference class  
public __value class Vector {}; // value class  
public __interface IFooBar {};  // interface class  
```  
  
 Nella nuova sintassi questi sono allo stesso modo dichiarati come segue:  
  
```  
public ref class Block {};         // reference class  
public value class Vector {};      // value class  
public interface class IFooBar {}; // interface class  
```  
  
## <a name="specifying-the-class-as-abstract"></a>Specifica la classe come astratta  
 Nelle estensioni gestite, viene inserita la parola chiave `__abstract` prima di `class` (parola chiave) (prima o dopo il `__gc`) per indicare che la classe è incompleta e gli oggetti della classe non possono essere creati all'interno del programma:  
  
```  
public __gc __abstract class Shape {};  
public __gc __abstract class Shape2D: public Shape {};  
```  
  
 Nella nuova sintassi, specificare il `abstract` parola chiave contestuale seguendo la classe di nome e prima che il corpo della classe, elenco di derivazione della classe di base o punto e virgola.  
  
```  
public ref class Shape abstract {};  
public ref class Shape2D abstract : public Shape{};  
```  
  
 Naturalmente, il significato semantico rimane invariato.  
  
## <a name="specifying-the-class-as-sealed"></a>Specifica della classe come Sealed  
 Nelle estensioni gestite, viene inserita la parola chiave `__sealed` prima di `class` (parola chiave) (prima o dopo `__gc`) per indicare che gli oggetti della classe non possono essere ereditati da:  
  
```  
public __gc __sealed class String {};  
```  
  
 Nella nuova sintassi, specificare il `sealed` parola chiave contestuale seguendo la classe di nome e prima che il corpo della classe, elenco di derivazione della classe di base o punto e virgola.  
  
 È possibile derivare una classe e bloccarlo. Ad esempio, il `String` viene derivata in modo implicito da `Object`. Il vantaggio di una classe è il supporto della risoluzione statica (ovvero, in fase di compilazione) di tutte le chiamate di funzione virtuale tramite l'oggetto di classe di riferimento sealed. In questo modo il `sealed` identificatore garantisce che il `String` handle di rilevamento non può fare riferimento a una classe derivata successivamente che potrebbe fornire un'istanza esegue l'override del metodo virtuale richiamato. Di seguito è riportato un esempio di una classe sealed nella nuova sintassi:  
  
```  
public ref class String sealed {};  
```  
  
 È inoltre possibile specificare una classe sia come abstract e sealed - si tratta di una condizione speciale che indica una classe statica. Questo è descritto nella documentazione di CLR come indicato di seguito:  
  
 "Un tipo sia `abstract` e `sealed` deve avere solo membri statici e funge da ciò che alcuni linguaggi chiamare uno spazio dei nomi."  
  
 Ad esempio, ecco una dichiarazione di classe astratta sealed utilizzando la sintassi di estensioni gestite:  
  
```  
public __gc __sealed __abstract class State {  
public:  
   static State() {}  
   static bool inParamList();  
  
private:  
   static bool ms_inParam;  
};  
```  
  
 di seguito è questa dichiarazione convertita nella nuova sintassi:  
  
```  
public ref class State abstract sealed {  
public:  
   static State();  
   static bool inParamList();  
  
private:  
   static bool ms_inParam;  
};  
```  
  
## <a name="clr-inheritance-specifying-the-base-class"></a>Ereditarietà CLR: Specifica la classe di Base  
 Nel modello a oggetti CLR, è supportata solo l'ereditarietà singola pubblica. Tuttavia, le estensioni gestite mantenuta l'interpretazione predefinita standard ISO C++ di una classe base senza una parola chiave di accesso come specifica una derivazione privata. Questo significa che ogni dichiarazione di ereditarietà CLR è pertanto necessario fornire il `public` (parola chiave) per eseguire l'override dell'interpretazione predefinita.  
  
```  
// Managed Extensions: error: defaults to private derivation  
__gc class Derived : Base {};  
```  
  
 Nella nuova definizione di sintassi, l'assenza di una parola chiave di accesso indica una derivazione pubblica in una definizione di ereditarietà di CLR. Di conseguenza, il `public` parola chiave di accesso a questo punto è facoltativo. Mentre questo non richiede alcuna modifica delle estensioni gestite per codice C++, elenco questa modifica per motivi di completezza.  
  
```  
// New syntax: ok: defaults to public derivation  
ref class Derived : Base{};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi gestiti (C + + CL)](../dotnet/managed-types-cpp-cl.md)   
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)   
 [abstract](../windows/abstract-cpp-component-extensions.md)   
 [sealed](../windows/sealed-cpp-component-extensions.md)