---
title: deprecated (C++)
ms.date: 03/28/2017
f1_keywords:
- deprecated_cpp
helpviewer_keywords:
- __declspec keyword [C++], deprecated
- deprecated __declspec keyword
ms.assetid: beef1129-9434-4cb3-8392-f1eb29e04805
ms.openlocfilehash: e4689d3cb1a1757e2ac3bf4ca9eef7670ad5c655
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80189481"
---
# <a name="deprecated-c"></a>deprecated (C++)

Questo argomento riguarda la dichiarazione declspec deprecata specifica di Microsoft. Per informazioni sull'attributo `[[deprecated]]` c++ 14 e indicazioni su quando utilizzare tale attributo rispetto a declspec o pragma specifico di Microsoft, vedere [ C++ attributi standard](attributes.md).

Con le eccezioni indicate di seguito, la Dichiarazione **deprecata** offre la stessa funzionalità del pragma [deprecated](../preprocessor/deprecated-c-cpp.md) :

- La Dichiarazione **deprecata** consente di specificare forme specifiche di overload della funzione come deprecato, mentre il form pragma si applica a tutte le forme di overload di un nome di funzione.

- La Dichiarazione **deprecata** consente di specificare un messaggio che verrà visualizzato in fase di compilazione. Il testo del messaggio può provenire da una macro.

- Le macro possono essere contrassegnate come deprecate solo con il pragma **deprecated** .

Se il compilatore rileva l'uso di un identificatore deprecato o dell'attributo [`[[deprecated]]`](attributes.md) standard, viene generato un avviso [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) .

## <a name="example"></a>Esempio

Nel seguente codice di esempio viene illustrato come contrassegnare funzioni come deprecate e come specificare un messaggio che verrà visualizzato in fase di compilazione, quando viene utilizzata la funzione deprecata.

```cpp
// deprecated.cpp
// compile with: /W3
#define MY_TEXT "function is deprecated"
void func1(void) {}
__declspec(deprecated) void func1(int) {}
__declspec(deprecated("** this is a deprecated function **")) void func2(int) {}
__declspec(deprecated(MY_TEXT)) void func3(int) {}

int main() {
   func1();
   func1(1);   // C4996
   func2(1);   // C4996
   func3(1);   // C4996
}
```

## <a name="example"></a>Esempio

Nel seguente codice di esempio viene illustrato come contrassegnare classi come deprecate e come specificare un messaggio che verrà visualizzato in fase di compilazione, quando viene utilizzata la classe deprecata.

```cpp
// deprecate_class.cpp
// compile with: /W3
struct __declspec(deprecated) X {
   void f(){}
};

struct __declspec(deprecated("** X2 is deprecated **")) X2 {
   void f(){}
};

int main() {
   X x;   // C4996
   X2 x2;   // C4996
}
```

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
