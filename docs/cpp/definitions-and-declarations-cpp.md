---
title: Definizioni e dichiarazioni (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 56b809c0-e602-4f18-9ca5-cd7a8fbaaf30
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7391180ca83d40e6ec00688054223b2e9af48e4f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="definitions-and-declarations-c"></a>Definizioni e dichiarazioni (C++)
## <a name="microsoft-specific"></a>Sezione specifica Microsoft
 L'interfaccia DLL fa riferimento a tutti gli elementi (funzioni e dati) che sono noti per essere esportati da un programma nel sistema. vale a dire tutti gli elementi che vengono dichiarati come `dllimport` o `dllexport`. Tutte le dichiarazioni incluse nell'interfaccia DLL devono specificare il `dllimport` o `dllexport` attributo. Tuttavia, la definizione deve specificare solo l'attributo `dllexport`. Ad esempio, la definizione di funzione seguente genera un errore del compilatore:

```
__declspec( dllimport ) int func() {   // Error; dllimport
                                       // prohibited on definition.
   return 1;  
}
```

 Anche questo codice genera un errore:

```
__declspec( dllimport ) int i = 10;  // Error; this is a definition.
```

 Tuttavia, questa è la sintassi corretta:

```
__declspec( dllexport ) int i = 10;  // Okay--export definition
```

 L'utilizzo di `dllexport` implica una definizione, mentre `dllimport` implica una dichiarazione. È necessario utilizzare la parola chiave `extern` con `dllexport` per forzare una dichiarazione; in caso contrario, una definizione è implicita. Pertanto, i seguenti esempi sono corretti:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

extern DllExport int k; // These are both correct and imply a
DllImport int j;        // declaration.
```

 I seguenti esempi chiariscono l'esempio precedente:

```
static __declspec( dllimport ) int l; // Error; not declared extern.

void func() {
    static __declspec( dllimport ) int s;  // Error; not declared
                                           // extern.
    __declspec( dllimport ) int m;         // Okay; this is a
                                           // declaration.
    __declspec( dllexport ) int n;         // Error; implies external
                                           // definition in local scope.
    extern __declspec( dllimport ) int i;  // Okay; this is a
                                           // declaration.
    extern __declspec( dllexport ) int k;  // Okay; extern implies
                                           // declaration.
    __declspec( dllexport ) int x = 5;     // Error; implies external
                                           // definition in local scope.
}
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche
 [dllexport, dllimport](../cpp/dllexport-dllimport.md)
