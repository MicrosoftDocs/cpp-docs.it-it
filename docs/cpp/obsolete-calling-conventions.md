---
description: 'Altre informazioni su: convenzioni di chiamata obsolete'
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
ms.openlocfilehash: 0dfbb34215ba79b54d01ce12fe4d543dbe1d6859
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146042"
---
# <a name="obsolete-calling-conventions"></a>Convenzioni di chiamata obsolete

**Specifico di Microsoft**

Le convenzioni di chiamata **__pascal**, **__fortran** e **__syscall** non sono più supportate. È possibile emulare le relative funzionalità utilizzando una delle convenzioni di chiamata supportate e le opzioni di collegamento adatte.

\<windows.h> supporta ora la macro WINAPI, che si traduce nella convenzione di chiamata appropriata per la destinazione. Utilizzare WINAPI in cui in precedenza è stato utilizzato PASCAL o **__far \_ _pascal**.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)
