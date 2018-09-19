---
title: Compilatore Warning (level 1) C4124 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4124
dev_langs:
- C++
helpviewer_keywords:
- C4124
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a69190487c22987ead2d00ec102785ed42ea93c4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46090932"
---
# <a name="compiler-warning-level-1-c4124"></a>Compilatore Warning (level 1) C4124

fastcall con il controllo dello stack è inefficiente

Il `__fastcall` (parola chiave) è stato usato con il controllo dello stack abilitata.

Il `__fastcall` convenzione genera codice più veloce, ma il controllo dello stack fa sì che il codice più lento. Quando si usa `__fastcall`, disattivare il controllo dello stack con il **check_stack** pragma o /Gs.

Questo avviso viene generato solo per la prima funzione dichiarata in queste condizioni.