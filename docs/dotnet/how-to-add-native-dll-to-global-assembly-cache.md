---
description: 'Altre informazioni su: procedura: aggiungere DLL native alla Global assembly cache'
title: 'Procedura: aggiungere DLL native alla Global Assembly Cache'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], native
- GAC (global assembly cache), loading native DLLs
- native DLLs [C++]
ms.assetid: 25e8d78a-b197-4269-b4e9-237a544ab3c8
ms.openlocfilehash: 267bc2f08fdd40da03b71222c48786ab7cc150fd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335411"
---
# <a name="how-to-add-native-dll-to-global-assembly-cache"></a>Procedura: aggiungere DLL native alla Global Assembly Cache

È possibile inserire una DLL nativa (non COM) nella global assembly cache.

## <a name="example"></a>Esempio

**/ASSEMBLYLINKRESOURCE** consente di incorporare una DLL nativa in un assembly.

Per altre informazioni, vedere [/ASSEMBLYLINKRESOURCE (Collegamento a risorse .NET Framework)](../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md).

```
/ASSEMBLYLINKRESOURCE:MyComponent.dll
```

## <a name="see-also"></a>Vedi anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
