---
title: Underflow dei valori a virgola mobile | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: f74624f935c9a1384c1c4992004b12c7847e9fd2
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="underflow-of-floating-point-values"></a>Underflow dei valori a virgola mobile
**ANSI 4.5.1** Indica se le funzioni matematiche impostano l'espressione Integer `errno` sul valore della macro `ERANGE` per gli errori relativi all'intervallo di underflow  
  
 Un underflow a virgola mobile non imposta l'espressione `errno` su `ERANGE`. Quando un valore si avvicina allo zero e restituisce infine un underflow, tale valore viene impostato su zero.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)
