---
title: Strumenti del linker LNK4086 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4086
dev_langs:
- C++
helpviewer_keywords:
- LNK4086
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b7b3ad3a8ceebf97ccdcf7a1d8079886f54a3984
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4086"></a>Avviso degli strumenti del linker LNK4086
punto di ingresso 'function' non è stdcall con 'numero' byte di argomenti; immagine non può essere eseguita  
  
 Il punto di ingresso per una DLL deve essere `__stdcall`. Ricompilare la funzione con il [/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md) oppure specificare `__stdcall` o WINAPI nella definizione della funzione.