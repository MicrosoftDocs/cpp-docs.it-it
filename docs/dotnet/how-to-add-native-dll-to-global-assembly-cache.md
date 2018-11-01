---
title: 'Procedura: aggiungere DLL native alla Global Assembly Cache'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], native
- GAC (global assembly cache), loading native DLLs
- native DLLs [C++]
ms.assetid: 25e8d78a-b197-4269-b4e9-237a544ab3c8
ms.openlocfilehash: 1b11ebfae704ca1529113a00b463df728c85fe60
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50641363"
---
# <a name="how-to-add-native-dll-to-global-assembly-cache"></a>Procedura: aggiungere DLL native alla Global Assembly Cache

È possibile inserire una DLL nativa (non COM) in Global Assembly Cache.

## <a name="example"></a>Esempio

**/ASSEMBLYLINKRESOURCE** ti permette di incorporare una DLL nativa in un assembly.

Per altre informazioni, vedere [/ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework)](../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md).

```
/ASSEMBLYLINKRESOURCE:MyComponent.dll
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)