---
title: Esportazione da una DLL tramite i file DEF
ms.date: 01/09/2018
helpviewer_keywords:
- def files [C++], exporting from DLLs
- .def files [C++], exporting from DLLs
- exporting DLLs [C++], DEF files
ms.assetid: 9d31eda2-184e-47de-a2ee-a93ebd603f8e
ms.openlocfilehash: 0f485353d344b17dabbf0f56a4c7ded2cbccce76
ms.sourcegitcommit: a1fad0a266b20b313364a74b16c9ac45d089b1e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/11/2019
ms.locfileid: "54220712"
---
# <a name="exporting-from-a-dll-using-def-files"></a>Esportazione da una DLL tramite i file DEF

Una definizione di modulo o un file DEF (def) è un file di testo contenente uno o più istruzioni di modulo che descrivono alcuni attributi di una DLL. Se non si usa la **dllexport** (parola chiave) per esportare le funzioni della DLL, è necessario un file DEF.

Un file DEF minimo deve contenere le istruzioni di definizione moduli seguenti:

- La prima istruzione nel file deve essere l'istruzione LIBRARY. Questa istruzione identifica il file DEF come appartenente a una DLL. L'istruzione LIBRARY è seguita dal nome della DLL. Il linker colloca questo nome nella libreria di importazione della DLL.

- L'istruzione EXPORTS Elenca i nomi e, facoltativamente, i valori ordinali delle funzioni esportate dalla DLL. Funzione viene assegnato un valore ordinale seguendo il nome della funzione con un simbolo di chiocciola (@) e un numero. Quando si specificano valori ordinali, devono essere compresi nell'intervallo da 1 a N, dove N è il numero delle funzioni esportate dalla DLL. Se si desidera esportare funzioni tramite ordinale, vedere [esportazione di funzioni da una DLL per ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) insieme a questo argomento.

Una DLL che contiene il codice per implementare una struttura di ricerca binario, ad esempio, potrebbe essere simile al seguente:

```
LIBRARY   BTREE
EXPORTS
   Insert   @1
   Delete   @2
   Member   @3
   Min   @4
```

Se si usa la [Creazione guidata DLL MFC](../mfc/reference/mfc-dll-wizard.md) per creare una DLL MFC, la procedura guidata crea un file DEF scheletro per si e aggiunge automaticamente al progetto. Aggiungere i nomi delle funzioni da esportare al file. Per la DLL non MFC, creare manualmente il file DEF e aggiungerlo al progetto. Passare quindi a **Project** > **delle proprietà** > **Linker** > **Input**  >  **File di definizione moduli** e immettere il nome del file DEF. Ripetere questo passaggio per ogni piattaforma e la configurazione o eseguire questa operazione in un'unica selezionando **configurazione = tutte le configurazioni**, e **piattaforma = tutte le piattaforme**.

Se si esportano le funzioni in un file C++, è necessario inserire i nomi decorati nel file DEF o definire le funzioni esportate con collegamento C standard utilizzando extern "C". Se è necessario inserire i nomi decorati nel file DEF, è possibile ottenerle con il [DUMPBIN](../build/reference/dumpbin-reference.md) dello strumento o l'uso del linker [/Map](../build/reference/map-generate-mapfile.md) opzione. Si noti che i nomi decorati creati dal compilatore sono specifici del compilatore. Se si inseriscono i nomi decorati creati dal compilatore Visual C++ in un file DEF, le applicazioni che si collegano alla DLL devono essere create anche usando la stessa versione di Visual C++ in modo che i nomi decorati nell'applicazione chiamante corrispondano ai nomi esportati in f DEF della DLL ile.

Se si sta compilando un' [DLL di estensione](../build/extension-dlls-overview.md), e l'esportazione utilizzando un file DEF, inserire il codice seguente all'inizio e alla fine del file di intestazione che contengono le classi esportate:

```
#undef AFX_DATA
#define AFX_DATA AFX_EXT_DATA
// <body of your header file>
#undef AFX_DATA
#define AFX_DATA
```

Queste righe assicurano che le variabili MFC utilizzate internamente o aggiunte alle classi vengano esportate o importate da DLL di estensione MFC. Ad esempio, quando si deriva una classe che usa `DECLARE_DYNAMIC`, la macro si espande per aggiungere un `CRuntimeClass` variabile membro alla classe. Omissione di queste quattro righe può causare la DLL per la compilazione o il collegamento errato o causa un errore durante l'applicazione client si collega alla DLL.

Quando si compila la DLL, il linker Usa i file DEF per creare un file di esportazione (EXP) e un file di libreria (lib) importazione. Il linker utilizza quindi il file di esportazione per compilare il file DLL. File eseguibili che si collegano in modo implicito alla DLL si collegano alla libreria di importazione quando vengono compilati.

Si noti che MFC Usa i file DEF per esportare funzioni e classi da MFCx0.dll.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione che usa declspec](../build/importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](../build/run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [DEF (file)](../build/reference/module-definition-dot-def-files.md)

- [Regole relative alle istruzioni di definizione moduli](../build/reference/rules-for-module-definition-statements.md)

- [Nomi decorati](../build/reference/decorated-names.md)

- [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](../build/mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](../build/exporting-from-a-dll.md)