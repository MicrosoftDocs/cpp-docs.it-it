---
title: Domini applicazione e Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- interop [C++], application domains
- application domains [C++], C++
- /clr compiler option [C++], application domains
- interoperability [C++], application domains
- mixed assemblies [C++], application domains
ms.assetid: 75a08efc-9b02-40ba-99b7-dcbd71010bbf
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 57a45bd6f73040623fe90626b1c3896df3258dd8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="application-domains-and-visual-c"></a>Domini applicazione e Visual C++
Se dispone di un `__clrcall` funzione virtuale, sarà vtable per ogni dominio dell'applicazione (appdomain). Se si crea un oggetto in un dominio applicazione, è possibile chiamare solo la funzione virtuale di tale dominio applicazione. Tutte le funzioni definite **/clr: pure** usare moduli di `__clrcall` la convenzione di chiamata. Pertanto, tutte le tabelle vtable definite **/clr: pure** moduli sono per dominio applicazione. In modalità mista (**/clr**) sarà necessario utilizzate vtable per processo se il tipo non ha alcun `__clrcall` funzioni virtuali. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Per altre informazioni, vedere  
  
-   [appdomain](../cpp/appdomain.md)  
  
-   [__clrcall](../cpp/clrcall.md)  
  
-   [Procedura: migrare a /clr: pure (C + c++ /CLI)](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)  
  
-   [process](../cpp/process.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)