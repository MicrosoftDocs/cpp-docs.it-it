---
title: Importazione di dati tramite declspec | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: dllimport
dev_langs: C++
helpviewer_keywords:
- importing data [C++]
- dllimport attribute [C++], data imports
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: 0ae70b39-87c7-4181-8be9-e786e0db60b0
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ebbc91b9144a7fe8025a34e9c1476ab23b604c46
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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