---
title: Operatori di cast | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- cast operators
- type casts, operators
- operators [C++], cast
- type conversion, cast operators
ms.assetid: 43b90bbd-39ef-43e6-ae5d-e8a67a01de40
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9fe1001c4a35e40b10abefd60faedcbcb6398445
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cast-operators"></a>Operatori di cast
Un cast di tipo fornisce un metodo per convertire esplicitamente il tipo di un oggetto in una situazione specifica.  
  
## <a name="syntax"></a>Sintassi  
 *cast-expression*:  
 *unary-expression*  
  
 **(**  *type-name*  **)**  *cast-expression*  
  
 Il compilatore considera *cast-expression* come di tipo *type-name* dopo un cast di tipo. I cast possono essere utilizzati per convertire gli oggetti di qualsiasi tipo scalare verso o da qualsiasi altro tipo scalare. I cast di tipo espliciti sono limitati dalle stesse regole che determinano gli effetti delle conversioni implicite descritte in [Conversioni di assegnazione](../c-language/assignment-conversions.md). I limiti aggiuntivi sui cast possono risultare dalle dimensioni effettive o dalla rappresentazione di tipi specifici. Vedere [Archiviazione dei tipi di base](../c-language/storage-of-basic-types.md) per informazioni sulle dimensioni effettive di tipi integrali. Per altre informazioni sui cast di tipo, vedere [Conversioni di cast di tipo](../c-language/type-cast-conversions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore cast: ()](../cpp/cast-operator-parens.md)