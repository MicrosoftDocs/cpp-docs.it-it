---
title: Boxing (C + c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: edfb12fa-2a9b-42f6-bdac-d4d76cb8274e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7e9ab84bf840f01fbb22ef3b2510056338d10c74
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44108381"
---
# <a name="boxing-ccx"></a>Boxing (C++/CX)

*La conversione boxing* esegue il wrapping di una variabile di tipo valore, ad esempio [Windows::Foundation::DateTime](https://msdn.microsoft.com/library/windows/apps/windows.foundation.datetime.aspx), o un tipo scalare fondamentale come `int`, ovvero in una classe di riferimento quando la variabile viene passata a un metodo che accetta [ Platform:: Object ^](../cppcx/platform-object-class.md) come relativo tipo di input.

## <a name="passing-a-value-type-to-an-object-parameter"></a>Passare un tipo di valore a un parametro Object^

Sebbene non sia necessario eseguire la conversione boxing di una variabile per passarla a un parametro di metodo di tipo [Platform::Object^](../cppcx/platform-object-class.md), è necessario eseguire esplicitamente il cast al tipo di origine quando si recuperano valori in precedenza sottoposti alla conversione boxing.

[!code-cpp[cx_boxing#01](../cppcx/codesnippet/CPP/cx_boxing/class1.cpp#01)]

### <a name="using-platformiboxt-to-support-nullable-value-types"></a>Tramite platform:: ibox\<T > per supportare i tipi di valore nullable

C# e Visual Basic supportano il concetto dei tipi di valore nullable. In C + + c++ /CX, è possibile usare il `Platform::IBox<T>` tipo per esporre metodi pubblici che supportano i parametri di tipo valore nullable. L'esempio seguente mostra una C + + / metodo pubblico CX che restituisce null quando un chiamante c# passa un valore null per uno degli argomenti.

[!code-cpp[cx_boxing#02](../cppcx/codesnippet/CPP/cx_boxing/class1.h#02)]

In un client XAML C# puoi utilizzarlo nel modo seguente:

```

// C# client code
    BoxingDemo.Class1 obj = new BoxingDemo.Class1();
    int? a = null;
    int? b = 5;
    var result = obj.Multiply(a,b); //result = null

```

## <a name="see-also"></a>Vedere anche

[Sistema di tipi (C++/CX)](../cppcx/type-system-c-cx.md)<br/>
[Cast (C++/CX)](../cppcx/casting-c-cx.md)<br/>
[Riferimenti al linguaggio Visual C++](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)