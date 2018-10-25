---
title: Generics e modelli (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- generics [C++], vs. templates
- templates, C++
ms.assetid: 63adec79-b1dc-4a1a-a21d-b8a72a8fce31
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4cc12d48bc6de95d55ba56f34df54b60c0ded846
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50066669"
---
# <a name="generics-and-templates-ccli"></a>Generics e modelli (C + + CLI)

Generics e modelli sono entrambi funzionalità del linguaggio che forniscono supporto per i tipi con parametri. Tuttavia, sono diversi e usi diversi. In questo argomento viene fornita una panoramica di molte differenze.

Per altre informazioni, vedere [Windows Runtime e modelli gestiti](../windows/windows-runtime-and-managed-templates-cpp-component-extensions.md).

## <a name="comparing-templates-and-generics"></a>Confronto tra Generics e modelli

Differenze principali tra generics e modelli C++:

- I generics sono generici fino a quando i tipi vengono sostituiti con essi in fase di esecuzione. I modelli sono specializzati in fase di compilazione in modo che non sono ancora parametri di tipi in fase di esecuzione

- In particolare, common language runtime supporta i generics in MSIL. Poiché il runtime non saprà sui generics, tipi specifici possono essere sostituiti per i tipi generici quando si fa riferimento a un assembly che contiene un tipo generico. I modelli, al contrario, risolvere in tipi comuni in fase di compilazione e i tipi non possono essere specializzati in altri assembly.

- I generics specializzata in due assembly diversi con lo stesso tipo di argomenti sono dello stesso tipo. I modelli specializzati in due assembly diversi con lo stesso tipo di argomenti vengono considerati dal runtime di tipi diversi.

- I generics vengono generati come un unico frammento di codice eseguibile che viene usato per tutti gli argomenti di tipo riferimento (non per i tipi di valore, che dispongono di un'implementazione univoca per ogni tipo di valore true). Il compilatore JIT riconosce sui generics ed è in grado di ottimizzare il codice per i tipi riferimento o un valore che vengono usati come argomenti tipo. Modelli generano codice runtime separato per ogni specializzazione.

- Generics non consentono i parametri di modello non di tipo, ad esempio `template <int i> C {}`. Consentono i modelli.

- Generics non consente la specializzazione esplicita (vale a dire, un'implementazione personalizzata di un modello per un tipo specifico). Eseguire i modelli.

- Generics non consentono le specializzazioni parziali (un'implementazione personalizzata per un subset degli argomenti di tipo). Eseguire i modelli.

- Generics non consentono il parametro di tipo da utilizzare come classe base per il tipo generico. Eseguire i modelli.

- I modelli supportano parametri di modello template (ad esempio `template<template<class T> class X> class MyClass`), ma non li supportano i generics.

## <a name="combining-templates-and-generics"></a>Generics e modelli di combinazione

La differenza di base nei generics ha implicazioni per la compilazione di applicazioni che combinano i generics e modelli. Ad esempio, si supponga di che avere una classe di modello che si desidera creare wrapper generici per esporre il modello per altri linguaggi come generico. Non è possibile avere il generica accettano un parametro di tipo che passa quindi anche se il modello, poiché il modello deve disporre di tale parametro di tipo in fase di compilazione, ma il tipo generico non risolverà il parametro di tipo fino al runtime. Nidificazione di un modello all'interno di un oggetto generico non funzionerà neanche perché non è possibile espandere i modelli in fase di compilazione per i tipi generici arbitrari che è stato possibile creare un'istanza in fase di esecuzione.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrato un semplice esempio di utilizzo combinato di generics e modelli. In questo esempio, la classe modello passa attraverso il parametro nel tipo generico. Non è possibile il contrario.

Questo linguaggio potrebbe essere usato quando si desidera compilare in un'API generica esistente con il codice di modello che è locale rispetto a C + + / assembly dell'interfaccia della riga, o quando è necessario aggiungere un ulteriore livello di parametrizzazione automatica a un tipo generico, per sfruttare i vantaggi di alcune funzionalità dei modelli non supportati b generics di y.

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

[Generics](../windows/generics-cpp-component-extensions.md)