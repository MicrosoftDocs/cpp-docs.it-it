---
title: "Strumenti di Visual C++ e funzionalità in edizioni di Visual Studio | Documenti Microsoft"
ms.custom: 
ms.date: 02/28/2018
ms.technology:
- cpp-ide
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- versions [C++]
- Visual C++, versions
- editions [C++]
ms.assetid: 3d88607b-9cc4-490a-8d4c-31ee7610a26f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1bab6eda1c5c0d2d852d3a678f588f0539495001
ms.sourcegitcommit: 4e01d36ffa64ea11bacf589f79d2f1df947e2510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2018
---
# <a name="visual-c-tools-and-features-in-visual-studio-editions"></a>Strumenti di Visual C++ e funzionalità in edizioni di Visual Studio

Le tabelle seguenti illustrano le funzionalità di Visual C++ disponibili in Visual Studio Una X in una cella indica che la funzionalità è disponibile. Una cella vuota indica che la funzionalità non è disponibile. Le note tra parentesi indicano che una funzionalità è disponibile, ma limitata.

## <a name="platforms"></a>Piattaforme

||||||
|-|-|-|-|-|
|Piattaforma|Visual Studio Express per Windows 10|Visual Studio Express per Windows Desktop|Visual Studio Community/Professional|Visual Studio Enterprise|
|Desktop di Windows||x|X|x|
|Piattaforma UWP (Universal Windows Platform) (telefono, tablet, PC, Xbox, IoT e HoloLens)|x||X|x|
|Microsoft Store 8.1|||x|x|
|Windows Phone 8.0|||x|x|
|Android|||x|x|
|iOS|||x|x|

## <a name="compilers"></a>Compilatori

|Compilatore|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Compilatore X86 a 32 bit|x|X|X|x|
|Compilatore incrociato X86_arm|x||X|x|
|Compilatore [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] a 64 bit|||x|x|
|Compilatore incrociato X86_[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|x|X|X|x|

## <a name="libraries-and-headers"></a>Librerie e intestazioni

|Libreria o intestazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Intestazioni e librerie Windows e libreria CRT|(X)|x|X|x|
|Libreria standard C++|x|X|X|X|
|ATL|||X|X|
|MFC|||X|x|
|Libreria di classi .NET Framework||x|X|x|
|Libreria di supporto C++ per .NET||x|X|x|
|OpenMP|x|X|X|x|

## <a name="project-templates"></a>Modelli di progetto

|Modello|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Modelli XAML per piattaforma UWP, Windows 8.1, Windows Phone 8.0|x||X|x|
|Applicazione Direct3D|x||X|x|
|DLL (Windows universale)|x||X|x|
|Libreria statica (Windows universale)|x||X|x|
|Componente Windows Runtime|x||X|x|
|Applicazione Unit Test (Windows universale)|x||X|x|
|Progetto ATL|||x|x|
|Libreria di classi (CLR)||x|X|x|
|Applicazione console CLR||x|X|x|
|Progetto CLR vuoto||x|X|x|
|Creazione guidata personalizzata|||x|x|
|Progetto vuoto||x|X|x|
|Progetto Makefile||x|X|x|
|Controllo ActiveX MFC|||x|x|
|Applicazione MFC|||x|x|
|DLL MFC|||x|x|
|Progetto di test|x|X|X|x|
|Progetto console Win32||x|X|x|
|Progetto Win32||x|X|x|

## <a name="tools"></a>Strumenti

|Strumento|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|----------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Incremental Linker (Link.exe)|x|X|X|x|
|Program Maintenance Utility (Nmake.exe)||x|X|x|
|Lib Generator (Lib.exe)|x|X|X|x|
|Windows Resource Compiler (Rc.exe)|x|X|X|x|
|Windows Resource to Object Converter (CvtRes.exe)||x|X|x|
|Browse Information Maintenance Utility (BscMake.exe)|x|X|X|x|
|C++ Name Undecorator (Undname.exe)|x|X|X|x|
|COFF/PE Dumper (Dumpbin.exe)|x|X|X|x|
|COFF/PE Editor (Editbin.exe)|x|X|X|x|
|MASM (Ml.exe)|||x|x|
|Spy++|||x|x|
|ErrLook|||x|x|
|AtlTrace|||x|x|
|Devenv.com|||x|x|
|Regole di inferenza|||x|x|
|Aggiornamento di progetti vcproj VCBuild a MSBuild (VCUpgrade.exe)|x|X|X|x|
|Ottimizzazioni PGO|||x|x|

## <a name="debugging-features"></a>Funzionalità di debug

|Funzionalità di debug|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|Debug nativo|x|X|X|x|
|natvis (visualizzazione del tipo nativo)|x|X|X|x|
|Debug della grafica|x||X|x|
|Debug gestito||x|X|x|
|Utilizzo GPU|x||X|x|
|Utilizzo memoria|x||X|x|
|Debug remoto|x|X|X|x|
|Debug SQL|||x|x|
|Analisi codice statico|Limitato|Limitato|x|x|

## <a name="designers-and-editors"></a>Editor e finestre di progettazione

|Editor o finestra di progettazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|
|------------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|
|XAML Designer|x||X|x|
|Editor/Progettazione stili CSS|x|X|X|x|
|Editor/Finestra di progettazione HTML|x|X|X|x|
|Editor XML|x|X|X|x|
|Editor codice sorgente|x|X|X|x|
|Funzionalità di produttività: refactoring, IntelliSense, formattazione codice C++|x|X|X|x|
|Progettazione Windows Form||x|X|x|
|Data Designer|||x|x|
|Editor risorse native (file .rc)|||x|x|
|editor di risorse|x|X|X|x|
|Editor dei modelli|x||X|x|
|Finestra di progettazione shader|x||X|x|

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
|Compilazioni da riga di comando (msbuild.exe)|x|X|X|x|
|Multitargeting nativo||x|X|x|
|Multitargeting gestito||x|X|x|
|Compilazioni parallele|x|X|X|x|
|Personalizzazioni compilazioni|x|X|X|x|
|Estendibilità di pagine delle proprietà|x|X|X|x|

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
|Unit test (framework nativo)|x|X|X|x|
|Unit test (framework gestito)||x|X|x|
|Code coverage||||x|
|Test manuali||||x|
|Testing esplorativo||||x|
|Gestione test case||||x|
|Mappa codici e grafici delle dipendenze|||sola lettura|x|
|Debug della mappa codici||||x|

## <a name="see-also"></a>Vedere anche

[Installare Visual Studio](/visualstudio/install/install-visual-studio)<br/>
[Novità di Visual Studio](/visualstudio/ide/whats-new-in-visual-studio)<br/>
[Tipi di progetto Visual C++](../ide/visual-cpp-project-types.md)<br/>
[SQL Server Data Tools](https://msdn.microsoft.com/library/hh272686)<br/>
