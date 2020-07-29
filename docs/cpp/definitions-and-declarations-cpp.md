---
title: Definizioni e dichiarazioni (C++)
ms.date: 11/04/2016
ms.assetid: 56b809c0-e602-4f18-9ca5-cd7a8fbaaf30
ms.openlocfilehash: c35c0adaa1b81e5bf9bfd9e779037bc6068b3174
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221705"
---
# <a name="definitions-and-declarations-c"></a>Definizioni e dichiarazioni (C++)

**Specifico di Microsoft**

L'interfaccia DLL fa riferimento a tutti gli elementi (funzioni e dati) che sono noti per essere esportati da un programma nel sistema; ovvero tutti gli elementi dichiarati come **`dllimport`** o **`dllexport`** . Tutte le dichiarazioni incluse nell'interfaccia DLL devono specificare l' **`dllimport`** **`dllexport`** attributo o. Tuttavia, la definizione deve specificare solo l' **`dllexport`** attributo. Ad esempio, la definizione di funzione seguente genera un errore del compilatore:

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

L'uso di **`dllexport`** implica una definizione, mentre **`dllimport`** implica una dichiarazione. È necessario utilizzare la **`extern`** parola chiave con **`dllexport`** per forzare una dichiarazione; in caso contrario, una definizione è implicita. Pertanto, i seguenti esempi sono corretti:

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[dllexport, dllimport](../cpp/dllexport-dllimport.md)
