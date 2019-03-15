---
title: Definizione delle macro
ms.date: 11/04/2016
helpviewer_keywords:
- defining macros
- macros, NMAKE
- NMAKE program, defining macros
ms.assetid: 0fc59ec5-5f58-4644-b7da-7b021f7001af
ms.openlocfilehash: dc03644adea4619b3eabe33c481d71f704a9f410
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827630"
---
# <a name="where-to-define-macros"></a>Definizione delle macro

Definizione delle macro in una riga di comando, file di comando, makefile o file Tools. ini.

In un makefile o nel file Tools, ogni definizione di macro deve essere inserito su una riga separata e non può iniziare con uno spazio o una scheda. Vengono ignorate gli spazi o tabulazioni prima e dopo il segno di uguale. Tutti i [stringa di caratteri](defining-an-nmake-macro.md) sono valori letterali, inclusi le virgolette e spazi vuoti.

In una riga di comando o un file di comando, spazi e tabulazioni delimitano gli argomenti e non è possibile racchiudere il segno di uguale. Se `string` sono contenuti spazi o tabulazioni, racchiudere la stringa o l'intera macro tra virgolette doppie ("").

## <a name="see-also"></a>Vedere anche

[Definizione di una macro di NMAKE](defining-an-nmake-macro.md)
