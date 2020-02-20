---
title: /Zc:rvalueCast (Applicare regole di conversione dei tipi)
ms.date: 02/18/2020
f1_keywords:
- rvaluecast
- /Zc:rvalueCast
- VC.Project.VCCLCompilerTool.EnforceTypeConversionRules
helpviewer_keywords:
- -Zc compiler options (C++)
- rvaluecast
- Enforce type conversion rules
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 7825277d-e565-4c48-b0fb-76ac0b0c6e38
ms.openlocfilehash: ac74192cad8a62e4c82b480038e727b114362cdd
ms.sourcegitcommit: b9aaaebe6e7dc5a18fe26f73cc7cf5fce09262c1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/20/2020
ms.locfileid: "77504567"
---
# <a name="zcrvaluecast-enforce-type-conversion-rules"></a>/Zc:rvalueCast (Applicare regole di conversione dei tipi)

Quando si specifica l'opzione **`/Zc:rvalueCast`** , il compilatore identifica correttamente un tipo di riferimento rvalue come risultato di un'operazione cast. Il comportamento è conforme allo standard C++ 11. Quando l'opzione non è specificata, il comportamento del compilatore è identico a quello di Visual Studio 2012.

## <a name="syntax"></a>Sintassi

> **`/Zc:rvalueCast`**\
> **`/Zc:rvalueCast-`**

## <a name="remarks"></a>Note

Se **`/Zc:rvalueCast`** è specificato, il compilatore segue la sezione 5,4 dello standard c++ 11 e considera solo le espressioni cast che generano tipi non di riferimento e espressioni cast che generano riferimenti rvalue a tipi non di funzione come tipi rvalue. Per impostazione predefinita, o se viene specificato **`/Zc:rvalueCast-`** , il compilatore non è conforme e considera tutte le espressioni cast che generano riferimenti rvalue come RValues. Per la conformità e per eliminare gli errori nell'uso dei cast, è consigliabile usare **`/Zc:rvalueCast`** .

Per impostazione predefinita, **`/Zc:rvalueCast`** è disattivato ( **`/Zc:rvalueCast-`** ). L'opzione del compilatore [/permissive-](permissive-standards-conformance.md) imposta in modo implicito questa opzione, ma è possibile eseguirne l'override usando **`/Zc:rvalueCast-`** .

Utilizzare **`/Zc:rvalueCast`** se si passa un'espressione cast come argomento a una funzione che accetta un tipo di riferimento rvalue. Il comportamento predefinito provoca l'errore del compilatore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) quando il compilatore determina in modo errato il tipo dell'espressione cast. Questo esempio mostra un errore del compilatore nel codice corretto quando non è specificato **`/Zc:rvalueCast`** :

```cpp
// Test of /Zc:rvalueCast
// compile by using:
// cl /c /Zc:rvalueCast- make_thing.cpp
// cl /c /Zc:rvalueCast make_thing.cpp

#include <utility>

template <typename T>
struct Thing {
   // Construct a Thing by using two rvalue reference parameters
   Thing(T&& t1, T&& t2)
      : thing1(t1), thing2(t2) {}

   T& thing1;
   T& thing2;
};

// Create a Thing, using move semantics if possible
template <typename T>
Thing<T> make_thing(T&& t1, T&& t2)
{
   return (Thing<T>(std::forward<T>(t1), std::forward<T>(t2)));
}

struct Test1 {
   long a;
   long b;

   Thing<long> test() {
      // Use identity casts to create rvalues as arguments
      return make_thing(static_cast<long>(a), static_cast<long>(b));
   }
};
```

È possibile che il comportamento predefinito del compilatore non segnali l'errore C2102 quando appropriato. In questo esempio, il compilatore non segnala un errore se l'indirizzo di un rvalue creato da un cast di identità viene eseguito quando **`/Zc:rvalueCast`** non è specificato:

```cpp
int main() {
   int a = 1;
   int *p = &a;   // Okay, take address of lvalue
                  // Identity cast creates rvalue from lvalue;
   p = &(int)a;   // problem: should cause C2102: '&' requires l-value
}
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare le **proprietà di configurazione** > pagina delle proprietà **lingua** **CC++ /**  > .

1. Impostare la proprietà **Applica regole di conversione del tipo** su **`/Zc:rvalueCast`** o **`/Zc:rvalueCast-`** . Scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)
