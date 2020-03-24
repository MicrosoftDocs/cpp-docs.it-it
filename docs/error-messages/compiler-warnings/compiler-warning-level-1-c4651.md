---
title: Avviso del compilatore (livello 1) C4651
ms.date: 11/04/2016
f1_keywords:
- C4651
helpviewer_keywords:
- C4651
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
ms.openlocfilehash: bc8131665c970c3b86bb1e84e39636ae8f93897b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199542"
---
# <a name="compiler-warning-level-1-c4651"></a>Avviso del compilatore (livello 1) C4651

' Definition ' specificato per l'intestazione precompilata ma non per la compilazione corrente

La definizione è stata specificata quando è stata generata l'intestazione precompilata, ma non in questa compilazione.

La definizione verrà applicata all'interno dell'intestazione precompilata, ma non nel resto del codice.

Se un'intestazione precompilata è stata compilata con/DSYMBOL, il compilatore genererà questo avviso se la compilazione/Yu non ha/DSYMBOL.  L'aggiunta di/DSYMBOL alla riga di comando di/Yu risolve questo avviso.
