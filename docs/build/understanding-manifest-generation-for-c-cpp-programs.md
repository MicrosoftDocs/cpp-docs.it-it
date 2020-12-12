---
description: 'Altre informazioni su: informazioni sulla generazione di manifesti per i programmi C/C++'
title: Informazioni sulla generazione di manifesti per programmi C/C++
ms.date: 11/04/2016
helpviewer_keywords:
- manifests [C++]
ms.assetid: a1f24221-5b09-4824-be48-92eae5644b53
ms.openlocfilehash: 78169dd6d8185e1ae8470dea93ab145fc05dbc7b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277271"
---
# <a name="understanding-manifest-generation-for-cc-programs"></a>Informazioni sulla generazione di manifesti per programmi C/C++

Un [manifesto](/windows/win32/sbscs/manifests) è un documento XML che può essere un file XML esterno o una risorsa incorporata all'interno di un'applicazione o di un assembly. Il manifesto di un' [applicazione isolata](/windows/win32/SbsCs/isolated-applications) viene utilizzato per gestire i nomi e le versioni degli assembly side-by-side condivisi a cui l'applicazione deve essere associata in fase di esecuzione. Il manifesto di un assembly side-by-side specifica le relative dipendenze da nomi, versioni, risorse e altri assembly.

Esistono due modi per creare un manifesto per un'applicazione isolata o un assembly affiancato. In primo luogo, l'autore dell'assembly può creare manualmente un file manifesto che segue le regole e i requisiti di denominazione. In alternativa, se un programma dipende solo da assembly Visual C++, ad esempio CRT, MFC, ATL o altri, un manifesto può essere generato automaticamente dal linker.

Le intestazioni delle librerie Visual C++ contengono informazioni sull'assembly e, quando le librerie sono incluse nel codice dell'applicazione, le informazioni sull'assembly vengono usate dal linker per formare un manifesto per il file binario finale. Il linker non incorpora il file manifesto all'interno del file binario ed è in grado di generare il manifesto solo come file esterno. La presenza di un manifesto come file esterno potrebbe non funzionare per tutti gli scenari. Si consiglia, ad esempio, che gli assembly privati includano manifesti incorporati. Nelle compilazioni della riga di comando, ad esempio quelle che utilizzano NMAKE per compilare il codice, è possibile incorporare un manifesto mediante lo strumento Manifesto. Per ulteriori informazioni, vedere [generazione di manifesti dalla riga di comando](manifest-generation-at-the-command-line.md). Quando si compila in Visual Studio, è possibile incorporare un manifesto impostando una proprietà per lo strumento Manifesto nella finestra di dialogo delle **proprietà del progetto** . vedere [generazione di manifesti in Visual Studio](manifest-generation-in-visual-studio.md).

## <a name="see-also"></a>Vedi anche

[Concetti di applicazioni isolate e assembly affiancati](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
