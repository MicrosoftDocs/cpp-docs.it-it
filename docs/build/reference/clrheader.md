---
title: -CLRHEADER | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /CLRHEADER
dev_langs: C++
helpviewer_keywords:
- -CLRHEADER dumpbin option
- /CLRHEADER dumpbin option
- CLRHEADER dumpbin option
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d8ab1617cffd7560ab47d69f7304df0c76b661eb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="clrheader"></a>/CLRHEADER
```  
/CLRHEADER file  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 `file`  
 Un file di immagine compilata con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="remarks"></a>Note  
 CLRHEADER consente di visualizzare informazioni sulle intestazioni .NET utilizzati in qualsiasi applicazione gestita. L'output mostra la posizione e dimensione, in byte, dell'intestazione .NET e sezioni di intestazione.  
  
 Solo il [/HEADERS](../../build/reference/headers.md) (opzione DUMPBIN) è disponibile per l'utilizzo con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore.  
  
 Quando /CLRHEADER viene utilizzata in un file che è stato compilato con /clr, esisterà una **clr Header:** sezione nell'output di dumpbin.  Il valore di **flag** indica che è stata utilizzata l'opzione /clr:  
  
-   0-- /clr (immagine può contenere codice nativo).  
  
-   1 - /CLR: safe (immagine è MSIL solo in grado di eseguire in qualsiasi piattaforma CLR e possibilmente verificabile).  
  
-   3-- /clr: pure (immagine è solo MSIL, ma solo in grado di eseguire x86 piattaforme).  
  
 Anche a livello di codice, è possibile verificare se un'immagine è stata compilata per common language runtime.  Per ulteriori informazioni, vedere [procedura: determinare se un'immagine è nativa o CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)