---
title: Compilatore avviso (livello 1) C4678 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4678
dev_langs: C++
helpviewer_keywords: C4678
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7648101a0862aa2006feff73a5ebe32bd0f424a1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4678"></a>Avviso del compilatore (livello 1) C4678
classe base 'base_type' meno accessibile di 'derived_type'  
  
Un tipo pubblico deriva da un tipo privato. Se viene creata un'istanza del tipo pubblico in un assembly di riferimento, i membri del tipo di base privato non saranno accessibili.  
  
C4678 è raggiungibile tramite l'opzione del compilatore obsoleta **oldSyntax**. È un errore quando si utilizza **/clr**, per avere una classe di base che è meno accessibile che la classe derivata.  
