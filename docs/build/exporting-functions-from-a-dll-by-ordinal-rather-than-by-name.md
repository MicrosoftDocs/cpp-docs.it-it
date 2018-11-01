---
title: Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome
ms.date: 11/04/2016
f1_keywords:
- NONAME
helpviewer_keywords:
- exporting functions [C++], ordinal values
- ordinal exports [C++]
- exporting DLLs [C++], ordinal values
- NONAME attribute
ms.assetid: 679719fd-d965-4df3-9f7a-7d86ad831702
ms.openlocfilehash: 6a5ac13fdc85b3cb1626aefa28b92866a8c856c1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50503416"
---
# <a name="exporting-functions-from-a-dll-by-ordinal-rather-than-by-name"></a>Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome

Il modo più semplice per esportare funzioni da DLL viene per esportarli in base al nome. Questo è ciò che accade quando si usa **dllexport**, ad esempio. Ma è invece possibile esportare le funzioni per ordinale. Con questa tecnica, è necessario usare un file con estensione def al posto di **dllexport**. Per specificare un valore ordinale di funzione, aggiungere il relativo ordinale per il nome della funzione nel file def. Per informazioni su come specificare gli ordinali, vedere [esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md).

> [!TIP]
>  Se si desidera ottimizzare le dimensioni del file della DLL, usare il **NONAME** attributo su ogni funzione esportata. Con il **NONAME** attributo, in cui vengono memorizzati gli ordinali della DLL Esporta tabella anziché i nomi delle funzioni. Può trattarsi di un considerevole risparmio se si siano esportando molte funzioni.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Usare un file con estensione def per esportare per ordinale](../build/exporting-from-a-dll-using-def-files.md)

- [Usare dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](../build/exporting-from-a-dll.md)