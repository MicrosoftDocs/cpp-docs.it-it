---
title: Attributo contesti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], contexts
ms.assetid: 3086351f-77a8-4048-99e9-3b6b041b9437
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7635f49a494648f18bcd59eb8d212cc76d1f1539
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600800"
---
# <a name="attribute-contexts"></a>Contesti di attributi
Gli attributi di C++ possono essere descritte con quattro campi di base: la destinazione possono essere applicati a (**si applica a**), se sono ripetibili o meno (**ripetibile**), la necessaria la presenza di altri attributi ( **Gli attributi obbligatori**) e le incompatibilità con altri attributi (**attributi non validi**). Questi campi vengono elencati in una tabella associata nell'argomento di riferimento dell'ogni attributo. Ognuno di questi campi è descritto di seguito.
  
## <a name="applies-to"></a>Si applica a
 Questo campo vengono descritti gli elementi del linguaggio C++ diversi che costituiscono le destinazioni legali per l'attributo specificato. Ad esempio, se un attributo specifica "class" nel **si applica a** campo, ciò indica che l'attributo può essere applicato solo a una classe C++ valida. Se l'attributo viene applicato a una funzione membro di una classe, genera un errore di sintassi.
  
 Per altre informazioni, vedere [attributi per utilizzo](../windows/attributes-by-usage.md).
  
## <a name="repeatable"></a>Ripetibile
 Questo campo indica se l'attributo può essere applicato più volte alla stessa destinazione. La maggior parte degli attributi non è ripetibile.
  
## <a name="required-attributes"></a>Attributi obbligatori
 Questo campo Elenca altri attributi che devono essere presenti (che sono, applicata alla stessa destinazione) per l'attributo specificato funzionare correttamente. È raro che per un attributo a ha voci per questo campo.
  
## <a name="invalid-attributes"></a>Attributi non validi
 Questo campo Elenca altri attributi che non sono compatibili con l'attributo specificato. È raro che per un attributo a ha voci per questo campo.
  
## <a name="see-also"></a>Vedere anche
 [Riferimenti relativi agli attributi di C++](../windows/cpp-attributes-reference.md)