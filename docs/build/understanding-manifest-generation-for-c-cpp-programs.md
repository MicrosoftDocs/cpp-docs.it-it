---
title: Informazioni sulla generazione di manifesti per programmi C/C++
ms.date: 11/04/2016
helpviewer_keywords:
- manifests [C++]
ms.assetid: a1f24221-5b09-4824-be48-92eae5644b53
ms.openlocfilehash: ff8d9f214b4fe4d004691c54474dcdabf2c0af85
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62314741"
---
# <a name="understanding-manifest-generation-for-cc-programs"></a>Informazioni sulla generazione di manifesti per programmi C/C++

Oggetto [manifesto](/windows/desktop/sbscs/manifests) è un documento XML che può essere un file XML esterno o una risorsa incorporato all'interno di un'applicazione o un assembly. Il manifesto di un' [applicazione isolata](/windows/desktop/SbsCs/isolated-applications) viene usato per gestire i nomi e le versioni di assembly side-by-side condivisi a cui l'applicazione deve essere associato in fase di esecuzione. Il manifesto di un assembly side-by-side consente di specificare le relative dipendenze in nomi, le versioni, le risorse e gli altri assembly.

Esistono due modi per creare un manifesto per un'applicazione isolata o in un assembly side-by-side. In primo luogo, l'autore dell'assembly è possibile creare manualmente un file manifesto seguendo le regole e requisiti di denominazione. In alternativa, se un programma dipende solo gli assembly di Visual C++, ad esempio CRT, MFC, ATL o ad altri utenti, il manifesto può essere generato automaticamente dal linker.

Le intestazioni delle librerie Visual C++ contengono informazioni sull'assembly e quando sono incluse le librerie nel codice dell'applicazione, queste informazioni di assembly vengono usate dal linker per creare un manifesto per il file binario finale. Il linker non incorpora il file manifesto nel file binario e può solo generare il manifesto come file esterno. Presenza di un manifesto come file esterno potrebbe non funzionare per tutti gli scenari. Ad esempio, è consigliabile che gli assembly privati sono incorporati i manifesti. Nelle compilazioni della riga di comando, ad esempio quelle che usano nmake per compilare il codice, è possibile incorporare un manifesto usando lo strumento manifesto. per altre informazioni, vedere [Manifest Generation nella riga di comando](manifest-generation-at-the-command-line.md). Durante la compilazione in Visual Studio, è possibile incorporare un manifesto impostando una proprietà per lo strumento manifesto nel **proprietà progetto** finestra di dialogo, vedere [Manifest Generation in Visual Studio](manifest-generation-in-visual-studio.md).

## <a name="see-also"></a>Vedere anche

[Concetti di applicazioni isolate e assembly side-by-side](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
