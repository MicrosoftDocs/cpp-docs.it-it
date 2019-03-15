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
ms.openlocfilehash: 6bdf5b86724ae07aa073a9feb1cc4d5723bc6e6b
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57819118"
---
# <a name="exporting-from-a-dll"></a>Esportazione da una DLL

Un file DLL ha un layout molto simile a un file .exe, con una differenza importante, ovvero un file DLL contiene una tabella di esportazione. La tabella di esportazione contiene il nome di ogni funzione che consente di esportare la DLL in altri file eseguibili. Queste funzioni sono i punti di ingresso nella DLL. solo le funzioni nella tabella di esportazione sono accessibili da altri file eseguibili. Qualsiasi altra funzione nella DLL sono privata per la DLL. La tabella di esportazione di una DLL può essere visualizzata tramite il [DUMPBIN](reference/dumpbin-reference.md) strumento con l'opzione /EXPORTS.

È possibile esportare funzioni da una DLL tramite due metodi:

- Creare un file di definizione (con estensione def) del modulo e usare il file con estensione def quando si compila la DLL. Usare questo approccio se si desidera [esportazione di funzioni dalla DLL di base al numero ordinale anziché al nome](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).

- Usare la parola chiave **dllexport** nella definizione della funzione.

Quando si esportano le funzioni con entrambi i metodi, assicurarsi di usare la [stdcall](../cpp/stdcall.md) convenzione di chiamata.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL tramite i file def](exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Funzioni di esportazione da una DLL in base al numero ordinale anziché al nome](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md)

- [Determinare quale metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Importazione in un'applicazione](importing-into-an-application.md)

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Importazione ed esportazione](importing-and-exporting.md)
