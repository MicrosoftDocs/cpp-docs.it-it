---
title: "/CLRHEADER | Microsoft Docs"
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
  - "/CLRHEADER"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/CLRHEADER (opzione dumpbin)"
  - "CLRHEADER (opzione di dumpbin)"
  - "-CLRHEADER (opzione dumpbin)"
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /CLRHEADER
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/CLRHEADER file  
```  
  
## Note  
 dove:  
  
 `file`  
 Un file di immagine compilato con [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Note  
 CLRHEADER consente di visualizzare informazioni sulle intestazioni .NET utilizzate in qualsiasi programma gestito.  L'output indica la posizione e le dimensioni, in byte, dell'intestazione .NET e delle relative sezioni.  
  
 L'unica opzione di DUMPBIN utilizzabile sui file generati con l'opzione del compilatore [\/GL](../../build/reference/gl-whole-program-optimization.md) è [\/HEADERS](../../build/reference/headers.md).  
  
 Quando \/CLRHEADER viene utilizzata in un file compilato con \/clr, nell'output di dumpbin è disponibile una sezione **clr Header:**.  Il valore di **flags** indica l'opzione \/clr utilizzata:  
  
-   0  \-\- \/clr \(l'immagine può contenere codice nativo\).  
  
-   1 \-\- \/clr:safe \(l'immagine è solo MSIL, può essere eseguita su qualsiasi piattaforma CLR e, se possibile, è verificabile\).  
  
-   3 \-\- \/clr:pure \(l'immagine è solo MSIL, ma può essere eseguita solo sulle piattaforme x86\).  
  
 È inoltre possibile controllare a livello di codice se un'immagine è stata compilata per Common Language Runtime.  Per ulteriori informazioni, vedere [Procedura: determinare se un'immagine è nativa o CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)