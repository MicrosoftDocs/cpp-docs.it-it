---
title: Compilatore (livello 4) avviso C4001 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4001
dev_langs:
- C++
helpviewer_keywords:
- C4001
ms.assetid: 414a47fe-d597-425e-9374-6a569231dc0a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc728fa5c66fb4b42c8fe4a785f36048ffbaed4e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33292659"
---
# <a name="compiler-warning-level-4-c4001"></a>Compilatore (livello 4) avviso C4001
utilizzata estensione non standard 'commento a riga singola' è stata utilizzata  

> [!NOTE] 
> Questo avviso è stata rimossa in Visual Studio 2017 versione 15,5 perché commenti a riga singola sono standard C99.
  
 Commenti a riga singola sono standard in C++ e C a partire da C99 standard. In compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), i file di C che contengono commenti a riga singola, generano l'avviso C4001 a causa dell'utilizzo di un'estensione non standard. Poiché i commenti a riga singola sono standard in C++, file di C contenenti commenti a riga singola non producono C4001 durante la compilazione con estensioni Microsoft (/Ze).  
  
## <a name="example"></a>Esempio  
 Per disabilitare l'avviso, rimuovere il commento [#pragma warning(disable:4001)](../../preprocessor/warning.md).  
  
```  
// C4001.cpp  
// compile with: /W4 /Za /TC  
// #pragma warning(disable:4001)  
int main()  
{  
   // single-line comment in main  
   // C4001  
}  
```