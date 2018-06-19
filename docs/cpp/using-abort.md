---
title: Utilizzo della funzione abort | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- Abort
dev_langs:
- C++
helpviewer_keywords:
- abort function
ms.assetid: 3ba39b78-ef74-4a8d-8dee-2d62442de174
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7231339ba4884445d7ad6b0161c6cff793c6db8a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32421848"
---
# <a name="using-abort"></a>Utilizzo della funzione abort
La chiamata di [abort](../c-runtime-library/reference/abort.md) funzione causa l'interruzione immediata. Ignora il normale processo di eliminazione degli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata utilizzando la funzione `atexit`.  
  
## <a name="see-also"></a>Vedere anche  
 [Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)