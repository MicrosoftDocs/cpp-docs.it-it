---
title: Avviso del compilatore (livello 1) C4049
ms.date: 11/04/2016
f1_keywords:
- C4049
helpviewer_keywords:
- C4049
ms.assetid: d11c1870-bcfc-4d71-8945-b87ec6ec3514
ms.openlocfilehash: 214ccae5d9835bc4a3b66bbbe1cd5ded4bc651cb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164144"
---
# <a name="compiler-warning-level-1-c4049"></a>Avviso del compilatore (livello 1) C4049

limite del compilatore: termine emissione numero di riga

Il file contiene più di 16.777.215 (2<sup>24</sup>-1) righe di origine. Il compilatore interrompe la numerazione a 16.777.215.

Per il codice dopo la riga 16.777.215:

- L'immagine non conterrà informazioni di debug per i numeri di riga.

- Alcune diagnostica possono essere segnalate con numeri di riga non corretti.

- gli elenchi ASM (/FAs) possono avere numeri di riga non corretti.
