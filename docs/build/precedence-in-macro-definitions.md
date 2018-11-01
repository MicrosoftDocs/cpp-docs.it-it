---
title: Precedenza nelle definizioni delle macro
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, precedence in macro definitions
- macros, precedence
ms.assetid: 0c13182d-83cb-4cbd-af2d-f4c916b62aeb
ms.openlocfilehash: 8829b3cdbc7b2324ef3d118f8ca45dd2a1621e7e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50619079"
---
# <a name="precedence-in-macro-definitions"></a>Precedenza nelle definizioni delle macro

Se una macro contiene più definizioni, NMAKE Usa la definizione di precedenza più alta. Nell'elenco seguente mostra l'ordine di precedenza, dal più alto al più basso:

1. Una macro definita nella riga di comando

1. Una macro definita in un makefile o file di inclusione

1. Una macro di variabili di ambiente ereditata

1. Una macro definita nel file. Tools. ini

1. Macro predefinita, ad esempio [CC](../build/command-macros-and-options-macros.md) e [AS](../build/command-macros-and-options-macros.md)

Utilizzare /E macro ereditate dalle variabili di ambiente per eseguire l'override di makefile macro con lo stesso nome. Usare **! UNDEF** per eseguire l'override di una riga di comando.

## <a name="see-also"></a>Vedere anche

[Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)