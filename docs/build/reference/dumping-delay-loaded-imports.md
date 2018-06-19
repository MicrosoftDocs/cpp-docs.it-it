---
title: Dump delle importazioni a caricamento ritardato | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delay-loaded imports, dumping
- imports (delay-loaded)
- delay-loaded imports
ms.assetid: f766acf4-9df8-4b85-8cf6-0be3ffc4c124
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 13f832f0ea7aaf7b766141ce7df4f83f21e1cdca
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32372867"
---
# <a name="dumping-delay-loaded-imports"></a>Dump delle importazioni a caricamento ritardato
Importazioni a caricamento ritardato possono essere eseguite utilizzando [dumpbin /imports](../../build/reference/imports-dumpbin.md) e comprende informazioni leggermente diverse rispetto a importazioni standard. Essi vengono separate in una sezione del dump /imports e sono etichettate in modo esplicito come importazioni a caricamento ritardato. Se non vi è scaricare informazioni presenti nell'immagine, che viene registrato. Se sono presenti informazioni di associazione presenti, l'indicatore di data e ora della DLL di destinazione viene indicato con gli indirizzi associati delle importazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)