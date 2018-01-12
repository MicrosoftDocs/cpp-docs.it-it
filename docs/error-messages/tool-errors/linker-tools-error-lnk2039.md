---
title: Strumenti del linker LNK2039 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK2039
dev_langs: C++
helpviewer_keywords: LNK2039
ms.assetid: eaa296bd-4901-41f6-8410-6d03ee827144
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 441765d85ce65a80102ed94b3f4394ae48c0e29f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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