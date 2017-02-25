---
title: "Avviso del compilatore di risorse RW4004 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RW4004"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RW4004"
ms.assetid: 596b6a89-9ce7-4ba7-bdcb-e8054c7efafa
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore di risorse RW4004
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Carattere ASCII non equivalente a codice tasto virtuale.  
  
 È stata utilizzata una stringa letterale per il codice tasto virtuale in un tasto di scelta rapida di tipo VIRTKEY.  
  
 L'avviso consente di proseguire, tuttavia i tasti di scelta rapida generati potrebbero non corrispondere alla stringa specificata \(i tasti virtuali utilizzano codici tasto diversi da quelli dei tasti di scelta rapida ASCII\).  
  
 Per quanto le stringhe letterali siano sintatticamente corrette, l'unico modo per garantire l'effettiva disponibilità del tasto prescelto è l'utilizzo dei valori **VK\_\* \#define** in WINDOWS.h.