---
title: Riga di comando D9026 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- D9026
dev_langs:
- C++
helpviewer_keywords:
- D9026
ms.assetid: 149fe5e3-5329-4be8-b871-49dfd423aaba
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9127ad1887d476e5460798f806c2db1ff3144de3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-line-warning-d9026"></a>Avviso della riga di comando D9026
opzioni si applicano all'intera riga di comando  
  
 È stata specificata un'opzione su un comando, dopo che è stato specificato un nome di file. L'opzione è stata applicata al file precedesse.  
  
 Ad esempio, nel comando  
  
```  
CL verdi.c /G5 puccini.c  
```  
  
 il file verdi. c verrà compilato utilizzando l'opzione /G5, non il valore predefinito /G4.  
  
 Questo comportamento è diverso da quello delle versioni precedenti, applicate solo le opzioni specificate prima il nome del file risultante in verdi. c in fase di compilazione utilizzando/G4, venivano in fase di compilazione utilizzando /G5.