---
title: Strumenti del linker LNK4197 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4197
dev_langs:
- C++
helpviewer_keywords:
- LNK4197
ms.assetid: 8a976fd7-a74b-4c83-ab66-a9e7d7073c4a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dfef7f0fe2d9cd50fa6a18ad682c3e4d80df99c8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33300833"
---
# <a name="linker-tools-warning-lnk4197"></a>Avviso degli strumenti del linker LNK4197
esportazione 'nomeesportazione' specificato più volte. utilizzata la prima specifica  
  
 Un'esportazione è stata specificata più e diversi modi. Il linker utilizza la prima specifica e ignora il resto.  
  
 Se si rigenera la libreria di runtime C, è possibile ignorare questo messaggio.  
  
 Se un'esportazione è specificata più volte di esattamente nello stesso modo, il linker non emetterà un avviso.  
  
 Ad esempio, il seguente contenuto di un file con estensione def causerebbe questo avviso:  
  
```  
EXPORTS  
   functioname      NONAME  
   functioname      @10  
```  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Viene specificata la stessa esportazione entrambi nella riga di comando (tramite esportazione:) e nel file. def  
  
2.  La stessa esportazione viene elencata due volte nel file con estensione def con attributi diversi.