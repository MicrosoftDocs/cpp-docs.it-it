---
title: "Errore del compilatore C3661 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3661"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3661"
ms.assetid: 50793fd1-1829-4b29-ad0d-094ef2068b43
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3661
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

non è stato trovato alcun metodo da sottoporre a override  
  
 In un override esplicito sono specificati uno o più nomi di tipo.  Tuttavia, non esiste alcuna funzione che presenti la firma necessaria nei tipi che corrispondono alla firma della funzione in override.  Se si tenta di eseguire un override in base al nome di tipo, è necessario che nei tipi specificati che corrispondono alla firma della funzione in override sia presente almeno una funzione virtuale.  
  
 Per ulteriori informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).