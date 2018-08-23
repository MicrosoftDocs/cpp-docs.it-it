---
title: raw_native_types | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- raw_native_types
dev_langs:
- C++
helpviewer_keywords:
- raw_native_types attribute
ms.assetid: 9f38daa8-8dc0-46a5-aff9-f1ff9c1e6f48
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b09e36e793608167a4ce64a9124d7dafbaf9ec62
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42538632"
---
# <a name="rawnativetypes"></a>raw_native_types
**Sezione specifica C++**  
  
Disabilita l'utilizzo delle classi di supporto COM nelle funzioni wrapper di alto livello e applica l'utilizzo dei tipi di dati di basso livello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_native_types  
```  
  
## <a name="remarks"></a>Note  
 
Per impostazione predefinita, i metodi di gestione degli errori di alto livello utilizzano le classi di supporto COM [bstr_t](../cpp/bstr-t-class.md) e [variant_t](../cpp/variant-t-class.md) anziché il `BSTR` e `VARIANT` puntatori a interfaccia COM non elaborati e tipi di dati. Tali classi includono i dettagli di allocazione e deallocazione dell'archiviazione di memoria per questi tipi di dati e semplificano notevolmente il cast dei tipi e le operazioni di conversione.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)