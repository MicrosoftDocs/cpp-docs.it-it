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
ms.openlocfilehash: 86c75c779158d9f191dd015410cf16c9ce25690d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245030"
---
# <a name="obsolete-calling-conventions"></a>Convenzioni di chiamata obsolete

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

Il **Pascal**, **FORTRAN**, e **syscall** convenzioni di chiamata non sono più supportate. È possibile emulare le relative funzionalità utilizzando una delle convenzioni di chiamata supportate e le opzioni di collegamento adatte.

\<Windows. h > ora supporta la macro WINAPI, ovvero la convenzione di chiamata appropriata per la destinazione. Usare WINAPI in cui è usato in precedenza la convenzione PASCAL o **far \__pascal**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)