---
title: File di input LIB
ms.date: 11/04/2016
f1_keywords:
- Lib
helpviewer_keywords:
- input files, LIB
ms.assetid: e1236f0d-cd90-446b-b900-f311f456085c
ms.openlocfilehash: 648871464dbc99972b8ca40579046347727e81cf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62269388"
---
# <a name="lib-input-files"></a>File di input LIB

I file di input previsti dal LIB dipendono dalla modalità in cui è utilizzato, come illustrato nella tabella seguente.

|Modalità|Input|
|----------|-----------|
|Valore predefinito (creazione o modifica di una libreria)|File oggetto (obj) COFF, librerie COFF (con estensione LIB), file oggetto (obj) a 32 bit oggetto modello formato OMF)|
|L'estrazione di un membro con /EXTRACT|Libreria COFF (con estensione LIB)|
|Creazione di un'esportazione di file e di importazione della libreria con l'opzione /DEF|File di definizione moduli (def), file oggetto (obj) COFF, librerie COFF (con estensione LIB), file oggetto (obj) OMF a 32 bit|

> [!NOTE]
>  OMF (librerie) create con la versione a 16 bit non possono essere utilizzate come input per la versione a 32 bit di LIB.

## <a name="see-also"></a>Vedere anche

[Panoramica di LIB](overview-of-lib.md)
