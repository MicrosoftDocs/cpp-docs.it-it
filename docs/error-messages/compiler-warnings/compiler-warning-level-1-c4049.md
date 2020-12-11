---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4049'
title: Avviso del compilatore (livello 1) C4049
ms.date: 11/04/2016
f1_keywords:
- C4049
helpviewer_keywords:
- C4049
ms.assetid: d11c1870-bcfc-4d71-8945-b87ec6ec3514
ms.openlocfilehash: b6de6fd816be8925dab553ff4dc5a062300b42e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160571"
---
# <a name="compiler-warning-level-1-c4049"></a>Avviso del compilatore (livello 1) C4049

limite del compilatore: termine emissione numero di riga

Il file contiene più di 16.777.215 (2<sup>24</sup>-1) righe di origine. Il compilatore interrompe la numerazione a 16.777.215.

Per il codice dopo la riga 16.777.215:

- L'immagine non conterrà informazioni di debug per i numeri di riga.

- Alcune diagnostica possono essere segnalate con numeri di riga non corretti.

- gli elenchi ASM (/FAs) possono avere numeri di riga non corretti.
