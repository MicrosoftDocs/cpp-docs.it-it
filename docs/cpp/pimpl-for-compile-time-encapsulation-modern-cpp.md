---
title: Pimpl per incapsulamento in fase di compilazione (C++ moderno)
ms.date: 11/04/2016
ms.topic: conceptual
ms.assetid: c3e8a90a-b328-4990-82bb-e1b147f76e07
ms.openlocfilehash: f1eb06ad3a52be486f085babf699677951b1ee71
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74245182"
---
# <a name="pimpl-for-compile-time-encapsulation-modern-c"></a>Pimpl per incapsulamento in fase di compilazione (C++ moderno)

L' *idioma magnaccia* è una tecnica C++ moderna per nascondere l'implementazione, ridurre al minimo l'accoppiamento e separare le interfacce. Pimpl è breve per "puntatore all'implementazione". È possibile che l'utente abbia già familiarità con il concetto ma lo conosca con altri nomi, ad esempio Cheshire Cat o il linguaggio del firewall del compilatore.

## <a name="why-use-pimpl"></a>Perché usare pimpl?

Ecco in che modo l'idioma magnaccia può migliorare il ciclo di vita dello sviluppo del software:

- Riduzione delle dipendenze di compilazione.

- Separazione dell'interfaccia e dell'implementazione.

- Portabilità.

## <a name="pimpl-header"></a>Intestazione pimpl

```cpp
// my_class.h
class my_class {
   //  ... all public and protected stuff goes here ...
private:
   class impl; unique_ptr<impl> pimpl; // opaque type here
};
```

L'idioma pimpl evita di ricompilare le cascate e i layout degli oggetti fragili. È particolarmente adatto per i tipi più diffusi (transitivamente).

## <a name="pimpl-implementation"></a>Implementazione di pimpl

Definire la classe `impl` nel file con estensione cpp.

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

Valutare se aggiungere il supporto per la specializzazione di swap senza generazione.

## <a name="see-also"></a>Vedere anche

[BentornatiC++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
