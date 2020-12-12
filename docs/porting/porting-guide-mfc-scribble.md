---
description: 'Altre informazioni su: Guida al porting: MFC Scribble'
title: 'Guida al porting: MFC Scribble'
ms.date: 10/23/2019
ms.assetid: 8ddb517d-89ba-41a1-ab0d-4d2c6d9047e8
ms.openlocfilehash: 46fac5ceaeadd803ff30f2fa3f8e7723d7d6f6f2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322699"
---
# <a name="porting-guide-mfc-scribble"></a>Guida al porting: MFC Scribble

Questo è il primo di una serie di argomenti che illustrano la procedura di aggiornamento a Visual Studio 2017 di progetti Visual Studio C++ creati in versioni precedenti di Visual Studio. In questi argomenti la procedura di aggiornamento viene presentata tramite esempi, partendo da un progetto molto semplice fino ad arrivare a quelli leggermente più complessi. In particolare in questo argomento verrà illustrata la procedura di aggiornamento per un progetto specifico, MFC Scribble, che può fungere da introduzione di base per l'aggiornamento di progetti C++.

Ogni versione di Visual Studio introduce possibili incompatibilità che possono complicare il passaggio del codice da una versione meno recente a una più recente di Visual Studio. In alcuni casi le modifiche devono essere apportate nel codice, di conseguenza è necessario ricompilare e aggiornare il codice, mentre in altri devono essere apportate ai file di progetto. Quando si apre un progetto creato con una versione precedente di Visual Studio, viene chiesto automaticamente se aggiornare un progetto o una soluzione alla versione più recente. Questi strumenti in genere consentono però di aggiornare solo i file di progetto e non di modificare il codice sorgente.

## <a name="mfc-scribble"></a>MFC Scribble

MFC Scribble è un noto esempio incluso in numerose versioni diverse di Visual C++. Si tratta di una semplice applicazione di disegno che illustra alcune funzionalità di base di MFC. Ne esistono varie versioni, sia in codice nativo che in codice gestito. Per questo esempio è stata usata una versione precedente di Scribble in codice nativo di Visual Studio 2005, aperta in Visual Studio 2017.

Prima di provare a eseguire l'aggiornamento, verificare che sia installato il carico di lavoro Desktop di Windows. Aprire il programma di installazione di Visual Studio (vs_installer.exe). Un modo per aprire il programma di installazione consiste nel scegliere **file**  >  **nuovo progetto** e scorrere fino alla fine dell'elenco dei modelli installati fino a quando non viene visualizzato **Apri programma di installazione di Visual Studio**. Dopo l'apertura del programma di installazione vengono visualizzati tutti i carichi di lavoro disponibili. Se la casella per il carico di lavoro **desktop di Windows** non è selezionata, selezionarla e fare clic sul pulsante **modifica** nella parte inferiore della finestra.

Quindi eseguire il backup dell'intera soluzione e di tutto il contenuto.

Infine, aprire la soluzione nella versione più recente di Visual Studio e consentire alla procedura guidata di convertire il progetto.

Tenere presente che invece di aggiornare i progetti con la procedura guidata, è anche possibile eseguire devenv dalla riga di comando specificando l'opzione `/Upgrade`. Vedere [/Upgrade (devenv.exe)](/visualstudio/ide/reference/upgrade-devenv-exe). Questo approccio può risultare utile per automatizzare la procedura di aggiornamento per un numero elevato di progetti.

### <a name="step-1-converting-the-project-file"></a>Passaggio 1. Conversione del file di progetto

Quando si apre un vecchio file di progetto in Visual Studio, Visual Studio offre la conversione del file di progetto nella versione più recente, che è stata accettata. viene visualizzata la finestra di dialogo seguente:

![Revisione modifiche a progetti e soluzioni](../porting/media/scribbleprojectupgrade.PNG "Revisione modifiche a progetti e soluzioni")

Si è verificato un errore e viene visualizzato un messaggio per informare che la destinazione Itanium non è disponibile e la conversione non verrà eseguita.

```Output
Platform 'Itanium' is missing from this project. All the configurations and their file configuration settings specific to this platform will be ignored. If you want this platform converted, please make sure you have the corresponding platform installed under '%vctargetpath%\platforms\Itanium'.Continue to convert this project without this platform?
```

All'epoca in cui è stato creato il progetto Scribble precedente, Itanium era un'importante piattaforma di destinazione. La piattaforma Windows non supporta più Itanium, di conseguenza è stato scelto di continuare senza il supporto della piattaforma Itanium.

Visual Studio visualizza quindi un report di migrazione che elenca tutti i problemi riscontrati nel vecchio file di progetto.

![Report di aggiornamento](../porting/media/scribblemigrationreport.PNG "Report di aggiornamento")

In questo caso, i problemi erano tutti avvisi e Visual Studio ha apportato le modifiche appropriate nel file di progetto. La grande differenza per quanto riguarda il progetto è che lo strumento di compilazione è cambiato da vcbuild a msbuild. Questa modifica è stata introdotta in Visual Studio 2010. Altre modifiche includono una riorganizzazione della sequenza di elementi nel file di progetto. Per questo progetto semplice nessuno dei problemi ha richiesto ulteriore attenzione.

### <a name="step-2-getting-it-to-build"></a>Passaggio 2. Preparazione della compilazione

Prima della compilazione è necessario controllare il set di strumenti della piattaforma per conoscere la versione del compilatore usata dal sistema del progetto. Nella finestra delle proprietà del progetto esaminare la proprietà **Set di strumenti della piattaforma** nella categoria **Generale** in **Proprietà di configurazione**. Tale proprietà contiene la versione di Visual Studio e il numero di versione dello strumento della piattaforma, che in questo caso è v141 per la versione Visual Studio 2017 degli strumenti. Quando si converte un progetto compilato originariamente con Visual Studio 2010, 2012, 2013 o 2015, il set di strumenti non viene aggiornato automaticamente al set di strumenti più recente.

Per il passaggio a Unicode, aprire le proprietà del progetto e in **Proprietà di configurazione** scegliere la sezione **Generale**, quindi trovare la proprietà **Set di caratteri**. Modificare l'impostazione corrente **Utilizza set di caratteri multibyte** in **Usa set di caratteri Unicode**. Per effetto di questa modifica le macro _UNICODE e UNICODE sono ora definite mentre _MBCS non lo è, come è possibile verificare nella proprietà **Riga di comando** della categoria **C/C++** nella finestra di dialogo delle proprietà.

```Output
/GS /analyze- /W4 /Zc:wchar_t /Zi /Gm- /Od /Fd".\Debug\vc141.pdb" /Zc:inline /fp:precise /D "_AFXDLL" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_UNICODE" /D "UNICODE" /errorReport:prompt /WX /Zc:forScope /Gd /Oy- /MDd /Fa".\Debug\" /EHsc /nologo /Fo".\Debug\" /Fp".\Debug\Scribble.pch" /diagnostics:classic
```

Anche se il progetto Scribble non è stato configurato per la compilazione con i caratteri Unicode, è già stato scritto con TCHAR anziché char, di conseguenza non c'è nulla da modificare. Il progetto viene infatti compilato correttamente con il set di caratteri Unicode.

Compilare la soluzione. Nella finestra di output il compilatore informa che _WINNT32_WINNT non è definita:

```Output
_WIN32_WINNT not defined. Defaulting to _WIN32_WINNT_MAXVER (see WinSDKVer.h)
```

Si tratta di un avviso, non di un errore, molto comune quando si aggiorna un progetto Visual Studio C++. Questa è la macro che definisce la versione minima di Windows in cui verrà eseguita l'applicazione. Se si ignora l'avviso, si accetta il valore predefinito, _WIN32_WINNT_MAXVER, che indica la versione corrente di Windows. Per una tabella di valori possibili, vedere [Uso delle intestazioni di Windows](/windows/win32/WinProg/using-the-windows-headers). È ad esempio possibile impostarlo in modo che venga eseguito in qualsiasi versione a partire da Vista.

```cpp
#define _WIN32_WINNT _WIN32_WINNT_VISTA
```

Se il codice usa parti dell'API di Windows che non sono disponibili nella versione di Windows specificata con questa macro, il problema verrà segnalato come errore del compilatore. Nel caso del codice di Scribble non ci sono errori.

### <a name="step-3-testing-and-debugging"></a>Passaggio 3. Test e debug

Dal momento che non esistono gruppi di test, l'app è stata avviata e ne sono state verificate manualmente le funzionalità tramite l'interfaccia utente. Non sono stati riscontrati problemi.

### <a name="step-4-improve-the-code"></a>Passaggio 4. Migliorare il codice

A questo punto, dopo aver eseguito la migrazione a Visual Studio 2017, è possibile apportare alcune modifiche per sfruttare i vantaggi delle nuove funzionalità di C++. La versione corrente del compilatore C++ è molto più conforme allo standard C++ delle versioni precedenti. Se quindi si intende apportare alcune modifiche al codice per renderlo più sicuro e garantirne una maggiore portabilità con altri compilatori e sistemi operativi, è opportuno valutare alcuni miglioramenti.

## <a name="next-steps"></a>Passaggi successivi

Scribble è un'applicazione desktop Windows piccola e semplice, che non è stato difficile convertire. Sono molte le app semplici e di piccole dimensioni facilmente convertibili alla nuova versione.  L'aggiornamento richiederà più tempo nel caso di applicazioni più complesse, contenenti molte più righe di codice, codice legacy meno recente che potrebbe non essere al passo con i moderni standard di progettazione, più progetti e librerie, istruzioni di compilazione personalizzate o compilazioni complesse automatizzate tramite script. Continuare con l'[esempio successivo](../porting/porting-guide-com-spy.md), l'applicazione ATL/COM denominata COM Spy.

## <a name="see-also"></a>Vedi anche

[Porting e aggiornamento: esempi e case study](../porting/porting-and-upgrading-examples-and-case-studies.md)<br/>
[Esempio successivo: COM Spy](../porting/porting-guide-com-spy.md)
