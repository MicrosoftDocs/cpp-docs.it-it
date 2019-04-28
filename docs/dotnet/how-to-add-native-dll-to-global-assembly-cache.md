---
title: 'Procedura: Aggiungere DLL Native alla Global Assembly Cache'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], native
- GAC (global assembly cache), loading native DLLs
- native DLLs [C++]
ms.assetid: 25e8d78a-b197-4269-b4e9-237a544ab3c8
ms.openlocfilehash: b4b886dfef3185c1b3084ed02abcef1ad2630c11
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62222798"
---
# <a name="how-to-add-native-dll-to-global-assembly-cache"></a>Procedura: Aggiungere DLL Native alla Global Assembly Cache

È possibile inserire una DLL nativa (non COM) in Global Assembly Cache.

## <a name="example"></a>Esempio

**/ASSEMBLYLINKRESOURCE** ti permette di incorporare una DLL nativa in un assembly.

Per altre informazioni, vedere [/ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework)](../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md).

```
/ASSEMBLYLINKRESOURCE:MyComponent.dll
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
