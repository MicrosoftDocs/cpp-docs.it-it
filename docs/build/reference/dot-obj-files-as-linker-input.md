---
title: . File obj come Input del Linker | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- linker [C++], OBJ files as input
- object files, linker output
- OMF object files
- LINK tool [C++], .obj files
- COFF files
- OBJ files as linker input
- .obj files as linker input
ms.assetid: 3028e423-8b10-4972-8eb4-6e9ae58f0a26
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: ca8346f9ff29d097450eda4d8bfbfee7f7a3f522
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="obj-files-as-linker-input"></a>File obj come input del linker
Lo strumento linker (LINK. Con estensione EXE) accetta i file con estensione obj in comune oggetto formato COFF (File).  
  
## <a name="remarks"></a>Note  
 Microsoft fornisce un documento scaricabile che definisce il formato di file oggetto comune. Per ulteriori informazioni, scaricare la revisione 8.1 o versioni successiva del componente di [eseguibile di Microsoft e Common Object File Format Specification](http://go.microsoft.com/fwlink/?LinkId=93292).  
  
## <a name="unicode-support"></a>Supporto per Unicode  
 A partire da Visual Studio 2005, il compilatore Microsoft Visual C++ supporta i caratteri Unicode negli identificatori come definito da ISO/IEC C e standard di C++. Le versioni precedenti del compilatore supportano solo caratteri ASCII negli identificatori. Per supportare Unicode nei nomi delle funzioni e classi statiche, il compilatore e il linker utilizza la codifica Unicode UTF-8 per i simboli COFF nei file obj. La codifica UTF-8 è compatibile anche con la codifica ASCII utilizzati dalle versioni precedenti di Visual Studio.  
  
 Per ulteriori informazioni sul compilatore e del linker, vedere [supporto Unicode nel compilatore e del Linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md). Per ulteriori informazioni sullo standard Unicode, vedere il [Unicode](http://go.microsoft.com/fwlink/?LinkId=37123) dell'organizzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [File di Input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Supporto per Unicode](../../text/support-for-unicode.md)   
 [Supporto Unicode nel compilatore e del Linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md)   
 [Standard Unicode](http://go.microsoft.com/fwlink/?LinkId=37123)   
 [Common Object File Format Specification](http://go.microsoft.com/fwlink/?LinkId=93292)