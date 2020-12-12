---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4182'
title: Avviso del compilatore (livello 1) C4182
ms.date: 11/04/2016
f1_keywords:
- C4182
helpviewer_keywords:
- C4182
ms.assetid: 8970f3c6-e2dd-407e-b2ec-964360eb8b43
ms.openlocfilehash: 975d3ceea5e2b7504fda5c7d33e88b52cda9e572
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266702"
---
# <a name="compiler-warning-level-1-c4182"></a>Avviso del compilatore (livello 1) C4182

\#l'inclusione del livello di nidificazione è' Number ' Deep; possibile ricorsione infinita

Il compilatore ha esaurito lo spazio nell'heap a causa del numero di file di inclusione annidati. Un file di inclusione è annidato quando viene incluso da un altro file di inclusione.

Questo messaggio è puramente informativo e precede l'errore [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md).
