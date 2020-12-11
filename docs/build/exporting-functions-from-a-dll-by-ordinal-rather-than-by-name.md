---
description: 'Altre informazioni su: esportazione di funzioni da una DLL in base al numero ordinale anziché al nome'
title: Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome
ms.date: 11/04/2016
helpviewer_keywords:
- exporting functions [C++], ordinal values
- ordinal exports [C++]
- exporting DLLs [C++], ordinal values
- NONAME attribute
ms.assetid: 679719fd-d965-4df3-9f7a-7d86ad831702
ms.openlocfilehash: 84d200e2c37161d6bef3e64e72130204640088c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156502"
---
# <a name="exporting-functions-from-a-dll-by-ordinal-rather-than-by-name"></a>Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome

Il modo più semplice per esportare le funzioni dalla DLL consiste nell'esportarli in base al nome. Questo è ciò che accade quando si usa **`__declspec(dllexport)`** , ad esempio. È invece possibile esportare le funzioni in base all'ordinale. Con questa tecnica, è necessario usare un file con estensione def anziché **`__declspec(dllexport)`** . Per specificare il valore ordinale di una funzione, aggiungere il relativo ordinale al nome della funzione nel file def. Per informazioni sulla specifica di ordinali, vedere [esportazione da una dll tramite i file def](exporting-from-a-dll-using-def-files.md).

> [!TIP]
> Se si desidera ottimizzare le dimensioni del file della DLL, utilizzare l'attributo **NoName** in ogni funzione esportata. Con l'attributo **NoName** , i numeri ordinali vengono archiviati nella tabella di esportazione della dll anziché nei nomi di funzione. Questo può essere un notevole risparmio se si esportano diverse funzioni.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Usare un file con estensione def per poter esportare in base all'ordinale](exporting-from-a-dll-using-def-files.md)

- [USA __declspec (dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

## <a name="see-also"></a>Vedi anche

[Esportazione da una DLL](exporting-from-a-dll.md)
