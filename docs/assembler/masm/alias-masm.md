---
title: ALIAS (MASM) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- Alias
dev_langs:
- C++
helpviewer_keywords:
- ALIAS directive
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c1487afc250646b5cf1a12673dd43f6b1996a4f0
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="alias-masm"></a>ALIAS (MASM)
Il **ALIAS** direttiva crea un nome alternativo per una funzione.  Consente di creare più nomi per una funzione o creare librerie che consentono il linker (LINK.exe) per eseguire il mapping di una funzione precedente a una nuova funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
ALIAS  <  
alias  
> = <  
actual-name  
>  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `actual-name`  
 Il nome effettivo della funzione o procedura.  Le parentesi uncinate sono necessari.  
  
 `alias`  
 Il nome alternativo o alias.  Le parentesi uncinate sono necessari.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)