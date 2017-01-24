---
title: "Avviso del compilatore di risorse RC4204 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "RC4204"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC4204"
ms.assetid: f9a83b3c-d696-4b38-9576-945d1f6d0063
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso del compilatore di risorse RC4204
Carattere ASCII non equivalente a codice tasto virtuale  
  
 È stato usato un valore letterale stringa per il codice tasto virtuale in un tasto di scelta rapida di tipo VIRTKEY.  
  
 Questo avviso permette di continuare, ma tenere presente che i tasti di scelta rapida generati potrebbero non corrispondere alla stringa specificata \(i tasti VIRTKEY usano codici tasto diversi rispetto ai tasti di scelta rapida ASCII\).  
  
 Per quanto valori letterali stringa siano sintatticamente corretti, per garantire l'effettiva disponibilità del tasto prescelto è necessario usare i valori **VK\_\*** `#define` in WINDOWS.h.