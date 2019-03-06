---
title: Esportazione da una DLL
ms.date: 11/04/2016
helpviewer_keywords:
- exporting DLLs [C++], about exporting from DLLs
- exporting functions [C++], DLLs (exporting from)
- exporting DLLs [C++]
- DLLs [C++], exporting from
- DLL exports [C++]
- functions [C++], exporting
- exports table [C++]
ms.assetid: a08f86c4-5996-460b-ae54-da2b764045f0
ms.openlocfilehash: ac00df5a1bf1bcfaa300e12bb47cf1e6291aa0f1
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57416229"
---
# <a name="exporting-from-a-dll"></a>Esportazione da una DLL

Un file DLL ha un layout molto simile a un file .exe, con una differenza importante, ovvero un file DLL contiene una tabella di esportazione. La tabella di esportazione contiene il nome di ogni funzione che consente di esportare la DLL in altri file eseguibili. Queste funzioni sono i punti di ingresso nella DLL. solo le funzioni nella tabella di esportazione sono accessibili da altri file eseguibili. Qualsiasi altra funzione nella DLL sono privata per la DLL. La tabella di esportazione di una DLL può essere visualizzata tramite il [DUMPBIN](../build/reference/dumpbin-reference.md) strumento con l'opzione /EXPORTS.

È possibile esportare funzioni da una DLL tramite due metodi:

- Creare un file di definizione (con estensione def) del modulo e usare il file con estensione def quando si compila la DLL. Usare questo approccio se si desidera [esportazione di funzioni dalla DLL di base al numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).

- Usare la parola chiave **dllexport** nella definizione della funzione.

Quando si esportano le funzioni con entrambi i metodi, assicurarsi di usare la [stdcall](../cpp/stdcall.md) convenzione di chiamata.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Funzioni di esportazione da una DLL in base al numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md)

- [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)

- [Determinare quale metodo di collegamento da utilizzare](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

- [Inizializzare una DLL](../build/run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Importazione in un'applicazione](../build/importing-into-an-application.md)

- [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](../build/mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Importazione ed esportazione](../build/importing-and-exporting.md)
