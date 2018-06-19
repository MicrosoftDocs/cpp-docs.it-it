---
title: Compilatore (livello 1) Avviso C4049 | Documenti Microsoft
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
ms.openlocfilehash: 1eea293ff64ed8fe2bf4bf0d38d897eb82223802
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33276829"
---
# <a name="compiler-warning-level-1-c4049"></a>Compilatore (livello 1) Avviso C4049
limite del compilatore: termine emissione numeri di riga  
  
 Il file contiene più di 16.777.215 (2<sup>24</sup>-1) righe di codice sorgente. Il compilatore numerazione 16.777.215 viene interrotta.  
  
 Per il codice successivo alla riga 16.777.215:  
  
-   L'immagine non conterrà alcuna informazione di debug per i numeri di riga.  
  
-   Alcune funzionalità di diagnostica possono essere riportati con numeri di riga non corretta.  
  
-   elenchi di ASM (/ /FAs) potrebbe avere numeri di riga non corretta.