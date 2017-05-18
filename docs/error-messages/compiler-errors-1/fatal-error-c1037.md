---
title: Errore irreversibile C1037 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C1037
dev_langs:
- C++
helpviewer_keywords:
- C1037
ms.assetid: 79103bca-ccfb-42e7-aef9-9b90c15b162f
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 892ce10f7d19266ce45d559ce35bc82946887c52
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="fatal-error-c1037"></a>Errore irreversibile C1037
impossibile aprire il file oggetto nomefile  
  
 Il file oggetto specificato da [/Fo](../../build/reference/fo-object-file-name.md) non può essere aperto.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:  
  
1.  Il nome del file non è valido.  
  
2.  La memoria è insufficiente per aprire il file.  
  
3.  Il file è usato da un altro processo.  
  
4.  È presente un file di sola lettura con lo stesso nome.  
  
 In Visual C++ .NET (versione 1300 del compilatore), è presente un bug che richiede di selezionare impostazioni locali dell'utente corrette quando il nome file o il percorso di directory del nome contiene caratteri MBCS (Multibyte Character Set). La selezione delle impostazioni locali del sistema non è sufficiente, perché è necessario che tali impostazioni supportino l'elaborazione dei caratteri MBCS.
