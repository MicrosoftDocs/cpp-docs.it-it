---
title: Collegamenti in nomi con ambito blocco | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- scope [C++], linkage rules
- linkage [C++], scope linkage rules
- names [C++], scope linkage rules
- block scope [C++]
- external linkage, scope linkage rules
ms.assetid: 73efa91a-f761-47f7-bbd9-9f9e3508e218
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ab7758e962c028c4746836e470ee43eaab510f9e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32418887"
---
# <a name="linkage-in-names-with-block-scope"></a>Collegamenti in nomi con ambito del blocco
Le seguenti regole di collegamento vengono applicate ai nomi con ambito del blocco (nomi locali):  
  
-   I nomi dichiarati come `extern` hanno un collegamento esterno a meno che non sono state dichiarate in precedenza come **statico**.  
  
-   Tutti gli altri nomi con ambito del blocco non dispongono di collegamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)