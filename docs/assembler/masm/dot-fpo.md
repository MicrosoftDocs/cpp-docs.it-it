---
title: ".FPO | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".FPO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".FPO directive"
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .FPO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La direttiva di .FPO controlla l'emissione di record di debug al segmento o alla sezione di .debug$F.  
  
## Sintassi  
  
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
  
#### Parametri  
 `cdwLocals`  
 Numero di variabili locali, un valore di bit senza segno 32.  
  
 `cdwParams`  
 Dimensione dei parametri in DWORD, un valore di bit senza segno 16.  
  
 *cbProlog*  
 Numero di byte nel codice di prologo di funzione, un valore di bit senza segno 8.  
  
 `cbRegs`  
 registri di numero salvati.  
  
 `fUseBP`  
 Indica se il log EIP è stato allocato.  0 o 1.  
  
 *cbFrame*  
 indica il tipo di frame.  Per ulteriori informazioni, vedere [FPO\_DATA](http://msdn.microsoft.com/library/windows/desktop/ms679352).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)