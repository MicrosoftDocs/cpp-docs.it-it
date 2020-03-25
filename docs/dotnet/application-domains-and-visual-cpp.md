---
title: Domini applicazione e Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], application domains
- application domains [C++], C++
- /clr compiler option [C++], application domains
- interoperability [C++], application domains
- mixed assemblies [C++], application domains
ms.assetid: 75a08efc-9b02-40ba-99b7-dcbd71010bbf
ms.openlocfilehash: 16c02bb58681ecb241d3552f57e0b05f2d6711b4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208801"
---
# <a name="application-domains-and-visual-c"></a>Domini applicazione e Visual C++

Se si dispone di un `__clrcall` funzione virtuale, vtable sarà per dominio applicazione (AppDomain). Se si crea un oggetto in un AppDomain, è possibile chiamare solo la funzione virtuale dall'interno di tale AppDomain. In modalità mista ( **/CLR**) si avrà vtable per processo se il tipo non ha `__clrcall` funzioni virtuali. Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per altre informazioni, vedere:

- [appdomain](../cpp/appdomain.md)

- [__clrcall](../cpp/clrcall.md)

- [process](../cpp/process.md)

## <a name="see-also"></a>Vedere anche

- [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
