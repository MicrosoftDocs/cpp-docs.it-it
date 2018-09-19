---
title: Errore del compilatore C2696 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2696
dev_langs:
- C++
helpviewer_keywords:
- C2696
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e6e76b0c11d329c734b0609c540aca4315c7ed9f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46108742"
---
# <a name="compiler-error-c2696"></a>Errore del compilatore C2696

Non è possibile creare un oggetto temporaneo di un tipo gestito 'type'

I riferimenti a `const` in un programma non gestito indica al compilatore di chiamare il costruttore e creare un oggetto temporaneo nello stack. Tuttavia, una classe gestita non può mai essere creata nello stack.

È raggiungibile tramite l'opzione del compilatore obsolete solo C2696 **/CLR: oldSyntax**.
