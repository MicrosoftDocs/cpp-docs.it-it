---
title: File di Output di LIB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- Lib
dev_langs:
- C++
helpviewer_keywords:
- output files, LIB
ms.assetid: e73d2f9b-a42d-402b-b7e3-3a94bebb317e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 23665897266bab87c71b8b3889688113fe8aa99a
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720707"
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