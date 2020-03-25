---
title: Avviso del compilatore (livello 1) C4420
ms.date: 11/04/2016
f1_keywords:
- C4420
helpviewer_keywords:
- C4420
ms.assetid: 44a37754-7ddd-4764-a5f7-d33e05c20091
ms.openlocfilehash: 72ab87b34e07717112f5af1727a216b4f786ae0d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186790"
---
# <a name="compiler-warning-level-1-c4420"></a>Avviso del compilatore (livello 1) C4420

' operator ': operatore non disponibile con ' operator '; il controllo in fase di esecuzione può essere compromesso

Questo avviso viene generato quando si usa [/RTCv](../../build/reference/rtc-run-time-error-checks.md) (vector new/delete checking) e quando non viene trovato alcun form vettoriale. In questo caso, viene usato il formato non vettoriale.

Per il corretto funzionamento di/RTCv, il compilatore deve sempre chiamare il formato vettoriale di [new](../../cpp/new-operator-cpp.md)/[Delete](../../cpp/delete-operator-cpp.md) se è stata usata la sintassi del vettore.
