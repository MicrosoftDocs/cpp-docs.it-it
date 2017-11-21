---
title: Importazione ed esportazione di funzioni Inline | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- exporting functions [C++], inline functions
- inline functions [C++], importing
- DLLs [C++], importing
- importing functions [C++]
- DLLs [C++], exporting from
- importing inline functions [C++]
- inline functions [C++], exporting
- functions [C++], importing
- functions [C++], exporting
ms.assetid: 89f488f8-b078-40fe-afd7-80bd7840057b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7753660b38d67b410927ce831b936a998353e622
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="importing-and-exporting-inline-functions"></a>Importazione ed esportazione di funzioni inline
Funzioni importate possono essere definite come inline. L'effetto è simile alla definizione inline una funzione standard. le chiamate alla funzione vengono espanse nel codice inline, analogamente a una macro. Questa funzionalità è particolarmente utile per un metodo di supporto C++ classi in una DLL che può rendere inline alcune delle loro membro funzioni per efficienza.  
  
 Una funzionalità di una funzione inline importata è possibile eseguire il relativo indirizzo in C++. Il compilatore restituisce l'indirizzo della copia di una funzione inline che si trovano nella DLL. Un'altra funzionalità delle funzioni inline importate è che è possibile inizializzare i dati locali statici della funzione importata, a differenza dei dati importati globali.  
  
> [!CAUTION]
>  È necessario prestare attenzione quando si forniscono funzioni inline importate, poiché possono creare conflitti di versione di. Una funzione inline viene espanso in codice dell'applicazione; Pertanto, se è in un secondo momento riscrivere la funzione, non viene aggiornato a meno che non viene ricompilato l'applicazione stessa. (In genere, le funzioni di DLL possono essere aggiornate senza ricompilare le applicazioni che li utilizzano.)  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL](../build/exporting-from-a-dll.md)  
  
-   [Esportazione da una DLL tramite. DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione tramite AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Importazione ed esportazione](../build/importing-and-exporting.md)