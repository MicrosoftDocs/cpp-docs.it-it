---
title: Dump delle importazioni a caricamento ritardato | Microsoft Docs
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
ms.openlocfilehash: 29f2faecb29da93729b0be0f40c00c18b82f6344
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720876"
---
# <a name="dumping-delay-loaded-imports"></a>Dump delle importazioni a caricamento ritardato

Importazioni a caricamento ritardato possono essere eseguite utilizzando [/imports dumpbin](../../build/reference/imports-dumpbin.md) e vengono visualizzati con informazioni leggermente diverse rispetto a importazioni standard. Essi vengono separate in relativa sezione del dump /imports e in modo esplicito sono contrassegnati come importazioni a caricamento ritardato. Se è presente scaricare informazioni presenti nell'immagine, che viene indicato. Se sono presenti informazioni di associazione presenti, l'indicatore di data e ora della DLL di destinazione viene indicata con gli indirizzi associati di importazioni.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)