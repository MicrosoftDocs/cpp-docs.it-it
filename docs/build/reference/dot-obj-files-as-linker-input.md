---
description: Ulteriori informazioni su:. File obj come input del linker
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
ms.openlocfilehash: 33b4a9d9a23854766100d0b023713f7ecbc71e32
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192720"
---
# <a name="obj-files-as-linker-input"></a>File obj come input del linker

Lo strumento Linker (LINK.EXE) accetta file obj che sono in formato COFF (Common Object File Format).

## <a name="remarks"></a>Commenti

Microsoft fornisce una descrizione completa del Common Object File Format. Per altre informazioni, vedere [formato PE](/windows/win32/Debug/pe-format).

## <a name="unicode-support"></a>Supporto Unicode

A partire da Visual Studio 2005, il compilatore Microsoft MSVC supporta i caratteri Unicode negli identificatori come definito dagli standard ISO/IEC C e C++. Le versioni precedenti del compilatore supportano solo caratteri ASCII negli identificatori. Per supportare Unicode nei nomi di funzioni, classi e static, il compilatore e il linker usano la codifica Unicode UTF-8 per i simboli COFF nei file obj. La codifica UTF-8 è compatibile con la codifica ASCII utilizzata dalle versioni precedenti di Visual Studio.

Per altre informazioni sul compilatore e sul linker, vedere [supporto Unicode nel compilatore e nel linker](unicode-support-in-the-compiler-and-linker.md). Per ulteriori informazioni sullo standard Unicode, vedere l'organizzazione [Unicode](https://home.unicode.org/) .

## <a name="see-also"></a>Vedi anche

[File di input collegamento](link-input-files.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[Supporto per Unicode](../../text/support-for-unicode.md)<br/>
[Supporto Unicode nel compilatore e nel linker](unicode-support-in-the-compiler-and-linker.md)<br/>
[Standard Unicode](https://home.unicode.org/)<br/>
[Formato PE](/windows/win32/Debug/pe-format)
