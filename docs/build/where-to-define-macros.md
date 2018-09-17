---
title: Definizione delle macro | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- defining macros
- macros, NMAKE
- NMAKE program, defining macros
ms.assetid: 0fc59ec5-5f58-4644-b7da-7b021f7001af
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 29a2899d7dba0b34c0ac3319c253c8056912d883
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713817"
---
# <a name="where-to-define-macros"></a>Definizione delle macro

Definizione delle macro in una riga di comando, file di comando, makefile o file Tools. ini.

In un makefile o nel file Tools, ogni definizione di macro deve essere inserito su una riga separata e non può iniziare con uno spazio o una scheda. Vengono ignorate gli spazi o tabulazioni prima e dopo il segno di uguale. Tutti i [stringa di caratteri](../build/defining-an-nmake-macro.md) sono valori letterali, inclusi le virgolette e spazi vuoti.

In una riga di comando o un file di comando, spazi e tabulazioni delimitano gli argomenti e non è possibile racchiudere il segno di uguale. Se `string` sono contenuti spazi o tabulazioni, racchiudere la stringa o l'intera macro tra virgolette doppie ("").

## <a name="see-also"></a>Vedere anche

[Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)