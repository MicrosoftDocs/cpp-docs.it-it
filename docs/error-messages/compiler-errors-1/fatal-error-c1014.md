---
title: Errore irreversibile C1014 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C1014
dev_langs:
- C++
helpviewer_keywords:
- C1014
ms.assetid: 4c01ef70-e765-4d07-a3fe-a11c19fb610b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e5cc86b112aef224f47d3f57fcc2d70940527a12
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1014"></a>Errore irreversibile C1014
troppi file di inclusione: profondità = level  
  
 Le direttive `#include` sono eccessivamente annidate. Le direttive annidate possono includere file aperti. Il file di origine che contiene la direttiva viene conteggiato come file singolo.