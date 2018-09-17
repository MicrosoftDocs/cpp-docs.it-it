---
title: I file di Input LIB | Microsoft Docs
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
- input files, LIB
ms.assetid: e1236f0d-cd90-446b-b900-f311f456085c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 952c3345234192e3798fea483d527cd3afec4bff
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45702468"
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

[Panoramica di LIB](../../build/reference/overview-of-lib.md)