---
title: Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C++], C++ functions in C executables
- exporting DLLs [C++], C++ functions in C executables
- exporting functions [C++], C++ functions in C executables
- functions [C++], exporting
ms.assetid: 80b9e982-f52d-4312-a891-f73cc69f3c2b
ms.openlocfilehash: 86d771f8dcb9ee1ef137b7766f249a1dda7257db
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426485"
---
# <a name="exporting-c-functions-for-use-in-c-language-executables"></a>Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C

Se si dispone di funzioni in una DLL scritta in C++ che si desidera accedere da un modulo di linguaggio C, è necessario dichiarare queste funzioni con collegamento C invece di collegamento a C++. Se non diversamente specificato, il compilatore C++ Usa C++ indipendente dai tipi (noto anche come decorazione dei nomi) di denominazione e convenzioni di chiamata, che possono essere difficile da chiamare da C. C++

Per specificare il collegamento C, specificare `extern "C"` per le dichiarazioni di funzione. Ad esempio:

```
extern "C" __declspec( dllexport ) int MyFunc(long parm1);
```

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)

- [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione che usa declspec](../build/importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](../build/run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Nomi decorati](../build/reference/decorated-names.md)

- [Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](../build/exporting-from-a-dll.md)
