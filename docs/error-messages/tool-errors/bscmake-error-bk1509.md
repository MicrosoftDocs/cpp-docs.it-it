---
title: Errore BK1509 di BSCMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- BK1509
dev_langs:
- C++
helpviewer_keywords:
- BK1509
ms.assetid: 53df7037-1913-4b63-b425-c0bf44081792
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 825d1e1e119aa80445c5ae15804bbdde4a3d8bf9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33295623"
---
# <a name="bscmake-error-bk1509"></a>Errore BK1509 di BSCMAKE
spazio dell'heap insufficiente  
  
 BSCMAKE ha esaurito la memoria, inclusa la memoria virtuale.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Liberare spazio su disco.  
  
2.  Aumentare le dimensioni del file di scambio.  
  
3.  Aumentare le dimensioni del file di scambio di Windows.  
  
4.  Ridurre la memoria che richiesta da BSCMAKE utilizzando /Ei o /Es per eliminare alcuni file di input o em per eliminare i corpi di macro.