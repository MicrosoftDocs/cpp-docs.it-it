---
title: Conversioni di cast di tipo | Microsoft Docs
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
- data type conversion [C++], type-cast conversions
- conversions [C++], type-cast
- type casts
- explicit type conversions
- type casts [C++], about type-cast conversion
- type-cast conversions [C++]
ms.assetid: 57ab5902-f12f-4326-a2f6-6282f1d4025a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f402eb49e86c8d6d3ce6c332172375125f577a2b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="type-cast-conversions"></a>Conversioni di cast di tipo
È possibile utilizzare i cast di tipo per convertire i tipi in modo esplicito.  
  
 **Sintassi**  
  
 *cast-expression*:  
 *espressione unaria*  
  
 **(**  *type-name*  **)**  *cast-expression*  
  
 *type-name*:  
 *specifier-qualifier-list abstract-declarator* opt  
  
 *type-name* è un tipo e *cast-expression* è un valore da convertire in tale tipo. Un'espressione con un cast di tipo non è un l-value. *cast-expression* viene convertito come se fosse stato assegnato a una variabile di tipo *type-name*. Le regole di conversione per le assegnazioni (descritte in [Conversioni di assegnazione](../c-language/assignment-conversions.md)) si applicano anche ai cast di tipo. Nella tabella seguente sono illustrati i tipi per cui è possibile eseguire il cast in qualsiasi tipo specificato.  
  
### <a name="legal-type-casts"></a>Cast di tipo validi  
  
|Tipi di destinazione|Potenziali origini|  
|-----------------------|-----------------------|  
|Tipi integrali|Qualsiasi tipo di Integer o di tipo a virgola mobile o un puntatore a un oggetto|  
|A virgola mobile|Qualsiasi tipo aritmetico|  
|Puntatore a un oggetto o (**void \***)|Qualsiasi tipo Integer (**void \***), un puntatore a un oggetto o un puntatore a funzione|  
|Puntatore a funzione|Qualsiasi tipo di integrale (void *), un puntatore a un oggetto o un puntatore a funzione|  
|Una struttura, un'unione o una matrice|nessuno|  
|Tipo void|Qualsiasi tipo|  
  
 È possibile eseguire il cast di un identificatore al tipo `void`. Tuttavia, se il tipo specificato in un'espressione cast-tipo non è `void`, l'identificatore di cui viene eseguito il cast al tipo non può essere un'espressione `void`. È possibile eseguire il cast di qualsiasi espressione a `void`, ma non è possibile eseguire il cast di un'espressione di tipo `void` in alcun altro tipo. Ad esempio, una funzione con il tipo restituito `void` non può avere il relativo cast restituito a un altro tipo.  
  
 Tenere presente che un'espressione **void \*** è di tipo puntatore a `void`, non di tipo `void`. Se viene eseguito il cast di un oggetto al tipo `void`, l'espressione risultante non può essere assegnata ad alcun elemento. Analogamente, un oggetto cast-tipo non è un l-value valido, pertanto nessuna assegnazione può essere eseguita in tale oggetto.  
  
 **Sezione specifica Microsoft**  
  
 Un cast di tipo può essere un'espressione l-value se la dimensione dell'identificatore non cambia. Per informazioni sulle espressioni l-value, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).  
  
 **Fine sezione specifica Microsoft**  
  
 È possibile convertire un'espressione nel tipo `void` con un cast, ma l'espressione risultante può essere utilizzata solo quando non è obbligatorio un valore. Un puntatore a oggetto convertito nel tipo **void \*** e convertito nuovamente nel tipo originale restituirà il valore originale.  
  
## <a name="see-also"></a>Vedere anche  
 [Conversioni di tipi](../c-language/type-conversions-c.md)