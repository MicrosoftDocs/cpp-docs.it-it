---
title: Importazione di dati tramite declspec | Documenti Microsoft
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
ms.openlocfilehash: b9877c5a229c3cabcb7703dd2617d1d57e3512f0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="importing-data-using-declspecdllimport"></a>Importazione di dati tramite __declspec(dllimport)
Nel caso di dati, utilizzando **declspec** DllImport consente di rimuovere un livello di riferimento indiretto. Quando si importano dati da una DLL, è necessario scorrere la tabella di indirizzi di importazione. Prima di **declspec**, era necessario utilizzare un livello aggiuntivo di riferimento indiretto durante l'accesso ai dati esportate dalla DLL:  
  
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
  
 e diritti di accesso all'esterno della DLL:  
  
```  
if (*ulDataInDll == 0L)   
{  
   // Do stuff here  
}  
```  
  
 Se si contrassegnano i dati come **declspec**, il compilatore genera automaticamente il codice di riferimento indiretto per l'utente. Non è necessario preoccuparsi i passaggi precedenti. Come indicato in precedenza, non utilizzare **declspec** dichiarazione sui dati durante la compilazione della DLL. Le funzioni all'interno della DLL non utilizzano la tabella di indirizzi di importazione per accedere all'oggetto dati; Pertanto, non è un livello supplementare di riferimento indiretto presentano.  
  
 Per esportare i dati automaticamente dalla DLL, utilizzare questa dichiarazione:  
  
```  
__declspec(dllexport) ULONG ulDataInDLL;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Importazione in un'applicazione](../build/importing-into-an-application.md)