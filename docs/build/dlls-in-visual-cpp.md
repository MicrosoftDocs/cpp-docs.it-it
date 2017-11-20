---
title: DLL in Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- executable files [C++]
- dynamic linking [C++]
- linking [C++], dynamic vs. static
- DLLs [C++]
- DLLs [C++], about DLLs
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: debf3f934f7b9ad5f4c8dd337b03234cb25f7f22
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dlls-in-visual-c"></a>DLL in Visual C++  
  
In Windows, una libreria di collegamento dinamico (DLL) è un tipo di file eseguibile che funziona come una libreria condivisa di funzioni e risorse. Collegamento dinamico è una funzionalità del sistema operativo che consente a un file eseguibile chiamare funzioni o usare risorse archiviate in un file separato. Queste funzioni e risorse possono essere compilate e distribuite separatamente dagli eseguibili che le usano. Una DLL non è un file eseguibile autonomo. viene eseguito nel contesto di un'applicazione che lo chiama. Il sistema operativo può caricare la DLL nello spazio di memoria di un'applicazione quando l'applicazione viene caricato (*collegamento implicito*), o su richiesta in fase di esecuzione (*collegamento esplicito*). Le DLL semplificano anche la condivisione di funzioni e risorse tra eseguibili. Più applicazioni possono accedere contemporaneamente al contenuto di un'unica copia di una DLL in memoria.  
  
## <a name="differences-between-dynamic-linking-and-static-linking"></a>Differenze tra il collegamento dinamico e statico  
  
Collegamento statico copia tutto il codice oggetto in una libreria statica negli eseguibili che utilizzano quando vengono generati. Collegamento dinamico include solo le informazioni necessarie per Windows in fase di esecuzione per individuare e caricare la DLL che contiene una funzione o un elemento di dati. Quando si crea una DLL, è inoltre possibile creare una libreria di importazione che contiene queste informazioni. Quando si compila un eseguibile che chiama la DLL, il linker Usa i simboli esportati nella libreria di importazione per archiviare queste informazioni per il caricatore di Windows. Quando il caricatore carica una DLL, viene eseguito il mapping della DLL nello spazio di memoria dell'applicazione. Se presente, una speciale funzione nella DLL, `DllMain`, viene chiamato per eseguire qualsiasi inizializzazione richiesta dalla DLL.  
  
<a name="differences-between-applications-and-dlls"></a>  
  
## <a name="differences-between-applications-and-dlls"></a>Differenze tra applicazioni e DLL  
  
Anche se le DLL e le applicazioni sono entrambi i moduli eseguibili, differiscono in diversi modi. Per l'utente finale, la differenza più ovvia è che le DLL non sono applicazioni che possono essere eseguite direttamente. Dal punto di vista del sistema, esistono due differenze fondamentali tra applicazioni e DLL:  
  
-   Un'applicazione può avere più istanze in esecuzione nel sistema contemporaneamente, mentre una DLL può avere solo un'istanza.  
  
-   Un'applicazione può essere caricata come un processo che può essere proprietario, ad esempio, uno stack, i thread di esecuzione, la memoria globale, gli handle di file e una coda di messaggi, ma non è una DLL.  
  
<a name="advantages-of-using-dlls"></a>  
  
## <a name="advantages-of-using-dlls"></a>Vantaggi dell'utilizzo di DLL  
  
Collegamento dinamico anziché il collegamento statico al codice e risorse offre numerosi vantaggi. Quando si usano DLL, è possibile risparmiare spazio di memoria e ridurre lo swapping. Quando più applicazioni possono usare un'unica copia di una DLL, è possibile risparmiare spazio su disco e larghezza di banda di download. Le DLL possono essere distribuite e aggiornate separatamente, in modo da poter fornire supporto postvendita e aggiornamenti software senza dover ricompilare e distribuire tutto il codice. Le DLL costituiscono un metodo pratico per fornire risorse specifiche delle impostazioni locali, in modo da supportare programmi in più lingue e semplificare la creazione di versioni internazionali delle applicazioni. Collegamento esplicito, è possibile consentire l'applicazione per individuare e caricare una DLL in fase di esecuzione, ad esempio estensioni che forniscono nuove funzionalità.  
  
Collegamento dinamico offre i vantaggi seguenti:  
  
-   Collegamento dinamico, potrai risparmiare memoria e ridurre lo swapping. Molti processi è possono utilizzare una DLL contemporaneamente, la condivisione di una singola copia di sola lettura parti di una DLL in memoria. Al contrario, ogni applicazione che viene compilato con una libreria collegata staticamente ha una copia completa del codice della libreria che Windows deve essere caricato in memoria.  
  
-   Collegamento dinamico Salva la larghezza di banda e spazio su disco. Molte applicazioni possono condividere una singola copia della DLL sul disco. Al contrario, ogni applicazione compilata con una libreria a collegamento statico è collegato all'immagine dell'eseguibile, che utilizza più spazio su disco e accetta più larghezza di banda per trasferire il codice della libreria.  
  
-   Correzioni di manutenzione, per la sicurezza e gli aggiornamenti possono essere più semplici. Quando le applicazioni utilizzano le funzioni comuni in una DLL, quindi come argomenti della funzione e i valori restituiti non cambiano, è possibile implementare correzioni di bug e distribuire gli aggiornamenti alla DLL. Quando vengono aggiornate le DLL, le applicazioni che li utilizzano non devono essere ricompilati o ricollegare e utilizzano della nuova DLL, non appena viene distribuita. Al contrario, le correzioni apportate nel codice dell'oggetto collegato in modo statico è necessario Ricollega e ridistribuire ogni applicazione che lo utilizza.  
  
-   Per fornire supporto postvendita, è possibile utilizzare le DLL. Ad esempio, è possibile modificare una DLL del driver di visualizzazione per supportare una visualizzazione che non è disponibile quando è stata distribuita l'applicazione. È possibile utilizzare il collegamento esplicito per caricare le estensioni delle applicazioni sotto forma di DLL e aggiungere nuove funzionalità all'App senza ricompilare o ridistribuirla.  
  
-   Collegamento dinamico rende più semplice supportare applicazioni scritte in diversi linguaggi di programmazione. I programmi scritti in diversi linguaggi di programmazione è possono chiamare la stessa funzione DLL, purché i programmi di seguano la convenzione di chiamata. I programmi e la funzione DLL deve essere compatibile nei modi seguenti: l'ordine in cui la funzione prevede gli argomenti devono essere inseriti nello stack, se la funzione o l'applicazione è responsabile della pulizia dello stack e se gli argomenti sono passati nei registri.  
  
-   Collegamento dinamico fornisce un meccanismo per estendere le classi della libreria MFC. È possibile derivare classi dalle classi MFC esistenti e inserirli in una DLL di estensione MFC per l'utilizzo da applicazioni MFC.  
  
-   Collegamento dinamico semplifica la creazione di versioni internazionali di un'applicazione. Inserendo le risorse specifiche delle impostazioni locali in una DLL, è molto più semplice creare versioni internazionali di un'applicazione. Anziché shipping numerose versioni localizzate dell'applicazione, è possibile inserire le stringhe e le immagini per ogni lingua in una DLL di risorse separato e quindi l'applicazione può caricare le risorse appropriate per tali impostazioni locali in fase di esecuzione.   
  
 Uno svantaggio potenziale di utilizzo delle DLL è che l'applicazione non indipendente. dipende dalla presenza di un modulo DLL separata che è necessario distribuire o verificare manualmente come parte dell'installazione.  
  
  
## <a name="more-information-on-how-to-create-and-use-dlls"></a>Ulteriori informazioni su come creare e utilizzare DLL  
  
Gli argomenti seguenti forniscono informazioni dettagliate su come programmare le DLL in Visual C++.  
  
 [Procedura dettagliata: creazione e utilizzo di una libreria a collegamento dinamico (C++)](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)  
 Viene illustrato come creare e utilizzare una DLL in Visual Studio.  
  
 [Tipi di DLL](../build/kinds-of-dlls.md)  
 Vengono fornite informazioni sui diversi tipi di DLL che è possibile compilare.  
  
 [Domande frequenti sulla DLL](../build/dll-frequently-asked-questions.md)  
 Vengono fornite risposte alle domande frequenti relative alle DLL.  
  
 [Collegare un eseguibile a una DLL](../build/linking-an-executable-to-a-dll.md)  
 Viene descritto il collegamento esplicito e implicito a una DLL.  
  
 [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
 Vengono illustrati i codice di inizializzazione di DLL che deve essere eseguite al caricamento della DLL.  
  
 [DLL e comportamento delle librerie di runtime Visual C++](../build/run-time-library-behavior.md)  
 Viene illustrata la sequenza di avvio della DLL eseguita dalla libreria runtime.  
  
 [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
 Viene illustrato l'utilizzo **LoadLibrary** e `AfxLoadLibrary` per il collegamento esplicito a una DLL in fase di esecuzione.  
  
 [GetProcAddress](../build/getprocaddress.md)  
 Viene illustrato l'utilizzo **GetProcAddress** per ottenere l'indirizzo di una funzione esportata nella DLL.  
  
 [FreeLibrary e AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
 Viene illustrato l'utilizzo **FreeLibrary** e `AfxFreeLibrary` quando il modulo DLL non è più necessario.  
  
 [Percorso di ricerca usato da Windows per l'individuazione di una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
 Descrive il percorso di ricerca usato dal sistema operativo Windows per individuare una DLL nel sistema.  
  
 [Stato dei moduli di una DLL MFC regolare collegata a MFC in modo dinamico](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)  
 Vengono descritti gli stati di modulo di una normale che DLL MFC collegato in modo dinamico a MFC.  
  
 [MFC (DLL di estensione)](../build/extension-dlls-overview.md)  
 Vengono illustrate le DLL che implementano generalmente classi riutilizzabili derivate dalle classi esistenti della libreria MFC.  
  
 [Creazione di una DLL di sole risorse](../build/creating-a-resource-only-dll.md)  
 Viene illustrata una DLL di sole risorse, ovvero che contiene unicamente delle risorse, come icone, bitmap, stringhe e finestre di dialogo.  
  
 [Risorse localizzate in applicazioni MFC: DLL satellite](../build/localized-resources-in-mfc-applications-satellite-dlls.md)  
 Viene descritto un supporto avanzato per le DLL satellite, una funzionalità che aiuta a creare applicazioni localizzate in più lingue.  
  
 [Importazione ed esportazione](../build/importing-and-exporting.md)  
 Viene descritto come importare simboli pubblici in un'applicazione o come esportare funzioni da una DLL.  
  
 [Tecnologia Active e DLL](../build/active-technology-and-dlls.md)  
 Permette l'implementazione di server oggetti in una DLL.  
  
 [Automazione in una DLL](../build/automation-in-a-dll.md)  
 Viene illustrata l'opzione di automazione nella Creazione guidata DLL MFC.  
  
 [Convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md)  
 Viene illustrato come le DLL e le librerie incluse in MFC seguono una convenzione di denominazione strutturata.  
  
 [Chiamata di funzioni DLL dalle applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md)  
 Viene descritto come chiamare funzioni nelle DLL dalle applicazioni Visual Basic.  
  
## <a name="related-sections"></a>Sezioni correlate  
  
 [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
 Descrive le DLL MFC regolari, che consentono di utilizzare la libreria MFC come parte di una libreria di collegamento dinamico di Windows.  
  
 [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)  
 Viene descritto come è possibile utilizzare il condivise MFCxx.dll e MFCxxD.dll (dove x è il numero di versione MFC) librerie a collegamento dinamico con applicazioni MFC e DLL di estensione MFC.  
