---
title: "/HIGHENTROPYVA | Microsoft Docs"
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
  - "/HIGHENTROPYVA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/HIGHENTROPYVA (opzione editbin)"
  - "HIGHENTROPYVA (opzione editbin)"
  - "-HIGHENTROPYVA (opzione editbin)"
ms.assetid: ef4b7c63-440d-40ca-b39d-edefb3217505
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /HIGHENTROPYVA
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR \(Address Space Layout Randomization\).  
  
```  
  
/HIGHENTROPYVA[:NO]  
  
```  
  
## Note  
 Questa opzione modifica l'intestazione di un file DLL o EXE, per indicare se ASLR con indirizzamento a 64 bit è supportato.  Quando questa opzione è impostata su un eseguibile e su tutti i moduli che da esso dipendono, un sistema operativo che supporta ASLR a 64 bit può impostare i segmenti dell'immagine eseguibile in fase di caricamento tramite l'uso di indirizzi causali in uno spazio di indirizzamento virtuale a 64 bit.  Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.  
  
 Per impostazione predefinita, il linker imposta questa opzione per le immagini eseguibili a 64 bit.  Per impostare questa opzione, deve essere impostata anche l'opzione [\/DYNAMICBASE](../../build/reference/dynamicbase.md).  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [\/DYNAMICBASE](../../build/reference/dynamicbase.md)   
 [Metodi di difesa della sicurezza del software ISV di Windows](http://msdn.microsoft.com/library/bb430720.aspx)