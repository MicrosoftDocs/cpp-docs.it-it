---
title: Errore matematico M6202 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- M6202
dev_langs:
- C++
helpviewer_keywords:
- M6202
ms.assetid: 4d17045f-c6dc-4705-9512-e9af12c35fb4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4596b9782bc1de0e6ccd52bfcd03965415adb353
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33332052"
---
# <a name="math-error-m6202"></a>Errore matematico M6202
'function': errore Sing  
  
 Un argomento della funzione specificata non è un valore di singolarità per questa funzione. La funzione non è definita per l'argomento.  
  
 L'errore chiama la `_matherr` funzione con il nome della funzione, gli argomenti e il tipo di errore. È possibile riscrivere la `_matherr` funzione per personalizzare la gestione di determinati errori matematica a virgola mobile in fase di esecuzione.