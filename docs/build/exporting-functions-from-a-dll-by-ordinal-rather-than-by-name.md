---
title: "Esportazione di funzioni da una DLL in base al numero ordinale anziché dal nome | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: NONAME
dev_langs: C++
helpviewer_keywords:
- exporting functions [C++], ordinal values
- ordinal exports [C++]
- exporting DLLs [C++], ordinal values
- NONAME attribute
ms.assetid: 679719fd-d965-4df3-9f7a-7d86ad831702
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 17b49cc54336f596d6815a2ebe53e60ed2dd51e8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exporting-functions-from-a-dll-by-ordinal-rather-than-by-name"></a>Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome
Il modo più semplice per esportare le funzioni dalla DLL di è esportarli in base al nome. Questo è ciò che accade quando si utilizza **dllexport**, ad esempio. Ma è invece possibile esportare funzioni per ordinale. Con questa tecnica, è necessario utilizzare un file con estensione def anziché **dllexport**. Per specificare un valore ordinale di funzione, aggiungere il nome della funzione nel file con estensione def al relativo ordinale. Per informazioni sulla specifica degli ordinali, vedere [esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md).  
  
> [!TIP]
>  Se si desidera ottimizzare le dimensioni del file DLL, utilizzare il **NONAME** attributo su ciascuna funzione esportata. Con il **NONAME** attributo, in cui vengono memorizzati gli ordinali la DLL Esporta tabella anziché i nomi di funzione. Se si siano esportando molte funzioni può essere vantaggioso.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Utilizzare un file. def per esportare mediante valori ordinali](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Utilizzare dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)