---
title: Utilizzando un File di esportazione e la libreria di importazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- circular exports
- import libraries, using
- export files
ms.assetid: 2634256a-8aa5-4495-8c9e-6cde10e4ed76
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 37d77fdc4df7d2e7239b8bba652d8cf8f4bbc997
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-an-import-library-and-export-file"></a>Utilizzo di una libreria di importazione e di un file di esportazione
Quando un programma (un file eseguibile o una DLL) consente di esportare in un altro programma che importa anche da, o se più di due programmi esportare e importare tra loro, i comandi per il collegamento di tali programmi devono soddisfare esportazioni circolari.  
  
 In assenza di esportazioni circolari, quando un programma che utilizza il collegamento viene esportato da un altro programma, è necessario specificare la libreria di importazione per il programma di esportazione. La libreria di importazione per il programma di esportazione viene creata quando si collega il programma di esportazione. Pertanto, è necessario collegare il programma di esportazione prima del programma di importazione. Ad esempio, se l'importazione di DLL da DLL, è necessario collegare uno. dll e ottenere la libreria di importazione lib. Specificare quindi lib durante il collegamento di DLL. Quando il linker crea una DLL, crea anche la libreria di importazione, lib. Utilizzare LIB, durante il collegamento di programmi per l'importazione da una DLL.  
  
 Tuttavia, in una situazione di esportazione circolare, non è possibile collegare tutti i programmi interdipendenti utilizzando le librerie di importazione da altri programmi. Nell'esempio illustrato in precedenza, se la DLL esporta anche per DLL, la libreria di importazione DLL non sarà ancora quando DLL è collegata. Quando sono presenti esportazioni circolari, è necessario utilizzare LIB per creare una libreria di importazione ed esportazione di file per uno dei programmi.  
  
 Per iniziare, scegliere uno dei programmi in cui eseguire LIB. Comando LIB, elencare tutti gli oggetti e librerie per il programma e specificare l'opzione /DEF. Se il programma utilizza un file. def o specifiche /EXPORT, specificare anche tali informazioni.  
  
 Dopo aver creato la libreria di importazione (lib) e il file di esportazione (EXP) per il programma, utilizzare la libreria di importazione durante il collegamento di altro programma o programmi. VERRÀ creata una libreria di importazione per ogni programma di esportazione compilato. Ad esempio, se si esegue LIB sugli oggetti e le esportazioni di DLL, è creare lib ed EXP. È ora possibile utilizzare LIB, durante il collegamento dll; Questo passaggio viene creata anche la libreria di importazione lib.  
  
 Infine, collegare il programma che con cui è stato avviato. Nel comando LINK, specificare gli oggetti e librerie per il programma, il file EXP LIB creato per il programma e la libreria di importazione o librerie per le esportazioni utilizzate dal programma. Per continuare l'esempio, il comando di collegamento per la DLL contiene EXP e LIB, nonché gli oggetti e librerie che entra in uno. dll. Non si specifica il file con estensione def o specifiche /EXPORT nel comando di collegamento. Queste informazioni non sono necessarie perché le definizioni di esportazione contenute nel file EXP. Quando si collegano mediante un file EXP, collegamento non crea una libreria di importazione, perché si presuppone che ne è stato creato quando è stato creato il file EXP.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md)