---
title: Compilatore avviso (livello 1) C4678 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4678
dev_langs:
- C++
helpviewer_keywords:
- C4678
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 73871d69198752e12a629d441982c2da47146517
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33284238"
---
# <a name="compiler-warning-level-1-c4678"></a>Avviso del compilatore (livello 1) C4678
classe base 'base_type' meno accessibile di 'derived_type'  
  
Un tipo pubblico deriva da un tipo privato. Se viene creata un'istanza del tipo pubblico in un assembly di riferimento, i membri del tipo di base privato non saranno accessibili.  
  
C4678 è raggiungibile tramite l'opzione del compilatore obsoleta **oldSyntax**. È un errore quando si utilizza **/clr**, per avere una classe di base che è meno accessibile che la classe derivata.  
