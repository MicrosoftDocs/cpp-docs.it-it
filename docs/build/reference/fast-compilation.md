---
title: Compilazione veloce | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- performance, cle.exe compiler
- compilation, performance
- cl.exe compiler, performance
- fast compiling
ms.assetid: 5fead136-ba69-40c8-8e25-236f89d5990a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 926c63d3d556d1aa9b85a7ce97e93b60e7c2ea23
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45722268"
---
# <a name="fast-compilation"></a>Compilazione veloce

Per aumentare la velocità delle compilazioni:

- Uso [ricompilazione minima](../../build/reference/gm-enable-minimal-rebuild.md), in cui il compilatore C++ ricompila un file di origine solo se è dipendente da modifiche apportate a una classe in un file di intestazione.

- [Creare file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md) e usare il [le opzioni di intestazione precompilati o meno](../../build/reference/yc-create-precompiled-header-file.md).

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)