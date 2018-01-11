---
title: raw_interfaces_only | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: raw_interfaces_only
dev_langs: C++
helpviewer_keywords: raw_interfaces_only attribute
ms.assetid: 87056c6d-3f34-4248-af58-f5775a35bfb7
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5d7790601a3eec16cae67542ac2d8d622b71df2d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="rawinterfacesonly"></a>raw_interfaces_only
**Sezione specifica C++**  
  
 Elimina la generazione di funzioni wrapper di gestione degli errori e [proprietà](../cpp/property-cpp.md) dichiarazioni che utilizzano le funzioni wrapper.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_interfaces_only  
```  
  
## <a name="remarks"></a>Note  
 L'attributo `raw_interfaces_only` causa inoltre la rimozione del prefisso predefinito utilizzato durante l'assegnazione del nome alle funzioni non di proprietà. In genere, il prefisso è **raw _**. Se viene specificato questo attributo, i nomi delle funzioni vengono derivati direttamente dalla libreria dei tipi.  
  
 Questo attributo consente di esporre solo i contenuti di basso livello della libreria dei tipi.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)