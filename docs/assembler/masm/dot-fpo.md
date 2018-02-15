---
title: .FPO | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- .FPO
dev_langs:
- C++
helpviewer_keywords:
- .FPO directive
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 76f3fb3d06e3d09cdd63e48ef2ab8a6ce95c81e6
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fpo"></a>.FPO
Il file con estensione Direttiva FPO controlla la creazione di record di debug per il segmento di debug$ F o la sezione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
FPO (  
cdwLocals  
,   
cdwParams  
,   
cbProlog  
,   
cbRegs  
,   
fUseBP  
,   
cbFrame  
)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `cdwLocals`  
 Numero di variabili locali, un valore senza segno a 32 bit.  
  
 `cdwParams`  
 Dimensione dei parametri nella DWORD, un valore senza segno a 16 bit.  
  
 *cbProlog*  
 Numero di byte nel codice di prologo di funzione, un valore senza segno a 8 bit.  
  
 `cbRegs`  
 Numero di registri salvati.  
  
 `fUseBP`  
 Indica se il registro EBP è stato allocato. 0 o 1.  
  
 *cbFrame*  
 Indica il tipo di frame.  Vedere [FPO_DATA](http://msdn.microsoft.com/library/windows/desktop/ms679352) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)