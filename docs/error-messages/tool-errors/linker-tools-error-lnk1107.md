---
title: "Errore degli strumenti del linker LNK1107 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1107"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1107"
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1107
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file danneggiato o non valido: impossibile leggere in percorso  
  
 Non è stato possibile leggere il file.  Ricrearlo.  
  
 L'errore LNK1107 può inoltre verificarsi se si tenta di passare un modulo \(.dll o con estensione .netmodule creato con [\/clr:noAssembly](../../build/reference/clr-common-language-runtime-compilation.md) o  [\/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)\) al linker; passare invece il file .obj.  
  
 Se si compila il seguente codice di esempio:  
  
```  
// LNK1107.cpp  
// compile with: /clr /LD  
public ref class MyClass {  
public:  
   void Test(){}  
};  
```  
  
 e si specifica quindi **link LNK1107.dll** nella riga di comando, verrà restituito l'errore LNK1107.  Per risolvere il problema, specificare **link LNK1107.obj**.