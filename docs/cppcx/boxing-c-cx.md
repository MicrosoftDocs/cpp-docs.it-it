---
description: 'Altre informazioni su: conversione boxing (C++/CX)'
title: Boxing (C++/CX)
ms.date: 12/30/2016
ms.assetid: edfb12fa-2a9b-42f6-bdac-d4d76cb8274e
ms.openlocfilehash: 50b7f3f071fcd0109a85fb24985024666bd8fad3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302738"
---
# <a name="boxing-ccx"></a>Boxing (C++/CX)

La *conversione boxing* sta eseguendo il wrapping di una variabile di tipo valore, ad esempio [Windows:: Foundation::D atetime](/uwp/api/windows.foundation.datetime), o di un tipo scalare fondamentale, ad esempio **`int`** , in una classe di riferimento quando la variabile viene passata a un metodo che accetta [Platform:: Object ^](../cppcx/platform-object-class.md) come tipo di input.

## <a name="passing-a-value-type-to-an-object-parameter"></a>Passare un tipo di valore a un parametro Object^

Sebbene non sia necessario eseguire la conversione boxing di una variabile per passarla a un parametro di metodo di tipo [Platform::Object^](../cppcx/platform-object-class.md), è necessario eseguire esplicitamente il cast al tipo di origine quando si recuperano valori in precedenza sottoposti alla conversione boxing.

[!code-cpp[cx_boxing#01](../cppcx/codesnippet/CPP/cx_boxing/class1.cpp#01)]

### <a name="using-platformiboxt-to-support-nullable-value-types"></a>Uso di Platform:: IBox \<T> per supportare i tipi di valore Nullable

C# e Visual Basic supportano il concetto dei tipi di valore nullable. In C++/CX è possibile usare il `Platform::IBox<T>` tipo per esporre metodi pubblici che supportano i parametri di tipo valore Nullable. Nell'esempio seguente viene illustrato un metodo pubblico C++/CX che restituisce null quando un chiamante C# passa null per uno degli argomenti.

[!code-cpp[cx_boxing#02](../cppcx/codesnippet/CPP/cx_boxing/class1.h#02)]

In un client XAML C# puoi utilizzarlo nel modo seguente:

```

// C# client code
    BoxingDemo.Class1 obj = new BoxingDemo.Class1();
    int? a = null;
    int? b = 5;
    var result = obj.Multiply(a,b); //result = null
```

## <a name="see-also"></a>Vedi anche

[Sistema di tipi (C++/CX)](../cppcx/type-system-c-cx.md)<br/>
[Cast (C++/CX)](../cppcx/casting-c-cx.md)<br/>
[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti agli spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
