---
title: Automazione in una DLL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DLLs [C++], Automation
- Automation [C++], DLLs
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 41c5f31a72cf734296ecb281e0785d415c8043a7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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