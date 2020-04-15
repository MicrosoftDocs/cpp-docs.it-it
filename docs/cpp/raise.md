---
title: __raise
ms.date: 11/04/2016
f1_keywords:
- __raise
- __raise_cpp
helpviewer_keywords:
- __raise keyword [C++]
ms.assetid: 6f1ae418-5f0f-48b6-9f6e-8ea7e66b239a
ms.openlocfilehash: eb3ab24378071663b2a6a1abab700b81c3172419
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317230"
---
# <a name="__raise"></a>__raise

Evidenzia il sito di chiamata di un evento.

## <a name="syntax"></a>Sintassi

```
__raise method-declarator;
```

## <a name="remarks"></a>Osservazioni

Un evento può essere generato dal codice gestito solo dall'interno della classe in cui è definito. Per ulteriori informazioni, vedere [l'evento.](../extensions/event-cpp-component-extensions.md)

La **parola** chiave __raise causa la visualizzazione di un errore se si chiama un non-evento.

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
[Gestione degli eventiEvent Handling](../cpp/event-handling.md)<br/>
[Estensioni componenti per le piattaforme runtime](../extensions/component-extensions-for-runtime-platforms.md)
