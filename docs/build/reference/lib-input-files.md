---
title: File di Input LIB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: Lib
dev_langs: C++
helpviewer_keywords: input files, LIB
ms.assetid: e1236f0d-cd90-446b-b900-f311f456085c
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5fea7a8700eb2f5a5deee7afd05af8b0de0e4e71
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="lib-input-files"></a>File di input LIB
I file di input previsti da LIB dipendono dalla modalità in cui è utilizzato, come illustrato nella tabella seguente.  
  
|Modalità|Input|  
|----------|-----------|  
|Predefinito (creazione o modifica di una libreria)|COFF (file oggetto (obj)), le librerie COFF (lib), file oggetto (obj) a 32 bit oggetto modello formato OMF)|  
|L'estrazione di un membro con l'opzione /EXTRACT|Libreria COFF (lib)|  
|File di compilazione di un'esportazione e importazione libreria con l'opzione /DEF|File di definizione moduli (def), file oggetto (obj) COFF, librerie COFF (lib), file oggetto (obj) OMF a 32 bit|  
  
> [!NOTE]
>  OMF (librerie) create con la versione a 16 bit non possono essere utilizzate come input per la versione a 32 bit di LIB.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica di LIB](../../build/reference/overview-of-lib.md)