---
title: Errore del compilatore C3552 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3552
dev_langs: C++
helpviewer_keywords: C3552
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ca49c6678a147988ee0b2fb0ab57b6883b80539a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3552"></a>Errore del compilatore C3552
'typename': un tipo restituito specificato in ritardo non può contenere 'auto'  
  
 Se si usa la parola chiave `auto` come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Tuttavia, non è possibile usare un'altra parola chiave `auto` per specificare il tipo restituito specificato in ritardo. Ad esempio, il frammento di codice seguente genera l'errore C3552.  
  
 `auto myFunction->auto; // C3552`