---
title: Compilatore avviso (livello 2) C4099 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4099
dev_langs: C++
helpviewer_keywords: C4099
ms.assetid: 00bb803d-cae7-4ab8-8969-b46f54139ac8
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1eb64e859ef40397edeb872cc7f6f228f7ae89e8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-2-c4099"></a>Avviso del compilatore (livello 2) C4099
'identifier': il nome del tipo utilizzando 'tipooggetto1' ora utilizzando 'objecttype2'  
  
 Un oggetto dichiarato come una struttura viene definito come una classe o un oggetto dichiarato come una classe è definito come una struttura. Il compilatore utilizza il tipo specificato nella definizione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4099.  
  
```  
// C4099.cpp  
// compile with: /W2 /c  
struct A;  
class A {};   // C4099, use different identifer or use same object type  
```