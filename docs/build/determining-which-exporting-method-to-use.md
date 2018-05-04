---
title: Metodo di esportazione da usare | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- __declspec(dllexport) keyword [C++]
- exporting DLLs [C++], method comparison
- def files [C++], exporting from DLLs
- .def files [C++], exporting from DLLs
ms.assetid: 66d773ed-935c-45c2-ad03-1a060874b34d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 03c88cee3504d8efef8f9ca19073ed06b66f6aeb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="determining-which-exporting-method-to-use"></a>Scelta del metodo di esportazione da utilizzare
È possibile esportare funzioni in uno dei due modi, ovvero un file. def o `__declspec(dllexport)` (parola chiave). Che consentono di scegliere la soluzione migliore per la DLL, prendere in considerazione le seguenti domande:  
  
-   Si intende esportare più funzioni in un secondo momento?  
  
-   Viene utilizzata solo da applicazioni che è possibile ricompilare o viene utilizzato dalle applicazioni che non è possibile ricostruire DLL, ad esempio, le applicazioni che vengono create da terze parti?  
  
## <a name="pros-and-cons-of-using-def-files"></a>Vantaggi e gli svantaggi dell'utilizzo di file. def  
 Esportazione di funzioni in un file def fornisce inoltre il controllo gli ordinali di esportazione. Quando si aggiunge una funzione esportata DLL, è possibile assegnare un valore ordinale più alto rispetto a qualsiasi altra funzione esportata. Quando si esegue questa operazione, le applicazioni che utilizzano il collegamento implicito non dispone di ripetere il collegamento con la libreria di importazione che contiene la nuova funzione. Ciò è utile se si sta progettando una DLL da utilizzare per molte applicazioni, poiché è possibile aggiungere nuove funzionalità e anche verificare che continui a funzionare correttamente con le applicazioni che già si basano su di esso. Ad esempio, le DLL MFC vengono compilate utilizzando i file def.  
  
 Un altro vantaggio offerto da un file. def è che è possibile utilizzare il `NONAME` attributo per esportare una funzione. In questo modo solo il numero ordinale nella tabella di esportazione nella DLL. Per le DLL che hanno un numero elevato di funzioni esportate, utilizzando il `NONAME` attributo può ridurre le dimensioni del file DLL. Per informazioni su come scrivere un'istruzione di definizione del modulo, vedere [regole per le istruzioni di definizione moduli](../build/reference/rules-for-module-definition-statements.md). Per informazioni sull'esportazione ordinale, vedere [esportazione di funzioni da una DLL in ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).  
  
 Uno svantaggio dell'utilizzo di un file. def è che se si siano esportando funzioni in un file C++, è necessario inserire i nomi decorati nel def file o definire le funzioni esportate mediante l'utilizzo di extern "C" per evitare la decorazione dei nomi che viene eseguita dal compilatore Visual C++.  
  
 Se si inseriscono i nomi decorati nel file. def, è possibile ottenerle all'utilizzando il [DUMPBIN](../build/reference/dumpbin-reference.md) degli strumenti o utilizzando il linker [/Map](../build/reference/map-generate-mapfile.md) opzione. I nomi decorati sono generate dal compilatore sono specifici del compilatore; Pertanto, se si inseriscono i nomi decorati sono generate dal compilatore in un file con estensione def, le applicazioni che si collegano alla DLL devono anche essere compilate con la stessa versione del compilatore in modo che i nomi decorati nell'applicazione chiamante corrispondano esportate i nomi n il file con estensione def della DLL.  
  
## <a name="pros-and-cons-of-using-declspecdllexport"></a>Vantaggi e gli svantaggi dell'utilizzo di dllexport  
 Utilizzando `__declspec(dllexport)` risulta utile in quanto non è necessario preoccuparsi di mantenere un file. def e di ottenere i nomi decorati delle funzioni esportate. Tuttavia, l'utilità di esportazione in questo modo è limitato dal numero di applicazioni collegate che si sono disposti a ricompilare. Se si rigenera la DLL con nuove esportazioni, è necessario ricompilare le applicazioni, poiché i nomi decorati delle funzioni C++ esportate potrebbero cambiare se si utilizza una versione diversa del compilatore ricompilarlo.  
  
### <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL tramite. DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione tramite AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Importare un'applicazione che utilizza declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)