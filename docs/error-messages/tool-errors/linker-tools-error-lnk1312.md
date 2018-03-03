---
title: Strumenti del linker LNK1312 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1312
dev_langs:
- C++
helpviewer_keywords:
- LNK1312
ms.assetid: 48284abb-d849-43fc-ab53-45aded14fd8a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4d7f7b57512f58402403a50bf57176f975769573
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1312"></a>Errore degli strumenti del linker LNK1312
file danneggiato o non valido: Impossibile importare l'assembly  
  
 Quando si compila un assembly, un file diverso da un modulo o un assembly compilato con **/clr** è stato passato il **/ASSEMBLYMODULE** l'opzione del linker.  Se è stato passato un file oggetto a **/ASSEMBLYMODULE**, passare l'oggetto direttamente al linker, anziché a **/ASSEMBLYMODULE**.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene creato il file con estensione obj.  
  
```  
// LNK1312.cpp  
// compile with: /clr /LD  
public ref class A {  
public:  
   int i;  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK1312.  
  
```  
// LNK1312_b.cpp  
// compile with: /clr /LD /link /assemblymodule:LNK1312.obj  
// LNK1312 error expected  
public ref class M {};  
```