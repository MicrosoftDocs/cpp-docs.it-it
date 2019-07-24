---
title: Creare C/C++ dll in Visual Studio
ms.date: 07/18/2019
helpviewer_keywords:
- executable files [C++]
- dynamic linking [C++]
- linking [C++], dynamic vs. static
- DLLs [C++]
- DLLs [C++], about DLLs
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
ms.openlocfilehash: 9f5b34fda8a429f8e55631e1e0125ed6f79d5bae
ms.sourcegitcommit: 0867d648e0955ebad7260b5fbebfd6cd4d58f3c7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/19/2019
ms.locfileid: "68341079"
---
# <a name="create-cc-dlls-in-visual-studio"></a>Creare C/C++ dll in Visual Studio

In Windows una libreria a collegamento dinamico (DLL) è un tipo di file eseguibile che funge da libreria condivisa di funzioni e risorse. Il collegamento dinamico è una funzionalità del sistema operativo che consente a un eseguibile di chiamare funzioni o utilizzare risorse archiviate in un file separato. Queste funzioni e risorse possono essere compilate e distribuite separatamente dagli eseguibili che le usano. Una DLL non è un file eseguibile autonomo. viene eseguito nel contesto di un'applicazione che lo chiama. Il sistema operativo può caricare la DLL nello spazio di memoria di un'applicazione quando l'applicazione viene caricata (*collegamento implicito*) o su richiesta in fase di esecuzione (*collegamento esplicito*). Le DLL semplificano anche la condivisione di funzioni e risorse tra eseguibili. Più applicazioni possono accedere contemporaneamente al contenuto di un'unica copia di una DLL in memoria.

## <a name="differences-between-dynamic-linking-and-static-linking"></a>Differenze tra il collegamento dinamico e il collegamento statico

Il collegamento statico copia tutto il codice oggetto in una libreria statica nei file eseguibili che la utilizzano quando vengono compilati. Il collegamento dinamico include solo le informazioni necessarie a Windows in fase di esecuzione per individuare e caricare la DLL che contiene un elemento di dati o una funzione. Quando si crea una DLL, si crea anche una libreria di importazione che contiene queste informazioni. Quando si compila un file eseguibile che chiama la DLL, il linker usa i simboli esportati nella libreria di importazione per archiviare queste informazioni per il caricatore di Windows. Quando il caricatore carica una DLL, la DLL viene mappata allo spazio di memoria dell'applicazione. Se presente, viene chiamata una speciale funzione nella dll `DllMain`,, per eseguire qualsiasi inizializzazione richiesta dalla dll.

<a name="differences-between-applications-and-dlls"></a>

## <a name="differences-between-applications-and-dlls"></a>Differenze tra applicazioni e dll

Anche se le dll e le applicazioni sono entrambi moduli eseguibili, si differenziano in diversi modi. Per l'utente finale, la differenza più ovvia è che le dll non sono applicazioni che possono essere eseguite direttamente. Dal punto di vista del sistema, esistono due differenze fondamentali tra le applicazioni e le dll:

- Un'applicazione può avere contemporaneamente più istanze di in esecuzione nel sistema, mentre una DLL può avere una sola istanza.

- Un'applicazione può essere caricata come processo che può essere proprietaria di elementi quali uno stack, thread di esecuzione, memoria globale, handle di file e una coda di messaggi, ma una DLL non può.

<a name="advantages-of-using-dlls"></a>

## <a name="advantages-of-using-dlls"></a>Vantaggi dell'utilizzo delle dll

Il collegamento dinamico al codice e alle risorse offre diversi vantaggi rispetto al collegamento statico:

- Il collegamento dinamico consente di risparmiare memoria e di ridurre lo scambio. Molti processi possono utilizzare una DLL simultaneamente, condividendo una sola copia delle parti di sola lettura di una DLL in memoria. Al contrario, ogni applicazione compilata utilizzando una libreria collegata in modo statico dispone di una copia completa del codice di libreria che Windows deve caricare in memoria.

- Il collegamento dinamico consente di risparmiare spazio su disco e larghezza di banda. Molte applicazioni possono condividere una singola copia della DLL sul disco. Al contrario, ogni applicazione compilata utilizzando una libreria a collegamento statico presenta il codice di libreria collegato alla relativa immagine eseguibile, che utilizza più spazio su disco e impiega una maggiore larghezza di banda per il trasferimento.

- La manutenzione, le correzioni rapide e gli aggiornamenti della sicurezza possono essere più semplici. Quando le applicazioni usano funzioni comuni in una DLL, fino a quando gli argomenti della funzione e i valori restituiti non cambiano, è possibile implementare correzioni di bug e distribuire gli aggiornamenti alla DLL. Quando le dll vengono aggiornate, le applicazioni che le utilizzano non devono essere ricompilate o ricollegate e utilizzano la nuova DLL non appena viene distribuita. Al contrario, le correzioni apportate nel codice oggetto collegato in modo statico richiedono il ricollegamento e la ridistribuzione di tutte le applicazioni che lo usano.

- È possibile utilizzare le dll per fornire supporto After-Market. Ad esempio, è possibile modificare una DLL del driver di visualizzazione per supportare una visualizzazione che non era disponibile quando l'applicazione è stata spedita.

- È possibile usare il collegamento esplicito per individuare e caricare le dll in fase di esecuzione, ad esempio le estensioni dell'applicazione che aggiungono nuove funzionalità all'app senza ricompilarla o ridistribuirla.

- Il collegamento dinamico rende più semplice supportare le applicazioni scritte in linguaggi di programmazione diversi. I programmi scritti in diversi linguaggi di programmazione possono chiamare la stessa funzione di DLL, purché i programmi seguano la convenzione di chiamata della funzione. I programmi e la funzione DLL devono essere compatibili nei modi seguenti: l'ordine in cui la funzione prevede il push degli argomenti nello stack, se la funzione o l'applicazione è responsabile della pulizia dello stack e se gli argomenti sono registri passati.

- Il collegamento dinamico fornisce un meccanismo per estendere le classi della libreria MFC. È possibile derivare classi dalle classi MFC esistenti e inserirle in una DLL di estensione MFC per l'utilizzo da parte delle applicazioni MFC.

- Il collegamento dinamico rende più semplice la creazione di versioni internazionali dell'applicazione. Le dll sono un modo pratico per fornire risorse specifiche delle impostazioni locali, che semplificano la creazione di versioni internazionali di un'applicazione. Anziché spedire molte versioni localizzate dell'applicazione, è possibile inserire le stringhe e le immagini per ogni lingua in una DLL di risorse separata e quindi l'applicazione può caricare le risorse appropriate per le impostazioni locali in fase di esecuzione.

Un potenziale svantaggio nell'uso delle dll è che l'applicazione non è indipendente. dipende dall'esistenza di un modulo DLL separato che è necessario distribuire o verificare come parte dell'installazione.

## <a name="more-information-on-how-to-create-and-use-dlls"></a>Ulteriori informazioni su come creare e utilizzare le dll

Negli argomenti seguenti vengono fornite informazioni dettagliate su come creare C/C++ dll in Visual Studio.

[Procedura dettagliata: Creare e usare la propria libreria a collegamento dinamico (C++)](walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)<br/>
Viene illustrato come creare e utilizzare una DLL in Visual Studio.

[Tipi di DLL](kinds-of-dlls.md)<br/>
Vengono fornite informazioni sui diversi tipi di DLL che è possibile compilare.

[Domande frequenti sulle DLL](dll-frequently-asked-questions.md)<br/>
Vengono fornite risposte alle domande frequenti relative alle DLL.

[Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md)<br/>
Viene descritto il collegamento esplicito e implicito a una DLL.

[Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)<br/>
Viene illustrato il codice di inizializzazione DLL che deve essere eseguito quando la DLL viene caricata.

[DLL e comportamento delle librerie di runtime Visual C++](run-time-library-behavior.md)<br/>
Viene illustrata la sequenza di avvio della DLL eseguita dalla libreria runtime.

[LoadLibrary e AfxLoadLibrary](loadlibrary-and-afxloadlibrary.md)<br/>
Viene illustrato  l'utilizzo `AfxLoadLibrary` di LoadLibrary e per il collegamento esplicito a una dll in fase di esecuzione.

[GetProcAddress](getprocaddress.md)<br/>
Viene illustrato l'utilizzo di **GetProcAddress** per ottenere l'indirizzo di una funzione esportata nella dll.

[FreeLibrary e AfxFreeLibrary](freelibrary-and-afxfreelibrary.md)<br/>
Viene illustrato  l'utilizzo `AfxFreeLibrary` di FreeLibrary e quando il modulo dll non è più necessario.

[Ordine di ricerca della libreria a collegamento dinamico](/windows/desktop/Dlls/dynamic-link-library-search-order)<br/>
Descrive il percorso di ricerca usato dal sistema operativo Windows per individuare una DLL nel sistema.

[Stato dei moduli di una DLL MFC regolare collegata a MFC in modo dinamico](module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)<br/>
Descrive gli Stati dei moduli di una DLL MFC normale collegata a MFC in modo dinamico.

[MFC (DLL di estensione)](extension-dlls-overview.md)<br/>
Vengono illustrate le DLL che implementano generalmente classi riutilizzabili derivate dalle classi esistenti della libreria MFC.

[Creazione di una DLL di sole risorse](creating-a-resource-only-dll.md)<br/>
Viene illustrata una DLL di sole risorse, ovvero che contiene unicamente delle risorse, come icone, bitmap, stringhe e finestre di dialogo.

[Risorse localizzate in applicazioni MFC: DLL satellite](localized-resources-in-mfc-applications-satellite-dlls.md)<br/>
Viene descritto un supporto avanzato per le DLL satellite, una funzionalità che aiuta a creare applicazioni localizzate in più lingue.

[Importazione ed esportazione](importing-and-exporting.md)<br/>
Viene descritto come importare simboli pubblici in un'applicazione o come esportare funzioni da una DLL.

[Tecnologia Active e DLL](active-technology-and-dlls.md)<br/>
Permette l'implementazione di server oggetti in una DLL.

[Automazione in una DLL](automation-in-a-dll.md)<br/>
Viene illustrata l'opzione di automazione nella Creazione guidata DLL MFC.

[Convenzioni di denominazione per le DLL MFC](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions)<br/>
Viene illustrato come le DLL e le librerie incluse in MFC seguono una convenzione di denominazione strutturata.

[Chiamata di funzioni DLL da applicazioni Visual Basic](calling-dll-functions-from-visual-basic-applications.md)<br/>
Viene descritto come chiamare funzioni nelle DLL dalle applicazioni Visual Basic.

## <a name="related-sections"></a>Sezioni correlate

[Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)<br/>
Descrive le normali DLL MFC, che consentono di utilizzare la libreria MFC come parte di una libreria a collegamento dinamico di Windows.

[Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)<br/>
Viene descritto come utilizzare MFCxx. dll e MFCxxD. dll, dove x è il numero di versione MFC, le librerie a collegamento dinamico condivise con applicazioni MFC e dll di estensione MFC.
