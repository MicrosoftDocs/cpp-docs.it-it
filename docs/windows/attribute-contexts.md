---
title: Attributo contesti | Documenti Microsoft
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
ms.openlocfilehash: e220eb0e7eb80d01d70aed82e773c46fe6704c7d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="attribute-contexts"></a>Contesti di attributi
Gli attributi di C++ possono essere descritte con quattro campi di base: la destinazione possono essere applicate alle (**si applica a**), se sono ripetibili o meno (**Repeatable**), la necessaria la presenza di altri attributi ( **Gli attributi obbligatori**) e le incompatibilità con gli altri attributi (**attributi non validi**). Questi campi sono elencati in una tabella associata nell'argomento di riferimento di ogni attributo. Ciascuno di questi campi è descritta di seguito.  
  
## <a name="applies-to"></a>Si applica a  
 Questo campo descrive i vari elementi di linguaggio C++ che rappresentano le destinazioni legali per l'attributo specificato. Ad esempio, se un attributo specifica "class" nel **si applica a** campo indica che l'attributo può essere applicato solo a una classe C++ valida. Se l'attributo viene applicato a una funzione membro di una classe, si comporta un errore di sintassi.  
  
 Per ulteriori informazioni, vedere [attributi tramite l'utilizzo di](../windows/attributes-by-usage.md).  
  
## <a name="repeatable"></a>Ripetibile  
 Questo campo indica se l'attributo può essere applicato più volte alla stessa destinazione. La maggior parte degli attributi non sono ripetibili.  
  
## <a name="required-attributes"></a>Attributi obbligatori  
 Questo campo sono elencati gli altri attributi che devono essere presenti (che viene applicato alla stessa destinazione) per l'attributo specificato funzionare correttamente. È raro che un attributo di tutte le voci per questo campo.  
  
## <a name="invalid-attributes"></a>Attributi non validi  
 Questo campo sono elencati gli altri attributi che non sono compatibili con l'attributo specificato. È raro che un attributo di tutte le voci per questo campo.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti relativi agli attributi di C++](../windows/cpp-attributes-reference.md)