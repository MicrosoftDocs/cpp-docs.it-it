---
title: .SAFESEH | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- .SAFESEH
dev_langs:
- C++
helpviewer_keywords:
- registering functions as exception handlers
- SAFESEH directive
- .SAFESEH directive
ms.assetid: 6eaac8c4-c46f-47ae-8a66-f5cfeb267e43
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 69212e7a3542a6b6ac88ccbe2ecbbf8894862e65
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="safeseh"></a>.SAFESEH
Registra una funzione come gestore eccezioni strutturate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
.SAFESEH identifier  
```  
  
## <a name="remarks"></a>Note  
 *Identificatore* deve essere l'ID per un oggetto definito localmente [PROC](../../assembler/masm/proc.md) o [EXTRN](../../assembler/masm/extrn.md) durante il processo. Oggetto [etichetta](../../assembler/masm/label-masm.md) non è consentito. Il file con estensione SAFESEH (direttiva) richiede il [/safeseh](../../assembler/masm/ml-and-ml64-command-line-reference.md) ml.exe di opzione della riga di comando.  
  
 Per ulteriori informazioni sui gestori di eccezioni strutturata, vedere [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md).  
  
 Ad esempio, per registrare un gestore di eccezioni sicuri, creare un nuovo file MASM (come indicato di seguito), unire /safeseh e aggiungerlo a oggetti collegati.  
  
```  
.386  
.model  flat  
MyHandler   proto  
.safeseh    MyHandler  
end  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)