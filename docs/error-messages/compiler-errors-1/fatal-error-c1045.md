---
title: Errore irreversibile C1045 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1045
dev_langs:
- C++
helpviewer_keywords:
- C1045
ms.assetid: 766c2f89-4ecd-4281-adaa-14b270cc0829
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 78ff500d050fbb646dd97fc898279712fb750d9e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33197611"
---
# <a name="fatal-error-c1045"></a>Errore irreversibile C1045
limite del compilatore: specifiche di collegamento eccessivamente annidate  
  
 I riferimenti esterni annidati superano il limite del compilatore. I riferimenti esterni annidati sono consentiti con un tipo di collegamento esterno come `extern` "C++". Ridurre il numero di riferimenti esterni annidati per risolvere l'errore.