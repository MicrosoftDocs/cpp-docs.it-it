---
title: Compilatore avviso (livello 3) C4638 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4638
dev_langs: C++
helpviewer_keywords: C4638
ms.assetid: 2c07923a-e103-4e40-bd11-fdfed428a5ec
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b141f0103fc9a7318c4616459e998740bedbe482
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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