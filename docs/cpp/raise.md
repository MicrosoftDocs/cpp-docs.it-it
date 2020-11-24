---
title: __raise
description: Informazioni su come usare la parola chiave dell'estensione Microsoft C++ `__raise` per la gestione degli eventi nativi.
ms.date: 11/20/2020
f1_keywords:
- __raise
- __raise_cpp
helpviewer_keywords:
- __raise keyword [C++]
ms.openlocfilehash: c9df602803062bc51b8c0cee13f17263cdc91786
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483148"
---
# <a name="__raise-keyword"></a>`__raise` parola chiave

Evidenzia il sito di chiamata di un evento.

> [!NOTE]
> Gli attributi degli eventi in C++ nativo non sono compatibili con C++ standard. Non vengono compilati quando si specifica la [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità di conformità.

## <a name="syntax"></a>Sintassi

> **`__raise`** *`method-declarator`* **`;`**

## <a name="remarks"></a>Commenti

Dal codice gestito, un evento può essere generato solo dall'interno della classe in cui è definito. Per altre informazioni, vedere [`event`](../extensions/event-cpp-component-extensions.md).

La parola chiave **`__raise`** genera un errore da emettere se si chiama un evento non.

> [!NOTE]
> Una classe o una struttura basata su template non può contenere eventi.

## <a name="example"></a>Esempio

```cpp
// EventHandlingRef_raise.cpp
struct E {
   __event void func1();
   void func1(int) {}

   void func2() {}

   void b() {
      __raise func1();
      __raise func1(1);  // C3745: 'int Event::bar(int)':
                         // only an event can be 'raised'
      __raise func2();   // C3745
   }
};

int main() {
   E e;
   __raise e.func1();
   __raise e.func1(1);  // C3745
   __raise e.func2();   // C3745
}
```

## <a name="see-also"></a>Vedere anche

[Parole](../cpp/keywords-cpp.md)\
[Gestione degli eventi](../cpp/event-handling.md)\
[`__event`](../cpp/event.md)\
[`__hook`](../cpp/hook.md)\
[`__unhook`](../cpp/unhook.md)\
[Estensioni componenti per .NET e UWP](../extensions/component-extensions-for-runtime-platforms.md)
