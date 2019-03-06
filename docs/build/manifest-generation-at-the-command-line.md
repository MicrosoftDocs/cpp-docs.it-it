---
title: Generazione di manifesti dalla riga di comando
ms.date: 11/04/2016
helpviewer_keywords:
- manifests [C++]
- manifest tool (mt.exe)
ms.assetid: fc2ff255-82b1-4c44-af76-8405c5850292
ms.openlocfilehash: 19673c9b8415c663462873e87535cf086987388d
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422650"
---
# <a name="manifest-generation-at-the-command-line"></a>Generazione di manifesti dalla riga di comando

Quando si compilano applicazioni C/C++ dalla riga di comando usando nmake o strumenti simili, il manifesto viene generato dopo che il linker ha elaborato tutti i file oggetto e compilato il file binario finale. Il linker raccoglie informazioni sull'assembly archiviati nei file oggetto e riunisce tutte queste informazioni in un file manifesto finale. Per impostazione predefinita il linker genererà un file denominato *binary_name*. *estensione*manifest per descrivere il file binario finale. Il linker non incorporare un file manifesto nel file binario e può generare solo un manifesto come file esterno. Esistono diversi modi per incorporare un manifesto all'interno del file binario finale, ad esempio usando il [dello strumento manifesto (mt.exe)](https://msdn.microsoft.com/library/aa375649) o la compilazione del manifesto in un file di risorse. È importante tenere presente che le regole specifiche sono da seguire quando si incorpora un manifesto all'interno del file binario finale per abilitare funzionalità come il collegamento incrementale, la firma, e modifica e continuazione. Queste e altre opzioni sono illustrate [come: Incorporare un manifesto all'interno di un'applicazione C/C++](../build/how-to-embed-a-manifest-inside-a-c-cpp-application.md) durante la compilazione dalla riga di comando.

## <a name="see-also"></a>Vedere anche

[Manifesti](/windows/desktop/sbscs/manifests)<br/>
[/INCREMENTAL (collegamento incrementale)](../build/reference/incremental-link-incrementally.md)<br/>
[Assembly con nome sicuro (firma degli assembly) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)<br/>
[Modifica e continuazione](/visualstudio/debugger/edit-and-continue)<br/>
[Informazioni sulla generazione di manifesti per programmi C/C++](../build/understanding-manifest-generation-for-c-cpp-programs.md)<br/>
