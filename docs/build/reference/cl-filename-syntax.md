---
title: Sintassi nome file CL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: cl
dev_langs: C++
helpviewer_keywords:
- syntax, compiler filename
- paths, CL compiler filename syntax
- cl.exe compiler, filename syntax
- extensions, specifying to compiler
- file names [C++], CL compiler
- file names [C++]
ms.assetid: 3ca72586-75be-4477-b323-a1be232e80d4
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 95cce7367eac5e4637d148b2c54cd5271f4f3026
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cl-filename-syntax"></a>Sintassi nome file di CL
CL accetta file con nomi che seguono le convenzioni di denominazione FAT, HPFS o NTFS. Tutti i nomi file possono includere un percorso completo o parziale. Un percorso completo include un nome di unità e uno o più nomi di directory. CL accetta nomi di file separati da barre rovesciate (\\) o barre (/). I nomi file che contengono spazi devono essere racchiusi tra virgolette doppie. Un percorso parziale omette il nome dell'unità, che CL considera essere l'unità corrente. Se non si specifica un percorso, il file verrà considerato come presente nella directory attuale.  
  
 L'estensione del nome file determina il modo in cui i file vengono elaborati. I file C e C++, che hanno l'estensione c, cxx o cpp, vengono compilati. Altri file, inclusi i file obj, di libreria (lib) e di definizione moduli (def) vengono passati al linker senza essere elaborati.  
  
## <a name="see-also"></a>Vedere anche  
 [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)