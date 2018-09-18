---
title: Strumenti del linker LNK1223 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1223
dev_langs:
- C++
helpviewer_keywords:
- LNK1223
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8639919c74559829367108b36d62594e2a83a91a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46067988"
---
# <a name="linker-tools-error-lnk1223"></a>Errore degli strumenti del linker LNK1223

file danneggiato o non valido: il file contiene contributi pdata non validi

Per le piattaforme RISC che usano pdata, questo errore si verifica se il compilatore ha generato una sezione pdata con voci non ordinate.

Per risolvere questo problema, provare a ricompilare senza [/GL (Ottimizzazione intero programma)](../../error-messages/tool-errors/linker-tools-error-lnk1223.md) abilitata. Corpi di funzione vuota possono inoltre causare questo errore in alcuni casi.