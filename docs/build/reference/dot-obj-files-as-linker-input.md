---
title: . File obj come Input del Linker | Documenti Microsoft
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
ms.openlocfilehash: 57907beaa30418ce31e6c46202149048d5c9dea1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32372974"
---
# <a name="obj-files-as-linker-input"></a>File obj come input del linker

Lo strumento linker (LINK. Con estensione EXE) accetta i file con estensione obj in comune oggetto formato COFF (File).

## <a name="remarks"></a>Note

Microsoft fornisce una descrizione completa del formato di file oggetto comune. Per ulteriori informazioni, vedere [formato PE](https://msdn.microsoft.com/library/windows/desktop/ms680547).

## <a name="unicode-support"></a>Supporto Unicode

A partire da Visual Studio 2005, il compilatore Microsoft Visual C++ supporta i caratteri Unicode negli identificatori come definito da ISO/IEC C e standard di C++. Le versioni precedenti del compilatore supportano solo caratteri ASCII negli identificatori. Per supportare Unicode nei nomi delle funzioni e classi statiche, il compilatore e il linker utilizza la codifica Unicode UTF-8 per i simboli COFF nei file obj. La codifica UTF-8 è compatibile anche con la codifica ASCII utilizzati dalle versioni precedenti di Visual Studio.

Per ulteriori informazioni sul compilatore e del linker, vedere [supporto Unicode nel compilatore e del Linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md). Per ulteriori informazioni sullo standard Unicode, vedere il [Unicode](http://go.microsoft.com/fwlink/p/?linkid=37123) dell'organizzazione.

## <a name="see-also"></a>Vedere anche

[File di input LINK](../../build/reference/link-input-files.md)  
[Opzioni del linker](../../build/reference/linker-options.md)  
[Supporto per Unicode](../../text/support-for-unicode.md)  
[Supporto Unicode nel compilatore e nel linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md)  
[Standard Unicode](http://go.microsoft.com/fwlink/p/?linkid=37123)  
[Formato PE](https://msdn.microsoft.com/library/windows/desktop/ms680547)  
