---
title: 'Errore: nuovo-delete-type-mancata corrispondenza'
description: Esempi di origine e schermate di debug live per nuovi errori di mancata corrispondenza del tipo di eliminazione.
ms.date: 03/02/2021
f1_keywords:
- new-delete-type-mismatch
helpviewer_keywords:
- new-delete-type-mismatch error
- AddressSanitizer error new-delete-type-mismatch
ms.openlocfilehash: 02ea69b16fbb18878fd46544488ac8f3e0d4e3b5
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470409"
---
# <a name="error-new-delete-type-mismatch"></a>Errore: `new-delete-type-mismatch`

> Errore igienizzatore Indirizzo: dimensioni di deallocazione diverse dalle dimensioni di allocazione

In questo esempio, `~Base` viene chiamato solo e Not `~Derived` . Il compilatore genera una chiamata a `~Base()` perché il `Base` distruttore non è **`virtual`** . Quando si chiama `delete b` , il distruttore dell'oggetto viene associato alla definizione predefinita. Il codice elimina una classe base vuota (o 1 byte per Windows). Una **`virtual`** parola chiave mancante nella dichiarazione del distruttore è un errore C++ comune quando si usa l'ereditarietà.

## <a name="example---virtual-destructor"></a>Esempio-distruttore virtuale

```cpp
// example1.cpp
// new-delete-type-mismatch error
#include <memory>
#include <vector>

struct T {
    T() : v(100) {}
    std::vector<int> v;
};

struct Base {};

struct Derived : public Base {
    T t;
};

int main() {
    Base *b = new Derived;

    delete b;  // Boom! 

    std::unique_ptr<Base> b1 = std::make_unique<Derived>();

    return 0;
}
```

Le classi base polimorfiche devono dichiarare i **`virtual`** distruttori. Se una classe dispone di funzioni virtuali, deve disporre di un distruttore virtuale.

Per correggere l'esempio, aggiungere:

```cpp
struct Base {
  virtual ~Base() = default;
}
```

Per compilare e testare questo esempio, eseguire questi comandi in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts)per gli sviluppatori di Visual Studio 2019 versione 16,9 o successiva:

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### <a name="resulting-error"></a>Errore risultante

:::image type="content" source="media/new-delete-type-mismatch-example-1.png" alt-text="Screenshot del debugger che Visualizza l'errore nuovo-delete-type-mancata corrispondenza nell'esempio 1.":::

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)
