---
title: Valori letterali stringa in espressioni primarie | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- string literals, in primary expressions
ms.assetid: 3ec31278-527b-40d2-8c83-6b09e2d81ca6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0920280f672b1c45d317ade4c592a6b93356fb8f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="string-literals-in-primary-expressions"></a>Valori letterali stringa in espressioni primarie
Un "valore letterale stringa" è un carattere, un carattere di tipo wide o una sequenza di caratteri adiacenti racchiusi tra virgolette doppie. Poiché non sono variabili, né i valori letterali stringa né i relativi elementi possono essere l'operando di sinistra in un'operazione di assegnazione. Il tipo di valore letterale stringa è una matrice di `char` (o una matrice di `wchar_t` per i valori letterali di tipo wide-string). Le matrici nelle espressioni vengono convertite in puntatori. Per altre informazioni sulle stringhe, vedere [Valori letterali stringa](../c-language/c-string-literals.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni primarie C](../c-language/c-primary-expressions.md)