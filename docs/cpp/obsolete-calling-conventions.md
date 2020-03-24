---
title: Convenzioni di chiamata obsolete
ms.date: 11/04/2016
f1_keywords:
- __fortran
- __pascal
- __syscall
helpviewer_keywords:
- WINAPI [C++]
- __syscall keyword [C++]
- __pascal keyword [C++]
- __fortran keyword [C++]
- calling conventions, obsolete
ms.assetid: a91fc665-034a-48ce-b6bd-d27125f308a7
ms.openlocfilehash: 156482a395c7dfc8711e273141a09a37ea3e135d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188558"
---
# <a name="obsolete-calling-conventions"></a>Convenzioni di chiamata obsolete

**Sezione specifica Microsoft**

Le convenzioni di chiamata **__pascal**, **__fortran**e **__syscall** non sono più supportate. È possibile emulare le relative funzionalità utilizzando una delle convenzioni di chiamata supportate e le opzioni di collegamento adatte.

\<Windows. h > supporta ora la macro WINAPI, che si traduce nella convenzione di chiamata appropriata per la destinazione. Utilizzare WINAPI in cui in precedenza è stato utilizzato PASCAL o **__far \__pascal**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)
