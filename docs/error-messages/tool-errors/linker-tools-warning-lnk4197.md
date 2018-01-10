---
title: Strumenti del linker LNK4197 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4197
dev_langs: C++
helpviewer_keywords: LNK4197
ms.assetid: 8a976fd7-a74b-4c83-ab66-a9e7d7073c4a
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b1fadbf2ba5b18004f0e89142c88a68437842a92
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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