---
title: Macro null e non definite
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, undefined macros
- Null macros in NMAKE
- macros, null and undefined
- undefined macros and NMAKE
- NMAKE program, null macros
ms.assetid: 1db4611a-1755-4328-b00f-d35365af8b6c
ms.openlocfilehash: f6f294234f7244b65137742e1fe8abaa37a676a5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50498917"
---
# <a name="null-and-undefined-macros"></a>Macro null e non definite

Macro null sia indefinite espanderanno in stringhe null, ma una macro definita come una stringa null verrà considerata definiti nelle espressioni di pre-elaborazione. Per definire una macro come una stringa null, specificare eccetto gli spazi o tabulazioni dopo il segno di uguale (=) in una riga di comando o un file di comando, senza caratteri e racchiudono la stringa null o una definizione di virgolette doppie (""). Per annullare la definizione di una macro, usare **! UNDEF.** Per altre informazioni, vedere [direttive di pre-elaborazione di Makefile](../build/makefile-preprocessing-directives.md).

## <a name="see-also"></a>Vedere anche

[Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)