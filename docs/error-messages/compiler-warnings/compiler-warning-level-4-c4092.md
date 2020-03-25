---
title: Avviso del compilatore (livello 4) C4092
ms.date: 11/04/2016
f1_keywords:
- C4092
helpviewer_keywords:
- C4092
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
ms.openlocfilehash: 6786d692785dbca575d4b241b7b3e3d40575b686
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198549"
---
# <a name="compiler-warning-level-4-c4092"></a>Avviso del compilatore (livello 4) C4092

sizeof restituisce ' unsigned long '

L'operando dell'operatore `sizeof` è molto grande, quindi `sizeof` ha restituito un valore **Long**senza segno. Questo avviso viene visualizzato in Microsoft Extensions ([/ze](../../build/reference/za-ze-disable-language-extensions.md)). In compatibilità ANSI (/za), il risultato viene invece troncato.
