---
title: Errore del compilatore C3166
ms.date: 11/04/2016
f1_keywords:
- C3166
helpviewer_keywords:
- C3166
ms.assetid: ec3e330d-c15d-4158-8268-09101486c566
ms.openlocfilehash: 17efd401314e93ff710be2c1e6f187a938e388b9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62174303"
---
# <a name="compiler-error-c3166"></a>Errore del compilatore C3166

'pointer': non è possibile dichiarare un puntatore a un puntatore a GC interno come membro di 'type'

Il compilatore ha rilevato una dichiarazione di puntatore non valido (un `__nogc` puntatore a un `__gc` puntatore.).

È raggiungibile tramite l'opzione del compilatore obsolete solo C3166 **/CLR: oldSyntax**.
