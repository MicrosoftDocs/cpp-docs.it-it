---
title: Archiviazione di indirizzi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- storage [C++], addresses
- addresses [C++], storage of
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6d892aac81efa8c2628c8662558b52cc1eb2e21c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32386511"
---
# <a name="storage-of-addresses"></a>Archiviazione di indirizzi
La quantità di memoria richiesta per un indirizzo e il significato dell'indirizzo dipendono dall'implementazione del compilatore. Non è garantito che i puntatori ai diversi tipi abbiano la stessa lunghezza. Di conseguenza, **sizeof(char \*)** non è necessariamente uguale a **sizeof(int\*)**.  
  
 **Sezione specifica Microsoft**  
  
 Per il compilatore C Microsoft, **sizeof(char \*)** è uguale a **sizeof(int\*)**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di puntatori](../c-language/pointer-declarations.md)