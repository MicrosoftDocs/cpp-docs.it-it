---
title: Errore matematico M6202 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: M6202
dev_langs: C++
helpviewer_keywords: M6202
ms.assetid: 4d17045f-c6dc-4705-9512-e9af12c35fb4
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c23edcdcb48dcec16799224a6babfa09a04a1a95
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="math-error-m6202"></a>Errore matematico M6202
'function': errore Sing  
  
 Un argomento della funzione specificata non è un valore di singolarità per questa funzione. La funzione non è definita per l'argomento.  
  
 L'errore chiama la `_matherr` funzione con il nome della funzione, gli argomenti e il tipo di errore. È possibile riscrivere la `_matherr` funzione per personalizzare la gestione di determinati errori matematica a virgola mobile in fase di esecuzione.