---
title: . DOSSEG | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: .DOSSEG
dev_langs: C++
helpviewer_keywords: .DOSSEG directive
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8a53159911c47d1c88df90c53f3302f813e5bd95
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dosseg"></a>.DOSSEG
Ordina i segmenti in base alla convenzione di segmento MS-DOS: codice prima di tutto, quindi segmenti non in DGROUP e quindi segmenti in DGROUP.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
.DOSSEG  
  
```  
  
## <a name="remarks"></a>Note  
 I segmenti DGROUP rispettare questo ordine: segmenti non BSS o STACK, quindi BSS segmenti e infine segmenti STACK. Utilizzato principalmente per garantire il supporto di CodeView in programmi autonomi di MASM. Uguale a [DOSSEG](../../assembler/masm/dosseg.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)