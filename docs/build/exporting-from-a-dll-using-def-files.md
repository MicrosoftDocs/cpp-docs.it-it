---
title: Esportazione da una DLL tramite i file DEF | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- def files [C++], exporting from DLLs
- .def files [C++], exporting from DLLs
- exporting DLLs [C++], DEF files
ms.assetid: 9d31eda2-184e-47de-a2ee-a93ebd603f8e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a870df7ea803813a8403cd807c0f0612873d4576
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369747"
---
# <a name="exporting-from-a-dll-using-def-files"></a>Esportazione da una DLL tramite i file DEF
Un file di definizione moduli (def) è un file di testo che contiene uno o più istruzioni di modulo che descrivono i vari attributi di una DLL. Se non si utilizza il **dllexport** (parola chiave) per esportare le funzioni della DLL, è necessario un file def.  
  
 Un file def deve contenere le istruzioni di definizione moduli seguenti:  
  
-   La prima istruzione nel file deve essere l'istruzione di libreria. Questa istruzione identifica il file con estensione def come appartenente a una DLL. L'istruzione di libreria è seguito dal nome della DLL. Il linker inserisce il nome nella libreria di importazione della DLL.  
  
-   L'istruzione di esportazioni Elenca i nomi e, facoltativamente, i valori ordinali delle funzioni esportate dalla DLL. La funzione si assegna un valore ordinale seguendo il nome della funzione con un simbolo di chiocciola (@) e un numero. Quando si specificano valori ordinali, devono essere compreso nell'intervallo da 1 a N, dove N è il numero di funzioni esportate dalla DLL. Se si desidera esportare funzioni tramite ordinale, vedere [esportazione di funzioni da una DLL in ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) nonché in questo argomento.  
  
 Una DLL che contiene il codice per implementare una struttura di ricerca binario, ad esempio, potrebbe essere simile al seguente:  
  
```  
LIBRARY   BTREE  
EXPORTS  
   Insert   @1  
   Delete   @2  
   Member   @3  
   Min   @4  
```  
  
 Se si utilizza il [Creazione guidata DLL MFC](../mfc/reference/mfc-dll-wizard.md) per creare una DLL MFC, la procedura guidata crea un file def di base per l'utente e lo aggiunge automaticamente al progetto. Aggiungere i nomi delle funzioni da esportare in questo file. Per la DLL non MFC, è necessario creare manualmente il file. def e aggiungerlo al progetto.  
  
 Se si siano esportando funzioni in un file C++, è necessario inserire i nomi decorati nel file con estensione def o definire le funzioni esportate con il collegamento C standard utilizzando extern "C". Se è necessario inserire i nomi decorati nel file con estensione def, è possibile ottenerle all'utilizzando il [DUMPBIN](../build/reference/dumpbin-reference.md) degli strumenti o utilizzando il linker [/Map](../build/reference/map-generate-mapfile.md) opzione. Si noti che i nomi decorati creati dal compilatore specifica del compilatore. Se si inseriscono i nomi decorati creati dal compilatore Visual C++ in un file con estensione def, anche le applicazioni che si collegano alla DLL devono essere compilate utilizzando la stessa versione di Visual C++ in modo che i nomi decorati nell'applicazione chiamante corrispondano ai nomi esportati nel de della DLL file f.  
  
 Se si sta compilando un [DLL di estensione](../build/extension-dlls-overview.md), e l'esportazione di un file def, inserire il codice seguente all'inizio e alla fine del file di intestazione che contengono le classi esportate:  
  
```  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
 Queste righe assicurano che le variabili che vengono utilizzati internamente o che vengono aggiunte alle classi MFC sono esportati o importati dalla DLL di estensione MFC. Ad esempio, quando si deriva una classe utilizzando `DECLARE_DYNAMIC`, la macro si espande per aggiungere un `CRuntimeClass` variabile membro alla classe. Escludendo le quattro righe può comportare errori di compilazione o il collegamento errato o causa un errore durante l'applicazione client è collegato alla DLL.  
  
 Quando si compila la DLL, il linker Usa il file. def per creare un file di esportazione (EXP) e un file di importazione della libreria (lib). Il linker utilizza quindi il file di esportazione per compilare il file DLL. File eseguibili che si collegano al collegamento alla libreria di importazione DLL in modo implicito quando vengono generati.  
  
 Si noti che MFC utilizza i file con estensione def per esportare le funzioni e classi da MFCx0.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione tramite AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importare un'applicazione che utilizza declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [DEF (file)](../build/reference/module-definition-dot-def-files.md)  
  
-   [Regole per le istruzioni di definizione moduli](../build/reference/rules-for-module-definition-statements.md)  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)