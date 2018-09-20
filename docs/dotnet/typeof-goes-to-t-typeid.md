---
title: 'typeof passa a t:: typeid | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- typeid operator
- __typeof keyword
- typeid keyword [C++]
ms.assetid: 6a0d35a7-7a1a-4070-b187-cff37cfdc205
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 4433061fceef455685b6588c81c8c2e434253433
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46374676"
---
# <a name="typeof-goes-to-ttypeid"></a>typeof passa a T::typeid

Il `typeof` utilizzata nelle estensioni gestite per C++ è stato sostituito dall'operatore di `typeid` parola chiave in Visual C++.

Nelle estensioni gestite, il `__typeof()` operatore restituisce l'oggetto associato `Type*` quando viene passato il nome di un tipo gestito. Ad esempio:

```
// Creates and initializes a new Array instance.
Array* myIntArray =
   Array::CreateInstance( __typeof(Int32), 5 );
```

Nella nuova sintassi `__typeof` è stato sostituito da un altro modulo dei `typeid` che restituisce un `Type^` quando viene specificato un tipo gestito.

```
// Creates and initializes a new Array instance.
Array^ myIntArray =
   Array::CreateInstance( Int32::typeid, 5 );
```

## <a name="see-also"></a>Vedere anche

[Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)<br/>
[typeid](../windows/typeid-cpp-component-extensions.md)