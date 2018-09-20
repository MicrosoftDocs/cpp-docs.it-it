---
title: raw_interfaces_only | Microsoft Docs
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
ms.openlocfilehash: 8f217c0dad3bf74ab930cf1f66392fe22d9df832
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46446550"
---
# <a name="rawinterfacesonly"></a>raw_interfaces_only
**Sezione specifica C++**  
  
Elimina la generazione di funzioni wrapper di gestione degli errori e [proprietà](../cpp/property-cpp.md) dichiarazioni che utilizzano tali funzioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_interfaces_only  
```  
  
## <a name="remarks"></a>Note  
 
Il **raw_interfaces_only** attributo determina anche il prefisso predefinito usato nei nomi di funzioni non di proprietà da rimuovere. È in genere il prefisso **raw _**. Se viene specificato questo attributo, i nomi delle funzioni vengono derivati direttamente dalla libreria dei tipi.  
  
Questo attributo consente di esporre solo i contenuti di basso livello della libreria dei tipi.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)