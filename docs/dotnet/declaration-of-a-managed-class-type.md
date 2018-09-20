---
title: Dichiarazione di un tipo di classe gestita | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0f9ceb0867fbdfbbdb46075662fca802d1ee0bba
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46393672"
---
# <a name="declaration-of-a-managed-class-type"></a>Dichiarazione di un tipo classe gestito

Il modo per dichiarare un tipo di classe di riferimento modificato dalle estensioni gestite per C++ in Visual C++.

Nelle estensioni gestite, un tipo di classe di riferimento è preceduto il `__gc` (parola chiave). Nella nuova sintassi, il `__gc` parola chiave viene sostituita da una delle due parole chiave con spaziatura: `ref class` o `ref struct`. La scelta della `struct` o `class` indica il pubblico (per `struct`) o privata (per `class`) livello di accesso predefinito dei relativi membri dichiarati in una sezione iniziale senza etichetta del corpo del tipo.

Analogamente, nelle estensioni gestite, un tipo di classe di valore è preceduto il `__value` (parola chiave). Nella nuova sintassi, il `__value` parola chiave viene sostituita da una delle due parole chiave con spaziatura: `value class` o `value struct`.

Un tipo di interfaccia, nelle estensioni gestite, indicato con la parola chiave `__interface`. Nella nuova sintassi, che viene sostituita con `interface class`.

Ad esempio, le seguenti dichiarazioni di classe nelle estensioni gestite:

```
public __gc class Block {};     // reference class
public __value class Vector {}; // value class
public __interface IFooBar {};  // interface class
```

Sotto la nuova sintassi di questi sono allo stesso modo dichiarati come segue:

```
public ref class Block {};         // reference class
public value class Vector {};      // value class
public interface class IFooBar {}; // interface class
```

## <a name="specifying-the-class-as-abstract"></a>Specificando la classe come astratta

Nelle estensioni gestite, viene inserita la parola chiave `__abstract` prima di `class` parola chiave (prima o dopo il `__gc`) per indicare che la classe è incompleta e gli oggetti della classe non possono essere creati all'interno del programma:

```
public __gc __abstract class Shape {};
public __gc __abstract class Shape2D: public Shape {};
```

Nella nuova sintassi, si specifica il `abstract` parola chiave contestuale seguendo la classe di nome e prima del corpo della classe, elenco di derivazione della classe di base o punto e virgola.

```
public ref class Shape abstract {};
public ref class Shape2D abstract : public Shape{};
```

Naturalmente, il significato semantico rimane invariato.

## <a name="specifying-the-class-as-sealed"></a>Specifica della classe come Sealed

Nelle estensioni gestite, viene inserita la parola chiave `__sealed` prima di `class` parola chiave (prima o dopo `__gc`) per indicare che gli oggetti della classe non possono essere ereditati da:

```
public __gc __sealed class String {};
```

Nella nuova sintassi, si specifica il `sealed` parola chiave contestuale seguendo la classe di nome e prima del corpo della classe, elenco di derivazione della classe di base o punto e virgola.

È possibile derivare una classe e bloccarlo. Ad esempio, il `String` viene implicitamente derivata da `Object`. È il vantaggio di una classe che supporta la risoluzione statica (vale a dire, in fase di compilazione) di tutte le chiamate di funzione virtuale tramite l'oggetto di classe di riferimento sealed. Infatti il `sealed` identificatore garantisce che il `String` handle di rilevamento non può fare riferimento a una classe derivata successivamente che potrebbe fornire un'istanza esegue l'override del metodo virtuale da richiamare. Ecco un esempio di una classe sealed nella nuova sintassi:

```
public ref class String sealed {};
```

È inoltre possibile specificare una classe sia come abstract e sealed - si tratta di una condizione speciale che indica una classe statica. Questo è descritto nella documentazione di CLR come indicato di seguito:

"Un tipo che rappresenta entrambi `abstract` e `sealed` dovrebbe avere solo membri statici e funge da ciò che in alcuni linguaggi chiamare uno spazio dei nomi."

Ad esempio, ecco una dichiarazione di una classe astratta sealed usando la sintassi di estensioni gestite:

```
public __gc __sealed __abstract class State {
public:
   static State() {}
   static bool inParamList();

private:
   static bool ms_inParam;
};
```

ed ecco la dichiarazione convertita nella nuova sintassi:

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

Nel modello a oggetti CLR, è supportata solo l'ereditarietà singola pubblico. Tuttavia, le estensioni gestite conservate l'interpretazione predefinita di ISO-c di una classe base senza una parola chiave di accesso come specifica di una derivazione privata. Questo significava che ogni dichiarazione di ereditarietà di CLR doveva fornire il `public` (parola chiave) per eseguire l'override dell'interpretazione predefinita.

```
// Managed Extensions: error: defaults to private derivation
__gc class Derived : Base {};
```

Nella definizione della nuova sintassi, l'assenza di una parola chiave di accesso indica una derivazione pubblica in una definizione di ereditarietà di CLR. Di conseguenza, il `public` parola chiave di accesso è ora facoltativo. Anche se ciò non richiede alcuna modifica delle estensioni gestite per codice C++, elencare questa modifica per motivi di completezza.

```
// New syntax: ok: defaults to public derivation
ref class Derived : Base{};
```

## <a name="see-also"></a>Vedere anche

[Tipi gestiti (C + + / CL)](../dotnet/managed-types-cpp-cl.md)<br/>
[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)<br/>
[abstract](../windows/abstract-cpp-component-extensions.md)<br/>
[sealed](../windows/sealed-cpp-component-extensions.md)