---
title: .FPO | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .FPO
dev_langs:
- C++
helpviewer_keywords:
- .FPO directive
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: df5185c0dc699764427989b2f46345d90ded1729
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
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