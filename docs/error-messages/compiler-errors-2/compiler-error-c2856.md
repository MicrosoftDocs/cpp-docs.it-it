---
title: Errore del compilatore C2856
ms.date: 11/04/2016
f1_keywords:
- C2856
helpviewer_keywords:
- C2856
ms.assetid: fe616c51-124e-49e3-9dd8-883ec1660680
ms.openlocfilehash: c88610607083ecfaf5f20cd585b479991fa51b44
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201882"
---
# <a name="compiler-error-c2856"></a>Errore del compilatore C2856

\#pragma hdrstop non può trovarsi all'interno di un blocco di #if

Impossibile inserire il pragma `hdrstop` all'interno del corpo di un blocco di compilazione condizionale.

Spostare l'istruzione `#pragma hdrstop` in un'area non inclusa in un blocco di `#if/#endif`.
