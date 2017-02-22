---
title: "Errore del compilatore di risorse RC2148 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC2148"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2148"
ms.assetid: 0290065c-35d3-4815-80c5-40bf7132ae1d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore di risorse RC2148
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

SUBLANGUAGE ID troppo grande.  
  
 Il valore SUBLANGUAGE ID non è compreso nell'intervallo di valori validi.  
  
 Per l'istruzione **LANGUAGE** è necessario utilizzare la seguente sintassi:  
  
 **LANGUAGE** *ID\_lingua\_principale*,*ID\_lingua\_secondaria*  
  
 Valori SUBLANGUAGE ID validi sono definiti nel file WINNT.h come costanti **SUBLANG\_**.