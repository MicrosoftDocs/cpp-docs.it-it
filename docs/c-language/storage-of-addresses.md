---
title: Archiviazione di indirizzi | Microsoft Docs
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
- storage [C++], addresses
- addresses [C++], storage of
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 3d0e996ac191ba3091925a85937e7636a2425215
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="storage-of-addresses"></a>Archiviazione di indirizzi
La quantità di memoria richiesta per un indirizzo e il significato dell'indirizzo dipendono dall'implementazione del compilatore. Non è garantito che i puntatori ai diversi tipi abbiano la stessa lunghezza. Di conseguenza, **sizeof(char \*)** non è necessariamente uguale a **sizeof(int\*)**.  
  
 **Sezione specifica Microsoft**  
  
 Per il compilatore C Microsoft, **sizeof(char \*)** è uguale a **sizeof(int\*)**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di puntatori](../c-language/pointer-declarations.md)
