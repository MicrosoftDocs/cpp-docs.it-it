---
title: Collegamenti in nomi con ambito blocco | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- scope [C++], linkage rules
- linkage [C++], scope linkage rules
- names [C++], scope linkage rules
- block scope [C++]
- external linkage, scope linkage rules
ms.assetid: 73efa91a-f761-47f7-bbd9-9f9e3508e218
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0549538ba2af256d3a98b83dcb691327e387de9c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="linkage-in-names-with-block-scope"></a>Collegamenti in nomi con ambito del blocco
Le seguenti regole di collegamento vengono applicate ai nomi con ambito del blocco (nomi locali):  
  
-   I nomi dichiarati come `extern` hanno un collegamento esterno a meno che non sono state dichiarate in precedenza come **statico**.  
  
-   Tutti gli altri nomi con ambito del blocco non dispongono di collegamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)