---
title: Domini applicazione e Visual C++ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interop [C++], application domains
- application domains [C++], C++
- /clr compiler option [C++], application domains
- interoperability [C++], application domains
- mixed assemblies [C++], application domains
ms.assetid: 75a08efc-9b02-40ba-99b7-dcbd71010bbf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b935b9a5d1561fa1c8b961ee48b92f59b98e2bd2
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704334"
---
# <a name="application-domains-and-visual-c"></a>Domini applicazione e Visual C++

Se dispone di un `__clrcall` funzione virtuale, sarà vtable per ogni dominio dell'applicazione (appdomain). Se si crea un oggetto in un dominio applicazione, è possibile chiamare solo la funzione virtuale di tale dominio applicazione. In modalità mista (**/clr**) se il tipo non dispone ne saranno disponibili per ogni processo vtable `__clrcall` funzioni virtuali. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per altre informazioni, vedere:

- [appdomain](../cpp/appdomain.md)

- [__clrcall](../cpp/clrcall.md)

- [process](../cpp/process.md)

## <a name="see-also"></a>Vedere anche

- [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)