---
title: -CLRHEADER | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /CLRHEADER
dev_langs:
- C++
helpviewer_keywords:
- -CLRHEADER dumpbin option
- /CLRHEADER dumpbin option
- CLRHEADER dumpbin option
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 73f68c4f73d132254ea64d4b3b3b9f787f3a4b82
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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
  
 Anche a livello di codice, è possibile verificare se un'immagine è stata compilata per common language runtime.  Per ulteriori informazioni, vedere [procedura: determinare se un'immagine è nativa o CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e verrà rimossa in una versione futura del compilatore. Codice che deve essere "pure" o "sicura" deve essere trasferito a c#. 
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)