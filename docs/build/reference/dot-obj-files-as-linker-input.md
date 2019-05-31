---
title: File obj come input del linker
ms.date: 12/29/2017
helpviewer_keywords:
- linker [C++], OBJ files as input
- object files, linker output
- OMF object files
- LINK tool [C++], .obj files
- COFF files
- OBJ files as linker input
- .obj files as linker input
ms.openlocfilehash: 36f41077fcba6b093865625d426b8009f6185e7b
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66450585"
---
# <a name="obj-files-as-linker-input"></a>File obj come input del linker

Lo strumento linker (LINK. Con estensione EXE) accetta i file con estensione obj nel File di formato COFF (Common Object).

## <a name="remarks"></a>Note

Microsoft fornisce una descrizione completa del formato di file oggetto comune. Per altre informazioni, vedere [formato PE](/windows/desktop/Debug/pe-format).

## <a name="unicode-support"></a>Supporto Unicode

A partire da Visual Studio 2005, il compilatore MSVC Microsoft supporta i caratteri Unicode negli identificatori di base a quanto definito dall'ISO/IEC C e gli standard di C++. Le versioni precedenti del compilatore supportano solo caratteri ASCII negli identificatori. Per supportare Unicode nei nomi delle funzioni, classi e gli elementi statici, il compilatore e linker utilizza la codifica Unicode UTF-8 per i simboli COFF nel file con estensione obj. La codifica UTF-8 è compatibile anche con la codifica ASCII utilizzati dalle versioni precedenti di Visual Studio.

Per altre informazioni sul compilatore e linker, vedere [supporto Unicode nel compilatore e Linker](unicode-support-in-the-compiler-and-linker.md). Per altre informazioni sullo standard Unicode, vedere la [Unicode](https://www.unicode.org/) dell'organizzazione.

## <a name="see-also"></a>Vedere anche

[File di input LINK](link-input-files.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[Supporto per Unicode](../../text/support-for-unicode.md)<br/>
[Supporto Unicode nel compilatore e nel linker](unicode-support-in-the-compiler-and-linker.md)<br/>
[Standard Unicode](https://www.unicode.org/)<br/>
[Formato PE](/windows/desktop/Debug/pe-format)
