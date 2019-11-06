---
title: Aggiornare C++ i progetti da versioni precedenti di Visual Studio
description: Come aggiornare progetti di Microsoft C++ da versioni precedenti di Visual Studio.
ms.date: 10/29/2019
helpviewer_keywords:
- 32-bit code porting
- upgrading Visual C++ applications, 32-bit code
ms.assetid: 18cdacaa-4742-43db-9e4c-2d9e73d8cc84
ms.openlocfilehash: b317271a9cd0873e60a6dd9acd1b73a766aaea19
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627159"
---
# <a name="upgrade-c-projects-from-earlier-versions-of-visual-studio"></a>Aggiornare C++ i progetti da versioni precedenti di Visual Studio

Per aggiornare un progetto creato in Visual Studio 2008 o versioni precedenti, è necessario innanzitutto utilizzare Visual Studio 2010 per convertire il progetto dal formato VCBuild (con estensione vcproj) al formato MSBuild (. vcxproj). Per altre informazioni, vedere [le istruzioni per Visual Studio 2008](use-native-multi-targeting.md#instructions-for-visual-studio-2008).

Per aggiornare un progetto creato in Visual Studio 2010 o versione successiva, è sufficiente aprire il progetto nella versione più recente di Visual Studio. Visual Studio consente di aggiornare il progetto allo schema corrente. Se si sceglie **No**e si dispone della versione precedente di Visual Studio nel computer, è possibile usare il progetto in una versione più recente di Visual Studio e continuare a usare il set di strumenti meno recente. Se, ad esempio, il progetto deve continuare a funzionare in Windows XP, è possibile aggiornarlo a Visual Studio 2019, ma è necessario specificare il set di strumenti come V141 o versioni precedenti. Per altre informazioni, vedere [Usare multitargeting nativo in Visual Studio per compilare progetti precedenti](use-native-multi-targeting.md). Se si sceglie **Sì**, il progetto verrà convertito e non potrà essere convertito di nuovo nella versione precedente. Negli scenari di aggiornamento, pertanto, è consigliabile creare una copia dei file di progetto e di soluzione esistenti.

## <a name="upgrade-reports"></a>Aggiornare i report

Quando si aggiorna un progetto, viene generato un report di aggiornamento che è salvato nella cartella di progetto con il nome UpgradeLog.htm. Il report di aggiornamento Mostra un riepilogo dei problemi rilevati e alcune informazioni sulle modifiche apportate, tra cui:

1. Proprietà di progetti

2. File di inclusione

3. Codice che non viene più compilato in modo corretto a causa di miglioramenti o modifiche della conformità del compilatore nello standard

4. Codice basato su funzionalità di Visual Studio o di Windows non più disponibili o file di intestazione che non sono inclusi in un'installazione predefinita di Visual Studio o che sono stati rimossi dal prodotto

5. Codice che non viene più compilato a seguito di modifiche introdotte nelle API, ad esempio API rinominate, firme di funzione modificate o funzioni deprecate

6. Codice che non viene più compilato a causa di modifiche alla diagnostica, ad esempio un avviso che diventa un errore

7. Errori del linker a seguito di modifiche alle librerie, specialmente quando si usa /NODEFAULTLIB.

8. Errori di runtime o risultati imprevisti a seguito di modifiche del comportamento

9. Errori introdotti negli strumenti. Se si verifica un errore, segnalarlo al team di Visual C++ usando i canali di supporto tradizionali o la pagina della [Community degli sviluppatori di Visual Studio C++](https://developercommunity.visualstudio.com/spaces/62/index.html).

Alcuni progetti e soluzioni aggiornati possono essere compilati correttamente senza modifiche. Tuttavia, per la maggior parte dei progetti è probabile che siano necessarie modifiche alle impostazioni del progetto e al codice sorgente. Non esiste un modo corretto per risolverli, ma è consigliabile usare un approccio graduale. Prima di iniziare, esaminare la [Panoramica dei potenziali problemi di aggiornamento](../porting/overview-of-potential-upgrade-issues-visual-cpp.md) per ulteriori informazioni su molti tipi di errori comuni.

 1. Impostare il set di strumenti C++ della piattaforma, lo standard del linguaggio e la versione del Windows SDK (se applicabile) sulle versioni desiderate. ( **Proprietà** **progetto** >  > **proprietà di configurazione** > **generale**)
 1. Se si verificano numerosi errori, disattivare l'opzione [permissive](../build/reference/permissive-standards-conformance.md) ( **proprietà** **progetto** >  > proprietà di **configurazione** > linguaggio **C/C++**  > ) e [analisi codice ](/visualstudio/code-quality/code-analysis-for-c-cpp-overview)(**Progetto** > **proprietà** > **proprietà di configurazione** > **analisi codice**) temporaneamente per ridurre il numero di errori.
 1. Verificare che tutte le dipendenze siano presenti e che i percorsi di inclusione o di libreria siano corretti. ( **Proprietà** **progetto** >  > **proprietà di configurazione** > **directory di VC + +** )
 1. Identificare e correggere gli errori causati da riferimenti ad API che non esistono più.
 1. Correggere gli eventuali errori rimanenti che impediscono la compilazione. Per correggere gli errori comuni, vedere [Panoramica dei potenziali problemi di aggiornamento](../porting/overview-of-potential-upgrade-issues-visual-cpp.md) .
 1. Riattivare **permissivamente** e correggere eventuali nuovi errori visualizzati a causa di codice non conforme che in precedenza veniva compilato in MSVC.
 1. Attiva l'analisi del codice per identificare potenziali problemi o modelli di codifica obsoleti che non sono più considerati accettabili. Se l'analisi del codice contrassegna molti errori, è possibile disattivare alcuni avvisi per concentrare l'attenzione su quelli più importanti. L'IDE può essere utile con correzioni rapide per alcuni tipi di problemi.
 1. Prendere in considerazione altre opportunità per modernizzare il codice, ad esempio sostituendo strutture di dati e algoritmi personalizzati con quelli C++ della libreria standard o della libreria open source Boost. Utilizzando le funzionalità standard, è più semplice per altri gestire il codice e avere una forte confidenza con cui il codice è stato testato e esaminato da molti esperti del Comitato degli standard e della C++ community più ampia.

Per gli errori difficili da correggere, provare a cercare o pubblicare una domanda in stack overflow o [ C++ nella community degli sviluppatori](https://developercommunity.visualstudio.com/spaces/62/index.html).

## <a name="in-this-section"></a>In questa sezione

[Panoramica dei potenziali problemi di aggiornamento](overview-of-potential-upgrade-issues-visual-cpp.md)<br/>
[Aggiornare il codice a Universal CRT](upgrade-your-code-to-the-universal-crt.md)<br/>
[Aggiornare WINVER e _WIN32_WINNT](modifying-winver-and-win32-winnt.md)<br/>
[Correggere le dipendenze da elementi interni delle librerie](fix-your-dependencies-on-library-internals.md)<br/>
[Problemi relativi alla migrazione dei valori a virgola mobile](floating-point-migration-issues.md)<br/>
[C++funzionalità deprecate in Visual Studio 2019](features-deprecated-in-visual-studio.md)<br/>
[VCBuild rispetto a MSBuild](build-system-changes.md)<br/>
[Librerie di terze parti porta](porting-third-party-libraries.md)<br/>

## <a name="see-also"></a>Vedere anche

[Novità di Visual C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)<br/>
[Cronologia delle modifiche di Visual C++ dal 2003 al 2015](../porting/visual-cpp-change-history-2003-2015.md)<br/>
[Comportamento non standard](../cpp/nonstandard-behavior.md)<br/>
[Applicazioni per dati porta](../data/data-access-programming-mfc-atl.md)<br/>
