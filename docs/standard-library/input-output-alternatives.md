---
title: Alternative di input/output | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- I/O [C++], alternatives
ms.assetid: 9f8401c7-d90d-4285-8918-63573df74a80
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 45cec9f7c4c45ef12c7d22a7c3c311f7ce3f4cb5
ms.lasthandoff: 02/24/2017

---
# <a name="inputoutput-alternatives"></a>Alternative di input/output
Visual C++ offre diverse alternative per la programmazione I/O:  
  
-   I/O senza buffer diretto della libreria di runtime C  
  
-   I/O di flusso della libreria di runtime C ANSI  
  
-   I/O diretto su console e porta  
  
-   Libreria Microsoft Foundation Class (MFC)  
  
-   Libreria standard Microsoft C++  
  
 Le classi iostream sono utili per l'I/O del testo formattato nel buffer. Sono utili anche per l'I/O senza buffer o binario se si ha necessità di un'interfaccia di programmazione C++ e si decide di non usare la libreria Microsoft Foundation Class (MFC). Le classi iostream rappresentano un I/O orientato agli oggetti alternativo alle funzioni di runtime C.  
  
 È possibile usare le classi iostream con il sistema operativo Microsoft Windows. I flussi di stringhe e file funzionano senza limitazioni, ma gli oggetti di flusso in modalità carattere `cin`, `cout`, `cerr` e `clog` non sono coerenti con l'interfaccia utente grafica di Windows. È anche possibile derivare classi di flusso personalizzate in grado di interagire direttamente con l'ambiente Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di flusso](../standard-library/what-a-stream-is.md)


