---
title: ALIAS (MASM) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: Alias
dev_langs: C++
helpviewer_keywords: ALIAS directive
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 59dc4fd5481b22e69153c68e94a81b2887118ebc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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