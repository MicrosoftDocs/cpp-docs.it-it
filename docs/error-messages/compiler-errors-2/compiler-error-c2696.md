---
description: 'Altre informazioni su: errore del compilatore C2696'
title: Errore del compilatore C2696
ms.date: 11/04/2016
f1_keywords:
- C2696
helpviewer_keywords:
- C2696
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
ms.openlocfilehash: 2d4a798258ba6f9bb467c4da32e75860b96874e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326615"
---
# <a name="compiler-error-c2696"></a>Errore del compilatore C2696

Non è possibile creare un oggetto temporaneo di tipo gestito ' type '

I riferimenti a **`const`** in un programma non gestito fanno sì che il compilatore chiami il costruttore e crei un oggetto temporaneo nello stack. Tuttavia, una classe gestita non può mai essere creata nello stack.

C2696 è raggiungibile solo usando l'opzione del compilatore obsolete **/CLR: oldSyntax**.
