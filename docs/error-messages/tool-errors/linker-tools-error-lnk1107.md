---
title: Strumenti del linker LNK1107 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1107
dev_langs: C++
helpviewer_keywords: LNK1107
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fae412de31163aa1b5248af43227042cd04563ba
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1107"></a>Errore degli strumenti del linker LNK1107
file danneggiato o non valido: Impossibile leggere in posizione  
  
 Lo strumento non è in grado di leggere il file. Ricreare il file.  
  
 Errore LNK1107 può verificarsi anche se si tenta di passare un modulo (estensione dll o. netmodule creata con [/CLR: noAssembly](../../build/reference/clr-common-language-runtime-compilation.md) o [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)) per il linker; invece passare il file con estensione obj.  
  
 Se si compila l'esempio seguente:  
  
```  
// LNK1107.cpp  
// compile with: /clr /LD  
public ref class MyClass {  
public:  
   void Test(){}  
};  
```  
  
 e quindi specificare **collegamento LNK1107. dll** nella riga di comando, verrà visualizzato l'errore LNK1107.  Per risolvere l'errore, specificare **collegamento LNK1107** invece.