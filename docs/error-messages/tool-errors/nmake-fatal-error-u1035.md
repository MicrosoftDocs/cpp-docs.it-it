---
title: Errore irreversibile U1035 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- U1035
dev_langs:
- C++
helpviewer_keywords:
- U1035
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0d7730f882b40c24822cb4b8e2c6a12147cacf2d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1035"></a>Errore irreversibile U1035 di NMAKE 
Errore di sintassi: previsto ':' o '=' separatore  
  
 Entrambi i due punti (**:**) o un segno di uguale (**=**) è previsto.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Non è un virgola seguita una destinazione.  
  
2.  I due punti e senza spazi (ad esempio r:) seguita una sola lettera destinazione. NMAKE viene interpretato come una specifica di unità.  
  
3.  Non è un virgola seguita una regola di inferenza.  
  
4.  Una definizione di macro non è seguita da un segno di uguale.  
  
5.  Un carattere seguito una barra rovesciata (**\\**) che è stata usata per continuare un comando in una nuova riga.  
  
6.  È presente una stringa che non segue alcuna regola di sintassi NMAKE.  
  
7.  Il file di progetto è stato formattato da un elaboratore di testo.