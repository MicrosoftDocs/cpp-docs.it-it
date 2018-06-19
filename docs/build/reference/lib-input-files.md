---
title: File di Input LIB | Documenti Microsoft
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
ms.openlocfilehash: 140a0f1d9ef6fdb3ca5e6d6977804684c88af1fb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371967"
---
# <a name="lib-input-files"></a>File di input LIB
I file di input previsti da LIB dipendono dalla modalità in cui è utilizzato, come illustrato nella tabella seguente.  
  
|Modalità|Input|  
|----------|-----------|  
|Predefinito (creazione o modifica di una libreria)|COFF (file oggetto (obj)), le librerie COFF (lib), file oggetto (obj) a 32 bit oggetto modello formato OMF)|  
|L'estrazione di un membro con l'opzione /EXTRACT|Libreria COFF (lib)|  
|File di compilazione di un'esportazione e importazione libreria con l'opzione /DEF|File di definizione moduli (def), file oggetto (obj) COFF, librerie COFF (lib), file oggetto (obj) OMF a 32 bit|  
  
> [!NOTE]
>  OMF (librerie) create con la versione a 16 bit non possono essere utilizzate come input per la versione a 32 bit di LIB.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica di LIB](../../build/reference/overview-of-lib.md)