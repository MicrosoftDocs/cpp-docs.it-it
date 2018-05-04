---
title: Esportazione di funzioni C per l'utilizzo in eseguibili di linguaggio C++ o C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- functions [C], exporting
- functions [C], C or C++ executables and
- __cplusplus macro
- exporting DLLs [C++], C functions in C++ executables
- exporting functions [C++], C functions in C++ executables
ms.assetid: b51d6e5e-37cf-4c1c-b0bf-fcf188c82f00
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ee1d572bbfaa31ac626bfeb2b6ed7f61604628c8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="exporting-c-functions-for-use-in-c-or-c-language-executables"></a>Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++  
  
Se si dispone di funzioni in una DLL scritta in C che si desidera accedere da un linguaggio C o un modulo in linguaggio C++, è necessario utilizzare il **cplusplus** macro del preprocessore per determinare il linguaggio che viene compilato e quindi dichiarare queste funzioni con collegamento C se viene utilizzato da un modulo di linguaggio C++. Se si utilizza questa tecnica e forniscono i file di intestazione per la DLL, queste funzioni possono essere utilizzate dagli utenti di C e C++ senza apportare alcuna modifica.  
  
Il codice seguente viene illustrato un file di intestazione che può essere usato dalle applicazioni client di C e C++:  
  
```h  
// MyCFuncs.h  
#ifdef __cplusplus  
extern "C" {  // only need to export C interface if  
              // used by C++ source code  
#endif  
  
__declspec( dllimport ) void MyCFunc();  
__declspec( dllimport ) void AnotherCFunc();  
  
#ifdef __cplusplus  
}  
#endif  
```  
  
Se è necessario collegare le funzioni C all'eseguibile C++ e i file di intestazione di dichiarazione di funzione non usa la tecnica precedente, nel file di origine C++, eseguire il comando seguente per impedire al compilatore di decorazione dei nomi di funzione C:  
  
```cpp  
extern "C" {  
#include "MyCHeader.h"  
}  
```  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL tramite DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione tramite AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importare un'applicazione che utilizza declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
-   [Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)