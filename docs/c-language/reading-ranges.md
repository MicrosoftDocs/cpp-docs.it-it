---
title: Lettura di intervalli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a8ebad4bfda77238ad8c861410e2af5453df73af
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32383644"
---
# <a name="reading-ranges"></a>Intervalli di lettura
**ANSI 4.9.6.2** L'interpretazione di un trattino (-) che non sia il primo o l'ultimo carattere in scanlist per la conversione di % [ nella funzione `fscanf`  
  
 Nella riga seguente  
  
```  
fscanf( fileptr, "%[A-Z]", strptr);  
```  
  
 viene letto qualsiasi numero di caratteri, nell'intervallo che va dalla A alla Z, nella stringa alla quale punta `strptr`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)