---
title: Avviso del compilatore (livello 1) C4124
ms.date: 11/04/2016
f1_keywords:
- C4124
helpviewer_keywords:
- C4124
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
ms.openlocfilehash: 59860bef108a3cd3e8bbbc6ff0790e17dbdaa0d4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214490"
---
# <a name="compiler-warning-level-1-c4124"></a>Avviso del compilatore (livello 1) C4124

__fastcall con controllo dello stack non è efficiente

La **`__fastcall`** parola chiave è stata usata con il controllo dello stack abilitato.

La **`__fastcall`** convenzione genera codice più veloce, ma il controllo dello stack causa il rallentamento del codice. Quando si usa **`__fastcall`** , disattivare il controllo dello stack con il **check_stack** pragma o/GS.

Questo avviso viene generato solo per la prima funzione dichiarata in queste condizioni.
