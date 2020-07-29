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
ms.openlocfilehash: e6a8555561fcf935b3968bd6cb6d19ec42a78563
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224019"
---
# <a name="exporting-from-a-dll"></a>Esportazione da una DLL

Un file DLL presenta un layout molto simile a un file con estensione exe, con una differenza importante, ovvero un file DLL contiene una tabella exports. La tabella exports contiene il nome di ogni funzione esportata dalla DLL in altri eseguibili. Queste funzioni sono i punti di ingresso nella DLL. è possibile accedere solo alle funzioni nella tabella exports da altri eseguibili. Qualsiasi altra funzione nella DLL è privata per la DLL. La tabella exports di una DLL può essere visualizzata usando lo strumento [dumpbin](reference/dumpbin-reference.md) con l'opzione/EXPORTS..

È possibile esportare le funzioni da una DLL usando due metodi:

- Creare un file di definizione del modulo (con estensione def) e usare il file def durante la compilazione della DLL. Utilizzare questo approccio se si desidera [esportare le funzioni dalla dll in base al numero ordinale anziché al nome](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).

- Usare la parola chiave **`__declspec(dllexport)`** nella definizione della funzione.

Quando si esportano funzioni con uno dei due metodi, assicurarsi di usare la convenzione di chiamata [__stdcall](../cpp/stdcall.md) .

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL tramite i file def](exporting-from-a-dll-using-def-files.md)

- [Esportare da una DLL utilizzando __declspec (dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare e importare utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportare le funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportare le funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Esporta funzioni da una DLL in base al numero ordinale anziché al nome](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md)

- [Determinare il metodo di esportazione da usare](determining-which-exporting-method-to-use.md)

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Importazione in un'applicazione](importing-into-an-application.md)

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Importazione ed esportazione](importing-and-exporting.md)
