---
title: Esportazione da una DLL tramite i file DEF
ms.date: 05/06/2019
helpviewer_keywords:
- def files [C++], exporting from DLLs
- .def files [C++], exporting from DLLs
- exporting DLLs [C++], DEF files
ms.assetid: 9d31eda2-184e-47de-a2ee-a93ebd603f8e
ms.openlocfilehash: 6f7d58bcb42edd89527fff41b08a15321722a6cf
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80078528"
---
# <a name="exporting-from-a-dll-using-def-files"></a>Esportazione da una DLL tramite i file DEF

Un file di definizione del modulo o DEF (*. def) è un file di testo contenente una o più istruzioni Module che descrivono i vari attributi di una DLL. Se non si utilizza la parola chiave **__declspec (dllexport)** per esportare le funzioni della dll, la dll richiede un file def.

Un file DEF minimo deve contenere le istruzioni di definizione dei moduli seguenti:

- La prima istruzione nel file deve essere l'istruzione LIBRARY. Questa istruzione identifica il file DEF come appartenente a una DLL. L'istruzione LIBRARY è seguita dal nome della DLL. Il linker inserisce questo nome nella libreria di importazione della DLL.

- L'istruzione EXPORTs elenca i nomi e, facoltativamente, i valori ordinali delle funzioni esportate dalla DLL. Assegnare alla funzione un valore ordinale seguendo il nome della funzione con un simbolo di chiocciola (@) e un numero. Quando si specificano valori ordinali, questi devono essere compresi tra 1 e N, dove N è il numero di funzioni esportate dalla DLL. Se si desidera esportare le funzioni in base all'ordinale, vedere [esportazione di funzioni da una dll in base al numero ordinale anziché al nome](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) e a questo argomento.

Ad esempio, una DLL che contiene il codice per implementare una struttura di ricerca binaria potrebbe essere simile alla seguente:

```
LIBRARY   BTREE
EXPORTS
   Insert   @1
   Delete   @2
   Member   @3
   Min   @4
```

Se si utilizza la [creazione guidata DLL MFC](../mfc/reference/mfc-dll-wizard.md) per creare una DLL MFC, tramite la procedura guidata viene creato automaticamente un file def di scheletro che verrà aggiunto automaticamente al progetto. Aggiungere i nomi delle funzioni da esportare in questo file. Per le dll non MFC, creare il file DEF e aggiungerlo al progetto. Passare quindi al**file di definizione del modulo** di**input** > del**linker** > delle**proprietà** > del **progetto** > e immettere il nome del file def. Ripetere questo passaggio per ogni configurazione e piattaforma oppure eseguirlo contemporaneamente selezionando **configurazione = tutte le configurazioni**e **piattaforma = tutte le piattaforme**.

Se si esportano funzioni in un file C++, è necessario inserire i nomi decorati nel file DEF oppure definire le funzioni esportate con il collegamento C standard usando extern "C". Se è necessario inserire i nomi decorati nel file DEF, è possibile ottenerli usando lo strumento [dumpbin](../build/reference/dumpbin-reference.md) o l'opzione [/Map](../build/reference/map-generate-mapfile.md) del linker. Si noti che i nomi decorati prodotti dal compilatore sono specifici del compilatore. Se si inseriscono i nomi decorati prodotti dal compilatore Microsoft C++ (MSVC) in un file DEF, è necessario compilare anche le applicazioni che si collegano alla DLL usando la stessa versione di MSVC in modo che i nomi decorati nell'applicazione chiamante corrispondano ai nomi esportati nel file DEF della DLL.

> [!NOTE]
> Una DLL compilata con Visual Studio 2015 può essere utilizzata dalle applicazioni compilate con Visual Studio 2017 o Visual Studio 2019.

Se si compila una [dll di estensione](../build/extension-dlls-overview.md)e si esporta usando un file def, inserire il codice seguente all'inizio e alla fine dei file di intestazione che contengono le classi esportate:

```
#undef AFX_DATA
#define AFX_DATA AFX_EXT_DATA
// <body of your header file>
#undef AFX_DATA
#define AFX_DATA
```

Queste righe assicurano che le variabili MFC utilizzate internamente o aggiunte alle classi vengano esportate o importate dalla DLL dell'estensione MFC. Ad esempio, quando si deriva una classe usando `DECLARE_DYNAMIC`, la macro si espande per aggiungere una `CRuntimeClass` variabile membro alla classe. Escludendo queste quattro righe è possibile che la DLL venga compilata o collegata in modo errato o causi un errore quando l'applicazione client si collega alla DLL.

Quando si compila la DLL, il linker usa il file DEF per creare un file di esportazione (exp) e un file di libreria di importazione (lib). Il linker usa quindi il file di esportazione per compilare il file DLL. Gli eseguibili che si collegano in modo implicito alla DLL si collegano alla libreria di importazione quando vengono compilati.

Si noti che MFC usa i file DEF per esportare le funzioni e le classi da MFCx0. dll.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportare da una DLL utilizzando __declspec (dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare e importare utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportare le funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportare le funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare il metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [file def](reference/module-definition-dot-def-files.md)

- [Regole per le istruzioni di definizione dei moduli](reference/rules-for-module-definition-statements.md)

- [Nomi decorati](reference/decorated-names.md)

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](exporting-from-a-dll.md)
