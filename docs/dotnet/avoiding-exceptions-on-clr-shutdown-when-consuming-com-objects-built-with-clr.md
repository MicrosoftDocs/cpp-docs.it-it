---
description: 'Altre informazioni su: evitare eccezioni in caso di arresto di CLR quando si utilizzano oggetti COM compilati con/CLR'
title: Evitare le eccezioni generate da oggetti COM compilati con-CLR
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], CLR shutdown exceptions
- /clr compiler option [C++], CLR shutdown exceptions
- mixed assemblies [C++], CLR shutdown exceptions
- /clr compiler option [C++], COM objects
- interoperability [C++], CLR shutdown exceptions
- CLR shutdown exceptions [C++]
ms.assetid: 41249d83-4b51-4e46-866f-27f475f2498c
ms.openlocfilehash: 899f7905aafcf1bff92e37ee70253e74759b3f57
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282614"
---
# <a name="avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr"></a>Evitare eccezioni all'arresto di CLR quando si utilizzano oggetti COM compilati con /clr

Una volta che il Common Language Runtime (CLR) entra in modalità di arresto, le funzioni native hanno accesso limitato ai servizi CLR. Quando si tenta di chiamare la versione su un oggetto COM compilato con **/CLR**, il CLR esegue la transizione al codice nativo e quindi esegue la transizione al codice gestito per gestire la chiamata IUnknown:: Release (definita nel codice gestito). CLR impedisce la chiamata al codice gestito poiché è in modalità di arresto.

Per risolvere questo problema, assicurarsi che i distruttori chiamati dai metodi di rilascio contengano solo codice nativo.

## <a name="see-also"></a>Vedi anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
