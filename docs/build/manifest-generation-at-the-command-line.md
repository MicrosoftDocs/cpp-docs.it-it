---
title: Generazione di manifesti dalla riga di comando
ms.date: 11/04/2016
helpviewer_keywords:
- manifests [C++]
- manifest tool (mt.exe)
ms.assetid: fc2ff255-82b1-4c44-af76-8405c5850292
ms.openlocfilehash: 381406213422e286dd9aba26adcdbd6caff7bfe3
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493198"
---
# <a name="manifest-generation-at-the-command-line"></a>Generazione di manifesti dalla riga di comando

Quando si compilano applicazioni C/C++ dalla riga di comando usando NMAKE o strumenti simili, il manifesto viene generato dopo che il linker ha elaborato tutti i file oggetto e ha compilato il file binario finale. Il linker raccoglie le informazioni di assembly archiviate nei file oggetto e combina tali informazioni in un file manifesto finale. Per impostazione predefinita, il linker genererà un file denominato *binary_name*. *estensione*. manifest per descrivere il file binario finale. Il linker non incorpora un file manifesto all'interno del file binario ed è in grado di generare un manifesto solo come file esterno. Esistono diversi modi per incorporare un manifesto all'interno del file binario finale, ad esempio usando lo [strumento Manifesto (Mt. exe)](/windows/win32/sbscs/mt-exe) o compilando il manifesto in un file di risorse. È importante tenere presente che è necessario seguire regole specifiche quando si incorpora un manifesto all'interno del file binario finale per abilitare tali funzionalità come collegamento incrementale, firma e modifica e continuazione. Queste e altre opzioni sono illustrate in [procedura: incorporare un manifesto all'interno di un'applicazione C/C++](how-to-embed-a-manifest-inside-a-c-cpp-application.md) durante la compilazione nella riga di comando.

## <a name="see-also"></a>Vedere anche

[Manifesti](/windows/win32/sbscs/manifests)<br/>
[/INCREMENTAL (collegamento incrementale)](reference/incremental-link-incrementally.md)<br/>
[Assembly con nome sicuro (firma degli assembly) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)<br/>
[Modifica e continuazione](/visualstudio/debugger/edit-and-continue)<br/>
[Informazioni sulla generazione di manifesti per i programmi C/C++](understanding-manifest-generation-for-c-cpp-programs.md)<br/>
