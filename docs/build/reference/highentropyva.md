---
title: -HIGHENTROPYVA | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- /HIGHENTROPYVA
dev_langs:
- C++
helpviewer_keywords:
- HIGHENTROPYVA editbin option
- -HIGHENTROPYVA editbin option
- /HIGHENTROPYVA editbin option
ms.assetid: ef4b7c63-440d-40ca-b39d-edefb3217505
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 36ca3ea93f494587663d863b1dc4646750d38e82
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="highentropyva"></a>/HIGHENTROPYVA
Specifica se l'immagine eseguibile supporta un'entropia elevata a 64 bit per ASLR (Address Space Layout Randomization).  
  
```  
  
/HIGHENTROPYVA[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione modifica l'intestazione di un file DLL o EXE, per indicare se ASLR con indirizzamento a 64 bit è supportato. Quando questa opzione è impostata su un eseguibile e su tutti i moduli che da esso dipendono, un sistema operativo che supporta ASLR a 64 bit può riassegnare i segmenti dell'immagine eseguibile in fase di caricamento tramite l'uso di indirizzi causali in uno spazio di indirizzamento virtuale a 64 bit. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.  
  
 Per impostazione predefinita, il linker imposta questa opzione per le immagini eseguibili a 64 bit. Per impostare questa opzione, il [/DYNAMICBASE](../../build/reference/dynamicbase.md) necessario impostare anche l'opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [/DYNAMICBASE](../../build/reference/dynamicbase.md)   
 [Difesa Software ISV di Windows](http://msdn.microsoft.com/library/bb430720.aspx)