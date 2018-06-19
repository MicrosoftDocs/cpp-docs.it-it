---
title: Strumenti del linker LNK1107 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1107
dev_langs:
- C++
helpviewer_keywords:
- LNK1107
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fee2105cb0c12287cd2b47636f0e47011854a608
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33298350"
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