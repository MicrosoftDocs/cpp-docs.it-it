---
title: /Zc:rvalueCast (Applicare regole di conversione dei tipi)
ms.date: 03/06/2018
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
ms.openlocfilehash: e5a6abd3b85136b05ae58ebc8750aa9120cabc33
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57810432"
---
# <a name="zcrvaluecast-enforce-type-conversion-rules"></a>/Zc:rvalueCast (Applicare regole di conversione dei tipi)

Quando la **/Zc: rvaluecast** opzione è specificata, il compilatore identifica correttamente un tipo di riferimento rvalue come risultato di un'operazione cast conforme con c++11 standard. Quando l'opzione non è specificata, il comportamento è uguale a quello in Visual Studio 2012.

## <a name="syntax"></a>Sintassi

> **/Zc:rvalueCast**[**-**]

## <a name="remarks"></a>Note

Se **/Zc: rvaluecast** è specificato, il compilatore segue la sezione 5.4 di c++11 standard e considera solo le espressioni cast che daranno luogo a tipi non di riferimento e le espressioni cast che risultato riferimenti rvalue a tipi non di funzione come tipi rvalue. Per impostazione predefinita, oppure se **/Zc:rvalueCast-** è specificato, il compilatore non sarà conforme e considera tutte le espressioni cast che risultato riferimenti rvalue come rvalue. Per verificare la conformità e per eliminare gli errori nell'utilizzo di cast, è consigliabile usare **/Zc: rvaluecast**.

Per impostazione predefinita **/Zc: rvaluecast** è disattivata (**/Zc:rvalueCast-**). Il [/PERMISSIVE--](permissive-standards-conformance.md) l'opzione del compilatore in modo implicito imposta questa opzione, ma può essere sottoposto a override utilizzando **/Zc:rvalueCast-**.

Uso **/Zc: rvaluecast** se si passa un'espressione cast come argomento a una funzione che accetta un tipo di riferimento rvalue. Il comportamento predefinito provoca un errore del compilatore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) quando il compilatore determina in modo errato il tipo dell'espressione cast. Questo esempio mostra un errore del compilatore corretto codice quando **/Zc: rvaluecast** non viene specificato:

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

È possibile che il comportamento predefinito del compilatore non segnali l'errore C2102 quando appropriato. In questo esempio, il compilatore non segnala un errore se l'indirizzo di un rvalue creato da un cast di identità è accettato quando **/Zc: rvaluecast** non viene specificato:

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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: rvaluecast** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)<br/>
