---
title: Errore irreversibile U1035 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1035
dev_langs:
- C++
helpviewer_keywords:
- U1035
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6bb32f815345b933ad6a65a0c8c1ec8ad59cbe81
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33322796"
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