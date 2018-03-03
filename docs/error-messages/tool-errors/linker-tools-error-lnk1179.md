---
title: Strumenti del linker LNK1179 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1179
dev_langs:
- C++
helpviewer_keywords:
- LNK1179
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 93b042e928331e369d64a45aa27f5f613ce9fc31
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1179"></a>Errore degli strumenti del linker LNK1179
file danneggiato o non valido: 'nomefile' COMDAT duplicati  
  
 Un modulo di oggetto contiene due o più COMDAT con lo stesso nome.  
  
 Questo errore può essere causato dall'utilizzo [/H](../../build/reference/h-restrict-length-of-external-names.md), che limita la lunghezza dei nomi esterni, e [/Gy](../../build/reference/gy-enable-function-level-linking.md), in cui sono funzioni in COMDAT.  
  
## <a name="example"></a>Esempio  
 Nel codice seguente, `function1` e `function2` sono identiche nei primi otto caratteri. La compilazione con **/Gy** e **/H8** genera un errore di collegamento.  
  
```  
void function1(void);  
void function2(void);  
  
int main() {  
    function1();  
    function2();  
}  
  
void function1(void) {}  
void function2(void) {}  
```