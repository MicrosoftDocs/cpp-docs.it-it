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
ms.openlocfilehash: 2296654e6935bc40f301226b184cf34f77cb126d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50539269"
---
# <a name="application-domains-and-visual-c"></a>Domini applicazione e Visual C++

Se hai un `__clrcall` funzione virtuale, sarà vtable per ogni dominio dell'applicazione (appdomain). Se si crea un oggetto in un singolo appdomain, è possibile chiamare solo la funzione virtuale dall'interno del dominio di applicazione. In modalità mista (**/clr**) per ogni processo vtable sarà necessario se il tipo non ha alcun `__clrcall` funzioni virtuali. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Per altre informazioni, vedere:

- [appdomain](../cpp/appdomain.md)

- [__clrcall](../cpp/clrcall.md)

- [process](../cpp/process.md)

## <a name="see-also"></a>Vedere anche

- [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)