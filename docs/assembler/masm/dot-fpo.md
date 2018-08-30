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
ms.openlocfilehash: 234ec5bd703a390d1e2ee60e48d99d346d4aad95
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43203113"
---
# <a name="fpo"></a>.FPO
Il file con estensione Direttiva FPO controlla la creazione di record di debug per il segmento di F $. debug o la sezione.  
  
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
 Dimensioni dei parametri in valori DWORD, un valore senza segno a 16 bit.  
  
 *cbProlog*  
 Numero di byte nel codice di prologo della funzione, un valore senza segno a 8 bit.  
  
 `cbRegs`  
 Numero di registri salvati.  
  
 `fUseBP`  
 Indica se il registro EBP è stato allocato. 0 o 1.  
  
 *cbFrame*  
 Indica il tipo di frame.  Visualizzare [FPO_DATA](/windows/desktop/api/winnt/ns-winnt-_fpo_data) per altre informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)