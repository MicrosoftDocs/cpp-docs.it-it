---
title: "Avviso del compilatore (livello 1) C4727 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4727"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4727"
ms.assetid: 991b0087-3a50-40f5-9cdb-cdc367cd472c
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# Avviso del compilatore (livello 1) C4727
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"PCH denominato file\_pch con lo stesso timestamp trovato in file\_obj\_1 e file\_obj\_2.  Verrà utilizzato il primo PCH.  
  
 L'avviso C4727 viene restituito quando si esegue la compilazione di più moduli con **\/Yc** e nel caso in cui il compilatore abbia contrassegnato tutti i file obj con lo stesso timestamp pch.  
  
 Per risolvere il problema, compilare un file di origine con **\/Yc \/c** \(consente di creare il pch\), e compilare gli altri separatamente con **\/Yu \/c** \(consente di utilizzare il pch\), quindi collegarli tra loro.  
  
 Se si esegue quanto riportato di seguito e viene comunque generato l'avviso C4727:  
  
 **cl \/clr \/GL a.cpp b.cpp c.cpp \/Ycstdafx.h**  
  
 È necessario eseguire quanto riportato di seguito:  
  
 **cl \/clr \/GL a.cpp \/Ycstdafx.h \/c**  
  
 **cl \/clr \/GL b.cpp c.cpp \/Yustdafx.h \/link a.obj**  
  
 Per ulteriori informazioni, vedere  
  
-   [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md)  
  
-   [\/Yu \(Utilizza il file di intestazione precompilato\)](../../build/reference/yu-use-precompiled-header-file.md)