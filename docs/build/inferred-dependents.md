---
title: Dipendenti dedotti
ms.date: 11/04/2016
helpviewer_keywords:
- inferred dependents in NMAKE
- dependents, inferred
ms.assetid: 9303045c-69b3-4f35-bffc-19d5cd6ea3c3
ms.openlocfilehash: d4d12d0ab686c604ce0d4495df89ec62c6160ebe
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414148"
---
# <a name="inferred-dependents"></a>Dipendenti dedotti

Un dipendente dedotto viene derivato da una regola di inferenza e viene valutato prima dei dipendenti espliciti. Se un dipendente dedotto non è aggiornato rispetto alla relativa destinazione, viene richiamato il blocco di comandi per la dipendenza. Se un dipendente dedotto non esiste o non è aggiornato rispetto al proprio dipendenti, NMAKE Aggiorna innanzitutto il dipendente dedotto. Per altre informazioni sui dipendenti dedotti, vedere [regole di inferenza](../build/inference-rules.md).

## <a name="see-also"></a>Vedere anche

[Dipendenti](../build/dependents.md)
