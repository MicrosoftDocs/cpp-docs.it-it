---
title: Informazioni sulla generazione di manifesti per programmi C/C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- manifests [C++]
ms.assetid: a1f24221-5b09-4824-be48-92eae5644b53
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 91120d1c8485d43a447310440bbe0bab8f7e3b75
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45726258"
---
# <a name="understanding-manifest-generation-for-cc-programs"></a>Informazioni sulla generazione di manifesti per programmi C/C++

Oggetto [manifesto](https://msdn.microsoft.com/library/aa375365) è un documento XML che può essere un file XML esterno o una risorsa incorporato all'interno di un'applicazione o un assembly. Il manifesto di un' [applicazione isolata](/windows/desktop/SbsCs/isolated-applications) viene usato per gestire i nomi e le versioni di assembly side-by-side condivisi a cui l'applicazione deve essere associato in fase di esecuzione. Il manifesto di un assembly side-by-side consente di specificare le relative dipendenze in nomi, le versioni, le risorse e gli altri assembly.

Esistono due modi per creare un manifesto per un'applicazione isolata o in un assembly side-by-side. In primo luogo, l'autore dell'assembly è possibile creare manualmente un file manifesto seguendo le regole e requisiti di denominazione. In alternativa, se un programma dipende solo gli assembly di Visual C++, ad esempio CRT, MFC, ATL o ad altri utenti, il manifesto può essere generato automaticamente dal linker.

Le intestazioni delle librerie Visual C++ contengono informazioni sull'assembly e quando sono incluse le librerie nel codice dell'applicazione, queste informazioni di assembly vengono usate dal linker per creare un manifesto per il file binario finale. Il linker non incorpora il file manifesto nel file binario e può solo generare il manifesto come file esterno. Presenza di un manifesto come file esterno potrebbe non funzionare per tutti gli scenari. Ad esempio, è consigliabile che gli assembly privati sono incorporati i manifesti. Nelle compilazioni della riga di comando, ad esempio quelle che usano nmake per compilare il codice, è possibile incorporare un manifesto usando lo strumento manifesto. per altre informazioni, vedere [Manifest Generation nella riga di comando](../build/manifest-generation-at-the-command-line.md). Durante la compilazione in Visual Studio, è possibile incorporare un manifesto impostando una proprietà per lo strumento manifesto nel **proprietà progetto** finestra di dialogo, vedere [Manifest Generation in Visual Studio](../build/manifest-generation-in-visual-studio.md).

## <a name="see-also"></a>Vedere anche

[Concetti di applicazioni isolate e assembly side-by-side](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)