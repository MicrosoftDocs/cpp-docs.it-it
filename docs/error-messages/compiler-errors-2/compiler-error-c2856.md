---
title: Errore del compilatore C2856 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2856
dev_langs: C++
helpviewer_keywords: C2856
ms.assetid: fe616c51-124e-49e3-9dd8-883ec1660680
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ab5fdd09fbbd7c6b1f213404dfbf6d9d9e5612ea
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2856"></a>Errore del compilatore C2856
\#pragma hdrstop non può trovarsi all'interno di un blocco #if  
  
 Il `hdrstop` pragma non può trovarsi all'interno del corpo di un blocco di compilazione condizionale.  
  
 Spostare il `#pragma hdrstop` istruzione su un'area che non è inclusa in un `#if/#endif` blocco.