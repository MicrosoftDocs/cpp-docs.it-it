---
title: Compilatore avviso (livello 1) C4025 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4025
dev_langs:
- C++
helpviewer_keywords:
- C4025
ms.assetid: c4f6a651-0641-4446-973e-8290065e49ad
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 07bb6db07baed9ce191ed396177c73cf7d3fa2ed
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4025"></a>Avviso del compilatore (livello 1) C4025
'numero': puntatore based passato a funzione con argomenti variabili. Parametro numero  
  
 Se si passa un puntatore based a una funzione con argomenti variabili, il puntatore viene normalizzato e i risultati possono essere imprevisti. Non passare puntatori based a funzioni con argomenti variabili.