---
title: DLL in Visual C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- executable files [C++]
- dynamic linking [C++]
- linking [C++], dynamic vs. static
- DLLs [C++]
- DLLs [C++], about DLLs
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 28be2caa3477eabc8b717b387c99d65585a9ef19
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718055"
---
# <a name="dlls-in-visual-c"></a>DLL in Visual C++

In Windows, una libreria di collegamento dinamico (DLL) è un tipo di file eseguibile che funziona come una libreria condivisa di funzioni e risorse. Il collegamento dinamico è una funzionalità del sistema operativo che consente a un file eseguibile chiamare funzioni o usare risorse archiviate in un file separato. Queste funzioni e risorse possono essere compilate e distribuite separatamente dagli eseguibili che le usano. Una DLL non è un file eseguibile autonomo. viene eseguito nel contesto di un'applicazione che lo chiama. Il sistema operativo può caricare la DLL nello spazio di memoria di un'applicazione quando l'applicazione è caricata (*collegamento implicito*), o su richiesta in fase di esecuzione (*collegamento esplicito*). Le DLL semplificano anche la condivisione di funzioni e risorse tra eseguibili. Più applicazioni possono accedere contemporaneamente al contenuto di un'unica copia di una DLL in memoria.

## <a name="differences-between-dynamic-linking-and-static-linking"></a>Differenze tra il collegamento dinamico e collegamento statico

Collegamento statico copia tutto il codice oggetto in una libreria statica nei file eseguibili che lo usano quando vengono compilati. Il collegamento dinamico include solo le informazioni necessarie per Windows in fase di esecuzione per individuare e caricare la DLL che contiene un elemento di dati o una funzione. Quando si crea una DLL, è anche possibile creare una libreria di importazione che contiene queste informazioni. Quando si compila un eseguibile che chiama la DLL, il linker Usa i simboli esportati nella libreria di importazione per archiviare queste informazioni per il caricatore di Windows. Quando il caricatore carica una DLL, questa viene mappata nello spazio di memoria dell'applicazione. Se presente, una speciale funzione nella DLL, `DllMain`, viene chiamato per eseguire qualsiasi inizializzazione richiesta dalla DLL.

<a name="differences-between-applications-and-dlls"></a>

## <a name="differences-between-applications-and-dlls"></a>Differenze tra applicazioni e DLL

Anche se le DLL e le applicazioni sono entrambi i moduli eseguibili, si differenziano in diversi modi. Per l'utente finale, la differenza più ovvia è che le DLL non sono applicazioni che possono essere eseguite direttamente. Dal punto di vista del sistema, vi sono due differenze fondamentali tra applicazioni e DLL:

- Un'applicazione può avere più istanze di se stesso è in esecuzione nel sistema contemporaneamente, mentre una DLL può avere una sola istanza.

- Un'applicazione può essere caricata come un processo che può essere proprietario di operazioni, ad esempio uno stack, i thread di esecuzione, la memoria globale, gli handle di file e una coda di messaggi, ma non è una DLL.

<a name="advantages-of-using-dlls"></a>

## <a name="advantages-of-using-dlls"></a>Vantaggi dell'utilizzo delle DLL

Collegamento dinamico anziché il collegamento statico al codice e risorse offre numerosi vantaggi. Quando si usano DLL, è possibile risparmiare spazio di memoria e ridurre lo swapping. Quando più applicazioni possono usare un'unica copia di una DLL, è possibile risparmiare spazio su disco e larghezza di banda di download. Le DLL possono essere distribuite e aggiornate separatamente, in modo da poter fornire supporto postvendita e aggiornamenti software senza dover ricompilare e distribuire tutto il codice. Le DLL costituiscono un metodo pratico per fornire risorse specifiche delle impostazioni locali, in modo da supportare programmi in più lingue e semplificare la creazione di versioni internazionali delle applicazioni. Collegamento esplicito, è possibile consentire l'applicazione per individuare e caricare le DLL in fase di esecuzione, ad esempio le estensioni che forniscono nuove funzionalità.

Il collegamento dinamico offre i vantaggi seguenti:

- Il collegamento dinamico potrai risparmiare memoria e ridurre lo swapping. Molti processi è possono utilizzare una DLL contemporaneamente, la condivisione di una singola copia di sola lettura parti di una DLL in memoria. Al contrario, ogni applicazione che viene compilato con una libreria collegata staticamente ha una copia completa del codice della libreria che Windows deve caricare in memoria.

- Collegamento dinamico consente di risparmiare larghezza di banda e spazio su disco. Molte applicazioni possono condividere una singola copia della DLL sul disco. Al contrario, ogni applicazione creata usando una libreria statica ha collegato all'immagine dell'eseguibile, che usa più spazio su disco e richiede maggiore larghezza di banda per trasferire il codice della libreria.

- La manutenzione, le patch di protezione e gli aggiornamenti possono essere più semplice. Quando le applicazioni usano le funzioni comuni in una DLL, quindi, purché gli argomenti della funzione e i valori restituiti non viene modificata, è possibile implementare correzioni di bug e distribuire gli aggiornamenti alla DLL. Quando le DLL vengono aggiornate, le applicazioni che li usano non sono necessario essere ricompilato o ricollegare e utilizzano della nuova DLL, non appena viene distribuita. Al contrario, le correzioni apportate nel codice dell'oggetto collegato in modo statico è necessario ricollegare e ridistribuire tutte le applicazioni che lo utilizza.

- È possibile usare le DLL per fornire supporto postvendita. Ad esempio, un driver video di DLL può essere modificato per supportare una visualizzazione che non era disponibile durante l'applicazione è stata spedita. È possibile usare il collegamento esplicito per caricare le estensioni dell'applicazione sotto forma di DLL e aggiungere nuove funzionalità all'App senza ricompilare o ridistribuire lo.

- Il collegamento dinamico rende più semplice supportare le applicazioni scritte in linguaggi di programmazione diversi. I programmi scritti in diversi linguaggi di programmazione possono chiamare la stessa funzione DLL, purché i programmi seguano la convenzione di chiamata. I programmi e la funzione DLL devono essere compatibili nei modi seguenti: l'ordine in cui la funzione prevede che gli argomenti devono essere inseriti nello stack, se la funzione o l'applicazione è responsabile della pulizia dello stack e indica se tutti gli argomenti sono passati nei registri.

- Il collegamento dinamico fornisce un meccanismo per estendere le classi della libreria MFC. È possibile derivare classi dalle classi MFC esistenti e inserirli in una DLL di estensione MFC per l'utilizzo da applicazioni MFC.

- Il collegamento dinamico semplifica la creazione delle versioni internazionali dell'applicazione. La collocazione delle risorse specifiche delle impostazioni locali in una DLL, è molto più semplice creare versioni internazionali di un'applicazione. Invece di spedizione molte versioni localizzate dell'applicazione, è possibile inserire le stringhe e immagini per ogni lingua in una DLL di risorse separato e quindi l'applicazione possa caricare le risorse appropriate per tali impostazioni locali in fase di esecuzione.

Un potenziale svantaggio di utilizzo delle DLL è che l'applicazione non indipendente. dipende l'esistenza di un modulo DLL separato che è necessario distribuire o verificare se stessi come parte dell'installazione.

## <a name="more-information-on-how-to-create-and-use-dlls"></a>Altre informazioni su come creare e usare le DLL

Gli argomenti seguenti forniscono informazioni dettagliate su come programmare le DLL in Visual C++.

[Procedura dettagliata: Creazione e utilizzo di una libreria a collegamento dinamico (C++)](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md) viene descritto come creare e utilizzare una DLL in Visual Studio.

[Tipi di DLL](../build/kinds-of-dlls.md) vengono fornite informazioni sui diversi tipi di DLL che possono essere compilati.

[Domande frequenti su DLL](../build/dll-frequently-asked-questions.md) vengono fornite le risposte alle domande frequenti sulle DLL.

[Collegare un eseguibile a una DLL](../build/linking-an-executable-to-a-dll.md) descrive il collegamento esplicito e implicito a una DLL.

[Inizializzare una DLL](../build/run-time-library-behavior.md#initializing-a-dll) codice di inizializzazione di DLL illustra che deve essere eseguite al caricamento della DLL.

[Le DLL e comportamento delle librerie di runtime Visual C++](../build/run-time-library-behavior.md) descrive come la libreria di runtime esegue la sequenza di avvio DLL.

[LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md) viene illustrato come usare **LoadLibrary** e `AfxLoadLibrary` per il collegamento esplicito a una DLL in fase di esecuzione.

[GetProcAddress](../build/getprocaddress.md) viene illustrato come usare **GetProcAddress** per ottenere l'indirizzo di una funzione esportata nella DLL.

[FreeLibrary e AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md) viene illustrato come usare **FreeLibrary** e `AfxFreeLibrary` quando il modulo di DLL non è più necessario.

[Ordine di ricerca della libreria di collegamento dinamico](/windows/desktop/Dlls/dynamic-link-library-search-order) descrive il percorso di ricerca che il sistema operativo Windows usa per individuare una DLL nel sistema.

[Stato dei moduli di una regolare MFC DLL collegate in modo dinamico a MFC](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md) sono descritti gli stati di modulo di una normale DLL MFC collegate in modo dinamico a MFC.

[DLL di estensione MFC](../build/extension-dlls-overview.md) spiega le DLL che implementano generalmente classi riutilizzabili derivate dalle classi esistenti della libreria Microsoft Foundation Class.

[Creazione di una DLL Resource-Only](../build/creating-a-resource-only-dll.md) illustra una DLL di sole risorse, che contiene unicamente delle risorse, ad esempio icone, bitmap, stringhe e finestre di dialogo.

[Risorse localizzate in applicazioni MFC: DLL Satellite](../build/localized-resources-in-mfc-applications-satellite-dlls.md) offre supporto avanzato per le DLL satellite, una funzionalità che aiuta nella creazione di applicazioni localizzate in più lingue.

[Importazione ed esportazione](../build/importing-and-exporting.md) descrive importare simboli pubblici in un'applicazione o l'esportazione di funzioni da una DLL

[Attiva la tecnologia e le DLL](../build/active-technology-and-dlls.md) consente ai server di oggetto essere implementata in una DLL.

[Automazione in una DLL](../build/automation-in-a-dll.md) descrive cosa fornisce l'opzione di automazione nella creazione guidata DLL MFC.

[Convenzioni di denominazione per le DLL MFC](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions) viene illustrato come le DLL e librerie incluse in MFC seguono una convenzione di denominazione strutturata.

[Chiamata di funzioni DLL dalle applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md) viene descritto come chiamare le funzioni DLL dalle applicazioni Visual Basic.

## <a name="related-sections"></a>Sezioni correlate

[Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md) descrive le DLL MFC regolari, che consentono di usare la libreria MFC come parte di una libreria di collegamento dinamico di Windows.

[Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md) descrive come è possibile usare il MFCxx. dll e MFCxxD. dll (dove x è il numero di versione MFC) condividere librerie a collegamento dinamico con le applicazioni MFC e DLL estensione MFC.
