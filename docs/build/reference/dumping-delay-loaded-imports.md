---
title: Dump delle importazioni a caricamento ritardato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- delay-loaded imports, dumping
- imports (delay-loaded)
- delay-loaded imports
ms.assetid: f766acf4-9df8-4b85-8cf6-0be3ffc4c124
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2104165bf466473d89270eb502e3357713579f38
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="dumping-delay-loaded-imports"></a>Dump delle importazioni a caricamento ritardato
Importazioni a caricamento ritardato possono essere eseguite utilizzando [dumpbin /imports](../../build/reference/imports-dumpbin.md) e comprende informazioni leggermente diverse rispetto a importazioni standard. Essi vengono separate in una sezione del dump /imports e sono etichettate in modo esplicito come importazioni a caricamento ritardato. Se non vi è scaricare informazioni presenti nell'immagine, che viene registrato. Se sono presenti informazioni di associazione presenti, l'indicatore di data e ora della DLL di destinazione viene indicato con gli indirizzi associati delle importazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)