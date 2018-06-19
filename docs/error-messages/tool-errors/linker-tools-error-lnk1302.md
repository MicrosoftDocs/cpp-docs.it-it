---
title: Strumenti del linker LNK1302 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1302
dev_langs:
- C++
helpviewer_keywords:
- LNK1302
ms.assetid: aea3c753-c2c4-4249-bbc3-f2d4f0164b5e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6aa84a411f91303c84acb44e2e6c0ab3d975e19f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299419"
---
# <a name="linker-tools-error-lnk1302"></a>Errore degli strumenti del linker LNK1302
supportato solo il collegamento di .netmodule sicuri; impossibile collegare .netmodule  
  
 Un file netmodule (compilato con **/LN**) è stato passato al linker nel tentativo di chiamare il collegamento MSIL di un utente.  Un modulo C++ è valido per il collegamento MSIL se viene compilato con **/CLR: safe**.  
  
 Per correggere l'errore, eseguire la compilazione con **/CLR: safe** per attivare il collegamento MSIL oppure passare il **/clr** o **/clr: pure** file con estensione obj al linker anziché il modulo.  
  
 Per altre informazioni, vedere  
  
-   [/LN (crea modulo MSIL)](../../build/reference/ln-create-msil-module.md)  
  
-   [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)