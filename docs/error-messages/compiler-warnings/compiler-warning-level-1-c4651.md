---
title: Compilatore avviso (livello 1) C4651 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4651
dev_langs:
- C++
helpviewer_keywords:
- C4651
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b516ef86372901d00dd20d94ed10d5e361bbab8d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46099469"
---
# <a name="compiler-warning-level-1-c4651"></a>Avviso del compilatore (livello 1) C4651

'definizione' specificato per l'intestazione precompilata ma non per la compilazione corrente

La definizione è stata specificata quando è stato generato l'intestazione precompilata, ma non in questa compilazione.

La definizione sarà attivo all'interno dell'intestazione precompilata, ma non nella parte restante del codice.

Se è stata creata un'intestazione precompilata con /DSYMBOL, il compilatore genera questo avviso se la compilazione di /Yu non ha /DSYMBOL.  Aggiungere /DSYMBOL alla riga di comando /Yu risolve l'avviso.