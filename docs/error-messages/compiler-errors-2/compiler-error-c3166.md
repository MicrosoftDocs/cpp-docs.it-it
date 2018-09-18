---
title: Errore del compilatore C3166 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3166
dev_langs:
- C++
helpviewer_keywords:
- C3166
ms.assetid: ec3e330d-c15d-4158-8268-09101486c566
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8c568f1732a4be5d890a5a654b09638828385383
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46035513"
---
# <a name="compiler-error-c3166"></a>Errore del compilatore C3166

'pointer': non è possibile dichiarare un puntatore a un puntatore a GC interno come membro di 'type'

Il compilatore ha rilevato una dichiarazione di puntatore non valido (un `__nogc` puntatore a un `__gc` puntatore.).

È raggiungibile tramite l'opzione del compilatore obsolete solo C3166 **/CLR: oldSyntax**.
