---
title: Errore del compilatore C2696
ms.date: 11/04/2016
f1_keywords:
- C2696
helpviewer_keywords:
- C2696
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
ms.openlocfilehash: 340a5d0596160b6c9c7bcfc78aed812f8c5f3fa3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50562869"
---
# <a name="compiler-error-c2696"></a>Errore del compilatore C2696

Non è possibile creare un oggetto temporaneo di un tipo gestito 'type'

I riferimenti a `const` in un programma non gestito indica al compilatore di chiamare il costruttore e creare un oggetto temporaneo nello stack. Tuttavia, una classe gestita non può mai essere creata nello stack.

È raggiungibile tramite l'opzione del compilatore obsolete solo C2696 **/CLR: oldSyntax**.
