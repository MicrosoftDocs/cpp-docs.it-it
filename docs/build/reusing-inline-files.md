---
title: Riutilizzo di file inline
ms.date: 11/04/2016
helpviewer_keywords:
- inline files, reusing NMAKE
- revising inline files
- NMAKE program, inline files
ms.assetid: d42dbffb-2cef-4ccb-9a1f-20b8ef81481c
ms.openlocfilehash: c4e3d9ba54a4db28ca9635725c9761e6316c4b62
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57421794"
---
# <a name="reusing-inline-files"></a>Riutilizzo di file inline

Per riutilizzare un file inline, specificare <<*nomefile* in cui il file è definito e usato prima di tutto, quindi riutilizzare *filename* senza << successive nello stesso o in un altro comando. Il comando per creare il file inline è necessario eseguire prima di tutti i comandi che usano il file.

## <a name="see-also"></a>Vedere anche

[File inline in un makefile](../build/inline-files-in-a-makefile.md)
