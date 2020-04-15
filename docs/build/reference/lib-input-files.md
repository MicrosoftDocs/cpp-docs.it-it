---
title: File di input LIB
ms.date: 11/04/2016
helpviewer_keywords:
- input files, LIB
ms.assetid: e1236f0d-cd90-446b-b900-f311f456085c
ms.openlocfilehash: de81f79eecf3fc73c02894747f4b97cb107cf892
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328225"
---
# <a name="lib-input-files"></a>File di input LIB

I file di input previsti da LIB dipendono dalla modalità di utilizzo, come illustrato nella tabella seguente.

|Mode|Input|
|----------|-----------|
|Predefinito (creazione o modifica di una libreria)|File oggetto COFF (obj), librerie COFF (.lib), file oggetto OMF (Object Model Format) a 32 bit (obj)|
|Estrazione di un membro con /EXTRACT|Libreria COFF (.lib)|
|Creazione di un file di esportazione e di una libreria di importazione con /DEF|File di definizione moduli (def), file oggetto COFF (obj), librerie COFF (lib), file oggetto OMF (obj) a 32 bit|

> [!NOTE]
> Le librerie OMF create dalla versione a 16 bit di LIB non possono essere utilizzate come input per la versione a 32 bit di LIB.

## <a name="see-also"></a>Vedere anche

[Panoramica di LIB](overview-of-lib.md)
