---
description: 'Altre informazioni su: dump delle importazioni a caricamento ritardato'
title: Dump di importazioni a caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- delay-loaded imports, dumping
- imports (delay-loaded)
- delay-loaded imports
ms.openlocfilehash: 6a0fec0b10bc29ea919195302334a25f71de0abd
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98666914"
---
# <a name="dump-delay-loaded-imports"></a>Dump di importazioni a caricamento ritardato

È possibile scaricare le importazioni a caricamento ritardato utilizzando [`dumpbin /imports`](imports-dumpbin.md) . Queste importazioni vengono visualizzate con informazioni leggermente diverse rispetto alle importazioni standard. Sono separate nella relativa sezione dell' `/imports` elenco e sono etichettate in modo esplicito come importazioni a caricamento ritardato. Se le informazioni di scaricamento sono presenti nell'immagine, questo è indicato. Se sono presenti informazioni di binding, l'indicatore di data e ora della DLL di destinazione viene segnalato insieme agli indirizzi associati delle importazioni.

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
