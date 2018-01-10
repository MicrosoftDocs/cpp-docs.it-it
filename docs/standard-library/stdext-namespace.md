---
title: Spazio dei nomi stdext | Microsoft Docs
ms.custom: 
ms.date: 09/06/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: stdext
dev_langs: C++
helpviewer_keywords:
- _DEFINE_DEPRECATED_HASH_CLASSES symbol
- stdext namespace
ms.assetid: 3e94fc89-0584-424f-bc09-081b73379545
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 59da07c0cea58e9fc4b544b9f3bad937b2951f9e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="stdext-namespace"></a>stdext (spazio dei nomi)

I membri del [ \<hash_map >](../standard-library/hash-map.md) e [ \<hash_set >](../standard-library/hash-set.md) file di intestazione non sono attualmente parte dello standard ISO C++. Di conseguenza, questi tipi e membri sono stati spostati dallo spazio dei nomi `std` a quello `stdext`per restare conformi allo standard C++.

Durante la compilazione con [/Ze](../build/reference/za-ze-disable-language-extensions.md), ovvero l'impostazione predefinita, viene generato un avviso sull'utilizzo di `std` per i membri del \<hash_map > e \<hash_set > file di intestazione. Per disabilitare l'avviso, usare il pragma [warning](../preprocessor/warning.md) .

A che il compilatore generi un errore per l'utilizzo di `std` per i membri del \<hash_map > e \<hash_set > file di intestazione con **/Ze**, aggiungere la seguente direttiva prima `#include` i file di intestazione della libreria Standard C++.

```cpp  
#define _DEFINE_DEPRECATED_HASH_CLASSES 0  
```  

Durante la compilazione con **/Za**, il compilatore genera un errore.  

## <a name="see-also"></a>Vedere anche

[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)

