---
title: Errore del compilatore C3166
ms.date: 11/04/2016
f1_keywords:
- C3166
helpviewer_keywords:
- C3166
ms.assetid: ec3e330d-c15d-4158-8268-09101486c566
ms.openlocfilehash: 1915d58f73ce8d16135951b359c3f0fd48aea3ac
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230870"
---
# <a name="compiler-error-c3166"></a>Errore del compilatore C3166

> ' pointer ': non è possibile dichiarare un puntatore a un puntatore di __gc interno come membro di ' type '

Il compilatore ha rilevato una dichiarazione di puntatore non valida (un **`__nogc`** puntatore a un **`__gc`** puntatore).

C3166 è raggiungibile solo tramite l'opzione del compilatore obsoleta **`/clr:oldSyntax`** .
