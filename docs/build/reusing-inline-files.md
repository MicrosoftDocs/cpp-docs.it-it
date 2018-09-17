---
title: Riutilizzo di file Inline | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inline files, reusing NMAKE
- revising inline files
- NMAKE program, inline files
ms.assetid: d42dbffb-2cef-4ccb-9a1f-20b8ef81481c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 37544db8076d40e638b6ddf6f340070298229149
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45722462"
---
# <a name="reusing-inline-files"></a>Riutilizzo di file inline

Per riutilizzare un file inline, specificare <<*nomefile* in cui il file è definito e usato prima di tutto, quindi riutilizzare *filename* senza << successive nello stesso o in un altro comando. Il comando per creare il file inline è necessario eseguire prima di tutti i comandi che usano il file.

## <a name="see-also"></a>Vedere anche

[File inline in un makefile](../build/inline-files-in-a-makefile.md)