---
title: Risorse proprie degli oggetti (RAII)
ms.date: 11/04/2016
ms.topic: conceptual
ms.assetid: f86b484e-5a27-4c3b-a92a-dfaa5dd6d93a
ms.openlocfilehash: 5705fc1996343141b13e37d1267b2e8c981c1eba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245089"
---
# <a name="objects-own-resources-raii"></a>Risorse proprie degli oggetti (RAII)

Assicurarsi che gli oggetti risorse proprie. Questo principio è noto anche come "resource acquisition is inizializzazione" o "RAII."

## <a name="example"></a>Esempio

Passa tutti gli oggetti "nuovo" come argomento del costruttore a un altro oggetto denominato che lo possiede è (quasi sempre unique_ptr).

```cpp
void f() {
    unique_ptr<widget> p( new widget() );
    my_class x( new widget() );
    // ...
} // automatic destruction and deallocation for both widget objects
  // automatic exception safety, as if "finally { p->dispose(); x.w.dispose(); }"
```

Passare sempre immediatamente una nuova risorsa a un altro oggetto che ne è proprietario.

```cpp
void g() {
    other_class y( OpenFile() );
    // ...
} // automatic closing and release for file resource
  // automatic exception safety, as if "finally { y.file.dispose(); }"
```

## <a name="see-also"></a>Vedere anche

[C++ (C++ moderno)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
