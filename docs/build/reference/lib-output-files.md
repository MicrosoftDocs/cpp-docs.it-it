---
title: File di output di LIB
ms.date: 11/04/2016
f1_keywords:
- Lib
helpviewer_keywords:
- output files, LIB
ms.assetid: e73d2f9b-a42d-402b-b7e3-3a94bebb317e
ms.openlocfilehash: d7a6352665f12307bfa54025a32f9f7b84311dac
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62269700"
---
# <a name="lib-output-files"></a>File di output di LIB

File di output prodotti da LIB dipendono dalla modalità in cui è utilizzato, come illustrato nella tabella seguente.

|Modalità|Output|
|----------|------------|
|Valore predefinito (creazione o modifica di una libreria)|Libreria COFF (con estensione LIB)|
|L'estrazione di un membro con /EXTRACT|File oggetto (obj)|
|Creazione di un'esportazione di file e di importazione della libreria con l'opzione /DEF|Libreria di importazione (lib) e file di esportazione (EXP)|

## <a name="see-also"></a>Vedere anche

[Panoramica di LIB](overview-of-lib.md)
