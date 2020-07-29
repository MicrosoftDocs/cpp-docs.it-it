---
title: Importazione di dati tramite __declspec(dllimport)
ms.date: 11/04/2016
helpviewer_keywords:
- importing data [C++]
- dllimport attribute [C++], data imports
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: 0ae70b39-87c7-4181-8be9-e786e0db60b0
ms.openlocfilehash: 341912b53301c3a11df4285167d66c8c1493d2fd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223993"
---
# <a name="importing-data-using-__declspecdllimport"></a>Importazione di dati tramite __declspec(dllimport)

Nel caso dei dati, l'utilizzo di **`__declspec(dllimport)`** è un elemento pratico che rimuove un livello di riferimento indiretto. Quando si importano dati da una DLL, è comunque necessario passare attraverso la tabella di indirizzi di importazione. Prima **`__declspec(dllimport)`** , ciò significava che era necessario ricordare di eseguire un ulteriore livello di riferimento indiretto durante l'accesso ai dati esportati dalla dll:

```
// project.h
#ifdef _DLL   // If accessing the data from inside the DLL
   ULONG ulDataInDll;

#else         // If accessing the data from outside the DLL
   ULONG *ulDataInDll;
#endif
```

I dati verranno quindi esportati in. File DEF:

```
// project.def
LIBRARY project
EXPORTS
   ulDataInDll   CONSTANT
```

e accedervi al di fuori della DLL:

```
if (*ulDataInDll == 0L)
{
   // Do stuff here
}
```

Quando si contrassegnano i dati come **`__declspec(dllimport)`** , il compilatore genera automaticamente il codice di riferimento indiretto. Non è più necessario preoccuparsi dei passaggi precedenti. Come indicato in precedenza, non usare **`__declspec(dllimport)`** la dichiarazione sui dati quando si compila la dll. Le funzioni all'interno della DLL non utilizzano la tabella di indirizzi di importazione per accedere all'oggetto dati. non sarà pertanto disponibile il livello aggiuntivo di riferimento indiretto.

Per esportare automaticamente i dati dalla DLL, usare questa dichiarazione:

```
__declspec(dllexport) ULONG ulDataInDLL;
```

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](importing-into-an-application.md)
