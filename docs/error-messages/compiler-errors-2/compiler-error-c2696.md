---
title: Errore del compilatore C2696
ms.date: 11/04/2016
f1_keywords:
- C2696
helpviewer_keywords:
- C2696
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
ms.openlocfilehash: f6af217dbcd871ac4edd1852042144802388545b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216089"
---
# <a name="compiler-error-c2696"></a>Errore del compilatore C2696

Non è possibile creare un oggetto temporaneo di tipo gestito ' type '

I riferimenti a **`const`** in un programma non gestito fanno sì che il compilatore chiami il costruttore e crei un oggetto temporaneo nello stack. Tuttavia, una classe gestita non può mai essere creata nello stack.

C2696 è raggiungibile solo usando l'opzione del compilatore obsolete **/CLR: oldSyntax**.
