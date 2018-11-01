---
title: Dipendenti dedotti
ms.date: 11/04/2016
helpviewer_keywords:
- inferred dependents in NMAKE
- dependents, inferred
ms.assetid: 9303045c-69b3-4f35-bffc-19d5cd6ea3c3
ms.openlocfilehash: 958a33c29be0d68fee1044fff1d81235ea9370c6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50641376"
---
# <a name="inferred-dependents"></a>Dipendenti dedotti

Un dipendente dedotto viene derivato da una regola di inferenza e viene valutato prima dei dipendenti espliciti. Se un dipendente dedotto non è aggiornato rispetto alla relativa destinazione, viene richiamato il blocco di comandi per la dipendenza. Se un dipendente dedotto non esiste o non è aggiornato rispetto al proprio dipendenti, NMAKE Aggiorna innanzitutto il dipendente dedotto. Per altre informazioni sui dipendenti dedotti, vedere [regole di inferenza](../build/inference-rules.md).

## <a name="see-also"></a>Vedere anche

[Dipendenti](../build/dependents.md)