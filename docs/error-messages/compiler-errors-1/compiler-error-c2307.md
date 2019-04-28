---
title: Errore del compilatore C2307
ms.date: 11/04/2016
f1_keywords:
- C2307
helpviewer_keywords:
- C2307
ms.assetid: ce6c8033-a673-4679-9883-bedec36ae385
ms.openlocfilehash: 5be197e61e48e47db70e8f23c7ef5b9ade22b1ef
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62303596"
---
# <a name="compiler-error-c2307"></a>Errore del compilatore C2307

pragma 'pragma' deve trovarsi all'esterno della funzione se è abilitata per la compilazione incrementale

È necessario inserire il `data_seg` pragma tra le funzioni, se si usa la compilazione incrementale.