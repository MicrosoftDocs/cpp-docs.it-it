---
description: 'Altre informazioni su: precedenza nelle definizioni delle macro'
title: Precedenza nelle definizioni delle macro
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, precedence in macro definitions
- macros, precedence
ms.assetid: 0c13182d-83cb-4cbd-af2d-f4c916b62aeb
ms.openlocfilehash: 1738c4ba77f330103395278a6daae169b04fae4c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225895"
---
# <a name="precedence-in-macro-definitions"></a>Precedenza nelle definizioni delle macro

Se una macro ha più definizioni, NMAKE usa la definizione con precedenza più alta. Nell'elenco seguente viene mostrato l'ordine di precedenza, dal più alto al più basso:

1. Una macro definita nella riga di comando

1. Una macro definita in un file makefile o di inclusione

1. Una macro della variabile di ambiente ereditata

1. Una macro definita nel file di Tools.ini

1. Una macro predefinita, ad esempio [CC](command-macros-and-options-macros.md) e [As](command-macros-and-options-macros.md)

Usare/E per fare in modo che le macro ereditate dalle variabili di ambiente eseguano l'override delle macro makefile con lo stesso nome. Usare **. UNDEF** per eseguire l'override di una riga di comando.

## <a name="see-also"></a>Vedi anche

[Definizione di una macro di NMAKE](defining-an-nmake-macro.md)
