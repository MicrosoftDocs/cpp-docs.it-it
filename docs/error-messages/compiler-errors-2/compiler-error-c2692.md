---
title: Errore del compilatore C2692
ms.date: 11/04/2016
f1_keywords:
- C2692
helpviewer_keywords:
- C2692
ms.assetid: 02ade3b4-b757-448b-b065-d7d71bc3f441
ms.openlocfilehash: a82ee0bead9e4e7a92c16df89eee86288f562de9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216102"
---
# <a name="compiler-error-c2692"></a>Errore del compilatore C2692

' function_name ': le funzioni con prototipo completo sono necessarie nel compilatore C con l'opzione '/CLR '

Quando si esegue la compilazione per il codice gestito .NET, il compilatore C richiede dichiarazioni di funzione ANSI. Inoltre, se una funzione non accetta parametri, deve dichiarare in modo esplicito **`void`** come tipo di parametro.
