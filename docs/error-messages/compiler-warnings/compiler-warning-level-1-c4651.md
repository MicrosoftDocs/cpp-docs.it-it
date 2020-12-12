---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4651'
title: Avviso del compilatore (livello 1) C4651
ms.date: 11/04/2016
f1_keywords:
- C4651
helpviewer_keywords:
- C4651
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
ms.openlocfilehash: 319d08799ed9494a5ef1d4d7b663fb8ec7b303e2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318858"
---
# <a name="compiler-warning-level-1-c4651"></a>Avviso del compilatore (livello 1) C4651

' Definition ' specificato per l'intestazione precompilata ma non per la compilazione corrente

La definizione è stata specificata quando è stata generata l'intestazione precompilata, ma non in questa compilazione.

La definizione verrà applicata all'interno dell'intestazione precompilata, ma non nel resto del codice.

Se un'intestazione precompilata è stata compilata con/DSYMBOL, il compilatore genererà questo avviso se la compilazione/Yu non ha/DSYMBOL.  L'aggiunta di/DSYMBOL alla riga di comando di/Yu risolve questo avviso.
