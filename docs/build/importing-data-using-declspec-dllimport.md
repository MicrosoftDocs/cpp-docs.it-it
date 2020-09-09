---
title: Importazione di dati tramite __declspec(dllimport)
description: Come utilizzare __declspec (dllimport) per importare i dati DLL.
ms.date: 09/03/2020
helpviewer_keywords:
- importing data [C++]
- dllimport attribute [C++], data imports
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: 0ae70b39-87c7-4181-8be9-e786e0db60b0
ms.openlocfilehash: cb9850306d6e73b88e2926a6f068ae21f8d32530
ms.sourcegitcommit: 0df2b7ab4e81284c5248e4584767591dcc1950c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/09/2020
ms.locfileid: "89609115"
---
# <a name="importing-data-using-__declspecdllimport"></a>Importazione di dati tramite `__declspec(dllimport)`

Nel caso dei dati, l'utilizzo di **`__declspec(dllimport)`** è un elemento pratico che rimuove un livello di riferimento indiretto. Quando si importano dati da una DLL, è comunque necessario passare attraverso la tabella di indirizzi di importazione. Prima **`__declspec(dllimport)`** , ciò significava che era necessario ricordare di eseguire un ulteriore livello di riferimento indiretto durante l'accesso ai dati esportati dalla dll:

```C
// project.h
// Define PROJECT_EXPORTS when building your DLL
#ifdef PROJECT_EXPORTS   // If accessing the data from inside the DLL
   ULONG ulDataInDll;

#else         // If accessing the data from outside the DLL
   ULONG *ulDataInDll;
#endif
```

I dati verranno quindi esportati in. File DEF:

```DEF
// project.def
LIBRARY project
EXPORTS
   ulDataInDll   CONSTANT
```

e accedervi al di fuori della DLL:

```C
if (*ulDataInDll == 0L)
{
   // Do stuff here
}
```

Quando si contrassegnano i dati come **`__declspec(dllimport)`** , il compilatore genera automaticamente il codice di riferimento indiretto. Non è più necessario preoccuparsi dei passaggi precedenti. Come indicato in precedenza, non usare **`__declspec(dllimport)`** la dichiarazione sui dati quando si compila la dll. Le funzioni all'interno della DLL non utilizzano la tabella di indirizzi di importazione per accedere all'oggetto dati. non sarà pertanto disponibile il livello aggiuntivo di riferimento indiretto.

Per esportare automaticamente i dati dalla DLL, usare questa dichiarazione:

```C
// project.h
// Define PROJECT_EXPORTS when building your DLL
#ifdef PROJECT_EXPORTS   // If accessing the data from inside the DLL
   __declspec(dllexport) ULONG ulDataInDLL;

#else         // If accessing the data from outside the DLL
   __declspec(dllimport) ULONG ulDataInDLL;
#endif
```

## <a name="see-also"></a>Vedi anche

[Importazione in un'applicazione](importing-into-an-application.md)
