---
title: . File obj come Input del Linker | Microsoft Docs
ms.custom: ''
ms.date: 12/29/2017
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- linker [C++], OBJ files as input
- object files, linker output
- OMF object files
- LINK tool [C++], .obj files
- COFF files
- OBJ files as linker input
- .obj files as linker input
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: decd015a184b66fa5867435177c07fdf23ad53ae
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45704379"
---
# <a name="obj-files-as-linker-input"></a>File obj come input del linker

Lo strumento linker (LINK. Con estensione EXE) accetta i file con estensione obj nel File di formato COFF (Common Object).

## <a name="remarks"></a>Note

Microsoft fornisce una descrizione completa del formato di file oggetto comune. Per altre informazioni, vedere [formato PE](/windows/desktop/Debug/pe-format).

## <a name="unicode-support"></a>Supporto Unicode

A partire da Visual Studio 2005, il compilatore Microsoft Visual C++ supporta i caratteri Unicode negli identificatori di base a quanto definito dall'ISO/IEC C e gli standard di C++. Le versioni precedenti del compilatore supportano solo caratteri ASCII negli identificatori. Per supportare Unicode nei nomi delle funzioni, classi e gli elementi statici, il compilatore e linker utilizza la codifica Unicode UTF-8 per i simboli COFF nel file con estensione obj. La codifica UTF-8 è compatibile anche con la codifica ASCII utilizzati dalle versioni precedenti di Visual Studio.

Per altre informazioni sul compilatore e linker, vedere [supporto Unicode nel compilatore e Linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md). Per altre informazioni sullo standard Unicode, vedere la [Unicode](http://www.unicode.org/) dell'organizzazione.

## <a name="see-also"></a>Vedere anche

[File di input LINK](../../build/reference/link-input-files.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[Supporto per Unicode](../../text/support-for-unicode.md)<br/>
[Supporto Unicode nel compilatore e nel linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md)<br/>
[Standard Unicode](http://www.unicode.org/)<br/>
[Formato PE](/windows/desktop/Debug/pe-format)
