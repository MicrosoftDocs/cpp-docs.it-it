---
title: -ALLOWBIND | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /allowbind
dev_langs:
- C++
helpviewer_keywords:
- ALLOWBIND editbin option
- /ALLOWBIND editbin option
- -ALLOWBIND editbin option
ms.assetid: eaadbb8c-4339-4281-9a75-3a1ce2352ff8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: af4a9f3d898d0087f0e8e861ccfe72e4adadb1de
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368915"
---
# <a name="allowbind"></a>/ALLOWBIND
Specifica se una DLL può essere associata.  
  
```  
  
/ALLOWBIND[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Il **/ALLOWBIND** opzione imposta un bit nell'intestazione della DLL che indica a Bind.exe che l'immagine può essere associato. Associazione può consentire a un'immagine di caricamento più rapido quando il caricatore non dispone di riassegnare ed eseguire correzione dell'indirizzo per ogni DLL a cui viene fatto riferimento. Non è una DLL deve essere associata se è stato firmato digitalmente: associazione invalida la firma. Associazione non ha alcun effetto se ASLR address space layout randomization () è abilitata per l'immagine utilizzando **/DYNAMICBASE** nelle versioni di Windows che supporta ASLR.  
  
 Utilizzare **/ALLOWBIND: No** per impedire l'associazione di DLL Bind.exe.  
  
 Per ulteriori informazioni, vedere il [/ALLOWBIND](../../build/reference/allowbind-prevent-dll-binding.md) l'opzione del linker.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)