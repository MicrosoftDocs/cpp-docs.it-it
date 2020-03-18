---
title: File di input LIB
ms.date: 11/04/2016
helpviewer_keywords:
- input files, LIB
ms.assetid: e1236f0d-cd90-446b-b900-f311f456085c
ms.openlocfilehash: 209ba04ea43116b39f28b0790b7a1e2b3fb5ccd7
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439463"
---
# <a name="lib-input-files"></a>File di input LIB

I file di input previsti da LIB dipendono dalla modalità in cui viene utilizzata, come illustrato nella tabella seguente.

|Mode|Input|
|----------|-----------|
|Impostazione predefinita (compilazione o modifica di una libreria)|File oggetto COFF (. obj), librerie COFF (lib), oggetti OMF (Object Model Format) a 32 bit (file con estensione obj)|
|Estrazione di un membro con/EXTRACT|Libreria COFF (lib)|
|Compilazione di un file di esportazione e della libreria di importazione con/DEF|File di definizione moduli (con estensione def), file oggetto COFF (. obj), librerie COFF (lib), file oggetto OMF a 32 bit (obj)|

> [!NOTE]
>  Le librerie OMF create dalla versione a 16 bit di LIB non possono essere usate come input per la versione a 32 bit di LIB.

## <a name="see-also"></a>Vedere anche

[Panoramica di LIB](overview-of-lib.md)
