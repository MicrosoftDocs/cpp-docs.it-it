---
title: App di Windows Store, Windows Runtime e CRT (C Run-Time) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
caps.latest.revision: 9
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
ms.translationtype: Human Translation
ms.sourcegitcommit: 0eb057f9d229c659f339f996d1ff38f65fd2e018
ms.openlocfilehash: fc0ed4b45e04357fae46fb1391d55d184440f12d
ms.contentlocale: it-it
ms.lasthandoff: 06/01/2017

---
# <a name="windows-store-apps-the-windows-runtime-and-the-c-run-time"></a>Applicazioni Windows Store, Windows Runtime e C Run-Time
Le app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] sono programmi eseguiti con Windows Runtime in [!INCLUDE[win8](../build/reference/includes/win8_md.md)].  Windows Runtime è un ambiente attendibile che controlla le funzioni, le variabili e le risorse disponibili per un'app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)]. Tuttavia, per motivi legati alla progettazione, le restrizioni di Windows Runtime impediscono l'uso della maggior parte delle funzionalità della libreria C Run-Time (CRT) nelle app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)].  
  
 Windows Runtime non supporta le funzionalità CRT seguenti:  
  
-   La maggior parte delle funzioni CRT sono correlate a funzionalità non supportate.  
  
     Ad esempio, un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] non può creare un processo usando le famiglie di routine `exec` e `spawn`.  
  
     Quando una funzione CRT non è supportata in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], questo fatto è indicato nel relativo articolo di riferimento.  
  
-   La maggior parte delle funzioni di caratteri multibyte e di stringa.  
  
     Tuttavia, sia il testo ANSI che Unicode sono supportati.  
  
-   Applicazioni console e argomenti della riga di comando.  
  
     Tuttavia, le applicazioni desktop tradizionali supportano ancora la console e gli argomenti della riga di comando.  
  
-   Variabili di ambiente.  
  
-   Il concetto di una cartella di lavoro corrente.  
  
-   App e DLL di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] staticamente collegate a CRT compilate usando le opzioni del compilatore [/MT](../build/reference/md-mt-ld-use-run-time-library.md) o `/MTd`.  
  
     Ovvero un'applicazione che usa una versione statica con multithreading di CRT.  
  
-   App compilate usando l'opzione del compilatore [/MDd](../build/reference/md-mt-ld-use-run-time-library.md).  
  
     Ovvero, una versione di debug con multithreading specifica per DLL di CRT. Tale applicazione non è supportata sul [!INCLUDE[win8_appstore_long](../build/reference/includes/win8_appstore_long_md.md)].  
  
 Per un elenco completo delle funzioni CRT non disponibili in un'app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] e per suggerimenti su funzioni alternative, vedere [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx) (Funzioni CRT non supportate con /ZW).  
  
## <a name="see-also"></a>Vedere anche  
 [Compatibilità](../c-runtime-library/compatibility.md)   
 [Funzioni CRT non supportate da Windows Runtime](../c-runtime-library/windows-runtime-unsupported-crt-functions.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
