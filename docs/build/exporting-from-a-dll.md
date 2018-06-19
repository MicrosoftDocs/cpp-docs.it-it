---
title: Esportazione da una DLL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- exporting DLLs [C++], about exporting from DLLs
- exporting functions [C++], DLLs (exporting from)
- exporting DLLs [C++]
- DLLs [C++], exporting from
- DLL exports [C++]
- functions [C++], exporting
- exports table [C++]
ms.assetid: a08f86c4-5996-460b-ae54-da2b764045f0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 07efe3d73b3f78dfb30e85ffad6434e2907c36c4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32367953"
---
# <a name="exporting-from-a-dll"></a>Esportazione da una DLL  
  
Un file DLL ha un layout molto simile a un file .exe, con una differenza importante, ovvero un file DLL contiene una tabella di esportazione. La tabella di esportazione contiene il nome di ogni funzione che la DLL esporta altri eseguibili. Queste funzioni sono i punti di ingresso nella DLL. solo le funzioni nella tabella di esportazione sono accessibili da altri file eseguibili. Qualsiasi altra funzione nella DLL sono privata per la DLL. La tabella di esportazione di una DLL può essere visualizzata utilizzando il [DUMPBIN](../build/reference/dumpbin-reference.md) strumento con l'opzione /EXPORTS.  
  
 È possibile esportare funzioni da una DLL tramite due metodi:  
  
-   Creare un file di definizione (con estensione def) del modulo e usare il file con estensione def durante la creazione della DLL. Utilizzare questo approccio se si desidera [esportare funzioni dalla DLL di base al numero ordinale anziché dal nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).  
  
-   Utilizzare la parola chiave **dllexport** nella definizione della funzione.  
  
 Durante l'esportazione di funzioni con entrambi i metodi, assicurarsi di utilizzare il [stdcall](../cpp/stdcall.md) convenzione di chiamata.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL tramite DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione tramite AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Funzioni di esportazione da una DLL in base al numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md)  
  
-   [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Determinare quale metodo di collegamento](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)  
  
-   [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Importazione in un'applicazione](../build/importing-into-an-application.md)  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Importazione ed esportazione](../build/importing-and-exporting.md)