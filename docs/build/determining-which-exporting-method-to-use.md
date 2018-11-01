---
title: Scelta del metodo di esportazione da utilizzare
ms.date: 11/04/2016
helpviewer_keywords:
- __declspec(dllexport) keyword [C++]
- exporting DLLs [C++], method comparison
- def files [C++], exporting from DLLs
- .def files [C++], exporting from DLLs
ms.assetid: 66d773ed-935c-45c2-ad03-1a060874b34d
ms.openlocfilehash: 75cd03e2ebb8dab4069024469b2b8b5c45665704
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50615133"
---
# <a name="determining-which-exporting-method-to-use"></a>Scelta del metodo di esportazione da utilizzare

È possibile esportare funzioni in uno dei due modi, ovvero un file def o `__declspec(dllexport)` (parola chiave). Per decidere qual è il modo migliore per la DLL, prendere in considerazione le seguenti domande:

- Si intende esportare altre funzioni in un secondo momento?

- È la DLL usata solo dalle applicazioni che è possibile rebuild o è usato da applicazioni che non è possibile ricompilarlo, ad esempio, le applicazioni che vengono create da terze parti?

## <a name="pros-and-cons-of-using-def-files"></a>Vantaggi e svantaggi dell'utilizzo di file. def

Esportazione di funzioni in un file def fornisce inoltre il controllo degli ordinali di esportazione. Quando si aggiunge una funzione esportata la DLL, è possibile assegnare un valore ordinale più alto rispetto a qualsiasi altra funzione esportata. Quando si esegue questa operazione, le applicazioni che utilizzano il collegamento implicito non è in questo caso ricollegare con la libreria di importazione che contiene la nuova funzione. Questo risulta molto utile se si sta progettando una DLL per l'uso da numerose applicazioni perché è possibile aggiungere nuove funzionalità e inoltre accertarsi che continuino a funzionare correttamente con le applicazioni che già si basano su di esso. Ad esempio, le DLL MFC vengono compilate utilizzando i file def.

Un altro vantaggio dell'uso di un file con estensione def è che è possibile usare il `NONAME` attributo per esportare una funzione. In questo modo solo il numero ordinale nella tabella di esportazione nella DLL. Per le DLL che hanno un numero elevato di funzioni esportate, utilizzando il `NONAME` attributo può ridurre le dimensioni del file DLL. Per informazioni su come scrivere un'istruzione di definizione del modulo, vedere [regole relative alle istruzioni di definizione moduli](../build/reference/rules-for-module-definition-statements.md). Per informazioni sull'esportazione ordinale, vedere [esportazione di funzioni da una DLL per ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).

Uno svantaggio dell'uso di un file con estensione def è che se si esportano le funzioni in un file C++, è quindi necessario inserire i nomi decorati nel def file o definire le funzioni esportate usando extern "C" per evitare la decorazione queste operazioni vengono eseguite dal compilatore Visual C++.

Se si inseriscono i nomi decorati nel file def, è possibile ottenerli tramite il [DUMPBIN](../build/reference/dumpbin-reference.md) dello strumento o l'uso del linker [/Map](../build/reference/map-generate-mapfile.md) opzione. I nomi decorati prodotti dal compilatore sono specifici del compilatore; Pertanto, se si inseriscono i nomi decorati prodotti dal compilatore in un file def, le applicazioni che si collegano alla DLL devono essere compilate usando la stessa versione del compilatore in modo che i nomi decorati nell'applicazione chiamante corrispondano esportati i nomi n il file def della DLL.

## <a name="pros-and-cons-of-using-declspecdllexport"></a>Vantaggi e svantaggi dell'uso dllexport

Usando `__declspec(dllexport)` è comodo perché non è necessario preoccuparsi di mantenere un file def e ottenere i nomi decorati delle funzioni esportate. Tuttavia, l'utilità di questa modalità di esportazione è limitata dal numero di applicazioni collegate che si sono disposti a ricompilare. Se si rigenera la DLL con nuove esportazioni, è inoltre necessario ricompilare le applicazioni, poiché i nomi decorati delle funzioni esportate C++ potrebbero cambiare se si usa una versione diversa del compilatore per ricompilare.

### <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL mediante. File DEF](../build/exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Importare in un'applicazione che usa declspec](../build/importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](../build/run-time-library-behavior.md#initializing-a-dll)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](../build/mutual-imports.md)

- [Nomi decorati](../build/reference/decorated-names.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](../build/exporting-from-a-dll.md)