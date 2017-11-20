---
title: Sequenze di caratteri | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c097f213d790a992d12a8c358282a5340fce52c4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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