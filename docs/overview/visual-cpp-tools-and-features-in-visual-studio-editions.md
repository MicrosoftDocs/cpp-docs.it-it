---
description: 'Altre informazioni su: strumenti e funzionalità di C++ nelle edizioni di Visual Studio'
title: Strumenti e funzionalità C++ nelle versioni di Visual Studio
ms.date: 05/21/2019
helpviewer_keywords:
- tools and platforms [C++]
ms.assetid: 3d88607b-9cc4-490a-8d4c-31ee7610a26f
ms.openlocfilehash: 6253e52fa300cc60de4b2700b384fde6f5ffe1ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254625"
---
# <a name="c-tools-and-features-in-visual-studio-editions"></a>Strumenti e funzionalità C++ nelle versioni di Visual Studio

::: moniker range=">=msvc-160"

Le funzionalità C++ riportate di seguito sono disponibili in Visual Studio 2019. Se non diversamente specificato, tutte le funzionalità sono disponibili in tutte le edizioni: Visual Studio Community, Visual Studio Professional e Visual Studio Enterprise. Alcune funzionalità richiedono carichi di lavoro specifici o componenti facoltativi che è possibile installare tramite il programma di installazione di Visual Studio.

## <a name="platforms"></a>Piattaforme

- Windows Desktop
- Piattaforma UWP (Universal Windows Platform) (tablet, PC, Xbox, IoT e HoloLens)
- Linux
- Android
- iOS

## <a name="compilers"></a>Compilatori

- Compilatore a 32 bit MSVC per x86, x64, ARM e ARM64
- Compilatore a 64 bit MSVC per x86, x64, ARM e ARM64
- Compilatore incrociato GCC per ARM
- Clang/LLVM
  - In Windows, Clang/LLVM 7.0, destinazione x86 o x64 (solo supporto CMake). Altre versioni di Clang possono funzionare, ma non sono ufficialmente supportate.
  - In Linux la distribuzione supporta qualsiasi installazione Clang/LLVM.

## <a name="c-workloads"></a>Carichi di lavoro C++

Visual Studio include i carichi di lavoro seguenti per lo sviluppo con C++. È possibile installarli tutti o solo alcuni, insieme ad altri carichi di lavoro quali ad esempio Sviluppo per desktop .NET, Sviluppo Python, Sviluppo di Azure, Sviluppo di estensioni di Visual Studio e altri.

### <a name="desktop-development-with-c"></a>Sviluppo per desktop con C++

Inclusi:

- Funzionalità desktop di base di C++

Componenti facoltativi:

- MSVC v142 - VS 2019 C++ Build Tools x64/x86 (v14.21)
- Windows 10 SDK (10.0.17763.0)
- Debugger JIT
- Strumenti di profilatura C++
- Strumenti CMake C++ per Windows
- ATL C++ per Build Tools v142 (x86 e x64)
- Adattatore di test per Boost.Test
- Test Adapter for Google Test
- Live Share
- IntelliCode
- IntelliTrace (solo Enterprise)
- MFC C++ per Build Tools v142 (x86 e x64)
- Supporto C++/CLI per Build Tools v142 (14.21)
- Moduli C++ per Build Tools v142 (x64/x86 - sperimentale)
- Compilatore Clang per Windows
- IncrediBuild - Accelerazione della compilazione
- Windows 10 SDK (10.0.17134.0)
- Windows 10 SDK (10.0.16299.0)
- MSVC v141 - VS 2017 C++ Build Tools x64/x86 (v14.16)
- MSVC v140 - VS 2015 C++ Build Tools (v14.00)

### <a name="linux-development-with-c"></a>Sviluppo di applicazioni Linux con C++

Inclusi:

- Funzionalità di base per C++
- Windows Universal C Runtime
- C++ per lo sviluppo di applicazioni Linux

Componenti facoltativi:

- Strumenti CMake C++ per Linux
- Strumenti di sviluppo Embedded e IoT

### <a name="universal-windows-platform-development"></a>Sviluppo per la piattaforma UWP

Inclusi:

- Blend per Visual Studio
- .NET Native e .NET Standard
- Gestione pacchetti NuGet
- Strumenti della piattaforma UWP (Universal Windows Platform)
- Windows 10 SDK (10.0.17763.0)

Componenti facoltativi:

- IntelliCode
- IntelliTrace (solo Enterprise)
- Connettività dispositivi USB
- Strumenti della piattaforma UWP (Universal Windows Platform) per C++ (v142)
- Strumenti della piattaforma UWP (Universal Windows Platform) per C++ (v141)
- Debugger grafica e profiler GPU per DirectX
- Windows 10 SDK (10.0.18362.0)
- Windows 10 SDK (10.0.17134.0)
- Windows 10 SDK (10.0.16299.0)
- Strumenti per architettura e analisi

### <a name="c-game-development"></a>Sviluppo di giochi con C++

Inclusi:

- Funzionalità di base per C++
- Windows Universal C Runtime
- Aggiornamento di C++ 2019 Redistributable
- MSVC v142 - VS 2019 C++ Build Tools x64/x86 (v14.21)

Componenti facoltativi:

- Strumenti di profilatura C++
- Windows 10 SDK (10.0.17763.0)
- IntelliCode
- IntelliTrace (solo Enterprise)
- Windows 10 SDK (10.0.17134.0)
- Windows 10 SDK (10.0.16299.0)
- IncrediBuild - Accelerazione della compilazione
- Cocos
- Programma di installazione di Unreal Engine
- Supporto IDE Android per Unreal Engine

### <a name="mobile-development-with-c"></a>Sviluppo di app per dispositivi mobili con C++

Inclusi:

- Funzionalità di base per C++
- Programma di installazione di Android SDK (livello API 25) (installazione locale per sviluppo di applicazioni per dispositivi mobili con C++)

Componenti facoltativi:

- Android NDK (R16B)
- Apache Ant (1.9.3)
- Strumenti di sviluppo per app Android in C++
- IntelliCode
- Emulatore Google Android (livello API 25) (installazione locale)
- Intel Hardware Accelerated Execution Manager (HAXM) (installazione locale)
- Android NDK (R16B) (a 32 bit)
- Strumenti di sviluppo per app iOS in C++
- IncrediBuild - Accelerazione della compilazione

## <a name="individual-components"></a>Singoli componenti

È possibile installare questi componenti in modo indipendente da qualsiasi carico di lavoro.

- Diagnostica di JavaScript
- Live Share
- Runtime della piattaforma UWP (Universal Windows Platform) C++ per Build Tools v142
- Pubblicazione ClickOnce
- Microsoft Visual Studio Installer Projects

## <a name="libraries-and-headers"></a>Librerie e intestazioni

- Intestazioni e librerie Windows
- Windows Universal C Runtime (CRT)
- Libreria standard C++
- ATL
- MFC
- Libreria di classi .NET Framework
- Libreria di supporto C++ per .NET
- OpenMP 2.0
- Più di 900 librerie open source tramite il catalogo vcpkg

## <a name="build-and-project-systems"></a>Sistemi di compilazione e di progetto

- CMake
- Qualsiasi sistema di compilazione tramite Apri cartella
- Compilazioni da riga di comando (msbuild.exe)
- Multitargeting nativo
- Multitargeting gestito
- Compilazioni parallele
- Personalizzazioni compilazioni
- Estendibilità di pagine delle proprietà

## <a name="project-templates"></a>Modelli di progetto

A seconda dei carichi di lavoro installati sono disponibili i modelli di progetto riportati di seguito.

Desktop di Windows:

- Progetto vuoto
- App console
- Creazione guidata applicazione desktop di Windows
- Applicazione desktop di Windows
- Progetto elementi condivisi
- App MFC
- Libreria di collegamento dinamico
- Progetto CLR vuoto
- App console CLR
- Libreria statica
- Progetto CMake
- Progetto ATL
- Libreria di collegamento dinamico MFC
- Libreria di classi CLR
- Progetto makefile (Windows)
- Controllo ActiveX MFC
- Progetto di unit test nativo
- Google Test

Piattaforma UWP (Universal Windows Platform) (C++/CX):

- App vuota
- App DirectX 11 e XAML
- App DirectX 11
- App DirectX 12
- App unit test
- DLL
- Componente Windows Runtime
- Libreria statica
- Progetto di creazione pacchetti per applicazioni Windows

Linux:

- App console (Linux)
- Progetto vuoto (Linux)
- Intermittenza Raspberry Pi
- Progetto makefile (Linux)

## <a name="tools"></a>Strumenti

- Incremental Linker (Link.exe)
- Utilità Microsoft Makefile (Nmake.exe)
- Lib Generator (Lib.exe)
- Windows Resource Compiler (Rc.exe)
- Windows Resource to Object Converter (CvtRes.exe)
- Browse Information Maintenance Utility (BscMake.exe)
- C++ Name Undecorator (Undname.exe)
- COFF/PE Dumper (Dumpbin.exe)
- COFF/PE Editor (Editbin.exe)
- MASM (Ml.exe)
- Spy++
- ErrLook
- AtlTrace
- Regole di inferenza
- Ottimizzazioni PGO

## <a name="debugging-features"></a>Funzionalità di debug

- Debug nativo
- natvis (visualizzazione del tipo nativo)
- Debug della grafica
- Debug gestito
- Utilizzo GPU
- Utilizzo della memoria
- Remote Debugging
- Debug SQL
- Analisi codice statico

## <a name="designers-and-editors"></a>Editor e finestre di progettazione

- XAML Designer
- Editor/Progettazione stili CSS
- Editor/Finestra di progettazione HTML
- Editor XML
- Editor codice sorgente
- Funzionalità di produttività: refactoring, motore IntelliSense EDG, formattazione del codice C++
- Progettazione Windows Form
- Data Designer
- Editor risorse native (file .rc)
- Editor di risorse
- Editor dei modelli
- Finestra di progettazione shader
- Convalida delle dipendenze in tempo reale (solo Enterprise)
- Diagrammi dei livelli architetturali (solo Enterprise)
- Convalida architettura (solo Enterprise)
- Clone di codice (solo Enterprise)

## <a name="data-features"></a>Funzionalità relative ai dati

- Data Designer
- Oggetti dati
- Servizi Web
- Esplora server

## <a name="automation-and-extensibility"></a>Estendibilità e automazione

- Modelli a oggetti di estendibilità
- Modello di codice
- modello di progetto
- Modello dell'editor di risorse
- Modello di procedura guidata
- Modello a oggetti del debugger

## <a name="application-lifecycle-management-tools"></a>Strumenti di gestione del ciclo di vita delle applicazioni

- Testing unità (C++ nativo Microsoft, Boost.Test, Google Test, CTest)
- Mappa del codice e grafi delle dipendenze (Professional ed Enterprise)
- Code coverage (solo Enterprise)
- Testing manuale (solo Enterprise)
- Testing esplorativo (solo Enterprise)
- Gestione dei test case (solo Enterprise)
- Integrazione del debugger con la mappa del codice (solo Enterprise)
- Live Unit Testing (solo Enterprise)
- IntelliTrace (solo Enterprise)
- IntelliTest (solo Enterprise)
- Microsoft Fakes (Isolamento unit test) (solo Enterprise)
- Code coverage (solo Enterprise)

## <a name="see-also"></a>Vedi anche

[Installa Visual Studio](/visualstudio/install/install-visual-studio)<br/>
[Novità di Visual Studio](/visualstudio/ide/whats-new-in-visual-studio)<br/>
[Tipi di progetto C++ in Visual Studio](../build/reference/visual-cpp-project-types.md)

::: moniker-end

::: moniker range="<=msvc-150"

Le tabelle seguenti illustrano le funzionalità di Visual C++ disponibili in Visual Studio 2017. Una X in una cella indica che la funzionalità è disponibile. Una cella vuota indica che la funzionalità non è disponibile. Le note tra parentesi indicano che una funzionalità è disponibile, ma limitata.

## <a name="platforms"></a>Piattaforme

|Piattaforma|Visual Studio Express per Windows 10|Visual Studio Express per Windows Desktop|Visual Studio Community/Professional|Visual Studio Enterprise|
|-|-|-|-|-|
|Windows Desktop||X|X|X|
|Piattaforma UWP (Universal Windows Platform) (telefono, tablet, PC, Xbox, IoT e HoloLens)|X||X|X|
|Linux|X|X|
|Microsoft Store 8.1|||X|X|
|Windows Phone 8.0|||X|X|
|Android|||X|X|
|iOS|||X|X|

## <a name="compilers"></a>Compilatori

|Compilatore|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Compilatore MSVC X86 a 32 bit|X|X|X|X|
|Compilatore incrociato X86_arm|X||X|X|
|Compilatore MSVC x64 a 64 bit|||X|X|
|Compilatore incrociato X86_ x64|X|X|X|X|

## <a name="libraries-and-headers"></a>Librerie e intestazioni

|Libreria o intestazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Intestazioni e librerie Windows e libreria CRT|(X)|X|X|X|
|Libreria standard C++|X|X|X|X|
|ATL|||X|X|
|MFC|||X|X|
|Libreria di classi .NET Framework||X|X|X|
|Libreria di supporto C++ per .NET||X|X|X|
|OpenMP 2.0|X|X|X|X|

## <a name="project-templates"></a>Modelli di progetto

|Modello|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Modelli XAML per piattaforma UWP, Windows 8.1, Windows Phone 8.0|X||X|X|
|Applicazione Direct3D|X||X|X|
|DLL (Windows universale)|X||X|X|
|Libreria statica (Windows universale)|X||X|X|
|Componente Windows Runtime|X||X|X|
|App unit test (Windows universale)|X||X|X|
|Progetto ATL|||X|X|
|Libreria di classi (CLR)||X|X|X|
|Applicazione console CLR||X|X|X|
|Progetto CLR vuoto||X|X|X|
|Creazione guidata personalizzata|||X|X|
|Progetto vuoto||X|X|X|
|Progetto Makefile||X|X|X|
|Controllo ActiveX MFC|||X|X|
|Applicazione MFC|||X|X|
|DLL MFC|||X|X|
|Progetto di test|X|X|X|X|
|Progetto console Win32||X|X|X|
|Progetto Win32||X|X|X|

## <a name="tools"></a>Strumenti

|Strumento|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|----------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Incremental Linker (Link.exe)|X|X|X|X|
|Program Maintenance Utility (Nmake.exe)||X|X|X|
|Lib Generator (Lib.exe)|X|X|X|X|
|Windows Resource Compiler (Rc.exe)|X|X|X|X|
|Windows Resource to Object Converter (CvtRes.exe)||X|X|X|
|Browse Information Maintenance Utility (BscMake.exe)|X|X|X|X|
|C++ Name Undecorator (Undname.exe)|X|X|X|X|
|COFF/PE Dumper (Dumpbin.exe)|X|X|X|X|
|COFF/PE Editor (Editbin.exe)|X|X|X|X|
|MASM (Ml.exe)|||X|X|
|Spy++|||X|X|
|ErrLook|||X|X|
|AtlTrace|||X|X|
|Devenv.com|||X|X|
|Regole di inferenza|||X|X|
|Aggiornamento di progetti vcproj VCBuild a MSBuild (VCUpgrade.exe)|X|X|X|X|
|Ottimizzazioni PGO|||X|X|

## <a name="debugging-features"></a>Funzionalità di debug

|Funzionalità di debug|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Debug nativo|X|X|X|X|
|natvis (visualizzazione del tipo nativo)|X|X|X|X|
|Debug della grafica|X||X|X|
|Debug gestito||X|X|X|
|Utilizzo GPU|X||X|X|
|Utilizzo della memoria|X||X|X|
|Remote Debugging|X|X|X|X|
|Debug SQL|||X|X|
|Analisi codice statico|Limitato|Limitato|X|X|

## <a name="designers-and-editors"></a>Editor e finestre di progettazione

|Editor o finestra di progettazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|XAML Designer|X||X|X|
|Editor/Progettazione stili CSS|X|X|X|X|
|Editor/Finestra di progettazione HTML|X|X|X|X|
|Editor XML|X|X|X|X|
|Editor codice sorgente|X|X|X|X|
|Funzionalità di produttività: refactoring, IntelliSense, formattazione codice C++|X|X|X|X|
|Progettazione Windows Form||X|X|X|
|Data Designer|||X|X|
|Editor risorse native (file .rc)|||X|X|
|Editor di risorse|X|X|X|X|
|Editor dei modelli|X||X|X|
|Finestra di progettazione shader|X||X|X|

## <a name="data-features"></a>Funzionalità relative ai dati

|Funzionalità relativa ai dati|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Data Designer|||X|X|
|Oggetti dati|||X|X|
|Servizi Web|||X|X|
|Esplora server|||X|X|

## <a name="build-and-project-systems"></a>Sistemi di compilazione e di progetto

|Funzionalità di compilazione o di progetto|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|------------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Compilazioni da riga di comando (msbuild.exe)|X|X|X|X|
|Multitargeting nativo||X|X|X|
|Multitargeting gestito||X|X|X|
|Compilazioni parallele|X|X|X|X|
|Personalizzazioni compilazioni|X|X|X|X|
|Estendibilità di pagine delle proprietà|X|X|X|X|

## <a name="automation-and-extensibility"></a>Estendibilità e automazione

|Estendibilità e automazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|----------------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Modelli a oggetti di estendibilità|||X|X|
|Modello di codice|||X|X|
|modello di progetto|||X|X|
|Modello dell'editor di risorse|||X|X|
|Modello di procedura guidata|||X|X|
|Modello a oggetti del debugger|||X|X|

## <a name="application-lifecycle-management-tools"></a>Strumenti di gestione del ciclo di vita delle applicazioni

|Strumento|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|-|-|-|-|-|
|Testing unità (framework nativo)|X|X|X|X|
|Testing unità (framework gestito)||X|X|X|
|Code coverage||||X|
|Test manuali||||X|
|Testing esplorativo||||X|
|Gestione test case||||X|
|Mappa codici e grafici delle dipendenze|||Sola lettura|X|
|Debug della mappa codici||||X|

## <a name="see-also"></a>Vedi anche

[Installa Visual Studio](/visualstudio/install/install-visual-studio)<br/>
[Novità di Visual Studio](/visualstudio/ide/whats-new-in-visual-studio)<br/>
[Tipi di progetto C++ in Visual Studio](../build/reference/visual-cpp-project-types.md)

::: moniker-end
