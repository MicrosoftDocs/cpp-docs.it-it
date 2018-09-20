---
title: Il collegamento statico di Const Int non è più Literal | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- literal attribute [C++]
- constants, declaring
- integral constant expressions
ms.assetid: d2a5e3d2-ffb0-4b61-8114-bec5993a1195
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c51853274b061ba290ff90993f45ccdf3375349b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431294"
---
# <a name="static-const-int-linkage-is-no-longer-literal"></a>L'attributo di collegamento dei membri integrali di Static Const non è più Literal

Dichiarazione di un membro costante di una classe è stato modificato dalle estensioni gestite per C++ in Visual C++.

Sebbene `static const` dei membri integrali sono ancora supportati, il relativo attributo di collegamento è stato modificato. Il relativo attributo di collegamento precedente viene ora eseguito nel valore letterale integrale membro. Ad esempio, consideriamo la seguente classe di estensioni gestite:

```
public __gc class Constants {
public:
   static const int LOG_DEBUG = 4;
};
```

Questo genera i seguenti attributi CIL sottostanti per il campo (si noti l'attributo letterale):

```
.field public static literal int32
modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier) STANDARD_CLIENT_PRX = int32(0x00000004)
```

Mentre questo viene compilato con la nuova sintassi:

```
public ref class Constants {
public:
   static const int LOG_DEBUG = 4;
};
```

non genera più l'attributo letterale e pertanto non viene visualizzato come una costante dal runtime di CLR:

```
.field public static int32 modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier) STANDARD_CLIENT_PRX = int32(0x00000004)
```

Per avere lo stesso attributo letterale nei diversi linguaggio, la dichiarazione deve essere modificata a appena supportati `literal` membro dati, come indicato di seguito,

```
public ref class Constants {
public:
   literal int LOG_DEBUG = 4;
};
```

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)<br/>
[valore letterale](../windows/literal-cpp-component-extensions.md)