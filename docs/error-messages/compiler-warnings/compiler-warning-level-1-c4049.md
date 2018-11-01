---
title: Compilatore Warning (level 1) C4049
ms.date: 11/04/2016
f1_keywords:
- C4049
helpviewer_keywords:
- C4049
ms.assetid: d11c1870-bcfc-4d71-8945-b87ec6ec3514
ms.openlocfilehash: a4958bb446b5f7e80ef2eef92b52a0f86cf6a134
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50479404"
---
# <a name="compiler-warning-level-1-c4049"></a>Compilatore Warning (level 1) C4049

limite del compilatore: termine emissione numeri di riga

Il file contiene più di 16.777.215 (2<sup>24</sup>-1) le righe di origine. Il compilatore interrompe la numerazione 16.777.215.

Per il codice dopo la riga e 16.777.215:

- L'immagine non conterrà alcuna informazione di debug per i numeri di riga.

- Alcune funzionalità di diagnostica possono essere segnalati con numeri di riga non corretto.

- gli elenchi di ASM (/ /FAs) possono avere numeri di riga non corretto.