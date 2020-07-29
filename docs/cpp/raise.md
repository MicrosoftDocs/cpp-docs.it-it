---
title: __raise
ms.date: 11/04/2016
f1_keywords:
- __raise
- __raise_cpp
helpviewer_keywords:
- __raise keyword [C++]
ms.assetid: 6f1ae418-5f0f-48b6-9f6e-8ea7e66b239a
ms.openlocfilehash: db6ba1693e4d3144b95530646b061e9cd7a58a5a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227127"
---
# <a name="__raise"></a>__raise

Evidenzia il sito di chiamata di un evento.

## <a name="syntax"></a>Sintassi

```
__raise method-declarator;
```

## <a name="remarks"></a>Osservazioni

Un evento può essere generato dal codice gestito solo dall'interno della classe in cui è definito. Per ulteriori informazioni, vedere l' [evento](../extensions/event-cpp-component-extensions.md) .

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

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Gestione degli eventi](../cpp/event-handling.md)<br/>
[Estensioni componenti per le piattaforme runtime](../extensions/component-extensions-for-runtime-platforms.md)
