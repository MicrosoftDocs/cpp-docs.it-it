---
title: "/ALLOWBIND | Microsoft Docs"
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
  - "/allowbind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ALLOWBIND (opzione editbin)"
  - "/ALLOWBIND (opzione editbin)"
  - "-ALLOWBIND (opzione editbin)"
ms.assetid: eaadbb8c-4339-4281-9a75-3a1ce2352ff8
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ALLOWBIND
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica se un DLL può essere associato.  
  
```  
  
/ALLOWBIND[:NO]  
  
```  
  
## Note  
 L'opzione **\/ALLOWBIND** consente di impostare un bit in un'intestazione di DLL che indica a Bind.exe che è consentito associare l'immagine.  L'associazione può consentire a un'immagine di essere caricata più velocemente quando il caricatore non deve riassegnare ed eseguire correzioni di indirizzo per ogni DLL a cui si fa riferimento.  Se, ad esempio, una DLL comprende una firma digitale, sarà opportuno non associarla in quanto l'associazione renderebbe la firma non valida.  L'associazione non ha effetto se l'ASLR \(Address Space Layout Randomization\) \(ASLR\) è abilitato per l'immagine utilizzando **\/DYNAMICBASE** in versioni di Windows che supportano ASLR.  
  
 Utilizzare **\/ALLOWBIND:NO** per impedire a Bind.exe di associare la DLL.  
  
 Per ulteriori informazioni, vedere l'opzione del linker [\/ALLOWBIND](../../build/reference/allowbind-prevent-dll-binding.md).  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)