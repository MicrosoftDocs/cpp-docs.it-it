---
title: Compilazione di applicazioni isolate C/C++ e di assembly side-by-side
ms.date: 11/04/2016
helpviewer_keywords:
- isolated applications [C++]
- WinSxS [C++]
- native assembly cache [C++]
- builds [C++], isolated applications
- side-by-side applications [C++]
- builds [C++], side-by-side assemblies
ms.assetid: 9465904e-76f7-48bd-bb3f-c55d8f1699b6
ms.openlocfilehash: b962796c3bf32bc312d3047535ae90a40a37094d
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58772462"
---
# <a name="building-cc-isolated-applications-and-side-by-side-assemblies"></a>Compilazione di applicazioni isolate C/C++ e di assembly side-by-side

Visual C++ supporta un modello di distribuzione per applicazioni client Windows basato sui concetti di [applicazioni isolate](/windows/desktop/SbsCs/isolated-applications) e [assembly side-by-side](/windows/desktop/SbsCs/about-side-by-side-assemblies-). Per impostazione predefinita, Visual C++ crea tutte le applicazioni C/C++ native come applicazioni isolate che usano [manifesti](/windows/desktop/sbscs/manifests) per descrivere le relative dipendenze da librerie di Visual C++.

La creazione di programmi C/C++ come applicazioni isolate presenta numerosi vantaggi. Ad esempio, un'applicazione isolata non è influenzata dall'installazione o disinstallazione di librerie di Visual C++ da parte di altre applicazioni C/C++. Le librerie di Visual C++ usate da applicazioni isolate possono essere comunque ridistribuite nella cartella locale dell'applicazione o tramite installazione nella cache assembly nativa (WinSxS). La manutenzione delle librerie di Visual C++ per le applicazioni già distribuite può essere tuttavia semplificata tramite un [file di configurazione dell'editore](/windows/desktop/SbsCs/publisher-configuration). Il modello di distribuzione basato su applicazioni isolate aiuta ad assicurare che le applicazioni C/C++ in esecuzione in un computer specifico usino la versione più recente delle librerie di Visual C++, permettendo comunque al tempo stesso agli amministratori di sistema e agli autori di applicazioni di controllare l'associazione esplicita delle versioni delle applicazioni ai rispettivi file DLL dipendenti.

Questa sezione illustra come creare un'applicazione C/C++ come applicazione isolata e come assicurarne l'associazione alle librerie di Visual C++ tramite un manifesto. Le informazioni disponibili in questa sezione sono applicabili principalmente ad applicazioni Visual C++ native o non gestite. Per informazioni sulla distribuzione di applicazioni native create con Visual C++, vedere [Redistributing Visual C++ Files](../windows/redistributing-visual-cpp-files.md).

## <a name="in-this-section"></a>In questa sezione

[Concetti di applicazioni isolate e assembly side-by-side](concepts-of-isolated-applications-and-side-by-side-assemblies.md)

[Compilazione di applicazioni isolate C/C++](building-c-cpp-isolated-applications.md)

[Compilazione di assembly side-by-side C/C++](building-c-cpp-side-by-side-assemblies.md)

[Procedura: Compilare componenti COM senza registrazione](how-to-build-registration-free-com-components.md)

[Procedura: Compilare applicazioni isolate per l'uso di componenti COM](how-to-build-isolated-applications-to-consume-com-components.md)

[Informazioni sulla generazione di manifesti per programmi C/C++](understanding-manifest-generation-for-c-cpp-programs.md)

[Risoluzione dei problemi relativi alle applicazioni isolate C/C++ e agli assembly side-by-side](troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)

## <a name="related-sections"></a>Sezioni correlate

[Applicazioni isolate e assembly affiancati](/windows/desktop/SbsCs/isolated-applications-and-side-by-side-assemblies-portal)

[Distribuzione di applicazioni desktop](../windows/deploying-native-desktop-applications-visual-cpp.md)