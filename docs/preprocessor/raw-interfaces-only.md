---
title: raw_interfaces_only | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- raw_interfaces_only
dev_langs:
- C++
helpviewer_keywords:
- raw_interfaces_only attribute
ms.assetid: 87056c6d-3f34-4248-af58-f5775a35bfb7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4643181bf70bc92f4ef5e88b8a9add1ba7bdaad7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33849301"
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