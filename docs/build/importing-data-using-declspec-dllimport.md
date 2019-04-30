---
title: Importazione di dati tramite __declspec(dllimport)
ms.date: 11/04/2016
f1_keywords:
- dllimport
helpviewer_keywords:
- importing data [C++]
- dllimport attribute [C++], data imports
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: 0ae70b39-87c7-4181-8be9-e786e0db60b0
ms.openlocfilehash: 74ad93e640a4e961f7670077227bb5c35a42c20f
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64342099"
---
# <a name="importing-data-using-declspecdllimport"></a>Importazione di dati tramite __declspec(dllimport)

Nel caso dei dati mediante **declspec** DllImport consente di rimuovere un livello di riferimento indiretto. Quando si importano dati da una DLL, è necessario passare attraverso la tabella IAT. Prima di **declspec**, ciò significava era necessario ricordarsi di eseguire un ulteriore livello di riferimento indiretto durante l'accesso ai dati esportate dalla DLL:

```
// project.h
#ifdef _DLL   // If accessing the data from inside the DLL
   ULONG ulDataInDll;

#else         // If accessing the data from outside the DLL
   ULONG *ulDataInDll;
#endif
```

È quindi necessario esportare i dati nel. File DEF:

```
// project.def
LIBRARY project
EXPORTS
   ulDataInDll   CONSTANT
```

e accedervi all'esterno della DLL:

```
if (*ulDataInDll == 0L)
{
   // Do stuff here
}
```

Quando si contrassegnano i dati come **declspec**, il compilatore genera automaticamente il codice di riferimento indiretto per te. È non è più necessario preoccuparsi di passaggi precedenti. Come affermato in precedenza, non utilizzare **declspec** dichiarazione sui dati quando si compila la DLL. Le funzioni all'interno della DLL non utilizzano la tabella IAT per accedere all'oggetto dati; Pertanto, non si avrà un livello supplementare di riferimento indiretto presentano.

Per esportare i dati automaticamente dalla DLL, usare questa dichiarazione:

```
__declspec(dllexport) ULONG ulDataInDLL;
```

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](importing-into-an-application.md)
