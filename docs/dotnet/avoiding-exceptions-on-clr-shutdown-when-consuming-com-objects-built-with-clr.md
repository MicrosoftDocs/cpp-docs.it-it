---
title: Come evitare le eccezioni generate da oggetti COM compilati con - clr
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], CLR shutdown exceptions
- /clr compiler option [C++], CLR shutdown exceptions
- mixed assemblies [C++], CLR shutdown exceptions
- /clr compiler option [C++], COM objects
- interoperability [C++], CLR shutdown exceptions
- CLR shutdown exceptions [C++]
ms.assetid: 41249d83-4b51-4e46-866f-27f475f2498c
ms.openlocfilehash: bafcfb4e8a8abfecc8491220202b63971bef1ac8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393831"
---
# <a name="avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr"></a>Evitare eccezioni all'arresto di CLR quando si utilizzano oggetti COM compilati con /clr

Una volta common language runtime (CLR) passa alla modalità di arresto, le funzioni native abbia accesso limitato a servizi di CLR. Quando si prova a chiamare la versione in un oggetto COM compilati con **/clr**, CLR esegue la transizione al codice nativo e quindi nuovamente al codice gestito per soddisfare la chiamata di IUnknown:: Release (che viene definita nel codice gestito). CLR impedisce la chiamata al codice gestito perché è in modalità di arresto.

Per risolvere questo problema, verificare che i distruttori chiamati dai metodi di versione contengano solo codice nativo.

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
