---
title: Compilatore (livello 1) Avviso C4049 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4049
dev_langs:
- C++
helpviewer_keywords:
- C4049
ms.assetid: d11c1870-bcfc-4d71-8945-b87ec6ec3514
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 15d76be8cdf9855435094d02be5bc28fe27fe89a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4049"></a>Compilatore (livello 1) Avviso C4049
limite del compilatore: termine emissione numeri di riga  
  
 Il file contiene più di 16.777.215 (2<sup>24</sup>-1) righe di codice sorgente. Il compilatore numerazione 16.777.215 viene interrotta.  
  
 Per il codice successivo alla riga 16.777.215:  
  
-   L'immagine non conterrà alcuna informazione di debug per i numeri di riga.  
  
-   Alcune funzionalità di diagnostica possono essere riportati con numeri di riga non corretta.  
  
-   elenchi di ASM (/ /FAs) potrebbe avere numeri di riga non corretta.