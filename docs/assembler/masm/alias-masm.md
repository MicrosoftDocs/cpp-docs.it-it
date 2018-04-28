---
title: ALIAS (MASM) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- Alias
dev_langs:
- C++
helpviewer_keywords:
- ALIAS directive
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7b14e1c41a448d0cb7014dabc50a42305249938f
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
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