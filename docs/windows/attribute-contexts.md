---
title: Attributo contesti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], contexts
ms.assetid: 3086351f-77a8-4048-99e9-3b6b041b9437
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 662b540548c0594364bf11087c3b52420d29cf0c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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