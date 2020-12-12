---
description: 'Altre informazioni su: macro NULL e non definite'
title: Macro null e non definite
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, undefined macros
- Null macros in NMAKE
- macros, null and undefined
- undefined macros and NMAKE
- NMAKE program, null macros
ms.assetid: 1db4611a-1755-4328-b00f-d35365af8b6c
ms.openlocfilehash: 639afda727f1ebb1f4d7d602ed7cf01d6c914a33
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97209724"
---
# <a name="null-and-undefined-macros"></a>Macro null e non definite

Entrambe le macro NULL e non definite si espandono in stringhe null, ma una macro definita come stringa null viene considerata definita nelle espressioni di pre-elaborazione. Per definire una macro come stringa null, non specificare alcun carattere eccetto spazi o tabulazioni dopo il segno di uguale (=) in una riga di comando o in un file di comando e racchiudere la stringa o la definizione null tra virgolette doppie (""). Per annullare la definizione di una macro, usare **! UNDEF.** Per altre informazioni, vedere [direttive di pre-elaborazione di makefile](makefile-preprocessing-directives.md).

## <a name="see-also"></a>Vedi anche

[Definizione di una macro di NMAKE](defining-an-nmake-macro.md)
