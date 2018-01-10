---
title: Convenzioni di denominazione libreria | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- NAFXCW.LIB [MFC]
- libraries [MFC], static
- coding conventions [MFC], MFC library names
- NAFXCWD.LIB [MFC]
- console applications [MFC], MFC library versions
- naming conventions [MFC], MFC object code libraries
- object code libraries, MFC naming conventions
- object code libraries
- conventions [MFC], MFC library names
- MFC libraries, naming conventions
ms.assetid: 39fe7d93-5a14-4c6a-b16c-bf318fa01278
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 14e217b3cfd9f3618046cf1a0ca825eb2e6492f2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="library-naming-conventions"></a>Convenzioni di denominazione delle librerie
Le librerie di codice oggetto per MFC utilizzano le seguenti convenzioni di denominazione. I nomi delle librerie si presentano come  
  
 *u*AFX*c*W*d*. LIB  
  
 dove le lettere mostrate in minuscolo corsivo sono dei segnaposti per gli identificatori i cui significati sono mostrati nella tabella seguente:  
  
### <a name="library-naming-conventions"></a>Convenzioni di denominazione delle librerie  
  
|Identificatore|Valori e significati|  
|---------------|-------------------------|  
|*u*|ANSI (N) o Unicode (U)|  
|*c*|Tipo di programma da creare: C=tutti|  
|*d*|Debug o Release: D=Debug; omettere l'identificatore per le versioni di rilascio|  
  
 L'impostazione predefinita è quella di compilare un'applicazione Windows ANSI di debug per piattaforma Intel: NAFXCWD.Lib. Tutte le librerie elencate nella tabella seguente sono incluse precompilate nella directory \atlmfc\lib del.  
  
### <a name="static-link-library-naming-conventions"></a>Convenzioni di denominazione delle librerie a collegamento statico  
  
|Libreria|Descrizione|  
|-------------|-----------------|  
|NAFXCW.LIB|Libreria a collegamento statico MFC, versione di rilascio|  
|NAFXCWD.LIB|Libreria a collegamento statico MFC, versione di debug|  
|UAFXCW. LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di rilascio|  
|UAFXCWD. LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di debug|  
  
> [!NOTE]
>  Se è necessario compilare una versione della libreria, vedere il file di Readme.Txt nella directory \atlmfc\src\mfc. Questo file descrive l'utilizzo del makefile fornito con NMAKE.  
  
 Per ulteriori informazioni, vedere [convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md) e [versioni Unicode delle librerie MFC](../mfc/unicode-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Versioni di librerie MFC](../mfc/mfc-library-versions.md)

