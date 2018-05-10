---
title: raw_method_prefix | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- raw_method_prefix
dev_langs:
- C++
helpviewer_keywords:
- raw_method_prefix attribute
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 236c9042393e4ff3de57bea83ad566c8b74d5d3b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="rawmethodprefix"></a>raw_method_prefix
**Sezione specifica C++**  
  
 Specifica un prefisso diverso per evitare conflitti di nomi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_method_prefix("Prefix")  
```  
  
#### <a name="parameters"></a>Parametri  
 `Prefix`  
 Prefisso da utilizzare.  
  
## <a name="remarks"></a>Note  
 Proprietà di basso livello e i metodi vengono esposti dalle funzioni membro denominate con un prefisso predefinito **raw _** per evitare conflitti di nomi con le funzioni membro di gestione degli errori generali.  
  
> [!NOTE]
>  Gli effetti del `raw_method_prefix` non verrà modificato dalla presenza dell'attributo di [raw_interfaces_only](#_predir_raw_interfaces_only) attributo. `raw_method_prefix` ha sempre la precedenza su `raw_interfaces_only` nella specifica di un prefisso. Se entrambi gli attributi vengono utilizzati nella stessa istruzione `#import`, viene utilizzato il prefisso specificato dall'attributo `raw_method_prefix`.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)