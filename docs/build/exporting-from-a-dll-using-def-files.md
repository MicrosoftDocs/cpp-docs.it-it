---
title: "Esportazione da una DLL tramite i file DEF | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".def (file) [C++], esportazione da DLL"
  - "file def [C++], esportazione da DLL"
  - "esportazione di DLL [C++], DEF (file)"
ms.assetid: 9d31eda2-184e-47de-a2ee-a93ebd603f8e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Esportazione da una DLL tramite i file DEF
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un file di definizione di modulo \(def\) è un file di testo contenente una o più istruzioni di modulo che descrivono alcuni attributi di una DLL.  Se non si utilizza la parola chiave **\_\_declspec\(dllimport\)** per esportare le funzioni della DLL, è necessario utilizzare un file def.  
  
 Un file def deve contenere almeno le seguenti istruzioni di definizione di modulo.  
  
-   La prima istruzione nel file deve essere LIBRARY,  che identifica il file def come appartenente a una DLL.  L'istruzione LIBRARY è seguita dal nome della DLL.  Il linker colloca questo nome nella libreria di importazione della DLL.  
  
-   L'istruzione EXPORTS elenca i nomi ed eventualmente i valori ordinali delle funzioni esportate dalla DLL.  Alla funzione viene assegnato un valore ordinale facendo seguire il nome della funzione dal simbolo @ e da un numero.  Quando si specificano i valori ordinali, questi devono essere compresi nell'intervallo da 1 a N, dove N corrisponde al numero delle funzioni esportate dalla DLL.  Se si desidera esportare le funzioni in base al valore ordinale, vedere [Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) insieme a questo argomento.  
  
 Una DLL che contiene ad esempio il codice per l'implementazione di una struttura ad albero di ricerca binaria è simile a quanto segue:  
  
```  
LIBRARY   BTREE  
EXPORTS  
   Insert   @1  
   Delete   @2  
   Member   @3  
   Min   @4  
```  
  
 Se si utilizza la [Creazione guidata DLL MFC](../mfc/reference/mfc-dll-wizard.md) per creare una DLL MFC, viene creato e aggiunto automaticamente al progetto un file def di base.  Aggiungere i nomi delle funzioni da esportare in questo file.  Per le DLL non MFC, è necessario creare manualmente il file def e aggiungerlo al progetto.  
  
 Se si esportano le funzioni in un file C\+\+, è necessario inserire i nomi decorati nel file def o definire le funzioni esportate con il collegamento C standard utilizzando extern "C".  Per ottenere i nomi decorati da inserire nel file def, è possibile utilizzare lo strumento [DUMPBIN](../build/reference/dumpbin-reference.md) o l'opzione [\/MAP](../build/reference/map-generate-mapfile.md) del linker.  I nomi decorati prodotti dal compilatore sono specifici del compilatore.  Se si inseriscono i nomi decorati creati dal compilatore Visual C\+\+ in un file def, anche le applicazioni collegate alla DLL devono essere compilate utilizzando la stessa versione di Visual C\+\+, in modo che i nomi decorati nell'applicazione chiamante corrispondano ai nomi esportati nel file def della DLL.  
  
 Se si compila una [DLL di estensione](../build/extension-dlls-overview.md) e si esegue l'esportazione mediante un file def, inserire il seguente codice all'inizio e alla fine dei file di intestazione che contengono le classi esportate:  
  
```  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
 Queste righe di codice garantiscono che le variabili MFC utilizzate internamente o aggiunte alle classi vengano esportate, o importate, dalla DLL di estensione.  Quando si deriva, ad esempio, una classe mediante `DECLARE_DYNAMIC`, la macro si espande per aggiungere una variabile membro `CRuntimeClass` alla classe.  L'omissione di queste quattro righe può comportare errori di compilazione o di collegamento della DLL o provocare un errore quando l'applicazione client si collega alla DLL.  
  
 Quando si compila la DLL, il linker utilizza il file def per creare un file di esportazione \(exp\) e un file di libreria di importazione \(lib\).  Il linker utilizza quindi il file di esportazione per compilare il file DLL.  Gli eseguibili che si collegano in modo implicito alla DLL si collegano alla libreria di importazione quando vengono compilati.  
  
 I file def vengono utilizzati da MFC per esportare funzioni e classi da MFCx0.dll.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportazione da una DLL utilizzando \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione utilizzando AFX\_EXT\_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C\+\+ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C\+\+](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando \_\_declspec\(dllimport\)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [File def](../build/reference/module-definition-dot-def-files.md)  
  
-   [Regole relative alle istruzioni di definizione dei moduli](../build/reference/rules-for-module-definition-statements.md)  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)