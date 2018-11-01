---
title: File di output di LIB
ms.date: 11/04/2016
f1_keywords:
- Lib
helpviewer_keywords:
- output files, LIB
ms.assetid: e73d2f9b-a42d-402b-b7e3-3a94bebb317e
ms.openlocfilehash: bc505a9a946f564425513dad8107fd962eb054b9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50562899"
---
# <a name="lib-output-files"></a>File di output di LIB

File di output prodotti da LIB dipendono dalla modalità in cui è utilizzato, come illustrato nella tabella seguente.

|Modalità|Output|
|----------|------------|
|Valore predefinito (creazione o modifica di una libreria)|Libreria COFF (con estensione LIB)|
|L'estrazione di un membro con /EXTRACT|File oggetto (obj)|
|Creazione di un'esportazione di file e di importazione della libreria con l'opzione /DEF|Libreria di importazione (lib) e file di esportazione (EXP)|

## <a name="see-also"></a>Vedere anche

[Panoramica di LIB](../../build/reference/overview-of-lib.md)