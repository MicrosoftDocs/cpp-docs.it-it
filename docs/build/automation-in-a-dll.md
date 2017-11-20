---
title: Automazione in una DLL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- DLLs [C++], Automation
- Automation [C++], DLLs
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 69b5d723da2ac67de3c381b6a5bc09645c1f4341
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="automation-in-a-dll"></a>Automazione in una DLL
Quando si sceglie l'opzione di automazione nella creazione guidata DLL MFC, la procedura guidata fornisce le seguenti:  
  
-   Un linguaggio di descrizione dell'oggetto iniziale (. File ODL)  
  
-   Una direttiva include nel file di stdafx.  
  
-   Un'implementazione del `DllGetClassObject` funzione che chiama il **AfxDllGetClassObject** (funzione)  
  
-   Un'implementazione del `DllCanUnloadNow` funzione che chiama il **AfxDllCanUnloadNow** (funzione)  
  
-   Un'implementazione del `DllRegisterServer` funzione che chiama il [COleObjectFactory:: UpdateRegistryAll](../mfc/reference/coleobjectfactory-class.md#updateregistryall) (funzione)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Server di automazione](../mfc/automation-servers.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)