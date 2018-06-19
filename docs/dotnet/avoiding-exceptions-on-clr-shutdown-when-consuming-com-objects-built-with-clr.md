---
title: Evitare le eccezioni generate da oggetti COM compilati con clr-| Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interop [C++], CLR shutdown exceptions
- /clr compiler option [C++], CLR shutdown exceptions
- mixed assemblies [C++], CLR shutdown exceptions
- /clr compiler option [C++], COM objects
- interoperability [C++], CLR shutdown exceptions
- CLR shutdown exceptions [C++]
ms.assetid: 41249d83-4b51-4e46-866f-27f475f2498c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0efd2af7eb4bf8a70bff983d627f802f1976c6ba
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33103512"
---
# <a name="avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr"></a>Evitare eccezioni all'arresto di CLR quando si utilizzano oggetti COM compilati con /clr
Una volta common language runtime (CLR) passa alla modalità di arresto, le funzioni native abbia accesso limitato a servizi di CLR. Quando si tenta di chiamare Release su un oggetto COM compilati con **/clr**, CLR esegue la transizione al codice nativo e quindi nuovamente al codice gestito per gestire la chiamata di IUnknown:: Release (che è definita nel codice gestito). CLR impedisce la chiamata al codice gestito perché è in modalità di chiusura.  
  
 Per risolvere questo problema, assicurarsi che i distruttori chiamati dai metodi Release contengano solo codice nativo.  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)