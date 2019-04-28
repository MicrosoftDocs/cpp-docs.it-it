---
title: Compilatore Warning (level 1) C4124
ms.date: 11/04/2016
f1_keywords:
- C4124
helpviewer_keywords:
- C4124
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
ms.openlocfilehash: 04732619571420e777244b81bf4b93b775477a20
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62310981"
---
# <a name="compiler-warning-level-1-c4124"></a>Compilatore Warning (level 1) C4124

fastcall con il controllo dello stack è inefficiente

Il `__fastcall` (parola chiave) è stato usato con il controllo dello stack abilitata.

Il `__fastcall` convenzione genera codice più veloce, ma il controllo dello stack fa sì che il codice più lento. Quando si usa `__fastcall`, disattivare il controllo dello stack con il **check_stack** pragma o /Gs.

Questo avviso viene generato solo per la prima funzione dichiarata in queste condizioni.