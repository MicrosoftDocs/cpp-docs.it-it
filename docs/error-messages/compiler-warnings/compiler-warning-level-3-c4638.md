---
title: Compilatore avviso (livello 3) C4638 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4638
dev_langs:
- C++
helpviewer_keywords:
- C4638
ms.assetid: 2c07923a-e103-4e40-bd11-fdfed428a5ec
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9481820e540b70b7ab119fc9418b9c9e32fa3afd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33291229"
---
# <a name="compiler-warning-level-3-c4638"></a>Avviso del compilatore (livello 3) C4638
commento al documento XML di destinazione: riferimento al simbolo sconosciuto 'symbol'  
  
 Il compilatore non è riuscito a risolvere un simbolo (***simbolo***). Il simbolo deve essere valido per la compilazione.  
  
 L'esempio seguente genera l'errore C4638:  
  
```  
// C4638.cpp  
// compile with: /clr /doc /LD /W3  
using namespace System;  
  
/// Text for class MyClass.  
public ref class MyClass {   
public:  
   /// <summary> Text </summary>  
   /// <see cref="aSymbolThatAppearsNowhereInMyProject"/>  
   // Try the following line instead:  
   // /// <see cref="System::Console::WriteLine"/>  
   void MyMethod() {}  
};   // C4638  
```