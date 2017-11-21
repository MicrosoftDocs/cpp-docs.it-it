---
title: "Strumenti di Visual C++ e funzionalità in edizioni di Visual Studio | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- versions [C++]
- Visual C++, versions
- editions [C++]
ms.assetid: 3d88607b-9cc4-490a-8d4c-31ee7610a26f
caps.latest.revision: "51"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 37f1eed2287c8fe655a124b1f76f48a203ab1607
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="visual-c-tools-and-features-in-visual-studio-editions"></a>Strumenti di Visual C++ e funzionalità in edizioni di Visual Studio
Le tabelle seguenti illustrano le funzionalità di Visual C++ disponibili in Visual Studio Una X in una cella indica che la funzionalità è disponibile. Una cella vuota indica che la funzionalità non è disponibile. Le note tra parentesi indicano che una funzionalità è disponibile, ma limitata.  
  
## <a name="platforms"></a>Piattaforme  
  
||||||  
|-|-|-|-|-|  
|Piattaforma|Visual Studio Express per Windows 10|Visual Studio Express per Windows Desktop|Visual Studio Community/Professional|Visual Studio Enterprise|  
|Desktop di Windows||X|X|X|  
|Piattaforma UWP (Universal Windows Platform) (telefono, tablet, PC, Xbox, IoT e HoloLens)|X||X|X|  
|Windows Store 8.1|||X|X|  
|Windows Phone 8.0|||X|X|  
|Android|||X|X|  
|iOS|||X|X|  
  
## <a name="compilers"></a>Compilatori  
  
|Compilatore|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|  
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|  
|Compilatore X86 a 32 bit|X|X|X|X|  
|Compilatore incrociato X86_arm|X||X|X|  
|Compilatore [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] a 64 bit|||X|X|  
|Compilatore incrociato X86_[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|X|X|X|X|  
  
## <a name="libraries-and-headers"></a>Librerie e intestazioni  
  
|Libreria o intestazione|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|  
|-----------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|  
|Intestazioni e librerie Windows e libreria CRT|(X)|X|X|X|  
|Libreria standard C++|X|X|X|X|  
|ATL|||X|X|  
|MFC|||X|X|  
|Libreria di classi .NET Framework||X|X|X|  
|Libreria di supporto C++ per .NET||X|X|X|  
|OpenMP|X|X|X|X|  
  
## <a name="project-templates"></a>Modelli di progetto  
  
|Modello|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|  
|--------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|------------------------------|  
|Modelli XAML per piattaforma UWP, Windows 8.1, Windows Phone 8.0|X||X|X|  
|Applicazione Direct3D|X||X|X|  
|DLL (applicazioni Windows Store)|X||X|X|  
|Libreria statica (applicazioni Windows Store)|X||X|X|  
|Componente Windows Runtime|X||X|X|  
|Libreria unit test (applicazioni Windows Store)|X||X|X|  
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
|Utilizzo memoria|X||X|X|  
|Debug remoto|X|X|X|X|  
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
  
|Funzionalità relativa ai dati|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Premium|Visual Studio Enterprise|  
|------------------|---------------------------------------|-----------------------------------------------|---------------------------------------------|---------------------------|------------------------------|  
|Data Designer|||X|X|X|  
|Oggetti dati|||X|X|X|  
|Servizi Web|||X|X|X|  
|Esplora server|||X|X|X|  
  
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
  
||||||  
|-|-|-|-|-|  
|Strumento|Visual Studio Express per Windows|Visual Studio Express per Windows Desktop|Visual Studio Professional/Community|Visual Studio Enterprise|  
|Unit test (framework nativo)|X|X|X|X|  
|Unit test (framework gestito)||X|X|X|  
|Code coverage||||X|  
|Test manuali||||X|  
|Testing esplorativo||||X|  
|Gestione test case||||X|  
|Mappa codici e grafici delle dipendenze|||sola lettura|X|  
|Debug della mappa codici||||X|  
  
## <a name="see-also"></a>Vedere anche  
 [Installare Visual Studio](/visualstudio/install/install-visual-studio)   
 [Novità di Visual Studio](/visualstudio/ide/whats-new-in-visual-studio)   
 [Tipi di progetto di Visual C++](../ide/visual-cpp-project-types.md)   
 [Le edizioni di Visual Database Tools](http://msdn.microsoft.com/en-us/a7689adc-f16b-4cc7-b6fe-39ca0c711161)