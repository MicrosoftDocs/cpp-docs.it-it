---
title: Errore irreversibile C1014 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1014
dev_langs:
- C++
helpviewer_keywords:
- C1014
ms.assetid: 4c01ef70-e765-4d07-a3fe-a11c19fb610b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b52f0d998e124412c3cf81de4efa762d1c0c346e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1014"></a>Errore irreversibile C1014
troppi file di inclusione: profondità = level  
  
 Le direttive `#include` sono eccessivamente annidate. Le direttive annidate possono includere file aperti. Il file di origine che contiene la direttiva viene conteggiato come file singolo.