---
title: Informazioni C++ di riferimento sulle pagine delle proprietà del progetto Windows-Visual Studio
ms.date: 08/28/2019
helpviewer_keywords:
- project-file macro
- project properties [C++], default values
- user-defined values
- project properties [C++], setting
- macros, project-file
- property pages, project settings
- C++ projects, properties
- build macro
- user-defined macros
ms.assetid: 13ffe3ea-1bc3-4bee-be5e-053a8a99cce4
ms.openlocfilehash: c9fd4fc00e86e0660972fc0bd37b66b2fea02ee0
ms.sourcegitcommit: e10a5feea193c249ddc5a6faba48e7c6d8784e73
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/30/2019
ms.locfileid: "70177457"
---
# <a name="windows-c-project-property-page-reference"></a>Riferimento C++ alla pagina delle proprietà del progetto Windows

In Visual Studio è possibile specificare le opzioni del compilatore e del linker, i percorsi di file e altre impostazioni di compilazione tramite le pagine delle proprietà per il progetto. Le proprietà e le pagine delle proprietà disponibili dipendono dal tipo di progetto. Un progetto makefile, ad esempio, include una pagina delle proprietà NMake, che non è presente in un progetto console MFC o Win32. Per aprire le **pagine delle proprietà**, scegliere**Proprietà** **progetto** > dal menu principale oppure fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**. I singoli file dispongono anche di pagine delle proprietà che consentono di impostare le opzioni di compilazione e compilazione solo per quel file. Nella figura seguente vengono illustrate le pagine delle proprietà per un progetto MFC.

![Pagine delle proprietà C++ per il progetto](media/example-prop-page.png)

In questa sezione viene fornito un riferimento rapido per le pagine delle proprietà. Le opzioni e le impostazioni esposte nelle pagine delle proprietà sono documentate più completamente nei propri argomenti e sono collegate dagli argomenti della pagina delle proprietà. Per altre informazioni sulle proprietà del progetto, [vedere C++ impostare le proprietà del compilatore e della compilazione in Visual Studio](../working-with-project-properties.md).

Per le pagine delle proprietà nei progetti Linux, vedere informazioni di [riferimento sulla pagina delle proprietà di Linux C++ ](../../linux/prop-pages-linux.md).

## <a name="in-this-section"></a>In questa sezione

- [Pagina delle proprietà Generale (Progetto)](general-property-page-project.md)
- [Pagina delle proprietà Generale (File)](general-property-page-file.md)
- [Pagina delle proprietà avanzate](advanced-property-page.md)
- [Pagina delle proprietà Directory di VC++](vcpp-directories-property-page.md)
- [Pagine delle proprietà Linker](linker-property-pages.md)
- [Pagine delle proprietà Strumento Manifesto](manifest-tool-property-pages.md)
- [Pagine delle proprietà HLSL](hlsl-property-pages.md)
- [Pagine delle proprietà Riga di comando](command-line-property-pages.md)
- [Pagina delle proprietà Istruzione di compilazione personalizzata: Generale](custom-build-step-property-page-general.md)
- [Aggiunta di riferimenti](../adding-references-in-visual-cpp-projects.md)
- [Pagina delle proprietà Risorse gestite](managed-resources-property-page.md)
- [Pagine delle proprietà MIDL](midl-property-pages.md)
- [Pagina delle proprietà NMAKE](nmake-property-page.md)
- [Pagine delle proprietà Risorse](resources-property-pages.md)
- [Pagina delle proprietà Riferimenti Web](web-references-property-page.md)
- [Pagina delle proprietà Strumento generatore di dati XML](xml-data-generator-tool-property-page.md)
- [Pagina delle proprietà Strumento generatore di documenti XML](xml-document-generator-tool-property-pages.md)

## <a name="see-also"></a>Vedere anche

[Procedura: Creare e rimuovere dipendenze del progetto](/visualstudio/ide/how-to-create-and-remove-project-dependencies)<br/>
[Procedura: Creare e modificare le configurazioni](/visualstudio/ide/how-to-create-and-edit-configurations)<br/>
[Riferimento C++ alla pagina delle proprietà di Linux](../../linux/prop-pages-linux.md)
