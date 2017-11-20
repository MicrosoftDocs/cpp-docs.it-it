---
title: Requisiti per gli elementi contenitore STL/CLR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
helpviewer_keywords:
- C++ Standard Library, template class containers
- STL/CLR, containers
- containers, STL/CLR
- containers, C++ Standard Library
ms.assetid: 59ab240c-15bf-4701-a9f9-e7c56e5ab53f
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f12bc8c3a6e2ecaa544ab5bbe875cc2ae358ef3a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="requirements-for-stlclr-container-elements"></a>Requisiti degli elementi del contenitore STL/CLR
Come minimo, tutti i tipi di riferimento che vengono inseriti nei contenitori STL/CLR devono presentare gli elementi seguenti:  
  
-   Un costruttore di copia pubblico.  
  
-   Un operatore di assegnazione pubblico.  
  
-   Un distruttore pubblico.  
  
 Inoltre, i contenitori associativi, ad esempio [impostare](../dotnet/set-stl-clr.md) e [mappa](../dotnet/map-stl-clr.md) deve avere un operatore di confronto pubblico definito, ovvero `operator<` per impostazione predefinita. Alcune operazioni sui contenitori potrebbero anche richiedere un costruttore predefinito pubblico e sia definito un operatore di equivalenza pubblico.  
  
 Ad esempio i tipi di riferimento, tipi di valore e gli handle per fare riferimento a tipi che devono essere inseriti in un contenitore associativo devono avere un operatore di confronto, ad esempio `operator<` definito. I requisiti per un costruttore di copia pubblico, l'operatore di assegnazione pubblico e un distruttore pubblico non esistono per i tipi di valore o handle ai tipi di riferimento.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)