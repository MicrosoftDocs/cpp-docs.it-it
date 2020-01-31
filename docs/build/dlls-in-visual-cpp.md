---
title: Creare C/C++ dll in Visual Studio
description: Panoramica dei motivi e della creazione e dell'uso di dll con C++ in Visual Studio.
ms.date: 01/27/2020
helpviewer_keywords:
- executable files [C++]
- dynamic linking [C++]
- linking [C++], dynamic vs. static
- DLLs [C++]
- DLLs [C++], about DLLs
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
ms.openlocfilehash: 7083924f137fa9283da40404c7d15183e59c0b1c
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821421"
---
# <a name="create-cc-dlls-in-visual-studio"></a>Creare C/C++ dll in Visual Studio

In Windows una libreria a collegamento dinamico (DLL) è un tipo di file eseguibile che funge da libreria condivisa di funzioni e risorse. Il collegamento dinamico è una funzionalità del sistema operativo. Consente a un eseguibile di chiamare funzioni o utilizzare risorse archiviate in un file separato. Queste funzioni e risorse possono essere compilate e distribuite separatamente dagli eseguibili che le usano.

Una DLL non è un file eseguibile autonomo. Le dll vengono eseguite nel contesto delle applicazioni che le chiamano. Il sistema operativo carica la DLL nello spazio di memoria di un'applicazione. Viene eseguita quando l'applicazione viene caricata (*collegamento implicito*) o su richiesta in fase di esecuzione (*collegamento esplicito*). Le DLL semplificano anche la condivisione di funzioni e risorse tra eseguibili. Più applicazioni possono accedere contemporaneamente al contenuto di un'unica copia di una DLL in memoria.

## <a name="differences-between-dynamic-linking-and-static-linking"></a>Differenze tra il collegamento dinamico e il collegamento statico

Il collegamento statico copia tutto il codice oggetto in una libreria statica nei file eseguibili che lo usano quando vengono compilati. Il collegamento dinamico include solo le informazioni necessarie a Windows in fase di esecuzione per individuare e caricare la DLL che contiene un elemento di dati o una funzione. Quando si crea una DLL, si crea anche una libreria di importazione che contiene queste informazioni. Quando si compila un file eseguibile che chiama la DLL, il linker usa i simboli esportati nella libreria di importazione per archiviare queste informazioni per il caricatore di Windows. Quando il caricatore carica una DLL, la DLL viene mappata allo spazio di memoria dell'applicazione. Se presente, viene chiamata una funzione speciale nella DLL, `DllMain`, per eseguire qualsiasi inizializzazione richiesta dalla DLL.

<a name="differences-between-applications-and-dlls"></a>

## <a name="differences-between-applications-and-dlls"></a>Differenze tra applicazioni e dll

Anche se le dll e le applicazioni sono entrambi moduli eseguibili, si differenziano in diversi modi. La differenza più ovvia è che non è possibile eseguire una DLL. Dal punto di vista del sistema, esistono due differenze fondamentali tra le applicazioni e le dll:

- Un'applicazione può avere contemporaneamente più istanze di in esecuzione nel sistema. Una DLL può avere una sola istanza.

- Un'applicazione può essere caricata come processo. Può essere proprietario di elementi quali uno stack, thread di esecuzione, memoria globale, handle di file e una coda di messaggi. Una DLL non può essere proprietaria di questi elementi.

<a name="advantages-of-using-dlls"></a>

## <a name="advantages-of-using-dlls"></a>Vantaggi dell'utilizzo delle dll

Il collegamento dinamico al codice e alle risorse offre diversi vantaggi rispetto al collegamento statico:

- Il collegamento dinamico consente di risparmiare memoria e di ridurre lo scambio. Molti processi possono utilizzare una DLL simultaneamente, condividendo una sola copia delle parti di sola lettura di una DLL in memoria. Al contrario, ogni applicazione compilata utilizzando una libreria collegata in modo statico dispone di una copia completa del codice di libreria che Windows deve caricare in memoria.

- Il collegamento dinamico consente di risparmiare spazio su disco e larghezza di banda. Molte applicazioni possono condividere una singola copia della DLL sul disco. Al contrario, ogni applicazione compilata utilizzando una libreria a collegamento statico dispone del codice di libreria collegato alla relativa immagine eseguibile. Che utilizza più spazio su disco e impiega una maggiore larghezza di banda per il trasferimento.

- La manutenzione, le correzioni rapide per la sicurezza e gli aggiornamenti possono essere più semplici. Quando le applicazioni usano funzioni comuni in una DLL, è possibile implementare correzioni di bug e distribuire gli aggiornamenti alla DLL. Quando le dll vengono aggiornate, non è necessario ricompilare o ricollegare le applicazioni in cui vengono utilizzate. Possono usare la nuova DLL non appena viene distribuita. Al contrario, quando si apportano correzioni nel codice oggetto collegato in modo statico, è necessario ricollegare e ridistribuire tutte le applicazioni che lo utilizzano.

- È possibile utilizzare le dll per fornire supporto After-Market. Ad esempio, è possibile modificare una DLL del driver di visualizzazione per supportare una visualizzazione che non era disponibile quando l'applicazione è stata spedita.

- È possibile utilizzare il collegamento esplicito per individuare e caricare le dll in fase di esecuzione. Ad esempio, le estensioni dell'applicazione che aggiungono nuove funzionalità all'app senza ricompilarla o ridistribuirla.

- Il collegamento dinamico rende più semplice supportare le applicazioni scritte in linguaggi di programmazione diversi. I programmi scritti in diversi linguaggi di programmazione possono chiamare la stessa funzione di DLL, purché i programmi seguano la convenzione di chiamata della funzione. I programmi e la funzione DLL devono essere compatibili nei modi seguenti: l'ordine in cui la funzione prevede che i relativi argomenti vengano inseriti nello stack. Indica se la funzione o l'applicazione è responsabile della pulizia dello stack. E, se gli argomenti vengono passati nei registri.

- Il collegamento dinamico fornisce un meccanismo per estendere le classi MFC (Microsoft Foundation Class Library). È possibile derivare classi dalle classi MFC esistenti e inserirle in una DLL di estensione MFC per l'utilizzo da parte delle applicazioni MFC.

- Il collegamento dinamico rende più semplice la creazione di versioni internazionali dell'applicazione. Le dll sono un modo pratico per fornire risorse specifiche delle impostazioni locali, che semplificano la creazione di versioni internazionali di un'applicazione. Anziché spedire molte versioni localizzate dell'applicazione, è possibile inserire le stringhe e le immagini per ogni lingua in una DLL di risorse separata. Quindi, l'applicazione può caricare le risorse appropriate per le impostazioni locali in fase di esecuzione.

Un potenziale svantaggio nell'uso delle dll è che l'applicazione non è indipendente. Dipende dall'esistenza di un modulo DLL separato, ovvero uno che è necessario distribuire o verificare come parte dell'installazione.

## <a name="more-information-on-how-to-create-and-use-dlls"></a>Ulteriori informazioni su come creare e utilizzare le dll

Gli articoli seguenti forniscono informazioni dettagliate su come creare C/C++ dll in Visual Studio.

[Procedura dettagliata: creazione e utilizzo di una libreria aC++collegamento dinamico ()](walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)\
Viene illustrato come creare e utilizzare una DLL in Visual Studio.

[Tipi di dll](kinds-of-dlls.md)\
Vengono fornite informazioni sui diversi tipi di DLL che è possibile compilare.

[Domande frequenti sulle DLL](dll-frequently-asked-questions.md)\
Vengono fornite risposte alle domande frequenti relative alle DLL.

[Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md)\
Viene descritto il collegamento esplicito e implicito a una DLL.

[Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)\
Viene illustrato il codice di inizializzazione DLL che deve essere eseguito quando la DLL viene caricata.

[Dll e comportamento C++ della libreria in fase di esecuzione visuale](run-time-library-behavior.md)\
Descrive la sequenza di avvio della DLL della libreria di Runtime.

[LoadLibrary e AfxLoadLibrary](loadlibrary-and-afxloadlibrary.md)\
Viene illustrato l'utilizzo di `LoadLibrary` e `AfxLoadLibrary` per il collegamento esplicito a una DLL in fase di esecuzione.

\ [GetProcAddress](getprocaddress.md)
Viene illustrato l'utilizzo di `GetProcAddress` per ottenere l'indirizzo di una funzione esportata nella DLL.

\ [FreeLibrary e AfxFreeLibrary](freelibrary-and-afxfreelibrary.md)
Viene illustrato l'utilizzo di `FreeLibrary` e `AfxFreeLibrary` quando il modulo DLL non è più necessario.

\ dell' [ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order)
Descrive il percorso di ricerca usato dal sistema operativo Windows per individuare una DLL nel sistema.

[Stati dei moduli di una DLL MFC normale collegata a mfc](module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)\
Descrive gli Stati dei moduli di una DLL MFC normale collegata a MFC in modo dinamico.

[Dll dell'estensione MFC](extension-dlls-overview.md)\
Vengono illustrate le dll che in genere implementano classi riutilizzabili derivate dalle classi MFC esistenti.

[Creazione di una DLL di sole risorse](creating-a-resource-only-dll.md)\
Viene illustrata una DLL di sole risorse, ovvero che contiene unicamente delle risorse, come icone, bitmap, stringhe e finestre di dialogo.

[Risorse localizzate in applicazioni MFC: dll Satellite](localized-resources-in-mfc-applications-satellite-dlls.md)\
Viene descritto un supporto avanzato per le DLL satellite, una funzionalità che aiuta a creare applicazioni localizzate in più lingue.

[Importazione ed esportazione di](importing-and-exporting.md)\
Viene descritto come importare simboli pubblici in un'applicazione o come esportare funzioni da una DLL.

[Tecnologia Active e dll](active-technology-and-dlls.md)\
Permette l'implementazione di server oggetti in una DLL.

[Automazione in una DLL](automation-in-a-dll.md)\
Viene illustrata l'opzione di automazione nella Creazione guidata DLL MFC.

[Convenzioni di denominazione per le DLL MFC](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions)\
Viene illustrato come le DLL e le librerie incluse in MFC seguono una convenzione di denominazione strutturata.

[Chiamata di funzioni DLL da applicazioni Visual Basic](calling-dll-functions-from-visual-basic-applications.md)\
Viene descritto come chiamare funzioni nelle DLL dalle applicazioni Visual Basic.

## <a name="related-sections"></a>Sezioni correlate

[Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)\
Descrive le normali DLL MFC, che consentono di utilizzare la libreria MFC come parte di una libreria a collegamento dinamico di Windows.

[Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)\
Viene descritto come utilizzare MFCxx. dll e MFCxxD. dll, dove x è il numero di versione MFC, le librerie a collegamento dinamico condivise con applicazioni MFC e dll di estensione MFC.
