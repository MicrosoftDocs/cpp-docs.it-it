---
title: Errore del compilatore C2818 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2818
dev_langs:
- C++
helpviewer_keywords:
- C2818
ms.assetid: 715fc7c9-0c6d-452b-b7f5-1682cea5e907
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 10d7f419d528fcd2445b82e29d92442002624909
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2818"></a>Errore del compilatore C2818
l'applicazione di 'operator ->' di overload è ricorsiva tramite il tipo 'type'  
  
 Una ridefinizione dell'operatore di accesso di membro di classe contiene una ricorsiva `return` istruzione. Per ridefinire il `->` operatore con ricorsione, è necessario spostare la routine ricorsiva in una funzione distinta chiamata dall'operatore di eseguire l'override di funzione.