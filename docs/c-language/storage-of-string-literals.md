---
title: Archiviazione di valori letterali stringa | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- string literals, storage
ms.assetid: ba5e4d2c-d456-44b3-a8ca-354af547ac50
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bc3314e569a7229e3cf316b46e1a8df4c9bb722e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="storage-of-string-literals"></a>Archiviazione di valori letterali stringa
I caratteri di una stringa letterale vengono archiviati in ordine in posizioni di memoria contigue. Una sequenza di escape (come **\\\\** o **\\"**) in un valore letterale stringa viene considerata come un singolo carattere. Un carattere null (rappresentato dalla sequenza di escape **\0**) viene automaticamente aggiunto a ogni stringa letterale e ne contrassegna la fine. Tale situazione si verifica durante la [fase della conversione](../preprocessor/phases-of-translation.md) 7. Si noti che il compilatore non è in grado di archiviare due stringhe identiche in due indirizzi diversi. [/GF](../build/reference/gf-eliminate-duplicate-strings.md) induce il compilatore a inserire una sola copia di stringhe identiche nel file eseguibile.  
  
## <a name="remarks"></a>Note  
 **Sezione specifica Microsoft**  
  
 Le stringhe hanno una durata di archiviazione statica. Per altre informazioni sulla durata dell'archiviazione, vedere [Classi di archiviazione](../c-language/c-storage-classes.md).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Valori letterali stringa C](../c-language/c-string-literals.md)