---
title: Strumenti del linker LNK1179 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1179
dev_langs:
- C++
helpviewer_keywords:
- LNK1179
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 72a531397c3c101fbff937f293f772c5f6778523
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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