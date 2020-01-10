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
ms.openlocfilehash: 304c9861b85be1925e48d47c6006fcbcdd41dc22
ms.sourcegitcommit: 5f276064779d90a4cfda758f89e0c0f1e4d1a188
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/09/2020
ms.locfileid: "75791597"
---
# <a name="obj-files-as-linker-input"></a>File obj come input del linker

Strumento Linker (collegamento. EXE) accetta i file con estensione obj che sono in formato COFF (Common Object File Format).

## <a name="remarks"></a>Note

Microsoft fornisce una descrizione completa del Common Object File Format. Per altre informazioni, vedere [formato PE](/windows/win32/Debug/pe-format).

## <a name="unicode-support"></a>Supporto Unicode

A partire da Visual Studio 2005, il compilatore Microsoft MSVC supporta i caratteri Unicode negli identificatori come definito dagli standard ISO/IEC C++ C e. Le versioni precedenti del compilatore supportano solo caratteri ASCII negli identificatori. Per supportare Unicode nei nomi di funzioni, classi e static, il compilatore e il linker usano la codifica Unicode UTF-8 per i simboli COFF nei file obj. La codifica UTF-8 è compatibile con la codifica ASCII utilizzata dalle versioni precedenti di Visual Studio.

Per altre informazioni sul compilatore e sul linker, vedere [supporto Unicode nel compilatore e nel linker](unicode-support-in-the-compiler-and-linker.md). Per ulteriori informazioni sullo standard Unicode, vedere l'organizzazione [Unicode](https://home.unicode.org/) .

## <a name="see-also"></a>Vedere anche

[File di input LINK](link-input-files.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[Supporto per Unicode](../../text/support-for-unicode.md)<br/>
[Supporto Unicode nel compilatore e nel linker](unicode-support-in-the-compiler-and-linker.md)<br/>
[Standard Unicode](https://home.unicode.org/)<br/>
[Formato PE](/windows/win32/Debug/pe-format)
