---
title: -DYNAMICBASE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /dynamicbase
dev_langs:
- C++
helpviewer_keywords:
- -DYNAMICBASE editbin option
- DYNAMICBASE editbin option
- /DYNAMICBASE editbin option
ms.assetid: edb3df90-7b07-42fb-a94a-f5a4c1d325d6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4d7a4cf7aa35d7ad6b41fc6d61f3f27662ae2c8d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="dynamicbase"></a>/DYNAMICBASE
Specifica se un'immagine eseguibile può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR (Address Space Layout Randomization).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
/DYNAMICBASE[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, il linker imposta il **/DYNAMICBASE** opzione.  
  
 Questa opzione modifica l'intestazione di un'immagine eseguibile per indicare se il caricatore può riassegnare in modo casuale l'immagine al momento del caricamento.  
  
 ASLR è supportato in Windows Vista, Windows Server 2008, Windows 7, Windows 8 e Windows Server 2012.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [Difesa Software ISV di Windows](http://msdn.microsoft.com/library/bb430720.aspx)