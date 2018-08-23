---
title: Classi di riferimento del modello (C + c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 01/22/2017
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: a24d5f45-8dbb-4540-958f-c76c90d8ed93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7fb322ae641a1821ed8434e0ea197acf752698e6
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592620"
---
# <a name="template-ref-classes-ccx"></a>Classi di riferimento del modello (C++/CX)
I modelli C++ non vengono pubblicati nei metadati e pertanto non dispongono di accessibilità pubblica o protetta nel programma. Puoi, tuttavia, utilizzare i modelli C++ standard internamente nel programma. Inoltre, puoi definire una classe privata di riferimento privata come modello e dichiarare una classe di riferimento del modello specializzata in modo esplicito come membro privato in una classe di riferimento pubblica.  
  
## <a name="authoring-ref-class-templates"></a>Creazione di modelli di classe di riferimento  
 Di seguito viene illustrato come dichiarare una classe di riferimento privata come modello, come dichiarare un modello C++ standard e come dichiararli entrambi come membri in una classe di riferimento pubblica. Si noti che il modello standard di C++ può essere specializzato mediante un tipo Windows Runtime, in questo caso un platform:: String ^.  
  
 [!code-cpp[cx_templates#01](../cppcx/codesnippet/CPP/templatedemo/class1.h#01)]  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi (C++/CX)](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio Visual C++](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)