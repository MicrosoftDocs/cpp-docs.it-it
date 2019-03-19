---
title: Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio
ms.date: 02/28/2018
helpviewer_keywords:
- versions [C++]
- Visual C++, versions
- editions [C++]
ms.assetid: 3d88607b-9cc4-490a-8d4c-31ee7610a26f
ms.openlocfilehash: 3e5b173741700ed6cccf95b479eb5693a62ed02e
ms.sourcegitcommit: 9e85c2e029d06b4c1c69837437468718b4d54908
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/18/2019
ms.locfileid: "57810484"
---
# <a name="visual-c-tools-and-features-in-visual-studio-editions"></a>Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio

Le tabelle seguenti illustrano le funzionalità di Visual C++ disponibili in Visual Studio Una X in una cella indica che la funzionalità è disponibile. Una cella vuota indica che la funzionalità non è disponibile. Le note tra parentesi indicano che una funzionalità è disponibile, ma limitata.

## <a name="platforms"></a>Piattaforme

||||||
|-|-|-|-|-|
|Piattaforma|Visual Studio Express per Windows 10|Visual Studio Express per Windows Desktop|Visual Studio Community/Professional|Visual Studio Enterprise|
|Desktop di Windows||x|x|x|
|Piattaforma UWP (Universal Windows Platform) (telefono, tablet, PC, Xbox, IoT e HoloLens)|x||x|x|
|Microsoft Store 8.1|||x|x|
|Windows Phone 8.0|||x|x|
|Android|||x|x|
|iOS|||x|x|

## <a name="compilers"></a>Compilatori

|Compilatore|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Compilatore X86 a 32 bit|x|x|x|x|
|Compilatore incrociato X86_arm|x||x|x|
|Compilatore x64 a 64 bit|||x|x|
|Compilatore incrociato X86_ x64|x|x|x|x|

## <a name="libraries-and-headers"></a>Librerie e intestazioni

|Libreria o intestazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Intestazioni e librerie Windows e libreria CRT|(X)|x|x|x|
|Libreria standard C++|x|x|x|x|
|ATL|||x|x|
|MFC|||x|x|
|Libreria di classi .NET Framework||x|x|x|
|Libreria di supporto C++ per .NET||x|x|x|
|OpenMP|x|x|x|x|

## <a name="project-templates"></a>Modelli di progetto

|Modello|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Modelli XAML per piattaforma UWP, Windows 8.1, Windows Phone 8.0|x||x|x|
|Applicazione Direct3D|x||x|x|
|DLL (Windows universale)|x||x|x|
|Libreria statica (Windows universale)|x||x|x|
|Componente Windows Runtime|x||x|x|
|App unit test (Windows universale)|x||x|x|
|Progetto ATL|||x|x|
|Libreria di classi (CLR)||x|x|x|
|Applicazione console CLR||x|x|x|
|Progetto CLR vuoto||x|x|x|
|Creazione guidata personalizzata|||x|x|
|Progetto vuoto||x|x|x|
|Progetto Makefile||x|x|x|
|Controllo ActiveX MFC|||x|x|
|Applicazione MFC|||x|x|
|DLL MFC|||x|x|
|Progetto di test|x|x|x|x|
|Progetto console Win32||x|x|x|
|Progetto Win32||x|x|x|

## <a name="tools"></a>Strumenti

|Strumento|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|----------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Incremental Linker (Link.exe)|x|x|x|x|
|Program Maintenance Utility (Nmake.exe)||x|x|x|
|Lib Generator (Lib.exe)|x|x|x|x|
|Windows Resource Compiler (Rc.exe)|x|x|x|x|
|Windows Resource to Object Converter (CvtRes.exe)||x|x|x|
|Browse Information Maintenance Utility (BscMake.exe)|x|x|x|x|
|C++ Name Undecorator (Undname.exe)|x|x|x|x|
|COFF/PE Dumper (Dumpbin.exe)|x|x|x|x|
|COFF/PE Editor (Editbin.exe)|x|x|x|x|
|MASM (Ml.exe)|||x|x|
|Spy++|||x|x|
|ErrLook|||x|x|
|AtlTrace|||x|x|
|Devenv.com|||x|x|
|Regole di inferenza|||x|x|
|Aggiornamento di progetti vcproj VCBuild a MSBuild (VCUpgrade.exe)|x|x|x|x|
|Ottimizzazioni PGO|||x|x|

## <a name="debugging-features"></a>Funzionalità di debug

|Funzionalità di debug|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Debug nativo|x|x|x|x|
|natvis (visualizzazione del tipo nativo)|x|x|x|x|
|Debug della grafica|x||x|x|
|Debug gestito||x|x|x|
|Utilizzo GPU|x||x|x|
|Utilizzo memoria|x||x|x|
|Remote Debugging|x|x|x|x|
|Debug SQL|||x|x|
|Analisi codice statico|Limitato|Limitato|x|x|

## <a name="designers-and-editors"></a>Editor e finestre di progettazione

|Editor o finestra di progettazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|XAML Designer|x||x|x|
|Editor/Progettazione stili CSS|x|x|x|x|
|Editor/Finestra di progettazione HTML|x|x|x|x|
|Editor XML|x|x|x|x|
|Editor codice sorgente|x|x|x|x|
|Funzionalità di produttività: refactoring, IntelliSense, formattazione codice C++|x|x|x|x|
|Progettazione Windows Form||x|x|x|
|Data Designer|||x|x|
|Editor risorse native (file .rc)|||x|x|
|editor di risorse|x|x|x|x|
|Editor dei modelli|x||x|x|
|Finestra di progettazione shader|x||x|x|

## <a name="data-features"></a>Funzionalità relative ai dati

|Funzionalità relativa ai dati|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Data Designer|||x|x|
|Oggetti dati|||x|x|
|Servizi Web|||x|x|
|Esplora server|||x|x|

## <a name="build-and-project-systems"></a>Sistemi di compilazione e di progetto

|Funzionalità di compilazione o di progetto|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|------------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Compilazioni da riga di comando (msbuild.exe)|x|x|x|x|
|Multitargeting nativo||x|x|x|
|Multitargeting gestito||x|x|x|
|Compilazioni parallele|x|x|x|x|
|Personalizzazioni compilazioni|x|x|x|x|
|Estendibilità di pagine delle proprietà|x|x|x|x|

## <a name="automation-and-extensibility"></a>Estendibilità e automazione

|Estendibilità e automazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|----------------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Modelli a oggetti di estendibilità|||x|x|
|Modello di codice|||x|x|
|modello di progetto|||x|x|
|Modello dell'editor di risorse|||x|x|
|Modello di procedura guidata|||x|x|
|Modello a oggetti del debugger|||x|x|

## <a name="application-lifecycle-management-tools"></a>Strumenti di gestione del ciclo di vita delle applicazioni

||||||
|-|-|-|-|-|
|Strumento|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|Testing unità (framework nativo)|x|x|x|x|
|Testing unità (framework gestito)||x|x|x|
|Code coverage||||x|
|Test manuali||||x|
|Testing esplorativo||||x|
|Gestione test case||||x|
|Mappa codici e grafici delle dipendenze|||sola lettura|x|
|Debug della mappa codici||||x|

## <a name="see-also"></a>Vedere anche

[Installare Visual Studio](/visualstudio/install/install-visual-studio)<br/>
[Novità di Visual Studio](/visualstudio/ide/whats-new-in-visual-studio)<br/>
[Tipi di progetto Visual C++](../build/reference/visual-cpp-project-types.md)<br/>
[SQL Server Data Tools](https://msdn.microsoft.com/library/hh272686)<br/>
