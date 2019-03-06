---
title: Dump delle importazioni a caricamento ritardato
ms.date: 11/04/2016
helpviewer_keywords:
- delay-loaded imports, dumping
- imports (delay-loaded)
- delay-loaded imports
ms.assetid: f766acf4-9df8-4b85-8cf6-0be3ffc4c124
ms.openlocfilehash: 208be91d9ee873bd181bdb6c7880a6f9032e0d90
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57423950"
---
# <a name="dumping-delay-loaded-imports"></a>Dump delle importazioni a caricamento ritardato

Importazioni a caricamento ritardato possono essere eseguite utilizzando [/imports dumpbin](../../build/reference/imports-dumpbin.md) e vengono visualizzati con informazioni leggermente diverse rispetto a importazioni standard. Essi vengono separate in relativa sezione del dump /imports e in modo esplicito sono contrassegnati come importazioni a caricamento ritardato. Se è presente scaricare informazioni presenti nell'immagine, che viene indicato. Se sono presenti informazioni di associazione presenti, l'indicatore di data e ora della DLL di destinazione viene indicata con gli indirizzi associati di importazioni.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)
