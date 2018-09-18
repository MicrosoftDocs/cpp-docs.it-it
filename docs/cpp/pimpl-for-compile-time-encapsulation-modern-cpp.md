---
title: Pimpl per incapsulamento in fase di compilazione (C++ moderno) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c3e8a90a-b328-4990-82bb-e1b147f76e07
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 83b01a58745185499ac02a254a207fac2779be26
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46059004"
---
# <a name="pimpl-for-compile-time-encapsulation-modern-c"></a>Pimpl per incapsulamento in fase di compilazione (C++ moderno)

Il *idioma pimpl* è una tecnica di C++ moderna per nascondere l'implementazione, per ridurre al minimo accoppiamento e separare le interfacce. Pimpl è l'acronimo di "puntatore all'implementazione". È già possibile acquisire familiarità con il concetto ma noto anche con altri nomi, ad esempio idioma scomparire o un Firewall del compilatore.

## <a name="why-use-pimpl"></a>Perché usare pimpl?

Ecco come l'idioma pimpl possa migliorare il ciclo di vita di sviluppo software:

- Riduzione delle dipendenze di compilazione.

- Separazione dell'interfaccia e l'implementazione.

- Portabilità.

## <a name="pimpl-header"></a>Pimpl intestazione

```cpp
// my_class.h
class my_class {
   //  ... all public and protected stuff goes here ...
private:
   class impl; unique_ptr<impl> pimpl; // opaque type here
};
```

Consente di evitare l'idioma pimpl ricompilazione unarie a catena e i layout oggetto fragili. È particolarmente utile per i tipi comuni (in modo transitivo).

## <a name="pimpl-implementation"></a>Pimpl implementazione

Definire il `impl` classe nel file con estensione cpp.

```cpp
// my_class.cpp
class my_class::impl {  // defined privately here
  // ... all private data and functions: all of these
  //     can now change without recompiling callers ...
};
my_class::my_class(): pimpl( new impl )
{
  // ... set impl values ...
}
```

## <a name="best-practices"></a>Procedure consigliate

Considerare la possibilità di aggiungere il supporto per la specializzazione di scambio non generanti.

## <a name="see-also"></a>Vedere anche

[Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)