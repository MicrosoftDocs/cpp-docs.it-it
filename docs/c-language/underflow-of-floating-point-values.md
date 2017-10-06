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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 6383f383221bb18c1dc58223e7183531bfd3c2d2
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="underflow-of-floating-point-values"></a>Underflow dei valori a virgola mobile
**ANSI 4.5.1** Indica se le funzioni matematiche impostano l'espressione Integer `errno` sul valore della macro `ERANGE` per gli errori relativi all'intervallo di underflow  
  
 Un underflow a virgola mobile non imposta l'espressione `errno` su `ERANGE`. Quando un valore si avvicina allo zero e restituisce infine un underflow, tale valore viene impostato su zero.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)
