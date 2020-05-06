---
title: Determinare il metodo di esportazione da usare
ms.date: 11/04/2016
helpviewer_keywords:
- __declspec(dllexport) keyword [C++]
- exporting DLLs [C++], method comparison
- def files [C++], exporting from DLLs
- .def files [C++], exporting from DLLs
ms.assetid: 66d773ed-935c-45c2-ad03-1a060874b34d
ms.openlocfilehash: 974c32cef87801599ba0d14fd146e84ad874467f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273737"
---
# <a name="determine-which-exporting-method-to-use"></a>Determinare il metodo di esportazione da usare

È possibile esportare le funzioni in uno dei due modi, ovvero un file con estensione `__declspec(dllexport)` def o la parola chiave. Per decidere quale sia il modo migliore per la DLL, prendere in considerazione le domande seguenti:

- Si intende esportare altre funzioni in un secondo momento?

- La DLL viene utilizzata solo da applicazioni che possono essere ricompilate o utilizzate da applicazioni che non è possibile ricompilare, ad esempio, le applicazioni create da terze parti?

## <a name="pros-and-cons-of-using-def-files"></a>Vantaggi e svantaggi dell'utilizzo di file def

L'esportazione di funzioni in un file con estensione def consente di controllare gli ordinali di esportazione. Quando si aggiunge una funzione esportata alla DLL, è possibile assegnarle un valore ordinale più elevato rispetto a qualsiasi altra funzione esportata. Quando si esegue questa operazione, le applicazioni che utilizzano il collegamento implicito non devono ricollegarsi alla libreria di importazione che contiene la nuova funzione. Questa operazione è molto utile se si progetta una DLL per l'uso da parte di molte applicazioni, in quanto è possibile aggiungere nuove funzionalità e assicurarsi che continui a funzionare correttamente con le applicazioni che si basano già su di essa. Ad esempio, le DLL MFC vengono compilate utilizzando i file def.

Un altro vantaggio dell'uso di un file con estensione def è che è `NONAME` possibile usare l'attributo per esportare una funzione. In questo modo viene inserito solo il numero ordinale nella tabella exports della DLL. Per le dll con un numero elevato di funzioni esportate, `NONAME` l'utilizzo dell'attributo può ridurre le dimensioni del file dll. Per informazioni su come scrivere un'istruzione di definizione di modulo, vedere [regole per le istruzioni Module-Definition](reference/rules-for-module-definition-statements.md). Per informazioni sull'esportazione ordinale, vedere [esportazione di funzioni da una dll in base al numero ordinale anziché al nome](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).

Uno svantaggio dell'uso di un file con estensione def è che se si esportano funzioni in un file C++, è necessario inserire i nomi decorati nel file def o definire le funzioni esportate usando extern "C" per evitare la decorazione del nome eseguita dal compilatore MSVC.

Se si inseriscono i nomi decorati nel file def, è possibile ottenerli usando lo strumento [dumpbin](reference/dumpbin-reference.md) o l'opzione [/Map](reference/map-generate-mapfile.md) del linker. I nomi decorati prodotti dal compilatore sono specifici del compilatore. Se pertanto si inseriscono i nomi decorati prodotti dal compilatore in un file con estensione def, le applicazioni che si collegano alla DLL devono essere compilate utilizzando la stessa versione del compilatore in modo che i nomi decorati nell'applicazione chiamante corrispondano ai nomi esportati nel file def della DLL.

## <a name="pros-and-cons-of-using-__declspecdllexport"></a>Vantaggi e svantaggi dell'utilizzo di __declspec (dllexport)

L' `__declspec(dllexport)` uso di è utile perché non è necessario preoccuparsi di mantenere un file def e ottenere i nomi decorati delle funzioni esportate. Tuttavia, l'utilità di questo metodo di esportazione è limitata dal numero di applicazioni collegate che si vuole ricompilare. Se si ricompila la DLL con le nuove esportazioni, è necessario ricompilare anche le applicazioni perché i nomi decorati per le funzioni C++ esportate potrebbero cambiare se si usa una versione diversa del compilatore per ricompilarla.

### <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL mediante. File DEF](exporting-from-a-dll-using-def-files.md)

- [Esportare da una DLL utilizzando __declspec (dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare e importare utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportare le funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportare le funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

- [Nomi decorati](reference/decorated-names.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](exporting-from-a-dll.md)
