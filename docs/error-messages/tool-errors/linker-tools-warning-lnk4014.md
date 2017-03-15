---
title: "Avviso degli strumenti del linker LNK4014 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4014"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4014"
ms.assetid: 394903e9-3ded-4ea4-b7c0-a3535d4b4da4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso degli strumenti del linker LNK4014
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile trovare l'oggetto membro 'nomeoggetto'  
  
 `objectname` non è stato trovato nella libreria.  
  
 Le opzioni **\/REMOVE** e **\/EXTRACT** richiedono il nome completo dell'oggetto membro da eliminare o copiare in un file.  Questo nome include il percorso del file oggetto originale.  Per visualizzare i nomi completi degli oggetti membro in una libreria, utilizzare DUMPBIN [\/ARCHIVEMEMBERS](../../build/reference/archivemembers.md) o LIB [\/LIST](../../build/reference/managing-a-library.md).