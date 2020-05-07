---
title: Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C++], C++ functions in C executables
- exporting DLLs [C++], C++ functions in C executables
- exporting functions [C++], C++ functions in C executables
- functions [C++], exporting
ms.assetid: 80b9e982-f52d-4312-a891-f73cc69f3c2b
ms.openlocfilehash: a694b77e3730ab82ec1698076cc66729ff115cdc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62195234"
---
# <a name="exporting-c-functions-for-use-in-c-language-executables"></a>Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C

Se si dispone di funzioni in una DLL scritta in C++ a cui si vuole accedere da un modulo del linguaggio C, è necessario dichiarare queste funzioni con il collegamento C anziché con il collegamento C++. Se non diversamente specificato, il compilatore C++ usa la denominazione indipendente dai tipi C++ (nota anche come decorazione del nome) e le convenzioni di chiamata C++, che possono essere difficili da chiamare da C.

Per specificare il collegamento C, `extern "C"` specificare per le dichiarazioni di funzione. Ad esempio:

```
extern "C" __declspec( dllexport ) int MyFunc(long parm1);
```

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL tramite i file def](exporting-from-a-dll-using-def-files.md)

- [Esportare da una DLL utilizzando __declspec (dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare e importare utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportare le funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare il metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Nomi decorati](reference/decorated-names.md)

- [Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](exporting-from-a-dll.md)
