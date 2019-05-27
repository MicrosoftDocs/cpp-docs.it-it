---
title: Generics e modelli (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- generics [C++], vs. templates
- templates, C++
ms.assetid: 63adec79-b1dc-4a1a-a21d-b8a72a8fce31
ms.openlocfilehash: 74cfd791e8400b788d38f272eed3d421ca4230e3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65516356"
---
# <a name="generics-and-templates-ccli"></a>Generics e modelli (C++/CLI)

I generics e i modelli sono entrambi funzionalità del linguaggio che forniscono supporto per i tipi con parametri. Sono tuttavia elementi diversi e hanno usi diversi. Questo argomento offre una panoramica delle numerose differenze.

Per altre informazioni, vedere [Windows Runtime e modelli gestiti](windows-runtime-and-managed-templates-cpp-component-extensions.md).

## <a name="comparing-templates-and-generics"></a>Confronto tra modelli e generics

Principali differenze tra generics e modelli C++:

- I generics sono elementi generici fino a quando non vengono sostituiti dai tipi in fase di runtime. I modelli sono specializzati in fase di compilazione, quindi in fase di runtime non sono ancora tipi con parametri.

- Common Language Runtime supporta in modo specifico i generics in MSIL. Poiché il runtime riconosce i generics, è possibile sostituire i tipi generici con tipi specifici quando si fa riferimento a un assembly che contiene un tipo generico. I modelli vengono invece risolti in tipi ordinari in fase di compilazione e i tipi risultanti non possono essere specializzati in altri assembly.

- I generics specializzati in due assembly diversi con gli stessi argomenti di tipo sono dello stesso tipo. I modelli specializzati in due assembly diversi con gli stessi argomenti di tipo vengono considerati tipi diversi dal runtime.

- I generics vengono generati come un unico frammento di codice eseguibile che viene usato per tutti gli argomenti di tipo riferimento (ciò non è vero per i tipi valore, che hanno un'implementazione univoca per ogni tipo valore). Il compilatore JIT riconosce i generics ed è in grado di ottimizzare il codice per i tipi riferimento o valore usati come argomenti di tipo. I modelli generano codice runtime separato per ogni specializzazione.

- I generics non consentono parametri di modello non di tipo, ad esempio `template <int i> C {}`. I modelli li consentono.

- I generics non consentono la specializzazione esplicita, ovvero un'implementazione personalizzata di un modello per un tipo specifico. I modelli sì.

- I generics non consentono la specializzazione parziale, ovvero un'implementazione personalizzata per un subset degli argomenti di tipo. I modelli sì.

- I generics non consentono l'uso del parametro di tipo come classe di base per il tipo generico. I modelli sì.

- I modelli supportano i parametri template-template (ad esempio `template<template<class T> class X> class MyClass`), mentre i generics no.

## <a name="combining-templates-and-generics"></a>Combinazione di modelli e generics

La differenza di base nei generics ha implicazioni per la creazione di applicazioni che combinano generics e modelli. Si supponga, ad esempio, di avere una classe template per la quale si vuole creare un wrapper generico per esporre il modello per altri linguaggi come tipo generico. Non è possibile fare in modo che il tipo generico accetti un parametro di tipo che quindi passa al modello, perché il modello deve disporre di tale parametro di tipo in fase di compilazione, ma il tipo generico non risolverà il parametro di tipo fino al runtime. L'annidamento di un modello in un tipo generico non funziona perché non è possibile espandere i modelli in fase di compilazione per tipi generici arbitrari di cui è possibile creare istanze in fase di runtime.

## <a name="example"></a>Esempio

### <a name="description"></a>Description

L'esempio seguente illustra in modo semplice l'uso combinato di modelli e generics. In questo esempio la classe template passa il parametro attraverso il tipo generico. L'operazione contraria non è possibile.

Questo linguaggio può essere usato quando si vuole eseguire la compilazione in base a un'API generica esistente con il codice del modello in posizione locale rispetto a un assembly C++/CLI oppure quando è necessario aggiungere un ulteriore livello di parametrizzazione a un tipo generico, per sfruttare i vantaggi di alcune funzionalità dei modelli non supportate dai generics.

### <a name="code"></a>Codice

```cpp
// templates_and_generics.cpp
// compile with: /clr
using namespace System;

generic <class ItemType>
ref class MyGeneric {
   ItemType m_item;

public:
   MyGeneric(ItemType item) : m_item(item) {}
   void F() {
      Console::WriteLine("F");
   }
};

template <class T>
public ref class MyRef {
MyGeneric<T>^ ig;

public:
   MyRef(T t) {
      ig = gcnew MyGeneric<T>(t);
      ig->F();
    }
};

int main() {
   // instantiate the template
   MyRef<int>^ mref = gcnew MyRef<int>(11);
}
```

```Output
F
```

## <a name="see-also"></a>Vedere anche

[Generics](generics-cpp-component-extensions.md)