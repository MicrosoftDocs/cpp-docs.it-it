---
title: Definizioni e dichiarazioni (C)
ms.date: 11/04/2016
helpviewer_keywords:
- export functions
ms.assetid: d150395a-89d4-4298-9ac4-08f84fe1261c
ms.openlocfilehash: 0e39832f942eb1473be913112fde1d37ddf05674
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226366"
---
# <a name="definitions-and-declarations-c"></a>Definizioni e dichiarazioni (C)

**Specifico di Microsoft**

L'interfaccia DLL fa riferimento a tutti gli elementi (funzioni e dati) che sono noti per essere esportati da un programma nel sistema; ovvero tutti gli elementi dichiarati come **`dllimport`** o `dllexport` . Tutte le dichiarazioni incluse nell'interfaccia DLL devono specificare l' **`dllimport`** `dllexport` attributo o. Tuttavia, la definizione può specificare solo l'attributo `dllexport`. Ad esempio, la definizione di funzione seguente genera un errore del compilatore:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllImport int func()    /* Error; dllimport prohibited in */
                        /* definition. */
{
   return 1;
}
```

Anche questo codice genera un errore:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllImport int i = 10;      /* Error; this is a definition. */
```

Tuttavia, questa è la sintassi corretta:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllExport int i = 10;      /* Okay: this is an export definition. */
```

L'uso di `dllexport` implica una definizione, mentre **`dllimport`** implica una dichiarazione. È necessario utilizzare la **`extern`** parola chiave con `dllexport` per forzare una dichiarazione; in caso contrario, una definizione è implicita.

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

extern DllImport int k;   /* These are correct and imply */
Dllimport int j;          /* a declaration. */
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Funzioni di importazione ed esportazione DLL](../c-language/dll-import-and-export-functions.md)
