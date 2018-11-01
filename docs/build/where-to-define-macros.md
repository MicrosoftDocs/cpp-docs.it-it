---
title: Definizione delle macro
ms.date: 11/04/2016
helpviewer_keywords:
- defining macros
- macros, NMAKE
- NMAKE program, defining macros
ms.assetid: 0fc59ec5-5f58-4644-b7da-7b021f7001af
ms.openlocfilehash: 130863f8c5640a0c4915734732d93fc00d3d6479
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50656248"
---
# <a name="where-to-define-macros"></a>Definizione delle macro

Definizione delle macro in una riga di comando, file di comando, makefile o file Tools. ini.

In un makefile o nel file Tools, ogni definizione di macro deve essere inserito su una riga separata e non può iniziare con uno spazio o una scheda. Vengono ignorate gli spazi o tabulazioni prima e dopo il segno di uguale. Tutti i [stringa di caratteri](../build/defining-an-nmake-macro.md) sono valori letterali, inclusi le virgolette e spazi vuoti.

In una riga di comando o un file di comando, spazi e tabulazioni delimitano gli argomenti e non è possibile racchiudere il segno di uguale. Se `string` sono contenuti spazi o tabulazioni, racchiudere la stringa o l'intera macro tra virgolette doppie ("").

## <a name="see-also"></a>Vedere anche

[Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)