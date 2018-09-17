---
title: Dipendenti dedotti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inferred dependents in NMAKE
- dependents, inferred
ms.assetid: 9303045c-69b3-4f35-bffc-19d5cd6ea3c3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 631c5631b60f0e05dd1f1541facc767f35944d3d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45701480"
---
# <a name="inferred-dependents"></a>Dipendenti dedotti

Un dipendente dedotto viene derivato da una regola di inferenza e viene valutato prima dei dipendenti espliciti. Se un dipendente dedotto non è aggiornato rispetto alla relativa destinazione, viene richiamato il blocco di comandi per la dipendenza. Se un dipendente dedotto non esiste o non è aggiornato rispetto al proprio dipendenti, NMAKE Aggiorna innanzitutto il dipendente dedotto. Per altre informazioni sui dipendenti dedotti, vedere [regole di inferenza](../build/inference-rules.md).

## <a name="see-also"></a>Vedere anche

[Dipendenti](../build/dependents.md)