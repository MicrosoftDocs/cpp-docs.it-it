---
title: "Annotazioni SAL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__bcount (annotazione)"
  - "__checkreturn (annotazione)"
  - "__deref (annotazione)"
  - "__deref_opt (annotazione)"
  - "__ecount (annotazione)"
  - "__full (annotazione)"
  - "__in (annotazione)"
  - "__inout (annotazione)"
  - "__nz (annotazione)"
  - "__opt (annotazione)"
  - "__out (annotazione)"
  - "__part (annotazione)"
  - "__ref (annotazione)"
  - "__z (annotazione)"
  - "_bcount (annotazione)"
  - "_CA_SHOULD_CHECK_RETURN"
  - "_deref (annotazione)"
  - "_deref_opt (annotazione)"
  - "_ecount (annotazione)"
  - "_full (annotazione)"
  - "_in (annotazione)"
  - "_inout (annotazione)"
  - "_nz (annotazione)"
  - "_opt (annotazione)"
  - "_out (annotazione)"
  - "_part (annotazione)"
  - "_ref (annotazione)"
  - "_z (annotazione)"
  - "annotazioni [C++]"
  - "bcount (annotazione)"
  - "deref (annotazione)"
  - "deref_opt (annotazione)"
  - "ecount (annotazione)"
  - "full (annotazione)"
  - "in (annotazione)"
  - "inout (annotazione)"
  - "nz (annotazione)"
  - "opt (annotazione)"
  - "out (annotazione)"
  - "part (annotazione)"
  - "ref (annotazione)"
  - "SAL (annotazioni)"
  - "SAL (annotazioni), _CA_SHOULD_CHECK_RETURN"
  - "z (annotazione)"
ms.assetid: 81893638-010c-41a0-9cb3-666fe360f3e0
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Annotazioni SAL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si esaminano i file di intestazione della libreria, è possibile notare alcune annotazioni insolite, ad esempio, `_In_z` e `_Out_z_cap_(_Size)`.  Questi sono esempi del linguaggio di annotazione del codice sorgente Microsoft \(SAL\), il quale fornisce un set di annotazioni per descrivere come una funzione utilizza i parametri, ad esempio, le ipotesi che fa su di essi e le garanzie che produce in fase di completamento.  Il file di intestazione \<sal.h\> definisce le annotazioni.  
  
 Per ulteriori informazioni sull'utilizzo delle annotazioni SAL in [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], vedere [Uso delle annotazioni SAL per ridurre gli errori del codice C\/C\+\+](../Topic/Using%20SAL%20Annotations%20to%20Reduce%20C-C++%20Code%20Defects.md).  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)