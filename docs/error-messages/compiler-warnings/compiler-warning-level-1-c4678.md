---
title: Compilatore (livello 1) Avviso C4678 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4678
dev_langs:
- C++
helpviewer_keywords:
- C4678
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: d35e60d60d194bc0ca68a116dc45b6d9864d9fe2
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4678"></a>Avviso del compilatore (livello 1) C4678
classe base 'base_type' meno accessibile di 'derived_type'  
  
Un tipo pubblico deriva da un tipo privato. Se viene creata un'istanza del tipo pubblico in un assembly di riferimento, i membri del tipo di base privato non saranno accessibili.  
  
C4678 è raggiungibile tramite l'opzione del compilatore obsoleta **oldSyntax**. È un errore quando si utilizza **/clr**, per disporre di una classe base che è accessibile a meno che la classe derivata.  

