---
title: Precedenza nelle definizioni delle macro
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, precedence in macro definitions
- macros, precedence
ms.assetid: 0c13182d-83cb-4cbd-af2d-f4c916b62aeb
ms.openlocfilehash: 38a653a9f460beae81f9f88ea457870d30f25339
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320162"
---
# <a name="precedence-in-macro-definitions"></a>Precedenza nelle definizioni delle macro

Se una macro contiene più definizioni, NMAKE Usa la definizione di precedenza più alta. Nell'elenco seguente mostra l'ordine di precedenza, dal più alto al più basso:

1. Una macro definita nella riga di comando

1. Una macro definita in un makefile o file di inclusione

1. Una macro di variabili di ambiente ereditata

1. Una macro definita nel file. Tools. ini

1. Macro predefinita, ad esempio [CC](command-macros-and-options-macros.md) e [AS](command-macros-and-options-macros.md)

Utilizzare /E macro ereditate dalle variabili di ambiente per eseguire l'override di makefile macro con lo stesso nome. Usare **! UNDEF** per eseguire l'override di una riga di comando.

## <a name="see-also"></a>Vedere anche

[Definizione di una macro di NMAKE](defining-an-nmake-macro.md)
