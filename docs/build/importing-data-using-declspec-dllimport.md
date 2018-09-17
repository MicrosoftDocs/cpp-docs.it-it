---
title: Importazione di dati tramite declspec | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- dllimport
dev_langs:
- C++
helpviewer_keywords:
- importing data [C++]
- dllimport attribute [C++], data imports
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: 0ae70b39-87c7-4181-8be9-e786e0db60b0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a024d7488eb1683f40548839ab843da1e56f65e8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45710216"
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

[Importazione in un'applicazione](../build/importing-into-an-application.md)