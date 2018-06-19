---
title: Errore del compilatore C2856 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2856
dev_langs:
- C++
helpviewer_keywords:
- C2856
ms.assetid: fe616c51-124e-49e3-9dd8-883ec1660680
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ac67538a10d39bc68059b0a7d1aaf73a381abb2a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33244133"
---
# <a name="compiler-error-c2856"></a>Errore del compilatore C2856
\#pragma hdrstop non può trovarsi all'interno di un blocco #if  
  
 Il `hdrstop` pragma non può trovarsi all'interno del corpo di un blocco di compilazione condizionale.  
  
 Spostare il `#pragma hdrstop` istruzione su un'area che non è inclusa in un `#if/#endif` blocco.