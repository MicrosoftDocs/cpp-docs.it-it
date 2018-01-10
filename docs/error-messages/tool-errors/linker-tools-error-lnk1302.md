---
title: Strumenti del linker LNK1302 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1302
dev_langs: C++
helpviewer_keywords: LNK1302
ms.assetid: aea3c753-c2c4-4249-bbc3-f2d4f0164b5e
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2a5b9201608d6d457288c7ade9376147da08bcb9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1302"></a>Errore degli strumenti del linker LNK1302
supportato solo il collegamento di .netmodule sicuri; impossibile collegare .netmodule  
  
 Un file netmodule (compilato con **/LN**) è stato passato al linker nel tentativo di chiamare il collegamento MSIL di un utente.  Un modulo C++ è valido per il collegamento MSIL se viene compilato con **/CLR: safe**.  
  
 Per correggere l'errore, eseguire la compilazione con **/CLR: safe** per attivare il collegamento MSIL oppure passare il **/clr** o **/clr: pure** file con estensione obj al linker anziché il modulo.  
  
 Per altre informazioni, vedere  
  
-   [/LN (Crea modulo MSIL)](../../build/reference/ln-create-msil-module.md)  
  
-   [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)