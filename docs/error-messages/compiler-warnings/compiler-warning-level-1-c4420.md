---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4420'
title: Avviso del compilatore (livello 1) C4420
ms.date: 11/04/2016
f1_keywords:
- C4420
helpviewer_keywords:
- C4420
ms.assetid: 44a37754-7ddd-4764-a5f7-d33e05c20091
ms.openlocfilehash: 2a92d7296bf5c38655182e5c0dd2c200d0ccf42d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311071"
---
# <a name="compiler-warning-level-1-c4420"></a>Avviso del compilatore (livello 1) C4420

' operator ': operatore non disponibile con ' operator '; il controllo in fase di esecuzione può essere compromesso

Questo avviso viene generato quando si usa [/RTCv](../../build/reference/rtc-run-time-error-checks.md) (vector new/delete checking) e quando non viene trovato alcun form vettoriale. In questo caso, viene usato il formato non vettoriale.

Per il corretto funzionamento di/RTCv, il compilatore deve sempre chiamare la forma vettoriale di [New](../../cpp/new-operator-cpp.md) / [Delete](../../cpp/delete-operator-cpp.md) se è stata usata la sintassi del vettore.
