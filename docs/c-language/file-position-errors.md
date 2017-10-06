---
title: Errori del percorso del file | Microsoft Docs
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
helpviewer_keywords:
- file pointers [C++], file position errors
ms.assetid: d5e59d8b-08c0-4927-a338-0b2d8234ce24
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: f81176b3b92b7ab92954947bb98e3bd14b93a290
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="file-position-errors"></a>Errori del percorso del file
**ANSI 4.9.9.1, 4.9.9.4** Il valore a cui la macro `errno` viene impostata dalla funzione `fgetpos` o `ftell` in caso di errore  
  
 Quando `fgetpos` o `ftell` non riesce, `errno` è impostato sulla costante del manifesto `EINVAL` se il percorso non è valido o EBADF se il numero di file non è corretto. Le costanti sono definite in ERRNO.H.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)
