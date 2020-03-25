---
title: Problemi relativi alla migrazione dei valori a virgola mobile
ms.date: 05/17/2017
ms.assetid: 36a1b552-2f2b-4919-bc9d-c17f42434954
ms.openlocfilehash: 40eb08e4f9c7058d6b11700535e1c25f86548a22
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80215020"
---
# <a name="floating-point-migration-issues"></a>Problemi relativi alla migrazione dei valori a virgola mobile

A volte durante l'aggiornamento dei progetti a una versione più recente di Visual Studio è possibile notare che i risultati di determinate operazioni a virgola mobile sono cambiati. Ciò si verifica in genere per uno di questi due motivi: modifiche della generazione di codice che usano in modo più efficace il processore disponibile e correzioni di bug o modifiche degli algoritmi usati nelle funzioni matematiche della libreria di runtime C (CRT). In generale, i nuovi risultati sono corretti entro i limiti specificati dal linguaggio standard. Le sezioni che seguono spiegano che cosa è cambiato e, se è importante, come ottenere gli stessi risultati che si ottenevano in precedenza.

## <a name="new-math-functions-and-universal-crt-changes"></a>Nuove funzioni matematiche e modifiche di Universal CRT

La maggior parte delle funzioni matematiche di CRT sono state disponibili in Visual Studio per anni, ma a partire da Visual Studio 2013, tutte le funzioni richieste da ISO C99 sono incluse. L'implementazione di queste funzioni consente di bilanciare prestazioni e correttezza. Dato che generare un risultato con il corretto arrotondamento in ogni caso può avere costi proibitivi, queste funzioni sono progettate per ottenere in modo efficiente un'approssimazione molto vicina al risultato arrotondato correttamente. Nella maggior parte dei casi il risultato prodotto è compreso entro +/-1 unità di minore precisione, o *ulp*, rispetto al risultato arrotondato correttamente, sebbene in alcuni casi possa esistere un'imprecisione maggiore. Se si usa una libreria matematica diversa per ottenere queste funzioni prima, le differenze di implementazione possono causare la modifica dei risultati.

Quando le funzioni matematiche sono state spostate nella libreria Universal CRT in Visual Studio 2015, sono stati usati alcuni nuovi algoritmi e sono stati corretti alcuni bug nell'implementazione delle funzioni introdotte in Visual Studio 2013. Le modifiche possono comportare differenze rilevabili nei risultati dei calcoli a virgola mobile che usano queste funzioni. Le funzioni con problemi di bug erano erf, exp2, remainder, remquo, scalbln, scalbn e le relative varianti float e long double.  Altre modifiche in Visual Studio 2015 hanno risolto i problemi relativi alla conservazione della parola di stato a virgola mobile e delle informazioni sullo stato di eccezione nelle funzioni _clear87, _clearfp, fegetenv, fesetenv e feholdexcept.

## <a name="processor-differences-and-compiler-flags"></a>Differenze del processore e flag del compilatore

Molte delle funzioni della libreria delle operazioni matematiche a virgola mobile hanno implementazioni diverse per architetture della CPU differenti. La versione di CRT x86 a 32 bit, ad esempio, può avere un'implementazione diversa di CRT x64 a 64 bit. Alcune funzioni potrebbero inoltre avere più implementazioni per una particolare architettura della CPU. L'implementazione più efficiente viene selezionata in modo dinamico in fase di esecuzione a seconda del set di istruzioni supportate dalla CPU. Ad esempio, in CRT x86 a 32 bit alcune funzioni hanno sia un'implementazione x87 che un'implementazione SSE2. In caso di esecuzione su una CPU che supporta SSE2, viene usata l'implementazione SSE2 più veloce. Per l'esecuzione su una CPU che non supporta SSE2 viene usata l'implementazione x87 più lenta. Questo può apparire quando si esegue la migrazione di codice più datato, poiché l'opzione di architettura predefinita del compilatore x86 è diventata [/arch: SSE2](../build/reference/arch-x86.md) in Visual Studio 2012. Dato che implementazioni diverse delle funzioni della libreria delle operazioni matematiche possono usare istruzioni diverse della CPU e algoritmi differenti per produrre i risultati, le funzioni possono produrre risultati diversi su piattaforme differenti. Nella maggior parte dei casi, i risultati sono compresi entro +/-1 ulp rispetto al risultato arrotondato correttamente, ma i risultati effettivi possono variare tra CPU diverse.

I miglioramenti della correttezza della generazione di codice in diverse modalità a virgola mobile in Visual Studio possono influenzare i risultati delle operazioni a virgola mobile anche quando il codice più datato viene confrontato con il nuovo codice, anche se si usano gli stessi flag del compilatore. Ad esempio, il codice generato da Visual Studio 2010 se è stato specificato [/fp: precise](../build/reference/fp-specify-floating-point-behavior.md) (predefinito) o `/fp:strict` può non aver propagato correttamente i valori intermedi non un numero attraverso le espressioni. Di conseguenza, alcune espressioni che restituivano un risultato numerico nei compilatori precedenti ora possono restituire correttamente un risultato NaN. È anche possibile rilevare delle differenze perché le ottimizzazioni del codice abilitate per `/fp:fast` ora sfruttano un maggior numero di funzionalità del processore. Tali ottimizzazioni possono usare un numero inferiore di istruzioni, ma possono influire sui risultati generati perché alcune operazioni intermedie che in precedenza erano visibili sono state rimosse.

## <a name="how-to-get-identical-results"></a>Come ottenere risultati identici

Nella maggior parte dei casi, le modifiche dei calcoli a virgola mobile nei compilatori e nelle librerie più recenti determinano un comportamento più veloce o più corretto, o entrambe le cose. È possibile riscontrare addirittura prestazioni migliori del processore in termini di risparmio di energia quando le istruzioni SSE2 sostituiscono le istruzioni x87. Tuttavia, se si usa un codice che deve replicare con precisione il comportamento di un compilatore precedente per i calcoli a virgola mobile, è consigliabile usare le funzionalità multitargeting native di Visual Studio e compilare il progetto interessato con il set di strumenti precedente. Per altre informazioni, vedere [Usare multitargeting nativo in Visual Studio per compilare progetti precedenti](use-native-multi-targeting.md).

## <a name="see-also"></a>Vedere anche

[Aggiornamento di progetti da versioni precedenti di VisualC++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)<br/>
[Panoramica dei potenziali problemi di aggiornamento (Visual C++)](overview-of-potential-upgrade-issues-visual-cpp.md)<br/>
[Cronologia delle modifiche di Visual C++ dal 2003 al 2015](visual-cpp-change-history-2003-2015.md)
