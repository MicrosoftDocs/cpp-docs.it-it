---
title: Annotazioni SAL | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- __z annotation
- ref annotation
- _opt annotation
- __checkreturn annotatioin
- __deref_opt annotation
- deref_opt annotation
- __deref annotation
- __in annotation
- annotations [C++]
- z annotation
- _inout annotation
- __ref annotation
- full annotation
- _in annotation
- _ref annotation
- __out annotation
- _ecount annotation
- SAL annotations
- __opt annotation
- inout annotation
- in annotation
- _CA_SHOULD_CHECK_RETURN
- __bcount annotation
- _full annotation
- _bcount annotation
- deref annotation
- part annotation
- _out annotation
- __nz annotation
- __part annotation
- opt annotation
- __full annotation
- _nz annotation
- _z annotation
- out annotation
- __ecount annotation
- __inout annotation
- SAL annotations, _CA_SHOULD_CHECK_RETURN
- _deref_opt annotation
- _deref annotation
- nz annotation
- _part annotation
- ecount annotation
- bcount annotation
ms.assetid: 81893638-010c-41a0-9cb3-666fe360f3e0
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 79e10e9b93beb811f42e15574014df6a464aadb3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="sal-annotations"></a>Annotazioni SAL
Se si esaminano i file di intestazione della libreria, è possibile notare alcune annotazioni insolite, ad esempio, `_In_z` e `_Out_z_cap_(_Size)`. Questi sono esempi del linguaggio di annotazione del codice sorgente Microsoft (SAL), il quale fornisce un set di annotazioni per descrivere come una funzione utilizza i parametri, ad esempio, le ipotesi che fa su di essi e le garanzie che produce in fase di completamento. Il file di intestazione \<sal.h> definisce le annotazioni.  
  
 Per altre informazioni sull'uso delle annotazioni SAL in Visual Studio, vedere [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](/visualstudio/code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)