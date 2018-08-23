---
title: raw_method_prefix | Microsoft Docs
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
ms.openlocfilehash: 8fb9178bc315385bab97cea473430745ad66d973
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42544436"
---
# <a name="rawmethodprefix"></a>raw_method_prefix
**Sezione specifica C++**  
  
Specifica un prefisso diverso per evitare conflitti di nomi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_method_prefix("Prefix")  
```  
  
### <a name="parameters"></a>Parametri  
*Prefix*  
Prefisso da utilizzare.  
  
## <a name="remarks"></a>Note  
 
Metodi e proprietà di basso livello vengono esposti dalle funzioni membro denominate con il prefisso predefinito **raw _** per evitare conflitti di nomi con le funzioni membro di gestione degli errori generali.  
  
> [!NOTE]
> Gli effetti del **raw_method_prefix** attributo non verrà modificato dalla presenza delle [raw_interfaces_only](#_predir_raw_interfaces_only) attributo. Il **raw_method_prefix** ha sempre la precedenza su `raw_interfaces_only` nello specificare un prefisso. Se entrambi gli attributi vengono utilizzati nella stessa `#import` istruzione, quindi il prefisso specificato per il **raw_method_prefix** viene utilizzato l'attributo.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)