---
title: Strumenti del linker LNK2039 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2039
dev_langs:
- C++
helpviewer_keywords:
- LNK2039
ms.assetid: eaa296bd-4901-41f6-8410-6d03ee827144
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 954ea12eb9b49c2bdf59b31a1ec2ec2e66c124ef
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk2039"></a>Errore degli strumenti del linker LNK2039
l'importazione della classe ref\<tipo >' definita in another.obj; deve essere la importati o definito, ma non entrambi  
  
 La classe di riferimento ' <`type`>' viene importato nel file obj specificato, ma è anche definito in un altro file con estensione obj. Questa condizione può provocare un errore di runtime o altri comportamenti imprevisti.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Controllare se '`type`' deve essere definito in un altro file con estensione obj e controllare se deve essere incluso dal file con estensione winmd.  
  
2.  Rimuovere la definizione o l'importazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Errori e avvisi degli strumenti del linker](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)   
 [Errore degli strumenti del linker LNK1332](../../error-messages/tool-errors/linker-tools-error-lnk1332.md)