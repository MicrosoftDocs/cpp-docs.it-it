---
title: Deprecazione di tipi e membri (C++/CX)
ms.date: 12/30/2016
ms.assetid: b20b01c1-a439-4ff0-8cf3-d7280c492813
ms.openlocfilehash: 6cd880af7e206b4c7338e53615594ec2c65c59fc
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70740506"
---
# <a name="deprecating-types-and-members-ccx"></a>Deprecazione di tipi e membri (C++/CX)

In C++/CX è supportata la deprecazione di Windows Runtime tipi e membri per i producer e i consumer utilizzando l'attributo [deprecated](/uwp/api/windows.foundation.metadata.deprecatedattribute) . Se usi un'API a cui è stato applicato questo attributo, compare un messaggio di avviso in fase di compilazione che indica che l'API è deprecata e inoltre consiglia l'uso di un'API alternativa. Nei tuoi tipi e metodi pubblici puoi applicare questo attributo e fornire il tuo messaggio personalizzato.

> [!CAUTION]
> L'attributo [deprecato](/uwp/api/windows.foundation.metadata.deprecatedattribute) viene utilizzato solo con i tipi di Windows Runtime. Per le classi standard e i membri C++, usare [__declspec(deprecated)](../cpp/deprecated-cpp.md).

### <a name="example"></a>Esempio

Il seguente esempio mostra come deprecare le tue API pubbliche, ad esempio in un componente di Windows Runtime. Il secondo parametro, di tipo [Windows:Foundation::Metadata::DeprecationType](/uwp/api/windows.foundation.metadata.deprecationtype) specifica se l'API viene deprecata o rimossa. Attualmente è supportato solo il valore DeprecationType::Deprecated. Il terzo parametro nell'attributo specifica [Windows::Foundation::Metadata::Platform](/uwp/api/windows.foundation.metadata.platformattribute) a cui si applica l'attributo.

```

namespace wfm = Windows::Foundation::Metadata;

public ref class Bicycle sealed
{

public:
    property double Speed;

    [wfm::Deprecated("Use the Speed property to compute the angular speed of the wheel", wfm::DeprecationType::Deprecate, 0x0)]
    double ComputeAngularVelocity();
};
```

## <a name="supported-targets"></a>Destinazioni supportate

Nella seguente tabella sono elencati i costrutti a cui può essere applicato l'attributo Deprecated:

| |
|-|
|Controllo XAML|
|delegato|
|event|
|campo di enumerazione|
|enum|
|struct|
|statico|
|classe|
|interfaccia|
|proprietà|
|campo struct|
|costruttore con parametri|

## <a name="see-also"></a>Vedere anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti al linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
