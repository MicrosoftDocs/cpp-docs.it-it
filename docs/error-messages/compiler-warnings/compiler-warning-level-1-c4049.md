---
title: Compilatore Warning (level 1) C4049 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4049
dev_langs:
- C++
helpviewer_keywords:
- C4049
ms.assetid: d11c1870-bcfc-4d71-8945-b87ec6ec3514
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 68a89d02129e5e8fbedb0649fff0cfe3813304c5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053518"
---
# <a name="compiler-warning-level-1-c4049"></a>Compilatore Warning (level 1) C4049

limite del compilatore: termine emissione numeri di riga

Il file contiene più di 16.777.215 (2<sup>24</sup>-1) le righe di origine. Il compilatore interrompe la numerazione 16.777.215.

Per il codice dopo la riga e 16.777.215:

- L'immagine non conterrà alcuna informazione di debug per i numeri di riga.

- Alcune funzionalità di diagnostica possono essere segnalati con numeri di riga non corretto.

- gli elenchi di ASM (/ /FAs) possono avere numeri di riga non corretto.