---
title: Importazione ed esportazione di funzioni Inline | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b666d450766a5a285f02517d92d5eb4dc3f29c68
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368577"
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
  
-   [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importare un'applicazione che utilizza declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Importazione ed esportazione](../build/importing-and-exporting.md)