---
title: Evitare le eccezioni generate da oggetti COM compilati con clr-| Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- interop [C++], CLR shutdown exceptions
- /clr compiler option [C++], CLR shutdown exceptions
- mixed assemblies [C++], CLR shutdown exceptions
- /clr compiler option [C++], COM objects
- interoperability [C++], CLR shutdown exceptions
- CLR shutdown exceptions [C++]
ms.assetid: 41249d83-4b51-4e46-866f-27f475f2498c
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 430420a62915d3378dae863c20c00e3b398ecb3c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr"></a>Evitare eccezioni all'arresto di CLR quando si utilizzano oggetti COM compilati con /clr
Una volta common language runtime (CLR) passa alla modalità di arresto, le funzioni native abbia accesso limitato a servizi di CLR. Quando si tenta di chiamare Release su un oggetto COM compilati con **/clr**, CLR esegue la transizione al codice nativo e quindi nuovamente al codice gestito per gestire la chiamata di IUnknown:: Release (che è definita nel codice gestito). CLR impedisce la chiamata al codice gestito perché è in modalità di chiusura.  
  
 Per risolvere questo problema, assicurarsi che i distruttori chiamati dai metodi Release contengano solo codice nativo.  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)