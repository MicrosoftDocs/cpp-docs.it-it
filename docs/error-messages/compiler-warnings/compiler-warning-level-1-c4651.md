---
title: Avviso del compilatore (livello 1) C4651
ms.date: 11/04/2016
f1_keywords:
- C4651
helpviewer_keywords:
- C4651
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
ms.openlocfilehash: 01e2472a547e73eda5fcc56952949a0d9611029f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393519"
---
# <a name="compiler-warning-level-1-c4651"></a>Avviso del compilatore (livello 1) C4651

'definizione' specificato per l'intestazione precompilata ma non per la compilazione corrente

La definizione è stata specificata quando è stato generato l'intestazione precompilata, ma non in questa compilazione.

La definizione sarà attivo all'interno dell'intestazione precompilata, ma non nella parte restante del codice.

Se è stata creata un'intestazione precompilata con /DSYMBOL, il compilatore genera questo avviso se la compilazione di /Yu non ha /DSYMBOL.  Aggiungere /DSYMBOL alla riga di comando /Yu risolve l'avviso.