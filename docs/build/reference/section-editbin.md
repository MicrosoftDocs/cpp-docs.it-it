---
title: -SECTION (EDITBIN) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /section
dev_langs: C++
helpviewer_keywords:
- -SECTION editbin option
- SECTION editbin option
- alignment characters in sections
- /SECTION editbin option
ms.assetid: 4680ab4e-c984-4251-8241-93440cad7615
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: cac5ba6baf821e7e9450ec01e7851edf625b8bd0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="section-editbin"></a>/SECTION (EDITBIN)
```  
/SECTION:name[=newname][,attributes][alignment]  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione consente di modificare gli attributi di una sezione, si esegue l'override gli attributi che sono stati impostati quando il file oggetto per la sezione è stato compilato o collegato.  
  
 Dopo i due punti ( **:** ), specificare il *nome* della sezione. Per modificare il nome della sezione, attenersi alla *nome* con un segno di uguale (=) e un *newname* per la sezione.  
  
 Per impostare o modificare la sezione `attributes`, specificare una virgola (**,**) seguito da uno o più caratteri di attributi. Per negare un attributo, anteporre il carattere con un punto esclamativo (!). I seguenti caratteri specificano gli attributi di memoria:  
  
|Attributo|Impostazione|  
|---------------|-------------|  
|c|codice|  
|g|Scaricabile|  
|e|eseguibile|  
|i|dati inizializzati|  
|k|memoria virtuale memorizzato nella cache|  
|m|rimozione del collegamento|  
|o|informazioni sul collegamento|  
|p|paging della memoria virtuale|  
|r|read|  
|s|condivisi|  
|u|dati non inizializzati|  
|w|scrivere|  
  
 Controllo *allineamento*, specificare il carattere **A** seguiti da uno dei caratteri seguenti per impostare le dimensioni dell'allineamento in byte, come indicato di seguito:  
  
|Carattere|Dimensione in byte di allineamento|  
|---------------|-----------------------------|  
|1|1|  
|2|2|  
|4|4|  
|8|8|  
|p|16|  
|t|32|  
|s|64|  
|x|Nessun allineamento|  
  
 Specificare il `attributes` e *allineamento* caratteri sotto forma di stringa senza spazi. I caratteri non sono tra maiuscole e minuscole.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)