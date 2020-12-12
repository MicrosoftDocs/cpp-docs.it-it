---
description: 'Altre informazioni su: domini applicazione e Visual C++'
title: Domini applicazione e Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], application domains
- application domains [C++], C++
- /clr compiler option [C++], application domains
- interoperability [C++], application domains
- mixed assemblies [C++], application domains
ms.assetid: 75a08efc-9b02-40ba-99b7-dcbd71010bbf
ms.openlocfilehash: 55f02aec7b3b2d23f10ae9142dba7c61ff60683f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282822"
---
# <a name="application-domains-and-visual-c"></a>Domini applicazione e Visual C++

Se si dispone di una `__clrcall` funzione virtuale, vtable sarà per dominio applicazione (AppDomain). Se si crea un oggetto in un AppDomain, è possibile chiamare solo la funzione virtuale dall'interno di tale AppDomain. In modalità mista (**/CLR**) si disporrà di vtable per processo se il tipo non dispone di `__clrcall` funzioni virtuali. Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per altre informazioni, vedere:

- [appdomain](../cpp/appdomain.md)

- [__clrcall](../cpp/clrcall.md)

- [processo](../cpp/process.md)

## <a name="see-also"></a>Vedi anche

- [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
