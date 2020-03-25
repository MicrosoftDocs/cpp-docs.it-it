---
title: Avviso del compilatore (livello 1) C4124
ms.date: 11/04/2016
f1_keywords:
- C4124
helpviewer_keywords:
- C4124
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
ms.openlocfilehash: 6408185c99a54d5411fa5b1058cd5ec09d3326d6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80176312"
---
# <a name="compiler-warning-level-1-c4124"></a>Avviso del compilatore (livello 1) C4124

__fastcall con controllo dello stack non è efficiente

Con il controllo dello stack abilitato è stata usata la parola chiave `__fastcall`.

La convenzione di `__fastcall` genera codice più veloce, ma il controllo dello stack causa il rallentamento del codice. Quando si usa `__fastcall`, disattivare il controllo dello stack con il **check_stack** pragma o/GS.

Questo avviso viene generato solo per la prima funzione dichiarata in queste condizioni.
