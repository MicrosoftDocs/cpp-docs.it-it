---
title: Le definizioni e dichiarazioni (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 56b809c0-e602-4f18-9ca5-cd7a8fbaaf30
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5d192234a2b3cd3d72bef15e11678ebc41ccede0
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462888"
---
# <a name="definitions-and-declarations-c"></a>Definizioni e dichiarazioni (C++)
**Specifica di Microsoft** interfaccia la DLL fa riferimento a tutti gli elementi (funzioni e dati) ritenuti esportati da un programma nel sistema, vale a dire tutti gli elementi che vengono dichiarati come **dllimport** o **dllexport** . Tutte le dichiarazioni incluse nell'interfaccia DLL devono specificare la **dllimport** oppure **dllexport** attributo. Tuttavia, la definizione deve specificare solo il **dllexport** attributo. Ad esempio, la definizione di funzione seguente genera un errore del compilatore:

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

 L'uso di **dllexport** implica una definizione, mentre **dllimport** implica una dichiarazione. È necessario usare il **extern** parola chiave with **dllexport** per forzare una dichiarazione; in caso contrario, una definizione è implicita. Pertanto, i seguenti esempi sono corretti:

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