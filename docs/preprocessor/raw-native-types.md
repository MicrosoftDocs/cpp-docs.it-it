---
title: raw_native_types | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: raw_native_types
dev_langs: C++
helpviewer_keywords: raw_native_types attribute
ms.assetid: 9f38daa8-8dc0-46a5-aff9-f1ff9c1e6f48
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cdd40f219115adf43f0681d8719aceb9ed9d9fd2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="rawnativetypes"></a>raw_native_types
**Sezione specifica C++**  
  
 Disabilita l'utilizzo delle classi di supporto COM nelle funzioni wrapper di alto livello e applica l'utilizzo dei tipi di dati di basso livello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_native_types  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, i metodi di gestione degli errori di alto livello utilizzano le classi di supporto COM [bstr_t](../cpp/bstr-t-class.md) e [variant_t](../cpp/variant-t-class.md) anziché il `BSTR` e **VARIANT** tipi di dati e puntatori a interfaccia COM non elaborati. Tali classi includono i dettagli di allocazione e deallocazione dell'archiviazione di memoria per questi tipi di dati e semplificano notevolmente il cast dei tipi e le operazioni di conversione.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)