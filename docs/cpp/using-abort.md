---
title: Utilizzo della funzione abort | Microsoft Docs
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
ms.openlocfilehash: e63c3134dee6c316519dfcc34cff30b591b56460
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39465396"
---
# <a name="using-abort"></a>Utilizzo della funzione abort
Chiama il [abort](../c-runtime-library/reference/abort.md) funzione causando l'interruzione immediata. Ignora il normale processo di eliminazione degli oggetti statici globali inizializzati. Ignora inoltre qualsiasi elaborazione speciale specificata utilizzando la funzione `atexit`.  
  
## <a name="see-also"></a>Vedere anche  
 [Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)