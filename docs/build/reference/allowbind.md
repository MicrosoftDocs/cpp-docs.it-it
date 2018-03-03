---
title: -ALLOWBIND | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /allowbind
dev_langs:
- C++
helpviewer_keywords:
- ALLOWBIND editbin option
- /ALLOWBIND editbin option
- -ALLOWBIND editbin option
ms.assetid: eaadbb8c-4339-4281-9a75-3a1ce2352ff8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a4cbd5c619b0a9e146adb9a8ec9117f59e01b89d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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