---
title: Errore del compilatore C2307 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2307
dev_langs:
- C++
helpviewer_keywords:
- C2307
ms.assetid: ce6c8033-a673-4679-9883-bedec36ae385
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 26373ac75c4e6724ce01e24dbd46066f2ef534b8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46049397"
---
# <a name="compiler-error-c2307"></a>Errore del compilatore C2307

pragma 'pragma' deve trovarsi all'esterno della funzione se è abilitata per la compilazione incrementale

È necessario inserire il `data_seg` pragma tra le funzioni, se si usa la compilazione incrementale.