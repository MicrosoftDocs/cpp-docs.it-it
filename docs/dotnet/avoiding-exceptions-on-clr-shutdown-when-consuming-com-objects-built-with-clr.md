---
title: Come evitare le eccezioni generate da oggetti COM compilati con - clr | Microsoft Docs
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
ms.openlocfilehash: 687585d0b25c64f5575646de3cd4823e0a89988e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408978"
---
# <a name="avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr"></a>Evitare eccezioni all'arresto di CLR quando si utilizzano oggetti COM compilati con /clr

Una volta common language runtime (CLR) passa alla modalità di arresto, le funzioni native abbia accesso limitato a servizi di CLR. Quando si prova a chiamare la versione in un oggetto COM compilati con **/clr**, CLR esegue la transizione al codice nativo e quindi nuovamente al codice gestito per soddisfare la chiamata di IUnknown:: Release (che viene definita nel codice gestito). CLR impedisce la chiamata al codice gestito perché è in modalità di arresto.

Per risolvere questo problema, verificare che i distruttori chiamati dai metodi di versione contengano solo codice nativo.

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)