---
title: Errore irreversibile C1852 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1852
dev_langs:
- C++
helpviewer_keywords:
- C1852
ms.assetid: fa011004-b8d6-46f1-ba80-4785e4ce137f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d11160eea5e978a0c1ef67255d4e96b48fe2d101
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1852"></a>Errore irreversibile C1852
file di intestazione precompilata 'filename' non valido  
  
 Il file non è un'intestazione precompilata.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:  
  
1.  È stato specificato un file non valido con **/Yu** o **#pragma hdrstop**.  
  
2.  Se non se ne specifica un'altra, il compilatore presuppone l'estensione di file PCH.