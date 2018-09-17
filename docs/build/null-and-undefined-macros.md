---
title: Macro null e non definite | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, undefined macros
- Null macros in NMAKE
- macros, null and undefined
- undefined macros and NMAKE
- NMAKE program, null macros
ms.assetid: 1db4611a-1755-4328-b00f-d35365af8b6c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eee6e713715e4709af990878224261a41f5470e3
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45702637"
---
# <a name="null-and-undefined-macros"></a>Macro null e non definite

Macro null sia indefinite espanderanno in stringhe null, ma una macro definita come una stringa null verrà considerata definiti nelle espressioni di pre-elaborazione. Per definire una macro come una stringa null, specificare eccetto gli spazi o tabulazioni dopo il segno di uguale (=) in una riga di comando o un file di comando, senza caratteri e racchiudono la stringa null o una definizione di virgolette doppie (""). Per annullare la definizione di una macro, usare **! UNDEF.** Per altre informazioni, vedere [direttive di pre-elaborazione di Makefile](../build/makefile-preprocessing-directives.md).

## <a name="see-also"></a>Vedere anche

[Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)