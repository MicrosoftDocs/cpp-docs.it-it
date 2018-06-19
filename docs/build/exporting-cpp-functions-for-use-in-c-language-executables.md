---
title: Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- functions [C++], C++ functions in C executables
- exporting DLLs [C++], C++ functions in C executables
- exporting functions [C++], C++ functions in C executables
- functions [C++], exporting
ms.assetid: 80b9e982-f52d-4312-a891-f73cc69f3c2b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cf5f348675752ff9c0b548693c442812fa6be697
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32367586"
---
# <a name="exporting-c-functions-for-use-in-c-language-executables"></a>Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C  
  
Se si dispone di funzioni in una DLL scritta in C++ che si desidera accedere da un modulo in linguaggio C, è necessario dichiarare queste funzioni con collegamento C anziché il collegamento C++. Se non diversamente specificato, il compilatore C++ utilizza C++ (noto anche come decorazione dei nomi) di denominazione indipendente dai tipi e C++ convenzioni di chiamata, che possono essere difficile da chiamare da C.  
  
Per specificare il collegamento C, specificare `extern "C"` per le dichiarazioni di funzione. Ad esempio:  
  
```  
extern "C" __declspec( dllexport ) int MyFunc(long parm1);  
```  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL tramite DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione tramite AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importare un'applicazione che utilizza declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
-   [Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)