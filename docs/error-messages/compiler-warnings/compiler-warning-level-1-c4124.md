---
title: Compilatore (livello 1) Avviso C4124 | Documenti Microsoft
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
ms.openlocfilehash: accd58c123bcd74e54176eed5eb974c3df33dbab
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33279318"
---
# <a name="compiler-warning-level-1-c4124"></a>Compilatore (livello 1) Avviso C4124
fastcall con il controllo dello stack è inefficiente  
  
 Il `__fastcall` (parola chiave) è stato utilizzato con il controllo dello stack abilitato.  
  
 Il `__fastcall` convenzione genera codice più veloce, ma il controllo dello stack rende il codice più lento. Quando si utilizza `__fastcall`, disattivare il controllo dello stack con il **check_stack** pragma o /Gs.  
  
 Questo avviso viene generato solo per la prima funzione dichiarata in queste condizioni.