---
title: ".SAFESEH | Microsoft Docs"
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
  - ".SAFESEH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "registering functions as exception handlers"
  - "SAFESEH directive"
  - ".SAFESEH directive"
ms.assetid: 6eaac8c4-c46f-47ae-8a66-f5cfeb267e43
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .SAFESEH
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

registra una funzione come gestore di eccezioni strutturato.  
  
## Sintassi  
  
```  
  
.SAFESEH identifier  
```  
  
## Note  
 identificatore deve essere l'ID per localmente un oggetto definito [PROC](../../assembler/masm/proc.md) o  [EXTRN](../../assembler/masm/extrn.md) PROC.  In [ETICHETTA](../../assembler/masm/label-masm.md) non è consentito.  la direttiva di .SAFESEH richiede [\/safeseh](../../assembler/masm/ml-and-ml64-command-line-reference.md) opzione della riga di comando di ml.exe.  
  
 per ulteriori informazioni sui gestori di eccezioni strutturati, vedere [\/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md).  
  
 Ad esempio, per registrare un gestore di eccezioni sicuro, creare un nuovo file di MASM \(come illustrato di seguito\), assemblare con \/safeseh e aggiungerlo agli oggetti collegati.  
  
```  
.386  
.model  flat  
MyHandler   proto  
.safeseh    MyHandler  
end  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)