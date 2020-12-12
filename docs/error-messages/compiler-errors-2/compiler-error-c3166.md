---
description: 'Altre informazioni su: errore del compilatore C3166'
title: Errore del compilatore C3166
ms.date: 11/04/2016
f1_keywords:
- C3166
helpviewer_keywords:
- C3166
ms.assetid: ec3e330d-c15d-4158-8268-09101486c566
ms.openlocfilehash: c92883fec3fd68b969a6d357f8c3fab2f5a3aea1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242288"
---
# <a name="compiler-error-c3166"></a>Errore del compilatore C3166

> ' pointer ': non è possibile dichiarare un puntatore a un puntatore di __gc interno come membro di ' type '

Il compilatore ha rilevato una dichiarazione di puntatore non valida (un **`__nogc`** puntatore a un **`__gc`** puntatore).

C3166 è raggiungibile solo tramite l'opzione del compilatore obsoleta **`/clr:oldSyntax`** .
