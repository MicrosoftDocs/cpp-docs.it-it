---
title: Sequenze di caratteri | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 67ddf6a6712e0c98ea7b7866b3267d56308a5b5c
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="character-sequences"></a>Sequenze di caratteri
**ANSI 3.8.2** Mapping delle sequenze di caratteri dei file di origine  
  
 Le istruzioni del preprocessore utilizzano lo stesso set di caratteri delle istruzioni del file di origine, con l'eccezione che le sequenze di escape non sono supportate.  
  
 Di conseguenza, per specificare un percorso di un file di inclusione, utilizzare solo una barra rovesciata:  
  
```  
#include "path1\path2\myfile"  
```  
  
 Nel codice sorgente sono necessarie due barre rovesciate:  
  
```  
fil = fopen( "path1\\path2\\myfile", "rt" );  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)
