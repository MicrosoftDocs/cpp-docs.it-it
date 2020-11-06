---
title: Aggiornare i progetti C++ da versioni precedenti di Visual Studio
description: Come aggiornare progetti di Microsoft C++ da versioni precedenti di Visual Studio.
ms.date: 01/21/2020
helpviewer_keywords:
- 32-bit code porting
- upgrading Visual C++ applications, 32-bit code
ms.assetid: 18cdacaa-4742-43db-9e4c-2d9e73d8cc84
ms.openlocfilehash: 89c1df88aa8e533dd7d6e5312b1150468c905c18
ms.sourcegitcommit: 12eb6a824dd7187a065d44fceca4c410f58e121e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2020
ms.locfileid: "94334234"
---
# <a name="upgrade-c-projects-from-earlier-versions-of-visual-studio"></a>Aggiornare i progetti C++ da versioni precedenti di Visual Studio

Per aggiornare un progetto creato in una versione precedente di Visual Studio, è sufficiente aprire il progetto nella versione più recente di Visual Studio. Visual Studio consente di aggiornare il progetto allo schema corrente.

Se si sceglie **No** , il progetto non viene aggiornato. Per i progetti creati in Visual Studio 2010 e versioni successive, è comunque possibile usare il progetto nella versione più recente di Visual Studio. È sufficiente impostare le proprietà del progetto per continuare a utilizzare il set di strumenti meno recente. Se si lascia la versione precedente di Visual Studio nel computer, il set di strumenti sarà disponibile nelle versioni successive. Se, ad esempio, il progetto deve continuare a funzionare in Windows XP, è possibile eseguire l'aggiornamento a Visual Studio 2019. Il set di strumenti viene quindi specificato come v141_xp o in precedenza nelle proprietà del progetto. Per altre informazioni, vedere [Usare multitargeting nativo in Visual Studio per compilare progetti precedenti](use-native-multi-targeting.md).

Se si sceglie **Sì** , il progetto viene aggiornato sul posto. Non può essere riconvertito nella versione precedente. Negli scenari di aggiornamento, è per questo motivo che è consigliabile creare una copia di backup dei file di progetto e di soluzione esistenti.

## <a name="upgrade-reports"></a>Aggiornare i report

Quando si aggiorna un progetto, si ottiene un report di aggiornamento. Il report viene salvato anche nella cartella del progetto come UpgradeLog.htm. Il report di aggiornamento Mostra un riepilogo dei problemi rilevati durante la conversione. Vengono elencate alcune informazioni sulle modifiche apportate, tra cui:

- Proprietà del progetto.

- File di inclusione.

- Codice che non viene più compilato in modo corretto a causa di miglioramenti o modifiche della conformità del compilatore nello standard.

- Codice basato su funzionalità di Visual Studio o Windows che non sono più disponibili. Oppure, i file di intestazione che non sono inclusi in un'installazione predefinita di Visual Studio o sono stati rimossi dal prodotto.

- Codice che non viene più compilato a causa di modifiche apportate alle API, ad esempio API rinominate, firme di funzione modificate o funzioni deprecate.

- Codice che non viene più compilato a causa delle modifiche apportate alla diagnostica, ad esempio un avviso che diventa un errore

- Errori del linker a causa di librerie modificate, soprattutto quando viene usato/NODEFAULTLIB.

- Errori di runtime o risultati imprevisti a causa di modifiche del comportamento.

- Errori introdotti negli strumenti. Se si riscontra un problema, segnalarlo al team di Visual C++ tramite i normali canali di supporto oppure usando la pagina della [community degli sviluppatori di Visual Studio C++](https://aka.ms/feedback/report?space=62) .

Alcuni progetti e soluzioni aggiornati possono essere compilati correttamente senza modifiche. Tuttavia, la maggior parte dei progetti richiederà probabilmente modifiche alle impostazioni del progetto e al codice sorgente. Non esiste un unico modo corretto per risolvere questi problemi, ma è consigliabile usare un approccio in più fasi. Prima di iniziare, rivedere la [Panoramica dei potenziali problemi di aggiornamento](../porting/overview-of-potential-upgrade-issues-visual-cpp.md) per ulteriori informazioni su molti tipi di errori comuni.

1. Impostare il set di strumenti della piattaforma, lo standard del linguaggio C++ e la versione del Windows SDK (se applicabile) sulle versioni preferite. ( **Progetto**  >  **Proprietà**  >  di **Proprietà**  >  di configurazione **Generale** )

1. Se si verificano molti errori, è possibile disattivare temporaneamente alcune opzioni durante la correzione. Per disattivare l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) opzione, utilizzare proprietà di **progetto** proprietà di  >  **Properties**  >  **configurazione**  >  **linguaggio C/C++**  >  **Language**. Per disattivare l'opzione di [analisi del codice](../code-quality/code-analysis-for-c-cpp-overview.md) , utilizzare le proprietà di **Project**  >  **Properties**  >  **configurazione**  >  **analisi del codice** delle proprietà di progetto.

1. Verificare che tutte le dipendenze siano presenti e che i percorsi di inclusione o di libreria siano corretti. ( **Progetto**  >  **Proprietà**  >  di **Proprietà**  >  di configurazione **Directory di VC + +** )

1. Identificare e correggere gli errori causati da riferimenti ad API che non esistono più.

1. Correggere gli eventuali errori rimanenti che impediscono la compilazione. Per correggere gli errori comuni, vedere [Panoramica dei potenziali problemi di aggiornamento](../porting/overview-of-potential-upgrade-issues-visual-cpp.md) .

1. Riattivare **`/permissive-`** e correggere eventuali nuovi errori causati da codice non conforme che in precedenza veniva compilato in MSVC.

1. Attiva l'analisi del codice per identificare potenziali problemi o modelli di codifica obsoleti che non sono più considerati accettabili. Se l'analisi del codice contrassegna molti errori, è possibile disattivare alcuni avvisi per concentrare l'attenzione su quelli più importanti. L'IDE può essere utile con correzioni rapide per alcuni tipi di problemi.

1. Prendere in considerazione altre opportunità per la modernizzazione del codice. Ad esempio, sostituire le strutture di dati e gli algoritmi personalizzati con quelli della libreria standard C++ o della libreria open source Boost. Utilizzando le funzionalità standard, è più facile per altri gestire il codice. È possibile essere certi che questo codice sia stato testato e rivisto da molti esperti del Comitato degli standard e dalla più ampia community di C++.

Per gli errori difficili da correggere, è possibile cercare soluzioni o pubblicare una domanda in [Microsoft docs Q&a](/answers/topics/c%2B%2B.html). Per i problemi nel compilatore e negli strumenti C++, provare il sito Web della [community degli sviluppatori c++](https://aka.ms/vsfeedback/browsecpp) .

## <a name="in-this-section"></a>Contenuto della sezione

[Panoramica dei potenziali problemi di aggiornamento](overview-of-potential-upgrade-issues-visual-cpp.md)\
[Aggiornare il codice a Universal CRT](upgrade-your-code-to-the-universal-crt.md)\
[Aggiornare WINVER e _WIN32_WINNT](modifying-winver-and-win32-winnt.md)\
[Correggere le dipendenze dagli elementi interni della libreria](fix-your-dependencies-on-library-internals.md)\
[Problemi di migrazione a virgola mobile](floating-point-migration-issues.md)\
[Funzionalità di C++ deprecate in Visual Studio 2019](features-deprecated-in-visual-studio.md)\
[VCBuild rispetto a MSBuild](build-system-changes.md)\
[Convertire librerie di terze parti](porting-third-party-libraries.md)

## <a name="see-also"></a>Vedere anche

[Novità di Visual C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)\
[Visual C++ cronologia modifiche 2003-2015](../porting/visual-cpp-change-history-2003-2015.md)\
[Comportamento non standard](../cpp/nonstandard-behavior.md)\
[Convertire applicazioni dati](../data/data-access-programming-mfc-atl.md)
